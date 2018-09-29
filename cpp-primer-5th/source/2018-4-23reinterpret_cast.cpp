#include<iostream>
using namespace std;
int test()
{
    int *ptr = new int(2);
    uint32_t ptr_addr = reinterpret_cast<uint32_t>(ptr);
    cout << "ptr 的地址:" << hex << ptr << endl
            << "ptr_addr 的值(hex):" << hex << ptr_addr << endl;
    delete ptr;
    return 0;
}

// Returns a hash code based on an address
unsigned short Hash(void *p)
{
    unsigned int val = reinterpret_cast<unsigned int>(p);
    return (unsigned short)(val ^ (val >> 16));
}

int main()
{
    int a[20];
    for(int i = 0; i < 20; ++i)
        cout << Hash(a+i) << endl;
}
