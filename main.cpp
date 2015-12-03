// James Hamil
// w812971

#include <iostream>
#include "bt_class.h"
#include "bintree.h"
#include <cstdlib>
using main_savitch_10::binary_tree;
using main_savitch_10::binary_tree_node;
using namespace std;

int main() {
    
    binary_tree<binary_tree_node<int>> *test = new binary_tree<binary_tree_node<int>>;
    
    binary_tree_node<int> *first = new binary_tree_node<int> (42);
    binary_tree_node<int> *second = new binary_tree_node<int> (80);
    binary_tree_node<int> *third = new binary_tree_node<int> (90);
    
    test->create_first_node(*first);
    test->add_right(*second);
    test->add_left(*third);
    
    cout << test->size() << endl;
    //3
    
    *first = test->retrieve();
    cout << first->data();

    return 0;
}
