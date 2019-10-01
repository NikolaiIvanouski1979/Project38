#include<iostream>
using namespace std;
class Int
{
private:
	int a;
public:
	Int()
	{
		a = 0;
	}
	Int(int aa)
	{
		a = aa;
	}
	void add(Int a2, Int a3)
	{
		a = a2.a + a3.a;
	}
	void show_add()
	{
		cout << a << endl;
	}

};
int main()
{
	Int Int1(7);
	Int Int2(11);
	Int Int3;
	Int3.add(Int1, Int2);
	cout << "int3 = "; Int3.show_add();
	cout << endl;
	system("pause");
	return 0;
}