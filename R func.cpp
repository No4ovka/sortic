#include "header.h"

void ra(vector <int> &a)
{
    int m = a[0], n;
    for (int k = a.size() - 1; k >= 0; k--)
    {
         n = a[k];
         a[k] = m;
         m = n;
    }
}
void rb(vector <int> &b)
{
    int m = b[0], n;
    for (int k = b.size() - 1; k >= 0; k--)
    {
         n = b[k];
         b[k] = m;
         m = n;
    }
}
void rr(vector <int> &a, vector <int> &b)
{
    ra(a);
    rb(b);
}


void vivod(vector <int> &a)
{
    for (int k = 0; k < a.size(); k++)
        cout<<a[k]<<" ";
}
