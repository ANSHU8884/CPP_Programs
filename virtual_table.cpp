#include<iostream>
class parent
{
public:
	virtual void fun()
	{
		std::cout << "parent virtual fun" << std::endl;
	}
	void gun()
	{
		std::cout << "parent non virtual fun" << std::endl;

	}
	virtual void run()
	{
		std::cout << "parent virtual run" << std::endl;

	}

};
class child:public parent
{
	void fun()
	{
		std::cout << "child non virtual fun (virtual in parent)" << std::endl;

	}
	virtual void sun()
	{
		std::cout << "child virtual sun (not present in parent)" << std::endl;

	}
	virtual void run()
	{
		std::cout << "child virtual run (virtual in parent)" << std::endl;

	}
	virtual void mul()
	{
		std::cout << "child virtual mul (not present in parent)" << std::endl;
	}
};

int main()
{
	child cobj;

	int* ptr1 = reinterpret_cast<int*>(&cobj);
	int* ptr2 = reinterpret_cast<int*>(*ptr1);

	void (*fptr1)();
	void (*fptr2)(); 
	void (*fptr3)();
	void (*fptr4)();

	fptr1 = (void(*)())(*ptr2);
	fptr1();

	fptr2 = (void(*)())(*(ptr2 + 1));
	fptr2();

	fptr3 = (void(*)())(*(ptr2 + 2));
	fptr3();

	fptr4 = (void(*)())(*(ptr2 + 3));
	fptr4();

	return 0;
}