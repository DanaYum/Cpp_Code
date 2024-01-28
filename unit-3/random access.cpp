#include<bits/stdc++.h>
#include<fstream>
using namespace std;

class Employee
{
    private:
    char name[20];
    char employee_id[20];
    char joining_date[20];
    char position[20];
    char marital_status[20];
    char age[20];
    char salary[400];
    char comment[20];

    public:
    void getEmp_data()
    {
        cout << "Welcome to Hell..!!" << endl;
        cout << "************************" << endl;
        cout << "Employee Name: ";
        cin.getline(name, 20);
        cout << "Employee ID: ";
        cin.getline(employee_id, 20);
        cout << "Joining Date: (DD/MM/YYYY)";
        cin.getline(joining_date, 20);
        cout << "Employee Position: ";
        cin.getline(position, 20);
        cout << "Employee Marital Status: ";
        cin.getline(marital_status, 20);
        cout << "Employee Age: ";
        cin.getline(age, 20);
        cout << "Salary per month: ";
        cin.getline(salary, 400);
        cout << "Comment: ";
        cin.getline(comment, 20);

    }
    void showemp_data()
    {
        cout << "Employee Data" << endl;
        cout << "************************" << endl;
        cout << "Name : " << name << endl;
        cout << "Employee_ID : " << employee_id << endl;
        cout << "Joining Date : " << joining_date << endl;
        cout << "Position : " << position << endl;
        cout << "Marital Status : " << marital_status << endl;
        cout << "Salary : " << salary << endl;
        cout << "Comment : " << comment << endl;

    }
};

class library
{
    public:
    Employee Emp;
    fstream fp, fp1;

    void writeEmployee()
    {
        fp.open("Employee.txt", ios::out);
        if (fp)
        {
            Emp.getEmp_data();
            fp.write((char*)&Emp,sizeof(Emp));
            cout << "Record Store Successfully: " << endl;
        }
        fp.close();
    }
    void w_displayemp(){
			fp.open("employe.txt",ios::in);
			if(fp){
				while(fp.read((char*) & Emp,sizeof(Emp))){
					Emp.showemp_data();
				}
			}
		}
};
int main()
{
    library lib;
    lib.writeEmployee();
    lib.w_displayemp();

    return 0;
}