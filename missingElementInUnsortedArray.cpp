#include <iostream>
#include<vector>
using namespace std;
int main()
{ int * A ;
int size;
cout<<"enter the size of the array "<<endl;
cin>>size;
A=new int[size];
 cout<<"enter the elements of the array "<<endl;
for(int i=0;i<size;i++){
    cin>>A[i];
}
cout<<"enter the largest element in the array "<<endl;
int large;
cin>>large;

vector <int>H(large+1,0);


for(int i=0;i<size;i++){
    H[A[i]]=1;
}
cout<<"missing elements: ";
for(int i=1;i<large;i++){
    if(H[i]!=1)
    cout<<i<<' ';
}
   



    return 0;
}
