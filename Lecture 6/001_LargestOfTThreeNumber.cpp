#include<iostream>
using namespace std;
int main(){

    // int a,b,c;
    // cin>>a>>b>>c


    int a;
    cout<<"Enter the First Number: ";
    cin>>a;

    int b;
    cout<<"Enter the Second Number: ";
    cin>>b;

    int c;
    cout<<"Enter the Third Number: ";
    cin>>c;

    if(a>b && a>c){
        //a is the largest
        cout<<a<<" is the Largest of theree Numbers"<<endl;
    }else{
        //either bis the largest or c is the largest:
        if (b>c)
        {
            cout<<b<<" is largest of the three Numbers"<<endl;
        }else{
            cout<<c<<" is largest of the three Numbers"<<endl;
        }
        
    }

    return 0;
}