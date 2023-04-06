#ifndef FOOD_H
#define FOOD_H
#include<string>
#include <iomanip>
#include <map>
#include <windows.h>
#include <fstream>
using namespace std;

typedef long long int ll;


class food
{
    public:
    string meal;
    ll code;
    ll price;
    string getmeal();
    ll getcode();
    ll getprice();

};
class order

    {
public:
    ll items;
    ll meal_code;
    ll amount;
    ll getitems();
    ll getmeal_code();
    ll getamount();
};
class student : public order,public food
{
public:
    string name;
    ll id;
    string getname();
    ll getid();
};
string food :: getmeal()
{
    cout<<"MEAL : ";
    cin>>meal;
    return meal;
}
ll food :: getcode()
{
    cout<<"Code : ";
    cin>>code;
    return code;
}
ll food :: getprice()
{
    cout<<"Price : ";
    cin>>price;
    return price;
}
string student :: getname()
{
    cout<<"Name : ";
    cin>>name;
    return name;
}
ll student :: getid()
{
    cout<<"ID : ";
    cin>>id;
    return id;
}
ll order :: getitems()
{
    cout<<"How many items : ";
    cin>>items;
    return items;
}
ll order :: getmeal_code()
{
    cout<<"Meal code : ";
    cin>>meal_code;
    return meal_code;
}
ll order :: getamount()
{
    cout<<"Amount : ";
    cin>>amount;
    return amount;
}
void showpay(ll k)
{
    cout<<"\n\n\nPayment : \n\n";
    cout<<"\n\nYou Have To Pay ";
    cout<<k<<" taka only\n\n";
}
void showlist()
{
    string a;
    cout<<endl<<endl<<endl<<setw(10)<<"Food"<<setw(10)<<"Code"<<setw(10)<<"Price"<<endl<<endl;
    ifstream file("f.txt");
    ll k=0;
    while(getline(file,a))
    {
        k++;
        cout<<a<<endl;
    }
    if(k==0)
    {
        cout<<"NO FOOD\n";
    }
    cout<<endl<<endl;
    file.close();
}

#endif // FOOD_H
