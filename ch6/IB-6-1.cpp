#include<iostream>
using namespace std;


class Admin{
		private:
			string company_name;
			double total_annual_revenue;
			
		protected:
			double manager_salary;
			double employee_salary;
			int total_staff;
			bool can_terminate;
			
		public:
			void setAdminvalues(
			string name,double m_salary,double e_salary,int staff,double revenue,bool terminate)
			{
				company_name = name;
				manager_salary = m_salary;
				employee_salary = e_salary;
				total_staff = staff;
				can_terminate = terminate;	
			}
			
};

class Manager: public Admin{
		public : 
			void myAccess(){
				cout<<"manager's Access : "<<endl;
				cout<<"manager salary : "<<manager_salary<<endl;
				cout<<"Employee salary : "<<employee_salary<<endl;
				cout<<"total staff : "<<total_staff<<endl;
				cout<<"Can terminate : "<<(can_terminate?"yes":"no")<<endl;
			}
};

class Employee: public Manager{
	public:
		void myAccess(){
			cout<<"employee access : "<<endl;
			cout<<"emoloyee salary : "<<employee_salary<<endl;
			cout<<"total staff  : "<<total_staff<<endl;
					}
};

int main(){
	Manager m;
	Employee e;
	m.setAdminvalues("tec",100,500,434,56856868,true);
	e.setAdminvalues("arti",13,44,44,42234,true);
	m.myAccess();
	cout<<"---------"<<endl;
	e.myAccess();
	

	}
