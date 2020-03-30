#include<iostream>
using namespace std;
int main()
{
    int a,tem=0;
    cin >> a;
    for (int i = 0; i < a;i++){
        tem += i;
    }
    cout << tem << endl;
    system("pause");
    return 0;
}