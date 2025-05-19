#include <iostream>
using namespace std;
class array{
public:
    int *A;
    int size;
    int length;
    
    array(int size);
    int binarysearch(int key);
    ~array(){
        delete [] A;
    }
    };
array::array(int size){
    this->size=size;
    A=new int[size];
    length=0;
}


int array:: binarysearch(int key){
    int l=0;
    int h=length-1;
    int mid;
    while(l<=h){
        mid=(l+h)/2;
        if(key==A[mid])
        return mid;
        else 
        if(key<A[mid])
        {
            h=mid-1;
        }
        else
        l=mid+1;
    }
    return -1;
}

int main()

{
int size,key;
cout<<"enter the size of the array ";
cin>>size;
 array arr(size);

cout<<"enter the length of the array ";
cin>>arr.length;
cout<<"enter the elements in sorted form ";
for(int i=0;i<arr.length;i++)
cin>>arr.A[i];
cout<<"enter the element to search ";
cin>>key;
int index=arr.binarysearch(key);

if(index!=-1)
cout<<"element found at "<<index;
else 
cout<<"not found ";


    return 0;
}
