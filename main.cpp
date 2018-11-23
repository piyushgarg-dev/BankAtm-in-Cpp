#include <iostream>
#include <fstream>

using namespace std;

void deposit()
{
    // for user ABC
    int dep,tot;
    cout << "ENTER THE AMOUNT YOU WANT TO DEPOSIT -->\t";
    cin >>dep;
    tot=dep+5000;
    cout << "MONEY IN ACCOUNT --> \t"<<tot;
    fstream gupta("abc.txt",ios::app);
    gupta << "****| NEW DEPOSIT |****\n";
    gupta << "YOUR NEW AMOUNT ---> \t"<<tot;
    gupta.close();
}
void dep()
{
    //for user xyz
    int depo,tot;
    cout << "ENTER THE AMOUNT YOU WANT TO DEPOSIT -->\t";
    cin >>depo;
    tot=depo+10000;
    cout << "MONEY IN ACCOUNT --> \t"<<tot;
    fstream sharma("xyz.txt",ios::app);
    sharma << "****| NEW DEPOSIT |****\n";
    sharma << "YOUR NEW AMOUNT ---> \t"<<tot;
    sharma.close();

}
class A
{
public:
    int tot,with;
    void withdraw()
    {
        cout <<"ENTER THE AMOUNT YOU WANT TO WITHDRAW --> \t";
        cin>>with;
        if(with<=5000)
        {
            tot=5000-with;
            cout << "MONEY IN ACCOUNT --> \t"<<tot;
            fstream gupta("abc.txt",ios::app);
            gupta << "****| MONEY AFTER WITHDRAWL |****\n";
            gupta <<"YOUR NEW BALANCE --> \t"<<tot;
            gupta.close();
        }
        else {
                /*piyush garg!*/
                cout << "INSUFFICENT BALANCE \n";

        }
    }
    void withd()
    {
        cout <<"ENTER THE AMOUNT YOU WANT TO WITHDRAW --> \t";
        cin>>with;
        if(with<=10000)
        {
            tot=10000-with;
            cout << "MONEY IN ACCOUNT --> \t"<<tot;
            fstream sharma("xyz.txt",ios::app);
            sharma << "****| MONEY AFTER WITHDRAWL |****\n";
            sharma <<"YOUR NEW BALANCE --> \t"<<tot;
            sharma.close();
        }
        else {
                cout << "INSUFFICENT BALANCE \n";

        }
    }

};


int main()
{
    // MADE BY PIYUSH GARG //
    int pin,ch,cha,a,d;
    string fname,lname;
   // char eid[2000];
    char ph[12];
    char y[20000];
    char detail[2000];
    fstream garg("piyush.txt");
    fstream gupta ("abc.txt");
    fstream sharma ("xyz.txt");
    A obj;

    cout<< "***********| MADE BY PIYUSH GARG |***********   \n\n";
    cout<< "***********| WELCOME TO ABC BANK |***********   \n\n";
    cout<< "PLEASE SELECT AN OPTION \n";
    cout << "PRESS 1. TO ENTER USER PANNEL    \n";
    cout << "PRESS 2. TO ENTER ADMIN PANNEL   \n";
    cout << "PRESS 3. TO CREATE A NEW ACCOUNT \n";

    cin>>ch;
    switch(ch)
    {

  case 1:
    cout<< "PLEASE ENTER A YOUR PIN --->        \t ";
    cin>>pin;
    if(pin==123)
    {
        cout << "\n";
        cout << "***| WELCOME USER |***";
      fstream gupta("abc.txt",ios::in);
      while(!gupta.eof())
      {


      gupta.getline(y,2000);
      cout <<"\n"<< y;
      }
      gupta.close();
      cout << "\n";
      cout << "PRESS 1. TO DEPOSIT MONEY \n";
      cout << "PRESS 2. TO WITHDRAW MONEY \n";
      cin >>d;
      switch(d)
      {
          case 1: deposit();
          break;
          case 2: obj.withdraw();
          break;
                      default:
                cout << " invalid command";
      }

    }

    if(pin==456)
    {

            cout << "\n";
        cout << "***| WELCOME USER |***";
      fstream sharma("xyz.txt",ios::in);
      while(!sharma.eof())
      {


      sharma.getline(y,2000);
      cout <<"\n"<< y;
      }
      sharma.close();
      cout << "\n";
      cout << "PRESS 1. TO DEPOSIT MONEY \n";
      cout << "PRESS 2. TO WITHDRAW MONEY \n";
      cin>>d;
      switch(d)
      {
        case 1: dep();
        break;
        case 2: obj.withd();
        break;
                    default:
                cout << " invalid command";
      }



    }


    break;

  case 2:
      cout << "ENTER THE ADMIN PASSWORD -->\t";
      cin >>a;
      if(a==6789)
      {


      {
          cout << "\n";
          cout << "*****| WELCOME ADMIN__MR.PIYUSH GARG|*****\n\n";
          cout << "PLEASE ENTER AN ACCOUNT NUMBER --> \t";
          cin >>pin;
          if(pin==123)
          {
              cout << "\n";
        //cout << "***| WELCOME USER |***";
      fstream gupta("abc.txt",ios::in);
      while(!gupta.eof())
      {


      gupta.getline(y,2000);
      cout <<"\n"<< y;
      }
      //gupta.close();
      cout << "PRESS 1. TO EDIT THIS ACCOUNT \n";
      cin>>cha;
      switch(cha)
      {
          case 1:
          cout << "ENTER THE DETAILS YOU WANT TO ENTER \n";
          cin>>detail;
          fstream gupta("abc.txt",ios::app);
          gupta<<"EDITING DONE BY ADMIN (PIYUSH GARG) -:\n\n";
          gupta<<detail;
           fstream h("abc.txt",ios::in);
      while(!h.eof())
      {


      h.getline(y,2000);
      cout <<"\n"<< y;
      }
      //gupta.close();

         // gupta.close();

          cout << "THANKU FOR EDITING !! | | BIE!!BIE \n";








          // case 2 of xyz sharma admin pannel starts here MR.PIYUSH

          break;
      }
          }
      }
      }




          case 3:
              fstream file("new_users.txt",ios::app);
              cout << "*****| CREATING A NEW ACCOUNT |*****\n\n\n";
            cout << "PLEASE ENTER YOUR DETAILS -: \n\n";
            cout << "FIRST NAME --> \t";
            cin >> fname;
            cout << "LAST NAME --> \t";
            cin >> lname;
            cout << "MOB. NO.  --> \t";
            cin >> ph;
            cout << "\n";
            cout << "THANQ YOUR DETAILS ARE SAVED SUCCESFULLY \n";
            file << "****| NEW USER |***\n";
            file << "NAME -->    \t"<<fname<<' '<<lname;
            file << "\n";
            file<< "MOB. NO. --> \t"<<ph;
            break;

          /*  default:
                cout << " invalid command";*/



    }



    return 0;

}

