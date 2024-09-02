#include<iostream>
using namespace std;
int count = 0;
class des{
    public:
    des(){
        count++;
        cout<<endl<<"The number of objects construted: "<<count;
    }
    ~des(){
        count--;
        cout<<endl<<"The number of objects destroyed: "<<count;
    }
};
int main(){
    des aa,bb;
    {
    des cc;
    }
    return 0;
}
