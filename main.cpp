#include "header.h"

int main()
{
    vector <int> a, b;
    string m = "";
    getline(cin, m);
    while (m != "!")
    {
        a.push_back(ToInt(m));
        getline(cin, m);
    }
    while (a.size() > 0)
    {
        int poloj, chis = 1000;
        for (int k = 0; k < a.size(); k++)
        {
            if (a[k] < chis)
            {
                chis = a[k];
                poloj = k + 1;
            }
        }
        if (poloj > a.size() / 2)
        {
            while (a[0] != chis)
            {
                cout<<"rra"<<endl;
                rra(a);
            }
        }
        else
        {
            while (a[0] != chis)
            {
                cout<<"ra"<<endl;
                ra(a);
            }
        }
        cout<<"pb"<<endl;
        pb(a,b);
    }
    while (b.size() > 0)
    {
        cout<<"pa"<<endl;
        pa(a,b);
    }
    vivod(a);
    return 0;
}
