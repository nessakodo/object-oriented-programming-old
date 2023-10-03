
#include <iostream>
using std::endl;

void foo();
void globalfoo();
void staticfoo();

int x{0};

int main()
{
    using std::cout;
    cout << "global x value : " << x << endl;
    
    int x{3};
    cout << "main x value : " << x << endl;
    
    {
        int x{5};
        cout << "block x value : " << x << endl;
    }
    
    cout << "main x value : " << x << endl;
    
    foo();
    globalfoo();
    staticfoo();
    staticfoo();
    
    for( ; x< 6; ++x)
    {
        cout << "main x value : " << x << endl;
    }
    
    cout << "main x value : " << x << endl;
    
    return 0;
};

void foo()
{
    int x{7};
    std::cout << "foo x value : " << x << endl;
};

void globalfoo()
{
    std::cout << "globalfoo x value : " << x << endl;
};

void staticfoo()
{
    static int x{9};
    std::cout << "staticfoo x value : " << x << endl;
    ++x;
};
