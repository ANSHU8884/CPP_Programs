#include<iostream>
#include<string.h>
class Employee
{
private:
	int id;
	char name[20];
protected:
	double salary;
public:
	Employee(int id = 0, const char* name = " ", double salary = 0.0)
	{
		this->id = id;
		strcpy_s(this->name, name);
		this->salary = salary;
	}
	double getsalary()
	{
		return this->salary;
	}
	virtual double calincome()
	{
		return this->salary;
	}
	virtual void display()
	{
		std::cout << "ID:" << this->id << std::endl;
		std::cout << "NAME:" << this->name << std::endl;
		std::cout << "SALARY:" << this->salary << std::endl;
	}

};
class Manager :public Employee
{
	double bonus;
public:
	Manager(int id=0,const char* name=" ",double salary=0.0,double bonus=0.0):Employee(id,name,salary)
	{
		this->bonus = bonus;
	}
	double getbonus()
	{
		return this->bonus;
	}
	double calincome()
	{
		return (this->salary + this->bonus);
	}
	void display()
	{
		Employee::display();
		std::cout << "bonus" <<this->bonus<< std::endl;
	}
};
class Salesman :public Employee
{
	double commission;
public:
	Salesman(int id = 0, const char* name = " ", double salary = 0.0, double commission = 0.0):Employee(id, name, salary)
	{
		this->commission = commission;
	}
	double getcommission()
	{
		return this->commission;
	}
	double calincome()
	{
		return (this->salary + this->commission);
	}

	void display()
	{
		Employee::display();
		std::cout << "commission"<<this->commission << std::endl;
	}

};
double totalsalary(Employee* arr[], int n)
{
	double total=0.0;
	for (int i = 0; i < n; i++)
	{
		total =	total + arr[i]->getsalary();
	}
	return total;
}
double totalincome(Employee* arr[], int n)
{
	double total=0.0;
	for (int i = 0; i < n; i++)
	{
		total = total + arr[i]->calincome();
	}
	return total;
}
int main()
{

	Employee* arr[5];

	arr[0] = new Employee(11, "RADHIKA", 50000);
	arr[1] = new Manager(12, "GANESH", 50000, 20000);
	arr[2] = new Salesman(13, "SHUBHAM", 50000, 10000);
	arr[3] = new Manager(14, "SANIKA", 50000, 20000);
	arr[4] = new Salesman(15, "OMKAR", 50000, 10000);

	for (int i = 0; i < 5; i++)
	{
		arr[i]->display();
	}


	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << totalsalary(arr, 5) << std::endl;
	std::cout << totalincome(arr, 5) << std::endl;
	return 0;
}