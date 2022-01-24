#include "sortic.h"

void sa(vector <int> &a)
{
	if (a.size() > 1)
	{
		int m;
		m = a[0];
		a[0] = a[1];
		a[1] = m;
	}
}

void sb(vector <int>& b)
{

}