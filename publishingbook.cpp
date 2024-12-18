#include<iostream>
#include<string>
#include<stdexcept>
using namespace std;

class publication {
    protected:
    string title;
    float price;
    public:

    publication(string t="",float p=0.0): title(t),price(p) {}

    virtual void display(){
        cout<<"\nTitle :"<<title<<endl;
        cout<<"Price:"<<price<<endl;
    }
};

class book:public publication {
    private:
    int pagecount;
    public:
    book(string t="",float p=0.0 , int pg=0.0): publication(t,p),pagecount(pg){}

    void display()override{
        publication::display();
        cout<<"Pages :"<<pagecount<<endl;
    }

    void input(){
        cout<<"\nEnter title of book :";
        getline(cin,title);
        cout <<"Enter price the book :";
        cin>>price;
        cout<<"Enter page count :";
        cin>>pagecount;
        cin.ignore();

    }
};

class tape: public publication{
    private:
    float playingtime ;
    public:
    tape(string t="",float p=0.0,float pt=0.0):publication(t,p),playingtime(pt){}

    void display()override{
        publication::display();
        cout<<"playing time of tape:"<<playingtime<<endl;
    }
    void input(){
        cout<<"\nEnter title of tape :";
        getline(cin,title);
        cout<<"Enter price of tape :";
        cin>>price;
        cout<<"Eneter pyaing time of tape ";
        cin>>playingtime;
    }
};


int main(){
    try{
        book b;
        tape t;

        cout<<"Enter book details:";
        b.input();

        cout<<"Enter tape details :";
        t.input();

        cout<<"\nBOOK DETAILS ARE :";
        b.display();

        cout<<"\nTAPE DETAILS ARE :";
        t.display();

    }catch(const exception& e){
        cout<<"exception caught !!!"<<e.what()<<endl;
        cout<<"\nResetting data values to zero "<<endl;

        book b("",0.0,0);
        tape t("",0.0,0.0);
        cout<<"\nBOOK DETAILS ARE :";
        b.display();

        cout<<"\nTAPE DETAILS ARE :";
        t.display(); 
    }
}

