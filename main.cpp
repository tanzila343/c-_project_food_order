#include <iostream>
#include "food.h"
#include <fstream>
#include <map>
typedef long long int ll;
map<ll,ll  >v;

using namespace std;

int main()
{
    ll i,j,k,l,m,n,o,p,q;
    student obj;
    while(1)
    {
        int l;
        cout<<"MAIN SCREEN:\n\n";
        cout<<"1. Canteen Super\n";
        cout<<"2. Food List\n";
        cout<<"3. Student Order\n";
        cout<<"4. End\n";
        cout<<"Enter your choice: ";
        cin>>n;
        if(n==4)
        {
            ofstream file("f.txt",ios::out|ios::trunc);
            file.close();
            break;
        }
        else if(n==2)
        {
            showlist();
             Sleep( 3000 );
            system("cls");
        }
        else if(n==3)
        {
            if(v.empty())
            {
                cout<<"\n\nNO FOOD"<<endl;
                Sleep( 1000 );
                system("cls");
            }
            else
            {
                cout<<"\n\nYour ";
            string a=obj.getname();
            cout<<"\nYour ";
            k=obj.getid();
                cout<<"\n\nEnter Choices : \n\n";
                l=obj.getitems();
                if(l>v.size())
                {
                    l=v.size();
                    cout<<"Sorry You can only choice "<<l<<" items\n\nAnd your number of item is "<<l<<endl;
                }
                k=0;
                for(j=0; j<l; j++)
                {
                    cout<<"\n\n";
                    cout<<j+1<<endl;
                    p=obj.getmeal_code();
                    q=obj.getamount();
                    k+=(v[p]*q);

                }
                system("cls");
                showpay(k);
                Sleep( 5000 );
                system("cls");

            }

        }
        else if(n==1)
        {
            ofstream file("f.txt",ios::out|ios::app);
            cout<<"\n\n\tAmount of Food Items : ";
            cin>>l;
            for(i=0; i<l; i++)
            {
                cout<<endl<<i+1<<endl<<endl;
                string a=obj.getmeal();
                ll b=obj.getcode();
                ll c=obj.getprice();
                v[b]=c;
                file<<setw(10)<<a<<setw(10)<<b<<setw(10)<<c<<endl;
            }
            file.close();
            Sleep( 1000 );
            system("cls");

        }

        else
        {
            cout<<"\n\nINVALID"<<endl;
            Sleep( 1000 );
            system("cls");
        }
    }
}
