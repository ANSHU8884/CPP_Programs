#include<iostream>

class Demo
	{
	public:
		static int a;
		int b;
		void gun()
		{
			std::  cout << a << std::  endl << b << std::  endl;
		}
	};
	
	int Demo::a;
	int main()
	{
		Demo d;
		d.gun();

		return 0();
	}

	

