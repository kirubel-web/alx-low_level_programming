CC=gcc
CFLAGS=-Wall -Wextra -Werror -pedantic -std=c89
INCLUDES=-I.

TEST_OUTPUT=test_output
TEST_FILES=test_files
BIN_DIR=bin

FILE=

TEST_FILE:=${TEST_FILES}/$(shell echo ${FILE} | sed 's/-[^-]*\./-main./g')
OTHER_FILES:=$(addprefix ${TEST_FILES}/, $(shell ls ${TEST_FILES} | grep -v main))

ifeq ($(shell if [ -f ${TEST_FILE} ]; then echo 1; else echo 0; fi), 1)
	TEST_FILE:=${TEST_FILE}
else
	TEST_FILE:=
endif

BIN:=${BIN_DIR}/$(shell basename ${FILE} .c)
OUTPUT=${TEST_OUTPUT}/$(shell basename ${FILE} .c).out

all: ${BIN_DIR} ${TEST_OUTPUT}
	@$(CC) $(INCLUDES) $(CFLAGS) -o ${BIN} ${TEST_FILE} ${OTHER_FILES} ${FILE}
	@./${BIN} > ${OUTPUT} && ./${BIN}

${BIN_DIR}:
	@mkdir -p $@

${TEST_OUTPUT}:
	@mkdir -p $@

clean:
	@rm -rf ${BIN_DIR}
	@rm -rf ${TEST_OUTPUT}
	@rm -f ${BIN}
