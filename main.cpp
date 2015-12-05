// James Hamil
// w812971

#include <iostream>
#include "bt_class.h"
#include "bintree.h"
#include <cstdlib>
#include <string>

using namespace std;

int main() {
    //TEST FILE FOR BINARY TREE IN BT_CLASS.H
    binary_tree<string>* test = new binary_tree<string>(); //dont forget () at end if need be
    
    test->create_first_node("I'm first!");
    cout << test->retrieve() << endl;
    
    test->add_left("I'm left of the root!");
    test->add_right("I'm right of the root!");
    
    
    test->shift_left();
    cout << test->retrieve() << endl;
    
    test->shift_up();
    cout << test->retrieve() << endl;
    
    test->shift_right();
    cout << test->retrieve() << endl;
    
    test->add_right("I'm right of the right of the root!");
    test->add_left("I'm left of the right of the root!");
    
    test->shift_right();
    cout << test->retrieve() << endl;
    test->shift_up();
    cout << test->retrieve() << endl;
    test->shift_left();
    cout << test->retrieve() << endl;
    
    delete test;
    
    return 0;
}
