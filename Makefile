CARGS = gcc -g -Wall -Werror -Wextra -std=c11 -pedantic
GCOVFLAGS = -fprofile-arcs -ftest-coverage

APP_ARCHIVE = Archive_SmartCalc_v1.0

OS = $(shell uname)
ifeq ($(OS), Linux)
	CHECK_FLAGS = -lpthread -lcheck -pthread -lrt -lm -lsubunit
else
	CHECK_FLAGS = -lcheck
endif

ifeq ($(OS),Linux)
	OPEN_CMD = xdg-open
endif
ifeq ($(OS),Darwin)
	OPEN_CMD = open
endif

all: install

calc_backend.a:
	$(CARGS) -c *.c
	ar rcs calc_backend.a *.o
	rm -rf *.o

test: calc_backend.a
	$(CARGS) tests/*.c calc_backend.a $(CHECK_FLAGS) -o unit_test
	./unit_test

gcov_report: calc_backend.a
	$(CARGS) $(GCOVFLAGS) tests/*.c *.c $(CHECK_FLAGS) -o gcov_test
	./gcov_test
	gcov *.c
	gcov testc/*.c
	lcov -t "test" -o test.info -c -d .
	genhtml -o report/ test.info
	rm -rf *.o *.gcno *.gcda
	$(OPEN_CMD) ./report/index.html

install: uninstall
	mkdir ../build;
	cp Calculator_x.pro ../build/Calculator_x.pro
	cd ../build; qmake Calculator_x.pro; make
	
	

uninstall:
	rm -rf ../build

open:
	open ../SmartCalc.app

run: install open

dist:
	rm -rf $(APP_ARCHIVE)/
	mkdir $(APP_ARCHIVE)
	mkdir $(APP_ARCHIVE)/src/
	cp -r ../build/SmartCalc.app $(APP_ARCHIVE)/src/SmartCalc.app
	tar -cvzf $(APP_ARCHIVE).tgz $(APP_ARCHIVE)/
	rm -rf $(APP_ARCHIVE)

dvi:
	$(OPEN_CMD) dvi.txt

clang:
	clang-format -style=Google -n tests/*.c *.c *.h

clang-fix:
	clang-format -style=Google -i tests/*.c *.c *.h

leaks: test
	CK_FORK=no leaks --atExit -- ./unit_test

brew:
	cd ~
	curl -fsSL https://rawgit.com/kube/42homebrew/master/install.sh | zsh

lcov:
ifeq ($(OS),Linux)
	sudo apt install lcov
endif
ifeq ($(OS),Darwin)
	brew install lcov
endif

valgrind: test
	CK_FORK=no valgrind --trace-children=yes --track-fds=yes --track-origins=yes --leak-check=full --show-leak-kinds=all ./unit_test

clean:
	rm -rf ../build*
	rm -rf *.o *.gcno *.gcda *.a *.info report .clang-format *.out *.dSYM *.Identifier *.stash
	rm -rf $(APP_ARCHIVE)/
	rm -f unit_test
	rm -f gcov_test
	rm -f out
	rm -f *.gcov