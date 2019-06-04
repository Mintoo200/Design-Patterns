CXX ?= g++
CXXFLAGS ?= -Wall -Wextra -Werror -pedantic -std=c++17 -ggdb

SRC = builder.cc dup.cc
BIN = builder

all: ${BIN}

${BIN}:
	${CXX} ${CXXFLAGS} ${SRC} -o ${BIN}

clean:
	${RM} ${BIN}
