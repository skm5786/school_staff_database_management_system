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
    string professionaleducation;
protected:
    educational_qualification(){
        professionaleducation="0";
    }
//    educational_qualification(string e){
//        generaleducation=e;
//    }
    void showgeneraleducation(){
        cout<<"professional education is "<<professionaleducation<<"\n";
    }
};
    class teacher:protected staff,protected educational_qualification{
        string subject;
        int publication;
    public:
        void updatesubject(){
            cout<<"enter new subject: ";
            cin>>subject;
        }
        void updatepublication(){
            cout<<"enter new publication: ";
            cin>>publication;
        }
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
    void updategrade(){
        cout<<"enter new grade\n";
        cin>>grade;
    }
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
    void updatespeed(){
        cout<<"enter new speed\n";
        cin>>speed;
    }
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
    void updatespeed(){
        cout<<"enter new speed\n";
        cin>>speed;
    }
    void updatedailywages(){
        cout<<"enter new daily wages\n";
        cin>>dailywages;
    }
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
    cout<<"enter professional education of teacher: ";
    cin>>professionaleducation;
}
void officer::getinfo(){
    cout<<"enter officer code: ";
    cin>>code;
    cout<<"name of officer: ";
    cin>>name;
    cout<<"enter grade of officer: ";
    cin>>grade;
    cout<<"enter professional education of officer: ";
    cin>>professionaleducation;
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
    int i=0,j=0;
    int k=0;
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
        cout<<setw(39)<<"press 9 to edit  data\n";
        cout<<setw(34)<<"press 10 to exit\n";
        cin>>k;
        switch (k) {
            case (1):
                cout<<"enter regular typist "<<i+1<<" data\n";
                a[i].getinfo();
                i++;
                break;
            case (2):
                cout<<"enter casual typist "<<i+1<<" data\n";
                b[i].getinfo();
                i++;
                break;
            case (3):
                cout<<"enter teacher "<<i+1<<" data\n";
                c[i].getinfo();
                i++;
                break;
            case (4):
                cout<<"enter officer "<<i+1<<" data\n";
                d[i].getinfo();
                i++;
                break;
            case (5):
                cout<<"enter regulartypist number\n";
                cin>>j;
                a[j-1].showinfo();
                break;
            case (6):
                cout<<"enter casualtypist number\n";
                cin>>j;
                b[j-1].showinfo();
                break;
            case (7):
                cout<<"enter teacher number\n";
                cin>>j;
                c[j-1].showinfo();
                break;
            case (8):
                cout<<"enter officer number\n";
                cin>>j;
                d[j-1].showinfo();
                break;
            case 9:
            {
                int j=0,l=0, m=0;
                ;
                cout<<"enter 1 to update regular typist data\n";
                cout<<"enter 2 to update casual typist data\n";
                cout<<"enter 3 to update teacher data\n";
                cout<<"enter 4 to update officer data\n";
                cin>>j;
                switch (j) {
                    case 1:
                        cout<<"enter regular typist no: ";
                        cin>>l;
                        a[l-1].updatespeed();
                        break;
                    case 2:
                        cout<<"enter casual typist no: ";
                        cin>>l;
                        cout<<"press 1 to update speed: \n";
                        cout<<"press 2 to update daily wages: \n";
                        cin>>m;
                        switch (m) {
                            case (1):
                                b[l-1].updatespeed();
                                break;
                            case (2):
                                b[l-1].updatedailywages();
                                break;
                            default:
                                cout<<"you have entered wrong code\n";
                                break;
                        }
                        break;
                    case 3:
                        cout<<"enter teacher no: ";
                        cin>>l;
                        cout<<"press 1 to update subject: \n";
                        cout<<"press 2 to update publication: \n";
                        cin>>m;
                        switch (m) {
                            case (1):
                                c[l-1].updatesubject();
                                break;
                            case (2):
                                c[l-1].updatepublication();
                                break;
                            default:
                                cout<<"you have entered wrong code\n";
                                break;
                        }
                        break;
                    case 4:
                        cout<<"enter officer no: ";
                        cin>>l;
                        d[l-1].updategrade();
                    default:
                        cout<<"you have entered wrong code\n";
                        break;
                
            }
            }
                break;
            case 10:
                exit(1);
            default:
                cout<<"you have entered wrong code\n";
                break;
        }
    }
    return 0;
}
