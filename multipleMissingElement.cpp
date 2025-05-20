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

int diff=l-0;
cout<<"missing elements: ";
for(int i=0;i<size;i++){
    while(diff<A[i]-i)
    {
        cout<<i+diff<<' ';
        diff++;
    
    }
    
}


    return 0;
}
