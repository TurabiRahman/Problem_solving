#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << "Enter total units consumed : ";

    int n;
    cin >> n;

    int base_bill = 0;

    while(n > 0)
    {
        int flag = 0;

        if(n > 500)
        {
            flag = n - 500;
            base_bill += flag * 15;
            n -= flag;
        }
        else if(n >= 301 && n <= 500)
        {
            flag = n - 300;
            base_bill += flag * 10;
            n -= flag;
        }
        else if(n >= 101 && n <= 300)
        {
            flag = n - 100;
            base_bill += flag * 7;
            n -= flag;
        }
        else if(n > 0 && n <= 100)
        {
            flag = n;
            base_bill += n * 5;
            n -= flag;
        }
    }

    cout << "Base bill : " << base_bill << " BDT" << endl;

    int surcharge = 0;

    if(base_bill > 3000)
    {
        surcharge = base_bill * 0.1;
        cout << "Surcharge : " << surcharge << " BDT" << endl;
    }

    cout << "Total Bill : " << base_bill + surcharge << " BDT" << endl;

    return 0;
}
