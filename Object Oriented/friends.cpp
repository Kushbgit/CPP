#include <iostream>
using namespace std;

class Bank{
    string name;
    int account_num;
    double balance;
  
  public:
    Bank(string n,int i,double bal){
        name=n;
        account_num=i;
        balance=bal;
    }
  
  void display(){
    cout<<name<<" "<<account_num<<" "<<balance<<endl;
  }
  friend class PhonePe;
};
class PhonePe{
    public:
     void withdrawn(Bank &obj){
        int n;
        cout<<"Enter withdrawn Amount :";
        cin>>n;
        obj.balance=obj.balance-n;
     }
};

int main(){
    Bank b("Suresh", 101,34556.90);
    b.display();
    PhonePe p;
    p.withdrawn(b);
    b.display();
}