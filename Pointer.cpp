#include <iostream>

using namespace std;

int main()
{
	int a[]{2, 3, 4, 5, 6};
	int *x, *y, z;
	
	x = a;
	z = *x;
	
	cout << endl;
	cout << "Nilai z : " << z << endl;
	
	*(x + 1) = z;
	
	cout << endl;
	for(int i = 0; i < 5; ++i)
		cout << "Nilai array : " << a[i] << endl;
	
	y = &a[2];
	*y = (*x)+++z;
	
	cout << endl;
	for(int i = 0; i < 5; ++i)
		cout << "Nilai array : " << a[i] << endl;
		
	return 0;
}