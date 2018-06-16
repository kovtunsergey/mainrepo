CFLAGS = -Wall -std=c99
OBJ = gcc -I thirdparty -I src -c $< -o $@ $(CFLAGS)

.PHONY: clean
all:bin/test.exe

test: bin/test.exe
	$<

bin/test.exe: build/checkw.o  build/index_te.o build/check_border.o build/main_test.o
	gcc -I thirdparty -I src $^ -o $@ $(CFLAGS)


build/checkw.o: src/checkw.c src/checkw.h
	$(OBJ)

build/index_te.o: src/index.c src/index.h
	$(OBJ)

build/check_border.o: src/check_border.c src/check_border.h
	$(OBJ)

build/main_test.o: test/main.c thirdparty/ctest.h src/checkw.c src/index.h src/check_border.h
	$(OBJ)



bin: 
	mkdir bin
build:
	mkdir build

clean:
	rm build/*.o
	rm bin/*.exe
