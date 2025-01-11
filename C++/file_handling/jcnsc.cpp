#include<bits/stdc++.h>
using namespace std;
#define ACADEMIC_YEAR "2023-2024"

class database
{
    public:
    string student_name,student_branch,student_address,student_fname,student_mname,
    student_room_no,student_mob_no,student_fmob_no,student_class,student_password;
    int student_id;
    database *next;
    database(string name,string fname,string mname,string address,string mob_no,string fmob_no,
    string branch,string sclass,string room_no,string password,int id)
    : student_name(name), student_fname(fname), student_mname(mname),
    student_address(address), student_mob_no(mob_no), student_fmob_no(fmob_no),
    student_branch(branch), student_class(sclass), student_room_no(room_no),student_password(password),
    student_id(id), next(NULL){}
};

database *insert(database *head,string name,string fname,string mname,string address,
    string mob_no,string fmob_no,string branch,string sclass,string room_no,string password,int id)
{
    database *tail=new database(name,fname,mname,address,mob_no,fmob_no,branch,sclass,room_no,password,id);
    if(head==NULL)
    return tail;
    database *ptr=head;
    while(ptr->next!=NULL)
    {ptr=ptr->next;}
    ptr->next=tail;
    return head;
}

database *middle_node(database *head,database *last)
{
    if(head==NULL){return NULL;}
    database *slow=head,*fast=head->next;
    while(fast!=last&&fast->next!=last)
    {
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
}

database *binary_search(database *start,database *last,int ID)
{
    database *mid=middle_node(start,last);
    if(last!=start||last==NULL)
    {
        if(mid->student_id==ID)
        return mid;
        else if(mid->student_id<ID)
        return binary_search(mid->next,last,ID);
        else
        return binary_search(start,mid,ID);
    }
    return NULL;
}

void student_data(database *student_ptr)
{
    cout<< "Name: "<< student_ptr->student_name<< endl;
    cout<< "Father's Name: "<< student_ptr->student_fname<< endl;
    cout<< "Mother's Name: "<< student_ptr->student_mname<< endl;
    cout<< "Address: "<< student_ptr->student_address<< endl;
    cout<< "Mobile Number: "<< student_ptr->student_mob_no<< endl;
    cout<< "Father's Mobile Number: "<< student_ptr->student_fmob_no<< endl;
    cout<< "Branch: "<< student_ptr->student_branch<< endl;
    cout<< "Class: "<< student_ptr->student_class<< endl;
    cout<< "Room Number: "<< student_ptr->student_room_no<< endl;
}

void New_addmission()
{
    cout<< "Enter 5 To Confirm: ";int confirm;l1: cin>> confirm;
    if(confirm!=5)
    {if(confirm==0){return;}cout<< "Enter 5 or 0 only: ";goto l1;}
    static database *psitian=NULL;
    string name,fname,mname,address,mob_no,fmob_no,
    branch,sclass,room_no,password;int id;
    cout<< "************************************\nEnter Your Details\n";
    cout<< "Enter Your Name: ";cin>> name;
    cout<< "Enter Your Father's Name: ";cin>> fname;
    cout<< "Enter Your Mother's Name: ";cin>> mname;
    cout<< "Enter Your Address: ";cin>> address;
    cout<< "Enter Your Mobile Number: ";cin>> mob_no;
    cout<< "Enter Your Father's Mobile Number: ";cin>> fmob_no;
    cout<< "Enter Your Opted Branch: ";cin>> branch;
    cout<< "Enter Student's Class: ";cin>> sclass;
    cout<< "Enter Student's Room Number: ";cin>> room_no;
    cout<< "Enter Your Password: ";cin>> password;
    cout<< "Enter Student's ID: ";cin>> id;
    psitian=insert(psitian,name,fname,mname,address,mob_no,fmob_no,
    branch,sclass,room_no,password,id);
}

int main() 
{
    int n;database *psitian=NULL;
    cout<< "Enter number of addmissions in academic year "<< ACADEMIC_YEAR<< ": ";cin>> n;
    cout<< "\nInput Addmitted Student's Record:-\n";
    for(int i=1; i<=n; i++)
    {
        string name,fname,mname,address,mob_no,fmob_no,
        branch,sclass,room_no,password;int id;
        cout<< "************************************\nEnter "<< i<< " Student record\n";
        cout<< "Enter Student's Name: ";cin>> name;
        cout<< "Enter Father's Name: ";cin>> fname;
        cout<< "Enter Mother's Name: ";cin>> mname;
        cout<< "Enter Student's Address: ";cin>> address;
        cout<< "Enter Student's Mobile Number: ";cin>> mob_no;
        cout<< "Enter Father's Mobile Number: ";cin>> fmob_no;
        cout<< "Enter Student's Branch: ";cin>> branch;
        cout<< "Enter Student's Class: ";cin>> sclass;
        cout<< "Enter Student's Room Number: ";cin>> room_no;
        cout<< "Enter Student's Password: ";cin>> password;
        cout<< "Enter Student's ID: ";cin>> id;
        psitian=insert(psitian,name,fname,mname,address,mob_no,fmob_no,
        branch,sclass,room_no,password,id);
    }
    int enquiry;
    cout<< "Enter Your ID: "; 
    cin>> enquiry;
    database *student_ptr=binary_search(psitian,NULL,enquiry);
    student_data(student_ptr);
}