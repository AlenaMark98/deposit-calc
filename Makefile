all: bin/deposit-calc test1 test2

bin/deposit-calc: build/src/main.o build/src/deposit.o
	gcc build/src/main.o build/src/deposit.o -o bin/deposit-calc

build/src/main.o: src/main.c
	gcc -Wall -Werror -c src/main.c -o build/src/main.o

build/src/deposit.o: src/deposit.c
	gcc -Wall -Werror -c src/deposit.c -o build/src/deposit.o

test1: build/test/main.o build/test/validation_test.o
	gcc build/test/main.o build/test/validation_test.o -o bin/deposit-calc-test

build/test/main.o: test/main.c
	gcc -Wall -Werror -c test/main.c -o build/test/main.o

build/test/validation_test.o: test/validation_test.c
	gcc -Wall -Werror -c test/validation_test.c -o build/test/validation_test.o

test2: build/test/main.o build/test/deposit_test.o build/src/deposit.o
	gcc build/test/main.o build/test/deposit_test.o build/src/deposit.o -o bin/deposit-test

build/test/deposit_test.o: test/deposit_test.c
	gcc -Wall -Werror -c test/deposit_test.c -o build/test/deposit_test.o


clean:
	rm -f build/src/*.o
	rm -f build/test/*.o
	rm -f bin/deposit-calc



