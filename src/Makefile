CC := gcc
CFLAGS := -Wall -Werror -Wextra -std=c11
TFLAGS := -L./ -lcheck
GCOVFLAGS := -L. --coverage -ls21_math
OS = $(shell uname)
ifeq ($(OS), Linux)
	CHECK_FLAGS = $(shell pkg-config --libs check) # -lcheck -lm -pthread -lrt -lsubunit
else
	CHECK_FLAGS = -lcheck
endif

.PHONY: all clean rebuild check gcov_report test

all: s21_math.a gcov_report

s21_math.a: *.o
	ar cr libs21_math.a *.o
	ranlib libs21_math.a
	cp libs21_math.a s21_math.a

*.o: libs/*.c s21_math.h
	$(CC) $(CFLAGS) -c libs/*.c

test.o: test.c s21_math.h
	$(CC) $(CFLAGS) -c test.c

test: test.o s21_math.a
	$(CC) $(CFLAGS) test.o -L./ -ls21_math $(CHECK_FLAGS) -o $@

# install:
# 	sudo apt-get update
# 	sudo apt-get install -y gcc lcov
# 	sudo apt-get install pkg-config
# 	cd /opt/goinfre/USERNAME
# 	git clone https://github.com/Homebrew/brew homebrew
# 	eval "$(/opt/goinfre/USERNAME/homebrew/bin/brew shellenv)"
# 	brew update --force --quiet
# 	chmod -R go-w "$(brew --prefix)/share/zsh"
# 	brew install lcov
# 	brew install check

gcov_report: test
	$(CC) $(CFLAGS) libs/*.c test.c libs21_math.a $(CHECK_FLAGS) $(GCOVFLAGS) -o $@
	./gcov_report
	lcov -t gcov_report -o rep.info -c -d .
	genhtml -o report rep.info
	open ./report/index.html
	rm -rf *.gcda *.gcno *.info 

check:
	cppcheck --enable=all --suppress=missingIncludeSystem *.c *.h
	clang-format -n *.c *.h
	make test
	CK_FORK=no valgrind --leak-check=full --error-exitcode=1 ./test

clean:
	rm -rf *.o *.gc* *.info *.out *report *.a *.dSYM test

rebuild: clean all
