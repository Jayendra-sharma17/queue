#include<iostream>
using namespace std;
void saydigit(int n,string arr[])
{
// base case
if(n==0)
{
    return ;
}
int digit=n%10;
n=n/10;
//recursive ccall mar dunga
saydigit(n,arr);
cout<<arr[digit]<<endl;
}

int main()
{
    string arr[10]={"zero","one","two","threee","four","five","six","seven","eight","nine"};
    int n;
    cin>>n;
    cout<<endl;
    saydigit(n,arr);
    return 0;
}