#include <bits/stdc++.h>
using namespace std;
class Stack{

    public:  int size;
             int*arr;
             int top;
            int* p= &size;
  public: Stack(){
      arr = (int*)malloc(*p*sizeof(int));
      top=-1;
  }          
 public : 
 void push(int x){
     if(top==size-1)
     {
         cout<<"No space"<<endl;
     }
     top=+1;
     arr[top]=x;
 }
 void pop(){
     if(top==-1){
         cout<<"Empty"<<endl;
     }
     top--;

 }

 void print(){
     for(int i=0 ; i<top+1 ; i++)
     {
         cout<<arr[i]<<" ";
     }
 }
};




int main(){
   Stack s;
   s.size=8;
   s.push(5);
   s.push(8);
   s.push(9);
   s.print();
}
