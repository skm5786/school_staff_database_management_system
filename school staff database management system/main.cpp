#include <iostream>
#include <string>
#include <iomanip>
using namespace::std;
class staff{
protected:
    int code;
    string name;
protected:
    staff(){
        code=0;
        name="0";
    }
//    staff(int a,string p){
//        code =a;
//        name=p;
//    }
    void showcode(){
        cout<<"code is "<<code<<"\n";
    }
    void showname(){
        cout<<"name is "<<name<<"\n";
    }
};
class educational_qualification{
protected:
    string generaleducation;
protected:
    educational_qualification(){
        generaleducation="0";
    }
//    educational_qualification(string e){
//        generaleducation=e;
//    }
    void showgeneraleducation(){
        cout<<"general education is "<<generaleducation<<"\n";
    }
};
    class teacher:protected staff,protected educational_qualification{
        string subject;
        int publication;
    public:
        void getinfo();
        teacher(){};
        void showinfo(){
           
            showcode();
            showname();
            cout<<"subject of teacher is "<<subject<<"\n";
            cout<<"publication of teacher is "<<publication<<"\n";
            showgeneraleducation();
        }
        
    };
class officer:protected staff,protected educational_qualification{
    int grade;
public:
    officer(){};
    void getinfo();
    void showinfo(){
        showcode();
        showname();
        cout<<"grade of officer is "<<grade<<"\n";
        showgeneraleducation();
    }
};
class typist: protected staff{
protected:
    int speed;
protected:
    typist(){};
    void showspeed(){
        cout<<"speed of typist in words per minute is "<<speed<<"\n";
    }
};
class regulartypist:protected typist{
public:
    regulartypist(){};
    void getinfo();
    void showinfo(){
        showcode();
        showname();
        showspeed();
    }
    
};
class casualtypist:protected typist{
    int dailywages;
public:
    casualtypist(){};
    void getinfo();
    void showinfo(){
        showcode();
        showname();
        showspeed();
        cout<<"daily wages of casual typist is "<<dailywages<<"\n";
    }
    
};
void teacher::getinfo(){
    
    cout<<"enter teacher code: ";
    cin>>code;
    cout<<"name of teacher: ";
    cin>>name;
    cout<<"enter subject of teacher: ";
    cin>>subject;
    cout<<"enter publication of teacher: ";
    cin>>publication;
    cout<<"enter general education of teacher: ";
    cin>>generaleducation;
}
void officer::getinfo(){
    cout<<"enter officer code: ";
    cin>>code;
    cout<<"name of officer: ";
    cin>>name;
    cout<<"enter grade of officer: ";
    cin>>grade;
    cout<<"enter general education of officer: ";
    cin>>generaleducation;
}
void regulartypist::getinfo(){
    cout<<"enter regulartypist code: ";
    cin>>code;
    cout<<"name of regulartypist: ";
    cin>>name;
    cout<<"enter speed of regulartypist: ";
    cin>>speed;
    
}
void casualtypist::getinfo(){
    cout<<"enter casualtypist code: ";
    cin>>code;
    cout<<"name of casualtypist: ";
    cin>>name;
    cout<<"enter speed of casualtypist: ";
    cin>>speed;
    cout<<"enter dailywages of casualtypist: ";
    cin>>dailywages;
}
int main(){
    regulartypist a[50];
    casualtypist b[50];
    teacher c[50];
    officer d[50];
    int k=0,i=0,j=0;
    while (1) {
        cout<<setw(40)<<"School database system\n";
        cout<<setw(40)<<"______________________\n";
        cout<<setw(54)<<"press 1 to enter regular typist data\n";
        cout<<setw(53)<<"press 2 to enter casual typist data\n";
        cout<<setw(47)<<"press 3 to enter teacher data\n";
        cout<<setw(47)<<"press 4 to enter officer data\n";
        cout<<setw(53)<<"press 5 to show regular typist data\n";
        cout<<setw(52)<<"press 6 to show casual typist data\n";
        cout<<setw(46)<<"press 7 to show teacher data\n";
        cout<<setw(46)<<"press 8 to show officer data\n";
        cout<<setw(33)<<"press 9 to exit\n";
        cin>>k;
        switch (k) {
            case 1:
                cout<<"enter regular typist "<<i+1<<" data\n";
                a[i].getinfo();
                i++;
                break;
            case 2:
                cout<<"enter casual typist "<<i+1<<" data\n";
                b[i].getinfo();
                i++;
                break;
            case 3:
                cout<<"enter teacher "<<i+1<<" data\n";
                c[i].getinfo();
                i++;
                break;
            case 4:
                cout<<"enter officer "<<i+1<<" data\n";
                d[i].getinfo();
                i++;
                break;
            case 5:
                cout<<"enter regulartypist number\n";
                cin>>j;
                a[j-1].showinfo();
                break;
            case 6:
                cout<<"enter casualtypist number\n";
                cin>>j;
                a[j-1].showinfo();
                break;
            case 7:
                cout<<"enter teacher number\n";
                cin>>j;
                a[j-1].showinfo();
                break;
            case 8:
                cout<<"enter officer number\n";
                cin>>j;
                a[j-1].showinfo();
                break;
            case 9:
                exit(1);
            default:
                cout<<"you have entered wrong code\n";
                break;
        }
    }
    
    return 0;
}
