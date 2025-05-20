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
cout<<"enter the larger element "<<endl;
int large;
cin>>large;
vector<int>H(large+1,0);
cout<<"enter the required sum "<<endl;
int k;
cin>>k;
for(int i=0;i<size;i++){
   if(H[k-A[i]]!=0&&k-A[i]>=0)
   cout<<k-A[i]<<" + "<<A[i]<<" = "<<k<<endl;
   H[A[i]]++;
}


    return 0;
}
