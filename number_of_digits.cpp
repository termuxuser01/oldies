// number of digits in int
#include <iostream>
using namespace std;
int main()
{
    int n;
    int div;
    int inp;
    int size;
    cout << "insert a digit\n";
    cin>>n;
    while( n /= 10)
    {
        size++;
    }
    cout<<size + 1<<endl;
    return 9;
    
}
