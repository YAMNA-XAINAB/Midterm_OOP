#include <iostream>
#include <fstream>

using namespace std;
static int id_std=0;
static int id_crs=0;
static int id_atnd=0;
static int counter1=0;
static int counter2=0;
class Student{
public:
int id;
string name;
string section;
string grade;
Student(int id=0,string name=" ",string section=" ",string grade=""){
this->id=id;
this->name=name;
this->section=section;
this->grade=grade;
}
void set_std_id(int id){
this->id=id;
}
int get_std_id(){
return id;

}
void set_std_name(string name){
this->name=name;
}
string get_std_name(){
return name;
}
void set_std_setion(string section){
this->section=section;

}
string set_std_grade(string grade){
this->grade=grade;
}
void insert_std_info(int id,string name,string section,string grade){
this->id=id;
this->name=name;
this->section=section;
this->grade=grade;
}
void display_all(){
cout<<"-*_*_*_*_*_*Student Detail_*_*_*_*_*_*_*"<<endl;
cout<<"Student ID: "<<id<<endl;
cout<<"Student Name: "<<name<<endl;
cout<<"Student Section: "<<section<<endl;
cout<<"Student Grade: "<<grade<<endl;
}

};

/**Class Course **/
class course{
private:
int course_id;
string course_name;
//COmposition
public:
course(int course_id=0, string course_name=" "){

this->course_id=course_id;
this->course_name=course_name;
}
void insert_course_info(int course_id,string course_name){
this->course_id=course_id;
this->course_name=course_name;
}
void display_courses_all(){
cout<<"_*_*_*_*_*_* Courses Detail"<<endl;
cout<<"Course ID: "<<course_id<<endl;
cout<<"Course Name: "<<course_name<<endl;
}

};

class attendance{
private:
int atnd_id;
string atnd_date;
string atnd_session;
bool status;

Student std;
public:
attendance(int atnd_id=0,string atnd_date=" ",string atnd_session=" ",bool status=0){
this->atnd_id=atnd_id;
this->atnd_date=atnd_date;
this->atnd_session=atnd_session;
this->status=status;
}
void insert_attendance_info(int id,string date,string sess,bool status){
atnd_id=id;
atnd_date=date;
atnd_session=sess;
status=status;
}
void display_attendance_all_crs(){
cout<<"___Attendance Detail____"<<endl;
cout<<"Attendance ID: "<<atnd_id<<endl;
cout<<"Attendance Session: "<<atnd_session<<endl;
cout<<"Attendance status: "<<status<<endl;

}
void set_id(int id){
atnd_id=id;
}
int get_id(){
return atnd_id;
}
void set_date(string date){
atnd_date=date;

}
string get_date(){
return atnd_date;
}
void set_session(string session){
atnd_session=session;
}
string get_session(){
return atnd_session;
}
void set_attendance(bool flag){
status=flag;
}
bool get_attendance(){
return status;
}

};
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void display(attendance obj[],int id){
cout<<"_*_*_*_*_*Attendance Detail: _*_*_*_*"<<endl;
int temp;
for (int i=0;i<=counter2;i++){
if(obj[i].get_id()==id)
temp=i;

}
if(temp!=-1){

cout<<"Attendance :"<<endl;
cout<<" Date: "<<obj[temp].get_date()<<endl;
cout<<" Session: "<<obj[temp].get_session()<<endl;
cout<<" Status: "<<obj[temp].get_attendance()<<endl;
}
else{
cout<<"Record not found"<<endl;
}
}

int main() {

//std = new Student[10];
char option1;
char option;

Student std;
attendance atnd[20];

string date;
string session;
bool status;
int id;

do{
system("cls");

cout<<"Student Atendance Menu"<<endl;
cout<<"Press 1 for Add attendance"<<endl;
cout<<"Press 2 for Update Attendance"<<endl;
cout<<"Press 3 for Delete Attendnce"<<endl;
cout<<"press 0 for exit "<<endl;
cout<<"Please Enter Your Choice: ";
cin>>option;
if(option!='0'){

switch(option){
case '1':
cout<<"_*_*_*_*_**_*Attendance Upload Center_*_*_*_**_*_*_*_*"<<endl;

cout<<"PLz Enter Following Detail: "<<endl;
cout<<"Enter Date: ";
cin>>date;
cout<<"Enter Session: ";
cin>>session;
cout<<"Enter attendance Status (For presesnt enter 1 or For Absent student press 0): "<<endl;

cin>>status;
atnd[counter2].insert_attendance_info(id_atnd,date,session,status);

cout<<"Record Successfully Submitted and Successfully updated in Datafile"<<endl;

counter2++;
id_atnd++;
break;
case '2':
cout<<"Plz Enter attendance id: "<<endl;
cin>>id;
cout<<"Plz enter update attendance status:"<<endl;
cin>>status;
atnd[counter2].set_attendance(status);
cout<<"your data has been succesfully updated and also in Datafile";
break;
case '3':
cout<<"Plz Enter Attendance id which should b deleted: "<<endl;
cin>>id;
cout<<"Your record has succesfully been deleted";
break;
case '4':
cout<<"Show All Info"<<endl;
for(int i=0;i<counter2;i++){
atnd[i].display_attendance_all_crs();

}
break;

default:
cout<<"You have entered incorrect Choice"<<endl;

}
cout<<"Press any key to exit or press 0 for exit: ";
cin>>option;}
else{
cout<<"exiting"<<endl;
}
}while(option!='0');/*
std[0].insert_std_info(10,"Yamna","A","First");
std[0].display_all();
atnd[0].insert_attendance_info(1,"06-06-2020","Evening",1);
atnd[0].display_attendance_all_crs();
*/
return 0;
}


