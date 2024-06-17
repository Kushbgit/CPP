#include <iostream>
using namespace std;
class RBI{
    public:
    virtual void interest_rate()=0;
};
class SBI : public RBI{
    public: 
    void interest_rate() {
        cout<<"Interest rate of SBI: 4%"<<endl;
    }
};
class BOB : public RBI{
    public: 
    void interest_rate() {
        cout<<"Interest rate of BOB: 5.5%"<<endl;
    }
};
class PNB : public RBI{
    public: 
    void interest_rate() {
        cout<<"Interest rate of PNB: 6.5%"<<endl;
    }
};
int main(){
    RBI *p;
    SBI sbi;
    BOB bob;
    PNB pnb;
    p=&sbi;
    cout<<"Interest Rates:"<<endl;
    sbi.interest_rate();
    pnb.interest_rate();
    bob.interest_rate();
   p->interest_rate();
    return 0;
}
