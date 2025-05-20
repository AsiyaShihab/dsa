
#include <iostream>
#include<vector>
using namespace std;
int main()
{
int size;
cout<<"enter the size of the array "<<endl;
cin>>size;
vector<int>A(size);
 cout<<"enter the elements of the array "<<endl;
for(int i=0;i<size;i++){
    cin>>A[i];
}
int lastduplicate=0;
cout<<"duplicate elements: ";
for(int i=0;i<size;i++){
    if(A[i]==A[i+1]&&A[i]!=lastduplicate){
    cout<<A[i]<<" ";
    lastduplicate=A[i];}
}
   



    return 0;
}
