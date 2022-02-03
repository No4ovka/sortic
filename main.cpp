#include "header.h"

int main()
{
    system ("cls");
    vector <int> a, b;
    string m = "";
    long long schet = 0;
    getline(cin, m);
    while (m != "!")
    {
        a.push_back(ToInt(m));
        getline(cin, m);
    }
    while (a.size() > 0)
    {
        long long poloj, chis = 10000000;
        for (long long k = 0; k < a.size(); k++)
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
//                itc_SetColor(11,1);
                cout<<"rra"<<endl;
                schet++;
//                itc_SetColor(3,1);
//                cout<<"a: ";
                rra(a);
//                vivod(a);
//                cout<<endl<<"b: ";
//                vivod(b);
//                cout<<endl;
            }
        }
        else
        {
            while (a[0] != chis)
            {
//                itc_SetColor(11,1);
                cout<<"ra"<<endl;
                schet++;
//                itc_SetColor(3,1);
//                cout<<"a: ";
                ra(a);
//                vivod(a);
//                cout<<endl<<"b: ";
//                vivod(b);
//                cout<<endl;
            }
        }
//        itc_SetColor(11,1);
        cout<<"pb"<<endl;
        schet++;
//        itc_SetColor(3,1);
//        cout<<"a: ";
        pb(a,b);
//        vivod(a);
//        cout<<endl<<"b: ";
//        vivod(b);
//        cout<<endl;
    }
    while (b.size() > 0)
    {
//        itc_SetColor(11,1);
        cout<<"pa"<<endl;
        schet++;
//        itc_SetColor(3,1);
//        cout<<"a: ";
        pa(a,b);
//        vivod(a);
//        cout<<endl<<"b: ";
//        vivod(b);
//        cout<<endl;
    }
    vivod(a);
    cout<<"Komand: "<<schet;
    return 0;
}
