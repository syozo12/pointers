#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter the first number";
    cin>>a;
    int b;
    cout<<"enter the second number";
    cin>>b;
    int *p1=&a;
    int*p2=&b;
    int ans;
    int *pans=&ans;
    * pans=* p1 * * p2;
    cout<<"product of the two numbers is"<<*pans;
    return 0;

    
}
