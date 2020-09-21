#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
class A{
    private:
    struct box{
        int c;
        int*ptr;
    };
    
    box*s;
    public:
    A(int c){
        s=new box;
        s->c=c;
        s->ptr=new int[s->c];
    }
    void add(int index,int d){
        if(index>=0 && index < s->c)
        s->ptr[index]=d;
        else
        cout<<"out of range";
        

    }
    void view(){
        int i;
        for(i=0;i<s->c;i++){
            cout<<s->ptr[i]<<" ";
        }
    }
 
};
int main(){
A a(4);
a.add(0,12);
a.add(1,14);
a.add(2,17);
a.view();
     

    return 0;
}

/*  
// // // int fact(int);
// // // int fact(int n){
// // // if(n==0 || n==1){
// // //     return 1;
// // //     }

// // // else
// // // {
// // // return n* fact(n-1);
// // // }
// // int fib(int);
// // int fib(int n)
// // {
// //     if(n<2)
// //     {
// //         return 1;
// //     }
// //     else
// //     {
// //         return fib(n-1)+fib(n-2);
// //     }
// // }
// // int main(){
// //     int a;
// //     cout<<"Enter any number"<<endl;
// //     cin>>a;
// //     cout<<fib(a);
// //     return 0;
// //
// // class Employee{
// //     private:
// //     int a,b,c;
// //     public:
// //     int e,f;
// //     void setData(int a1,int b1,int c1);
// //     void getData(){
// //         cout<<"value of a is "<<a<<endl;
// //         cout<<"value of b is "<<b<<endl;
// //         cout<<"value of c is "<<c<<endl;
// //         cout<<"value of e is "<<e<<endl;
// //         cout<<"value of f is "<<f<<endl;
// //     }

// // };
// // void Employee::setData(int a1, int b1,int c1){
// //     a=a1;
// //     b=b1;
// //     c=c1;
// // }

// // int main(){
// //     Employee e1;
// //     e1.e=4;
// //     e1.f=5;
// //     e1.setData(1,2,3);
// //     e1.getData();}

// class Shop{
// //     private:
// //     int itemId[1000];
// //     int itemPrice[1000];
// //     int c;
// //     public:
// //     void ini(void){
// //         c=0;
// //     }
// //     void setP (void);
// //     void getP (void);

// // };
// // void Shop::setP(){
// //     cout<<"enter the item id"<<endl;
// //     cin>>itemId[c];
// //     cout<<"enter the item price"<<endl;
// //     cin>>itemPrice[c];
// //     c++;

// // }
// // void Shop::getP(){
// //     for(int i=0;i<c;i++){
// //         cout<<" itemid "<<itemId[i]<<" itemprice "<<itemPrice[i]<<endl;
// //     }

// // }

// // int main(){
// //     Shop s1;
// //     s1.ini();
// //     s1.setP();
// //     s1.setP();
// //     s1.setP();
// //     s1.getP();

class Emp
// {
// private:
//     int id;
//     static int c;

// public:
//     void setd(void)
//     {
//         cout << "enter the first " << endl;
//         cin >> id;
//         c++;
//     }
//     void getD(void)
//     {

//         cout << "the id of employee " << c << "is " << id;
//     }
// };
// int Emp ::c;
// int main()
// {
//     Emp h, r, t;
//     h.setd();
//     h.getD();
//     r.setd();
//     r.getD();
//     t.setd();
//     t.getD();

class Emp{
    int id;
    int s;
    public:
    void setid(void){
        cout<<"enter id"<<endl;
        cin>>id;
    }
    void getid(void){
        cout<<"the id of this employee is "<<id<<endl;
    }

};
int main(){
 Emp fb[4];
 for(int i=0;i<4;i++){
     fb->setid();
     fb->getid();
 }
 
 
 
 */