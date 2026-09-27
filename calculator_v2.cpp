#include <iostream>
#include <math.h>
using namespace std;
    //calculator
    void add(int x,int y){
        cout<<x + y;
    }
    void sub(int x,int y){
        cout<<x-y;
    }
    void mult(int x,int y){
        cout<<x*y;
    }
    void divide(int x,int y){
        if (y!=0){
            cout<<x/y;
        }
        else{
            cout<<"error";
        }
    }
    void power(int x,int y){
        cout<<pow(x,y);
    }
    void quadratic(){
        double a,b,c,d,r1,r2;
        cout<<"enter coefficient of ax^2+bx+c\n";
        cin>>a>>b>>c;
        d = (b*b)-(4*a*c);
        if (d > 0){
            r1 = (-b+sqrt(d))/(2*a);
            r2 = (-b-sqrt(d))/(2*a);
            cout<<r1<<" and "<<r2;
        }
        else if (d == 0){
            r1 = -b/(2*a);
            cout<<r1;
        }
        else
            cout<<"no real roots";
    }
    int main(){
    int x,y;
    cout<<"enter the operation\n";
    char ops;
    cin>>ops;
    if (ops=='q')
        quadratic();
    else{
        cin>>x>>y;
        if (ops=='+')
            add(x,y);
        else if (ops=='-')
            sub(x,y);
        else if (ops=='*')
            mult(x,y);
        else if (ops=='/')
            divide(x,y);
        else if (ops=='^')
            power(x,y);
        else
            cout<<"error";
        return 0;
    }
}
