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
    //
    //  NOTE:
    //  To change <string> to another data type,
    //  Change the typedef in bt_class.h and recompile.
    //
    
    binary_tree<binary_tree_node<string>> *test = new binary_tree<binary_tree_node<string>>;
    
    //create nodes that we will add to the binary_tree test
    binary_tree_node<string> *first = new binary_tree_node<string> ("first");
    binary_tree_node<string> *second = new binary_tree_node<string> ("second");
    binary_tree_node<string> *third = new binary_tree_node<string> ("third");
    binary_tree_node<string> *fourth = new binary_tree_node<string> ("fourth");
    binary_tree_node<string> *fifth = new binary_tree_node<string> ("fifth");
    binary_tree_node<string> *sixth = new binary_tree_node<string> ("sixth");
    
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
    
    test->shift_to_root();
    cout << test->retrieve() << endl;
    //"first"
    
    binary_tree<binary_tree_node<string>> *test2(test);
    //        --> "first"
    //             /   \
    //        "third" "second"
    //          /
    //      "fourth"
    
    test2->shift_right();
    cout << test2->retrieve() << endl;
    //"second"
    
    //            "first"
    //             /   \
    //        "third" "second"  <--
    //          /
    //      "fourth"
    
    test2->add_right(*fifth);
    test2->add_left(*sixth);
    test2->shift_right();
    cout << test2->retrieve() << endl;
    //"fifth"
    
    //            "first"
    //             /   \
    //        "third" "second"
    //          /        /   \
    //      "fourth"  "sixth" "fifth"  <--
    
    test2->shift_to_root();
    test2->shift_right();
    test2->shift_left();
    cout << test2->retrieve() << endl;
    
    //            "first"
    //             /       \
    //        "third"    "second"
    //          /        /       \
    //      "fourth"  "sixth" <-- "fifth"
    
    test2 = nullptr;
    delete test2;
    

    return 0;
}
