#include<iostream>
using namespace std;

class market
{
	public:
			int choice;
			int id  = 101;
			string pass = "Itisha@789";
			
			void verify()
				{	
					cout << "ENTER ID :" << id << endl;
					cout << "ENTER PASS :" << pass << endl << endl;
					cout << "*************************************************************"<< endl << endl;
				}
		
	private:
			int number;
			string name;
			int quantity;
			int kg;
			int price;
			double discount;
	
	public: 
	
		void memberRecord()
			{	
				cout << "parches item in the shop" << endl << endl;
				cout << "-------------------------------------------------------------"<< endl << endl;
				cout << "10 kg Bhaji" << endl;
				cout << "15 kg batata" << endl; 
				cout << "13 kg tameta"  << endl << endl;
				cout << "-------------------------------------------------------------"<< endl << endl;
			}
	
		void setdata()
			{
				cout << "ENTER NUMBER : ";
				cin  >> number;
				
				cout << "ENTER NAME : ";
				cin  >> name;
				
				cout << "ENTER KG : ";
				cin  >>kg;
				
				cout << "ENTER PRICE : ";
				cin  >> price;
				
				cout << "ENTER DISCOUNT : ";
				cin  >> discount ;
				
				cout <<endl;
				cout << "-------------------------------------------------------------"<< endl << endl;
			}
			
		void getdata()
		{
			cout << "ENTER NUMBER : "       << number 		<< endl
			 	 << "ENTER NAME : "         << name   		<< endl
			 	 << "ENTER KG : "    		<< kg		 	<< endl
			 	 << "ENTER PRICE : "		<< price   		<< endl
			 	 << "ENTER DISCOUNT : "		<< discount		<< endl;
			cout << "============================================================="<< endl << endl;
		}
		
		void allitem()
		{
			cout << "KG : 10\t NAME : Bhaji" << endl;
			cout << "KG : 15\t NAME :batata" << endl; 
			cout << "KG : 13\t NAME :tameta"  << endl;
			cout << "KG : " << kg << "\t" <<" NAME : " <<name <<endl; 
		}
		
	
};

int main()
{
	market S1;
	S1.verify();
	S1.memberRecord();
	S1.setdata();
	S1.getdata();
	S1.allitem();
}

