CXX ?= g++
CXXFLAGS ?= -Wall -Wextra -Werror -pedantic -std=c++17 -ggdb

SRC = factory.cc dup.cc
BIN = factory

all:
	${CXX} ${CXXFLAGS} ${SRC} -o ${BIN}

clean:
	${RM} ${BIN}
