#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

#include <iostream>
#include <vector>
#include <windows.h>

using namespace std;

void sa(vector <int> &a);
void sb(vector <int> &b);

void ss(vector <int> &a, vector <int> &b);
void pa(vector <int> &a, vector <int> &b);
void pb(vector <int> &a, vector <int> &b);

void ra(vector <int> &a);
void rb(vector <int> &b);
void rr(vector <int> &a, vector <int> &b);

void rra(vector <int> &a);
void rrb(vector <int> &b);
void rrr(vector <int> &a, vector <int>& b);

void vivod(vector <int> &a);
long long ToInt(string str);
long long itc_len(string str);
void itc_SetColor(int text, int background);

#endif // HEADER_H_INCLUDED
