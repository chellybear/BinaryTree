// James Hamil
// w812971

#include <iostream>
#include "bt_class.h"
#include "bintree.h"
#include <cstdlib>
#include <string>
using main_savitch_10::binary_tree;
using main_savitch_10::binary_tree_node;
using namespace std;

int main() {
    
    binary_tree<binary_tree_node<string>> *test = new binary_tree<binary_tree_node<string>>;
    
    binary_tree_node<string> *first = new binary_tree_node<string> ("first");
    binary_tree_node<string> *second = new binary_tree_node<string> ("second");
    binary_tree_node<string> *third = new binary_tree_node<string> ("third");
    
    test->create_first_node(*first);
    test->add_right(*second);
    test->add_left(*third);
   
    
//            "first"
//             /   \
//        "third" "second"

    
    cout << test->size() << endl;
    //3
    
    *first = test->retrieve();
    cout << first->data() << endl;
    //"first"
    
    test->shift_left();
    *first = test->retrieve();
    cout << first->data() << endl;
    //"second"
    
    test->shift_up();
    *first = test->retrieve();
    cout << first->data() << endl;
    //"third"
    
    //cout << test->retrieve(); should produce
    //"third"
    //but it returns type binary_tree_node<string>
    
    test->shift_right();
    *first = test->retrieve();
    cout << first->data() << endl;
    //"second"
    
    test->shift_up();
    *first = test->retrieve();
    cout << first->data() << endl;
    //"first"

    return 0;
}
