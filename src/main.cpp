// Copyright 2021 NNTU-CS
#include "bst.h"
#include <string>

extern void makeTree(BST<std::string>& tree, const char* filename);Add commentMore actions
extern void displayFrequency(BST<std::string>& tree);

int main() {
  BST<std::string> wordTree;Add commentMore actions
    const char* inputFile = "src/war_peace.txt";

    makeTree(wordTree, inputFile);
    displayFrequency(wordTree);

    std::cout << "Depth of the BST: " << wordTree.height() << std::endl;

    return 0;
}
