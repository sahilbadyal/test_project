#include<iostream>
using namespace std;

int main(int argc, char * argv){
    if (argc > 1){
        cout << "Hello" << argv[1];
    }else{
        cout << "Hello World!";
    }
}
