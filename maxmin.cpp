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

int min=A[0],max=A[0];
for(int i=1;i<size;i++){
    if(A[i]>max)
    max=A[i];

else if(A[i]<min)
min=A[i];
}
cout<<"max: "<<max<<" "<<"min: "<<min<<endl;
    return 0;
}
