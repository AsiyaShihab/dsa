#include<iostream>
using namespace std;
class Array{
    private:
    int *A;
    int size;
    int length;
     void swap(int *x,int *y);
    public:
    Array(){
        size=10;
        length=0;
        A=new int[size];
    }
    Array(int sz){
        size=sz;
        length=0;
        A=new int[size];
        
    }
    ~Array(){
        delete [] A;
    }
    void Display();
    void Append(int x);
    void Insert(int index,int x);

    int LinearSearch(int key);
    int BinarySearch(int key);
    int Get(int index);
    int Set(int index,int x);
    int Max();
    int Min();
    int Sum();
    float Avg();
    void Reverse();
    void Reverse2();
    void InsertSort();
    int isSorted();
    void Rearrange();
    Array* Merge(Array * arr2);
    Array* Union(Array *arr2);
    Array* Intersection(Array *arr2);
    Array* Difference(Array *arr2);
    
    
};
void Array::Display(){
    cout<<"the elements are ";
    for(int i=0;i<length;i++)
    cout<<A[i]<<' ';
}
void Array::Append(int x){
    if(length<size)
    A[length++]=x;
}
void Array::Insert(int index,int x){
    if(index>=0 &&index<length)
    {for(int i=length;i>index;i--){
        A[i]=A[i-1];
    }
    A[index]=x;
    length++;
}}
