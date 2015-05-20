CC = g++
DEBUG = -g
CFLAGS = -c $(DEBUG)
LFLAGS = $(DEBUG)
BASE = /Users/mh747/Documents/PracticePrograms/HuffmanEncoder/
INC = $(BASE)include/
BUILD = $(BASE)build/
LIB = $(BASE)lib/
SRC = $(BASE)src/
BIN = $(BASE)bin/
OBJS = $(BUILD)HuffEncoder.o $(BUILD)HuffTree.o $(BUILD)TreeNode.o $(BUILD)LinkedList.o \
       $(BUILD)ListNode.o

$(BIN)Huffman : $(OBJS)
	$(CC) $(LFLAGS) $(SRC)Huffman.cpp $(OBJS) -o $(BIN)Huffman

$(BUILD)HuffEncoder.o : $(INC)HuffEncoder.h $(LIB)HuffEncoder.cpp $(INC)HuffTree.h\
                      $(INC)TreeNode.h $(INC)LinkedList.h $(INC)ListNode.h
	$(CC) $(CFLAGS) $(LIB)HuffEncoder.cpp -o $(BUILD)HuffEncoder.o

$(BUILD)HuffTree.o : $(INC)HuffTree.h $(LIB)HuffTree.cpp $(INC)TreeNode.h $(INC)LinkedList.h\
                   $(INC)ListNode.h
	$(CC) $(CFLAGS) $(LIB)HuffTree.cpp -o $(BUILD)HuffTree.o

$(BUILD)TreeNode.o : $(INC)TreeNode.h $(LIB)TreeNode.cpp
	$(CC) $(CFLAGS) $(LIB)TreeNode.cpp -o $(BUILD)TreeNode.o

$(BUILD)LinkedList.o : $(INC)LinkedList.h $(LIB)LinkedList.cpp $(INC)HuffTree.h $(INC)ListNode.h
	$(CC) $(CFLAGS) $(LIB)LinkedList.cpp -o $(BUILD)LinkedList.o

$(BUILD)ListNode.o : $(INC)ListNode.h $(LIB)ListNode.cpp $(INC)HuffTree.h
	$(CC) $(CFLAGS) $(LIB)ListNode.cpp -o $(BUILD)ListNode.o
