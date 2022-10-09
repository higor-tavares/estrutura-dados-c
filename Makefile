CC = gcc
LST = src/list
FLAGS = I${LST}
LTS = src/list-test

build-test-01:
	${CC} -${FLAGS} ${LST}/list.c ${LTS}/test_01.c  -o out/test01
test-01:
	out/test01
