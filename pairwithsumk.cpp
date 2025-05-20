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
cout<<"enter the required sum "<<endl;
int k;
cin>>k;
for(int i=0;i<size;i++){
    for(int j=i+1;j<size;j++){
        if(A[i]+A[j]==k)
        cout<<A[i]<<" + "<<A[j]<<" = "<<k<<endl;
    }
}


    return 0;
}
