#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

struct personalrecord{
    string name;
    string dob;
    string phonenumber;
};

bool comparebyname(const personalrecord &a ,const personalrecord &b){
    return a.name<b.name ;
}

int main(){
    vector<personalrecord> records;
    int numrecords;

    cout<<"Enter no of records you want to store:";
    cin>>numrecords;
    cin.ignore();

    for (int i=0;i<numrecords;i++){
        personalrecord record;
        cout<<"\nEnter name :";
        getline(cin,record.name);

        cout<<"Enter date of birth (in YYYY-MM-DD format :)";
        getline(cin,record.dob);

        cout<<"Enter phone number:";
        getline(cin,record.phonenumber);

        records.push_back(record);
    }


    sort(records.begin(),records.end(),comparebyname);

    cout<<"Sorted records by name:\n";
    for (const auto &record:records){
        cout<<"Name:"<<record.name<<", Date of birth :"<<record.dob<<", Phonenumber:"<<record.phonenumber<<endl;
    }

    string searchname;
    cout<<"Enter name you want to search ";
    getline(cin,searchname);

    auto it = find_if(records.begin(),records.end(),[&searchname] (const personalrecord &record)
                    {return record.name==searchname; });

    if (it !=records.end()){
        cout<<"Name:"<<it->name<<", Date of birth :"<<it->dob<<", Phonenumber:"<<it->phonenumber<<endl;
    }else{
        cout<<"name not found in database!!";
    }

    return 0;
}
