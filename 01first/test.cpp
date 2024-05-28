#include <iostream>
using namespace std;
int main(int argc, char** argv){
    int state = 100;
    const char* str = "char is test";
    cout << "state:" <<state << ", str:" << str << endl;
    
    for (int i; i <argc; i++)
    {
        cout << argv[i] << endl;
    }
    
    cout << "Hello World!" << endl;
    //system("pause");

    return 0;
    
}