#include "vector.h"
#include "vector.cpp"
#include <iostream>
#include <cstring>

using namespace std;

signed main(){
    Vector<int> a(5);
    Vector<int> a2(5, 2);
    Vector<int> a3;
    a2[-1] = 3;
    a2.push_back(12);
    

    for(auto it : a2)
        std::cout << it << ' ';
    std::cout << endl;
}
