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
int lastduplicate=0,count=0;
cout<<"duplicate elements: ";
for(int i=0;i<size-1;i++){
    if(A[i]==A[i+1])
    {
        int j=i+1;
        while(A[j]==A[i])
        j++;
        cout<<A[i]<<" appears "<<j-i<<" times ";
        i=j-1;
    }
    
    
}
   



    return 0;
}
