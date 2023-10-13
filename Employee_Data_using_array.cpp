#include<iostream>
using namespace std;
int main(){
    int no ;
    cout<<"Enter the number of employees "<<endl;
    cin>>no;
    int age[no];
    long int salary[no];
    string name[no];
    for(int i=0;i<no;i++){
        cout<<"Enter the details of employee "<<endl;
        cout<<"Enter name "<<endl;
        cin>>name[i];
        cout<<"Enter salary"<<endl;
        cin>>salary[i];
        cout<<"enter age"<<endl;
        cin>>age[i];
    }   
    for(int i=0;i<no;i++){
        cout<<"Details of employee "<<i+1<<"are: "<<endl;
        cout<<"Name of employee is: "<<name[i]<<endl;
        cout<<"Salary of employee is: "<<salary[i]<<endl;
        cout<<"Age of employee is: "<<age[i]<<endl;
    }
    return 0;
}
