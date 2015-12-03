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
    
    //create nodes that we will add to the binary_tree test
    binary_tree_node<string> *first = new binary_tree_node<string> ("first");
    binary_tree_node<string> *second = new binary_tree_node<string> ("second");
    binary_tree_node<string> *third = new binary_tree_node<string> ("third");
    binary_tree_node<string> *fourth = new binary_tree_node<string> ("fourth");
    
    test->create_first_node(*first);
    test->add_right(*second);
    test->add_left(*third);
   
    
//            "first"
//             /   \
//        "third" "second"

    
    cout << test->size() << endl;
    //3
    
    cout << test->retrieve() << endl;
    //"first"
    
    test->shift_left();
    cout << test->retrieve() << endl;
    //"third"
    
    test->shift_up();
    cout << test->retrieve() << endl;
    //"first"
    
    test->shift_right();
    cout << test->retrieve() << endl;
    //"second"
    
    test->shift_up();
    cout << test->retrieve() << endl;
    //"first"
    
    test->shift_left();
    cout << test->retrieve() << endl;
    //"third"
    
    //            "first"
    //             /   \
    //    --> "third" "second"
    
    test->add_left(*fourth);
    
    //            "first"
    //             /   \
    //    --> "third" "second"
    //          /
    //      "fourth"
    
    test->shift_left();
    cout << test->retrieve() << endl;
    //"fourth"
    
    //            "first"
    //             /   \
    //        "third" "second"
    //          /
    //  --> "fourth"

    return 0;
}
