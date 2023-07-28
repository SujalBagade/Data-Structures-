#include<iostream>
using namespace std;
struct Database {
    int StudentId;
    char StudentName[100];
    int age;
    char Grade;
};
Database * createStudent(){
    Database *db = new Database;
    cout <<"Enter Student Id: "<<endl;
    cin>>db->StudentId;
    cout<<"Enter Student Name: "<<endl;
    cin>>db->StudentName;
    cout<<"Enter Age: "<<endl;
    cin>>db->age;
    cout<<"Enter Grade: "<<endl;
    cin>>db->Grade;
    return db;
    
}
void DisplayStudent(Database *db){
    cout<<"Student Id: "<<db->StudentId<<endl;
    cout<<"Student Name: "<<db->StudentName<<endl;
    cout<<"Student age: "<<db->age<<endl;
    cout<<"Student Grade: "<<db->Grade<<endl;
}
int main (){
    Database *db1 = createStudent();
    DisplayStudent(db1);
    return 0;

    
    
}
