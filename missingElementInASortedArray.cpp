#include <iostream>
using namespace std;
int main()
{ int * A ;
int size;
cout<<"enter the size of the array "<<endl;
cin>>size;
A=new int[size];
 cout<<"enter the elements of the array in sorted order "<<endl;
for(int i=0;i<size;i++){
    cin>>A[i];
}
int l=A[0];
int h=A[size-1];
int diff=l-0;
for(int i=0;i<size;i++){
    if(A[i]-i!=diff){
        cout<<"missing element is "<<i+diff<<endl;
        break;
    }
    
}


    return 0;
}
