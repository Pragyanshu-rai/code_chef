#include<iostream>
#include<iomanip>
#define one_k 1000
using namespace std;
int main()
{
    int repeat;
    cin>>repeat;
    while(repeat--)
    {
        double quantity,price;
        cin>>quantity>>price;
        price=price*quantity;
        if(quantity>one_k)
            price=price-((price/100)*10);
        cout<<fixed<<setprecision(6)<<price<<endl;
    }
    return 0;
}
