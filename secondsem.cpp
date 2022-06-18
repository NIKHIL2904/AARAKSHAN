#include <bits/stdc++.h>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <conio.h>
#include <cstdlib>
#include<fstream>
using namespace std;

int day;
int month;
int year;
int daym;
int monthm;
int yearm;
string name;
string phonenumber;

int random_num(int lo, int hi)
{
     return rand()%(hi-lo)+lo;
}

class Customer
{
    public:
    int id;
    int age;
    char gender;
    char address[50];
    void getdetails();
    void displaydetails();
};

int random_num(int , int);

void Customer ::getdetails(void)
{
    cout << "***************************" << endl;
    cout << "Please enter the details as follows : " << endl;
    cout << "Name : "; getline(cin,name);
    cout << "Phone number : "; cin >> phonenumber;
    cout << "Date of birth  ";
        cout << " Day : " ; cin >> day;
        cout << "\t\tMonth : ";cin >> month;
        cout << "\t\tYear : ";cin >> year;
        age = 2021 - year ;
    cout << "Gender : "; cin >> gender;
    cout << "Address : "; fflush(stdin) ; fgets(address,50,stdin);
    cout << "***************************" << endl;
    id = random_num(1,504);
    displaydetails();
}

void Customer :: displaydetails(void)
{
    cout << "\n \n \n";
    cout << "***************************" << endl;
    cout << " Details given are as follows : " << endl;
    cout << " Name : " << name << endl;
    cout << " app id : " << id << endl;
    cout << " phone number : " << phonenumber << endl;
    cout << " DOB : " << day<<"/"<<month<<"/"<<year<< endl;
    cout << " age : " << age << endl;
    cout << " Gender : "<< gender << endl;
    cout << " address : " << address << endl;
    cout << "***************************" << endl;
}


class Hotel
{
private:
    int rating;
    string feedback;

public:
    map<int, string> m1;
    map<int, int> m2;
    map<int, string> m3;
    int a,b;
    int phn[10];
    void getdetails()
    {
        cout << "SELECT THE STATE : " << endl;
        cout << "1.Mumbai" << endl;
        cout << "2.Delhi" << endl;
        cout << "3.Punjab" << endl;
        cout << "4.Haryana" << endl
             << endl;
        m1[1] = "Mumbai";
        m1[2] = "Delhi";
        m1[3] = "Punjab";
        m1[4] = "Haryana";
        m2[1] = 989898;
        m2[2] = 150909;
        m2[3] = 12827;
        m2[4] = 902233;
        cout << "ENTER THE CHOICE " << endl;
        cin >> a;
        switch (a)
        {
        case 1:
            cout << "HOTELS PRESENT IN YOUR AREA : " << endl;
            cout << "1.Emirates Palace" << endl;
            cout << "2.Rancho Valencia" << endl;
            cout << "3.The Westin Excelsio" << endl;
            cout << "4.The Plaza" << endl;
            m3[1] = "Emirates Palace";
            m3[2] = "Rancho Valencia";
            m3[3] = "The Westin Excelsio";
            m3[4] = "The Plaza";
            cout << "ENTER THE CHOICE " << endl;
            cin >> b;
            break;

        case 2:
            cout << "HOTELS PRESENT IN YOUR AREA : " << endl;
            cout << "1.Burj Al" << endl;
            cout << "2.Marina Bay" << endl;
            cout << "3.Brown's Hotel" << endl;
            cout << "4.The Plaza" << endl;
            m3[1] = "Burj Al";
            m3[2] = "Marina Bay";
            m3[3] = "Brown's Hotel";
            m3[4] = "The Plaza";
            cout << "ENTER THE CHOICE " << endl;
            cin >> b;
            break;

        case 3:
            cout << "HOTELS PRESENT IN YOUR AREA : " << endl;
            cout << "1.The Brando" << endl;
            cout << "2.Tulemar Bungalows & Villas" << endl;
            cout << "3.Viroth's Hotel" << endl;
            cout << "4.The Plaza" << endl;
            m3[1] = "The Brando";
            m3[2] = "Tulemar Bungalows & Villas";
            m3[3] = "Viroth's Hotel";
            m3[4] = "The Plaza";
            cout << "ENTER THE CHOICE " << endl;
            cin >> b;
            break;

        case 4:
            cout << "HOTELS PRESENT IN YOUR AREA : " << endl;
            cout << "1.French Quarter" << endl;
            cout << "2.Rancho Valencia" << endl;
            cout << "3.The Westin Excelsio" << endl;
            cout << "4.Palacio Nazarenas" << endl;
            m3[1] = "French Quarter";
            m3[2] = "Rancho Valencia";
            m3[3] = "The Westin Excelsio";
            m3[4] = "Palacio Nazarenas";
            cout << "ENTER THE CHOICE " << endl;
            cin >> b;
            break;
        }
        displaydetails();
    }
    void displaydetails()
    {
        cout << endl
             << endl;
        cout << "STATE YOU SELECTED : " << m1.at(a) << endl
             << endl;
        cout << "THE NAME OF THE HOTEL YOU REQUESTED : " << m3.at(b) << endl
             << endl;
        cout << "AGENCY CONTACT NUMBER : " << m2.at(a) << endl
             << endl
             << endl;
        cout << "************MORE INFORMATIONS CAN BE OBTAINED FROM AGENCY :)************" <<endl
             <<endl;
        cout << endl
             << endl
             << "PRESS 1: TO CONTINUE" << endl;
        cout << "PRESS 2: TO RE-ENTER THE CHOICES " << endl;
        int ch1;
        cin >> ch1;
        if (ch1 == 2)
        {
            getdetails();
        }
        cout<<endl<<endl;
    }
    void feed()
    {
        cout << "ENTER THE RATING OF THE HOTEL :";
        cin >> rating;
        cout << "ENTER THE FEEDBACK :";
        fflush(stdin);
        getline(cin, feedback);
    }
};

class room : public Hotel
{

private:
    long int card;
    int pin;

protected:
    double amount_room;
    double amount1_room;
    int n_days;
    int n_rooms;

public:
    int r_number;
    map<int, string> m1;
    map<int, int> m2;
    int cinday;
    int cinmonth;
    int cinyear;
    int coutday;
    int coutmonth;
    int coutyear;
    void types()
    {
        r_number=random_num(1,1000);
        int ch;
        cout<<"PLEASE ENTER THE CHECKIN DATE :"<<endl;
        cout<<"DAY   :";
        cin>>cinday;
        cout<<"MONTH :";
        cin>>cinmonth;
        cout<<"YEAR  :";
        cin>>cinyear;
        cout<<endl<<endl<<"PLEASE ENTER THE CHECKOUT DATE :"<<endl;
        cout<<"DAY   :";
        cin>>coutday;
        cout<<"MONTH :";
        cin>>coutmonth;
        cout<<"YEAR  :";
        cin>>coutyear;
        cout<<endl<<endl;
        cout << "ENTER THE NUMBER OF ROOMS YOU WANT" << endl;
        cin >> ch;
        cout << "ENTER THE NUMBER OF DAYS YOU ARE STAYING" << endl;
        cin >> n_days;
        int a[ch];
        n_rooms = ch;
    loop:
        cout << "PLEASE SELECT AMONG THE CATEGORIES OF ROOMS AVAILABLE :" << endl
             << endl;
        cout << "1. LUXURY ROOM WITH KING SIZED BED WITH AC\t\t\t2000/per day" << endl;
        cout << "2. LUXURY ROOM WITH QUEEN SIZED BED WITH AC\t\t\t1500/per day" << endl;
        cout << "3. BASIC ROOM WITH DOUBLE BED WITH AC\t\t\t\t1200/per day" << endl;
        cout << "4. BASIC ROOM WITH DOUBLE BED WITHOUT AC\t\t\t900/ per day" << endl
             << endl;
        m1[1] = "LUXURY ROOM WITH KING SIZED BED WITH AC";
        m1[2] = "LUXURY ROOM WITH QUEEN SIZED BED WITH AC";
        m1[3] = "BASIC ROOM WITH DOUBLE BED WITH AC";
        m1[4] = "BASIC ROOM WITH DOUBLE BED WITHOUT AC";
        m2[1] = 2000;
        m2[2] = 1500;
        m2[3] = 1200;
        m2[4] = 900;
        for (int i = 0; i < ch; i++)
        {
            cout << "ENTER THE " << (i + 1) << " choice" << endl;
            cin >> a[i];
        }
        cout << "SO YOU WANT :-" << endl
             << endl;
        for (int i = 0; i < ch; i++)
        {
            amount_room = amount_room + m2.at(a[i]);
            cout << m1.at(a[i]) << endl;
        }
        amount_room = amount_room * n_days;
        cout << endl
             << "FOR " << n_days << " days, IS THAT CORRECT ? " << endl
             << endl;
        cout << endl
             << "PRESS 1: TO CONTINUE" << endl;
        cout << "PRESS 2: TO RE-ENTER THE CHOICES " << endl;
        int ch1;
        cin >> ch1;
        if (ch1 == 2)
        {
            amount_room = 0;
            goto loop;
            cout << endl;
        }
        else if (ch1 == 1)
        {

            cout << endl
                 << "YOUR TOTAL AMOUNT IS :";
            amount1_room = amount_room + amount_room * .18;
            cout << std::fixed;
            cout << std::setprecision(2);
            cout << amount1_room;
            int ca;
            cout << endl
                 << endl
                 << "PRESS 1: TO PAY BY CASH " << endl;
            cout << "PRESS 2: TO PAY BY CARD " << endl;
            cin >> ca;
            cout << endl
                 << endl;
            if (ca == 1)
            {
                bill(1);
            }
            else if (ca == 2)
            {
                cout << "PLEASE ENTER THE CARD NUMBER: ";
                cin >> card;
                cout << "PLEASE ENTER THE PIN: ";
                cin >> pin;
                cout << endl
                     << "THANK YOU FOR PROVIDING US THE DETAIL " << endl
                     << endl;
                bill(2);
            }

        }

    }
    void bill(int choice)
    {   fstream myfile;
        myfile.open("hotel.txt",ios::out);
        cout << "HERE IS YOUR BILL :)\n\n\n\n";
        cout << "*************************** WELCOME TO THE ROYAL PALACE ***************************" << endl;
        cout << "\n\n    GUEST'S NAME: \t\t\t\t "<<name<<endl;
        cout << "    CHECKIN DATE:\t\t\t\t"<< cinday<<"/"<<cinmonth<<"/"<<cinyear << endl;
        cout << "    CHECKOUT DATE:\t\t\t\t"<< coutday<<"/"<<coutmonth<<"/"<<coutyear << endl << endl;
        cout << std::fixed;
        cout << std::setprecision(2);
        cout << "    STATUS : \t\t\t\t    PAYMENT SUCCESSFULL " << endl;
        if (choice == 1)
        {
            cout << "    MODE OF PAYMENT :\t\t\t\tPAID BY CASH" << endl
                 << endl;
        }
        else if (choice == 2)
        {
            cout << "    MODE OF PAYMENT :\t\t\t\tPAID BY CARD" << endl
                 << endl;
        }

        cout << "    ROOMS ALOTTED :\t\t\t\t";
        for (int i = 0; i < n_rooms; i++)
        {
            int ra = random_num(1, 501);
            std::cout << ra << endl
                      << "\t\t\t\t\t\t";
        }
        cout << endl
             << endl;
        std::cout << "    TOTAL AMOUNT:\t\t\t\t" << amount_room << endl;
        amount1_room = amount_room + amount_room * .18;
        myfile<<amount1_room;
        myfile<<endl;
        std::cout << std::fixed;
        std::cout << std::setprecision(2);
        std::cout << "    TOTAL AMOUNT (18% GST):\t\t\t" << amount1_room << endl
                  << endl;
        cout << "************************************************************************************" << endl;
        cout << "                         THANK YOU AND STAY SAFE " << endl;
        cout << "                           VISIT US AGAIN SOON  " << endl;
        cout << "************************************************************************************" << endl;
        myfile.close();
    }

};

class transport : public Hotel
{
private:
    long int card;
    int pin;

protected:
    double amount_transp;
    double amount1_transp;

public:
    string p_no = "9787878XXX";
    int n_vehicles;
    char op;
    double distance;
    map<int, string> m1;
    map<int, int> m2;
    void types()
    {
        fflush(stdin);
        char temp;
        cout << "DO YOU WANT TRANSPORT FACILITY FOR HOTEL : " << endl;
        cin >> temp;
        if (temp == 'Y')
        {
            int ch;
        loop:
            cout << "PLEASE SELECT THE TYPE OF VEHICLE YOU WANT :-" << endl;
            cout << "1. BUS\t\t\t30/per km" << endl;
            cout << "2. CAR\t\t\t15/per km" << endl;
            m1[1] = "BUS";
            m1[2] = "CAR";
            m2[1] = 30;
            m2[2] = 15;
            cin >> ch;
            cout << endl;

            cout << "ENTER THE NUMBER OF " << m1.at(ch) << " YOU WANT :";
            cin >> n_vehicles;
            cout << endl
                 << endl
                 << "ENTER THE DISTANCE FROM YOUR HOME : ";
            cin >> distance;

            cout << endl
                 << endl
                 << "HERE IS THE DETAIL OF THE JOURNEY :-" << endl;
            cout << "DESTINATION :\t\t" << m3.at(a) << endl;
            cout << "MODE TYPE :\t\t" << m1.at(ch) << endl;
            cout << "No. OF VEHICLES :\t" << n_vehicles << endl;
            amount_transp = n_vehicles * (distance * m2.at(ch));
            amount1_transp = (amount_transp * .05) + amount_transp;
            cout << "TOTAL AMOUNT :\t\t" << amount1_transp << endl;

            cout << endl
                 << "PRESS 1: TO CONTINUE" << endl;
            cout << "PRESS 2: TO RE-ENTER THE CHOICES " << endl;
            int ch1;
            cin >> ch1;
            if (ch1 == 2)
            {
                amount_transp = 0;
                goto loop;
                cout << endl;
            }
            else if (ch1 == 1)
            {
                int ca;
                cout << endl
                     << endl
                     << "PRESS 1: TO PAY BY CASH " << endl;
                cout << "PRESS 2: TO PAY BY CARD " << endl;
                cin >> ca;
                cout << endl
                     << endl;
                if (ca == 1)
                {
                    amt(1, ch);
                }
                else if (ca == 2)
                {
                    cout << "PLEASE ENTER THE CARD NUMBER: ";
                    cin >> card;
                    cout << "PLEASE ENTER THE PIN: ";
                    cin >> pin;
                    cout << endl
                         << "THANK YOU FOR PROVIDING US THE DETAIL " << endl
                         << endl;
                    amt(2, ch);
                }
            }
        }
        else
        {
            cout << "THANKYOU FOR VISITING" << endl;
        }
    }
    void amt(int choice, int choice1)
    {   fstream myfile;
        myfile.open("transport.txt",ios::out);
        cout << "HERE IS YOUR BILL :)\n\n\n\n";
        cout << "*************************** WELCOME TO THE ROYAL PALACE ***************************" << endl;
        cout << "\n\n    GUEST'S NAME: \t\t\t\t SHIVAM SINGH";
        cout << "\n\n    GUEST'S PHONE: \t\t\t\t " << p_no[0] << p_no[1] << "*****" << p_no[7] << p_no[8] << p_no[9] << endl
             << endl;
        cout << "    DEPARTURE DATE:\t\t\t\t"
             << "dd/mm/yyyy" << endl
             << endl;
        cout << "    DROP ADDRESS:\t\t\t\t" << op << m3.at(a) << endl
             << endl;
        std::cout << std::fixed;
        std::cout << std::setprecision(2);
        cout << "    STATUS : \t\t\t\t    PAYMENT SUCCESSFULL " << endl;
        if (choice == 1)
        {
            cout << "    MODE OF PAYMENT :\t\t\t\tPAID BY CASH" << endl
                 << endl;
        }
        else if (choice == 2)
        {
            cout << "    MODE OF PAYMENT :\t\t\t\tPAID BY CARD" << endl
                 << endl;
        }
        cout << "    VEHICLE TYPE :\t\t\t\t" << m1.at(choice1) << endl;
        cout << "    VEHICLES BOOKED :\t\t\t\t";
        for (int i = 0; i < n_vehicles; i++)
        {
            char cch = 'A' + rand() % 26;
            char cch2 = 'A' + rand() % 26;
            int ra = random_num(1000, 9999);
            std::cout << "UP32" << cch << cch2 << ra << endl
                      << "\t\t\t\t\t\t";
        }
        cout << endl
             << endl;
        std::cout << "    TOTAL AMOUNT:\t\t\t\t" << amount_transp << endl;
        amount1_transp = amount_transp + amount_transp * .05;
        myfile<<amount1_transp;
        myfile<<endl;
        std::cout << std::fixed;
        std::cout << std::setprecision(2);
        std::cout << "    TOTAL AMOUNT (5% GST):\t\t\t" << amount1_transp << endl
                  << endl;
        cout << "************************************************************************************" << endl;
        cout << "                         THANK YOU AND STAY SAFE " << endl;
        cout << "                           VISIT US AGAIN SOON  " << endl;
        cout << "************************************************************************************" << endl;
        myfile.close();
    }


};

class Food : public room
{
private:
    long int card;
    int pin;

protected:
    double amount_food = 0;


public:
    map<int, string> m1;
    map<int, int> m2;
    map<int, string> m3;
    int choice;
    char acceptance;
    int n_plates;
    void getdetails()
    {
        cout << "Would you prefer food (Y/N)" << endl;
        cin >> acceptance;
        if (acceptance == 'Y')
        {

        loop:
            cout << "PLEASE SELECT THE MEALS YOU WANT :-" << endl;
            cout << "1. Breakfast\t\t\t  veg  \t\t\t200/per plate" << endl;
            cout << "2.          \t\t\tnon-veg\t\t\t400/per plate" << endl;
            cout << "3. Lunch\t\t\t  veg  \t\t\t100/per plate" << endl;
            cout << "4.      \t\t\tnon-veg\t\t\t300/per plate" << endl;
            cout << "5. Dinner\t\t\t  veg  \t\t\t500/per plate" << endl;
            cout << "6.       \t\t\tnon-veg\t\t\t700/per plate" << endl;
            m1[1] = "Breakfast_veg";
            m1[2] = "Breakfast_non-veg";
            m1[3] = "Lunch_veg";
            m1[4] = "Lunch_non-veg";
            m1[5] = "Dinner_veg";
            m1[6] = "Dinner_non-veg";
            m2[1] = 200;
            m2[2] = 400;
            m2[3] = 100;
            m2[4] = 300;
            m2[5] = 500;
            m2[6] = 700;
            cin >> choice;
            cout << endl;
            cout << "Enter number of plates you require : ";
            cin >> n_plates;
            amount_food += n_plates * (m2.at(choice));
            cout << "PRESS 1: TO CONTINUE" << endl;
            cout << "PRESS 2: TO RE-ENTER THE CHOICES " << endl;
            cout << "PRESS 3: TO ODER MORE " << endl;
            int ch;
            cin >> ch;
            if (ch == 2)
            {
                amount_food = 0;
                goto loop;
                cout << endl;
                cout << endl;
                cout << endl;
            }
            else if (ch == 3)
            {
                goto loop;
                cout << endl;
                cout << endl;
                cout << endl;
            }
            else
            {
                bill();
            }
        }
        else
        {
            cout << "Thankyou for visiting" << endl;
        }
    }
    void bill(void)
    {
        fstream myfile;
        myfile.open("Food.txt",ios::out);
        int ca;
        cout << "PRESS 1: TO PAY BY CASH " << endl;
        cout << "PRESS 2: TO PAY BY CARD " << endl;
        cin >> ca;
        if (ca == 1)
        {
            cout << "HERE IS YOUR BILL :)\n\n\n\n";
            cout<<"************************************************************************************";
            cout << "\n\n    GUEST'S NAME: \t\t\t\t "<<name;
            cout << "\n\n    Meals you requested : \t\t\t\t" << m1.at(choice) << endl;
            cout << "    MODE OF PAYMENT : \t\t\t\t PAID BY CASH" << endl;
            cout << "    STATUS : \t\t\t\t    PAYMENT SUCCESSFULL " << endl;
        }
        else if (ca == 2)
        {
            cout << "PLEASE ENTER THE CARD NUMBER: ";
            cin >> card;
            cout << "PLEASE ENTER THE PIN: ";
            cin >> pin;
            cout << endl
                 << "THANK YOU FOR PROVIDING US THE DETAIL " << endl
                 << endl;
            cout << "    STATUS : \t\t\t\t    PAYMENT SUCCESSFULL " << endl;

            cout << "HERE IS YOUR BILL :)\n\n\n\n";
            cout<<"************************************************************************************";
            cout << "\n\n    GUEST'S NAME: \t\t\t\t "<<name;
            cout << "\n\n    Room number : \t\t\t\t" << rand() << endl;
            cout << "\n\n    Meals you requested : \t\t\t\t" << m1.at(choice) << endl;
            cout << "    MODE OF PAYMENT : \t\t\t\t PAID BY CARD" << endl;
        }
        cout << "    TOTAL AMOUNT:\t\t\t\t" << amount_food << endl;
        myfile<<amount_food;
        myfile<<endl;
        cout << "************************************************************************************" << endl;
        cout << "                         THANK YOU AND STAY SAFE " << endl;
        cout << "                           VISIT US AGAIN SOON  " << endl;
        cout << "************************************************************************************" << endl;
    }
};


double amount;
double amount1;
int ca;

class FOOD:public Customer
{
public:
    map<int, string> m1;
    map<int, int> m2;
    int ch;
    void disp()
    {
        cout << "**************  CARZY FOR FOOD  **************" << endl
             << endl;
        cout << "THANK YOU FOR CHOSSING US :) " << endl;
        cout << endl;
        cout << "PRESS 1: VEG" << endl;
        cout << "PRESS 2: NON-VEG" << endl;
        cout << "PRESS 3: SNACKS" << endl;
        cout << "PRESS 4: PIZZAS" << endl;
        cout << "PRESS 5: DESSERT " << endl;
        cout << "PRESS 6: DRINKS" << endl;
        cout << "PRESS 7: CHINESE" << endl;
        cout << "PRESS 8: ITALIAN" << endl;
    }
};

class VEG : virtual public FOOD
{
public:
    void detail1()
    {
        cout << "AVAILABLE CHOICE ARE :-" << endl;
        cout << "PRESS 1 : MASALA DOSA\t\t\t90/plate" << endl;
        cout << "PRESS 2 : IDLI\t\t\t\t60/plate" << endl;
        cout << "PRESS 3 : ALOO PARATHA\t\t\t120/plate" << endl;
        cout << "PRESS 4 : PANEER PARATHA\t\t150/plate" << endl;
        cout << "PRESS 5 : MIX VEG PARATHA\t\t130/plate" << endl;
        cout << "PRESS 6 : PUNJABI THALI\t\t\t540/plate" << endl;
        cout << "PRESS 7 : ANDRA THALI\t\t\t380/plate" << endl;
        cout << "PRSES 8 : CHAPPAN BHOG THALI\t\t1000/plate" << endl;
        cout << "PRESS 9 : RAJASTHANI THALI\t\t690/plate" << endl;
        cout << "PRESS 10: BAHUBALI THALI\t\t1150/plate" << endl;
        m1[1] = "MASALA DOSA";
        m1[2] = "IDLI";
        m1[3] = "ALOO PARATHA";
        m1[4] = "PANEER PARATHA";
        m1[5] = "MIX VEG PARATHA";
        m1[6] = "PUNJABI THALI";
        m1[7] = "ANDRA THALI";
        m1[8] = "CHAPPAN BHOG THALI";
        m1[9] = "RAJASTHANI THALI";
        m1[10] = "BAHUBALI THALI";
        m2[1] = 90;
        m2[2] = 60;
        m2[3] = 120;
        m2[4] = 150;
        m2[5] = 130;
        m2[6] = 540;
        m2[7] = 380;
        m2[8] = 1000;
        m2[9] = 690;
        m2[10] = 1150;
        vector<int> v1;
        vector<int> v2;
        int i = 1;
        while (true)
        {
            cout << endl
                 << "ENTER YOUR " << i << " CHOICE OR PRESS 0 TO SUBMIT :-" << endl;
            i++;
            int a;
            int q;
            cin >> a;
            if (a == 0)
            {
                break;
            }
            cout << "ITS QUUATITY :";
            cin >> q;
            v2.push_back(q);
            v1.push_back(a);
        }
        cout << endl
             << "PLEASE CONFIRM YOUR CHOICES :-" << endl
             << endl;
        for (i = 0; i < v1.size(); i++)
        {
            cout << m1.at(v1[i]) << "  "
                 << "(*" << v2[i] << ")" << endl;
            amount = amount + (m2.at(v1[i]) * v2[i]);
        }
        amount1 = amount + amount * .05;
        cout << endl
             << endl;
        cout << "PRESS 1: TO CONTINUE " << endl;
        cout << "PRESS 2: TO EXIT " << endl;
        int e;
        cin >> e;
        if (e == 2)
            exit(1);
        cout << endl
             << endl
             << "PRESS 1: TO PAY BY CASH " << endl;
        cout << "PRESS 2: TO PAY BY CARD " << endl;

        cin >> ca;
        cout << endl
             << endl;
        if (ca == 2)
        {
            cout << "PLEASE ENTER THE CARD NUMBER: ";
            long int card;
            cin >> card;
            int pin;
            cout << "PLEASE ENTER THE PIN: ";
            cin >> pin;
        }
        cout << endl
             << "THANK YOU FOR PROVIDING US THE DETAIL " << endl
             << endl;
    }
};
class NONVEG : public virtual FOOD
{
public:
    void detail2()
    {
        cout << "PRESS 1 : GRILLED CHICKEN\t\t\t220/plate" << endl;
        cout << "PRESS 2 : ROASTED CHICKEN\t\t\t350/plate" << endl;
        cout << "PRESS 3 : BUTTER CHICKEN\t\t\t280/plate" << endl;
        cout << "PRESS 4 : CHICKEN CHETITNAD\t\t\t320/plate" << endl;
        cout << "PRESS 5 : KADAI CHICKEN\t\t\t\t390/plate" << endl;
        cout << "PRESS 6 : CHICKEN KOLHAPURI\t\t\t350/plate" << endl;
        cout << "PRESS 7 : MUTTON KORMA\t\t\t\t300/plate" << endl;
        cout << "PRESS 8 : HILSA FISH CURRY\t\t\t410/plate" << endl;
        cout << "PRESS 9 : LAAL MAAS\t\t\t\t370/plate" << endl;
        cout << "PRESS 10: PASANDA\t\t\t\t440/plate" << endl;
        m1[1] = "GRILLED CHICKEN";
        m1[2] = "ROASTED CHICKEN";
        m1[3] = "BUTTER CHICKEN";
        m1[4] = "CHICKEN CHETITNAD";
        m1[5] = "KADAI CHICKEN";
        m1[6] = "CHICKEN KOLHAPURI";
        m1[7] = "MUTTON KORMA";
        m1[8] = "HILSA FISH CURRY";
        m1[9] = "LAAL MAAS";
        m1[10] = "PASANDA";
        m2[1] = 220;
        m2[2] = 350;
        m2[3] = 280;
        m2[4] = 320;
        m2[5] = 390;
        m2[6] = 350;
        m2[7] = 300;
        m2[8] = 410;
        m2[9] = 370;
        m2[10] = 440;
        vector<int> v1;
        vector<int> v2;
        int i = 1;
        while (true)
        {
            cout << endl
                 << "ENTER YOUR " << i << " CHOICE OR PRESS 0 TO SUBMIT :-" << endl;
            i++;
            int a;
            int q;
            cin >> a;
            if (a == 0)
            {
                break;
            }
            cout << "ITS QUUATITY :";
            cin >> q;
            v2.push_back(q);
            v1.push_back(a);
        }
        cout << endl
             << "PLEASE CONFIRM YOUR CHOICES :-" << endl
             << endl;
        for (i = 0; i < v1.size(); i++)
        {
            cout << m1.at(v1[i]) << "  "
                 << "(*" << v2[i] << ")" << endl;
            amount = amount + (m2.at(v1[i]) * v2[i]);
        }
        amount1 = amount + amount * .05;
        cout << endl
             << endl;
        cout << "PRESS 1: TO CONTINUE " << endl;
        cout << "PRESS 2: TO EXIT " << endl;
        int e;
        cin >> e;
        if (e == 2)
            exit(1);
        cout << endl
             << endl
             << "PRESS 1: TO PAY BY CASH " << endl;
        cout << "PRESS 2: TO PAY BY CARD " << endl;

        cin >> ca;
        cout << endl
             << endl;
        if (ca == 2)
        {
            cout << "PLEASE ENTER THE CARD NUMBER: ";
            long int card;
            cin >> card;
            int pin;
            cout << "PLEASE ENTER THE PIN: ";
            cin >> pin;
        }
        cout << endl
             << "THANK YOU FOR PROVIDING US THE DETAIL " << endl
             << endl;
    }
};
class snacks : virtual public FOOD
{
public:
    void detail3()
    {
        cout << "PRESS 1 : DHOKLA\t\t\t50/plate" << endl;
        cout << "PRESS 2 : PANEER PAKORA\t\t\t60/plate" << endl;
        cout << "PRESS 3 : SAMOSA\t\t\t20/plate" << endl;
        cout << "PRESS 4 : GRILLED SANDWICH\t\t70/plate" << endl;
        cout << "PRESS 5 : FRIES\t\t\t\t50/plate" << endl;
        cout << "PRESS 6 : ALOO TIKKI\t\t\t50/plate" << endl;
        cout << "PRESS 7 : PLAIN MOMOS\t\t\t45/plate" << endl;
        cout << "PRESS 8 : PANEER MOMOS\t\t\t75/plate" << endl;
        cout << "PRESS 9 : VADA PAO\t\t\t40/plate" << endl;
        cout << "PRESS 10: BURGER\t\t\t40/plate" << endl;
        m1[1] = "DHOKLA";
        m1[2] = "PANEER PAKORA";
        m1[3] = "SAMOSA";
        m1[4] = "GRILLED SANDWICH";
        m1[5] = "FRIES";
        m1[6] = "ALOO TIKKI";
        m1[7] = "PLAIN MOMOS";
        m1[8] = "PANEER MOMOS";
        m1[9] = "VADA PAO";
        m1[10] = "BURGER";
        m2[1] = 50;
        m2[2] = 60;
        m2[3] = 20;
        m2[4] = 70;
        m2[5] = 50;
        m2[6] = 50;
        m2[7] = 45;
        m2[8] = 75;
        m2[9] = 40;
        m2[10] = 40;
        vector<int> v1;
        vector<int> v2;
        int i = 1;
        while (true)
        {
            cout << endl
                 << "ENTER YOUR " << i << " CHOICE OR PRESS 0 TO SUBMIT :-" << endl;
            i++;
            int a;
            int q;
            cin >> a;
            if (a == 0)
            {
                break;
            }
            cout << "ITS QUUATITY :";
            cin >> q;
            v2.push_back(q);
            v1.push_back(a);
        }
        cout << endl
             << "PLEASE CONFIRM YOUR CHOICES :-" << endl
             << endl;
        for (i = 0; i < v1.size(); i++)
        {
            cout << m1.at(v1[i]) << "  "
                 << "(*" << v2[i] << ")" << endl;
            amount = amount + (m2.at(v1[i]) * v2[i]);
        }
        amount1 = amount + amount * .05;
        cout << endl
             << endl;
        cout << "PRESS 1: TO CONTINUE " << endl;
        cout << "PRESS 2: TO EXIT " << endl;
        int e;
        cin >> e;
        if (e == 2)
            exit(1);
        cout << endl
             << endl
             << "PRESS 1: TO PAY BY CASH " << endl;
        cout << "PRESS 2: TO PAY BY CARD " << endl;

        cin >> ca;
        cout << endl
             << endl;
        if (ca == 2)
        {
            cout << "PLEASE ENTER THE CARD NUMBER: ";
            long int card;
            cin >> card;
            int pin;
            cout << "PLEASE ENTER THE PIN: ";
            cin >> pin;
        }
        cout << endl
             << "THANK YOU FOR PROVIDING US THE DETAIL " << endl
             << endl;
    }
};
class pizza : public virtual FOOD
{
public:
    void detail4()
    {
        cout << "PRESS 1 : MARGHERITA\t\t\t450/plate" << endl;
        cout << "PRESS 2 : CHEESE N CORN\t\t\t450/plate" << endl;
        cout << "PRESS 3 : PEPPY PANNER\t\t\t500/plate" << endl;
        cout << "PRESS 4 : DELUXE VEGGIE\t\t\t350/plate" << endl;
        cout << "PRESS 5 : MEXICAN GREEN WAVE\t\t400/plate" << endl;
        cout << "PRESS 6 : FARM HOUSE\t\t\t420/plate" << endl;
        cout << "PRESS 7 : PEPPERONI\t\t\t450/plate" << endl;
        cout << "PRESS 8 : VEG EXTRAVAGANZA\t\t480/plate" << endl;
        cout << "PRESS 9 : OLIVE PIZZA\t\t\t390/plate" << endl;
        cout << "PRESS 10: EXTRA CHEESE PIZZA\t\t600/plate" << endl;
        m1[1] = "MARGHERITA";
        m1[2] = "CHEESE N CORN";
        m1[3] = "PEPPY PANNER";
        m1[4] = "DELUXE VEGGIE";
        m1[5] = "MEXICAN GREEN WAVE";
        m1[6] = "FARM HOUSE";
        m1[7] = "PEPPERONI";
        m1[8] = "VEG EXTRAVAGANZA";
        m1[9] = "OLIVE PIZZA";
        m1[10] = "EXTRA CHEESE PIZZA";
        m2[1] = 450;
        m2[2] = 450;
        m2[3] = 500;
        m2[4] = 350;
        m2[5] = 400;
        m2[6] = 420;
        m2[7] = 450;
        m2[8] = 480;
        m2[9] = 390;
        m2[10] = 600;
        vector<int> v1;
        vector<int> v2;
        int i = 1;
        while (true)
        {
            cout << endl
                 << "ENTER YOUR " << i << " CHOICE OR PRESS 0 TO SUBMIT :-" << endl;
            i++;
            int a;
            int q;
            cin >> a;
            if (a == 0)
            {
                break;
            }
            cout << "ITS QUUATITY :";
            cin >> q;
            v2.push_back(q);
            v1.push_back(a);
        }
        cout << endl
             << "PLEASE CONFIRM YOUR CHOICES :-" << endl
             << endl;
        for (i = 0; i < v1.size(); i++)
        {
            cout << m1.at(v1[i]) << "  "
                 << "(*" << v2[i] << ")" << endl;
            amount = amount + (m2.at(v1[i]) * v2[i]);
        }
        amount1 = amount + amount * .05;
        cout << endl
             << endl;
        cout << "PRESS 1: TO CONTINUE " << endl;
        cout << "PRESS 2: TO EXIT " << endl;
        int e;
        cin >> e;
        if (e == 2)
            exit(1);
        cout << endl
             << endl
             << "PRESS 1: TO PAY BY CASH " << endl;
        cout << "PRESS 2: TO PAY BY CARD " << endl;

        cin >> ca;
        cout << endl
             << endl;
        if (ca == 2)
        {
            cout << "PLEASE ENTER THE CARD NUMBER: ";
            long int card;
            cin >> card;
            int pin;
            cout << "PLEASE ENTER THE PIN: ";
            cin >> pin;
        }
        cout << endl
             << "THANK YOU FOR PROVIDING US THE DETAIL " << endl
             << endl;
    }
};
class drink : virtual public FOOD
{
public:
    void detail6()
    {
        cout << "PRESS 1 : TEA\t\t\t\t30/cup" << endl;
        cout << "PRESS 2 : HOT COFFEE\t\t\t90/mug" << endl;
        cout << "PRESS 3 : COLD COFFEE\t\t\t140/mug" << endl;
        cout << "PRESS 4 : GREEN TEA\t\t\t50/cup" << endl;
        cout << "PRESS 5 : CHOCLATE SHAKE\t\t160/mug" << endl;
        cout << "PRESS 6 : STRAWBERRY SHAKE\t\t160/mug" << endl;
        cout << "PRESS 7 : HOT CHOCLATE\t\t\t80/mug" << endl;
        cout << "PRESS 8 : LASSI\t\t\t\t70/mug" << endl;
        cout << "PRESS 9 : CHAAS\t\t\t\t60/mug" << endl;
        cout << "PRESS 10: MANGO SHAKE\t\t\t90/mug" << endl;
        m1[1] = "TEA";
        m1[2] = "HOT COFFEE";
        m1[3] = "COLD COFFEE";
        m1[4] = "GREEN TEA";
        m1[5] = "CHOCLATE SHAKE";
        m1[6] = "STRAWBERRY SHAKE";
        m1[7] = "HOT CHOCLATE";
        m1[8] = "LASSI";
        m1[9] = "CHAAS";
        m1[10] = "MANGO SHAKE";
        m2[1] = 30;
        m2[2] = 90;
        m2[3] = 140;
        m2[4] = 50;
        m2[5] = 160;
        m2[6] = 160;
        m2[7] = 80;
        m2[8] = 70;
        m2[9] = 60;
        m2[10] = 90;
        vector<int> v1;
        vector<int> v2;
        int i = 1;
        while (true)
        {
            cout << endl
                 << "ENTER YOUR " << i << " CHOICE OR PRESS 0 TO SUBMIT :-" << endl;
            i++;
            int a;
            int q;
            cin >> a;
            if (a == 0)
            {
                break;
            }
            cout << "ITS QUUATITY :";
            cin >> q;
            v2.push_back(q);
            v1.push_back(a);
        }
        cout << endl
             << "PLEASE CONFIRM YOUR CHOICES :-" << endl
             << endl;
        for (i = 0; i < v1.size(); i++)
        {
            cout << m1.at(v1[i]) << "  "
                 << "(*" << v2[i] << ")" << endl;
            amount = amount + (m2.at(v1[i]) * v2[i]);
        }
        amount1 = amount + amount * .05;
        cout << endl
             << endl;
        cout << "PRESS 1: TO CONTINUE " << endl;
        cout << "PRESS 2: TO EXIT " << endl;
        int e;
        cin >> e;
        if (e == 2)
            exit(1);
        cout << endl
             << endl
             << "PRESS 1: TO PAY BY CASH " << endl;
        cout << "PRESS 2: TO PAY BY CARD " << endl;

        cin >> ca;
        cout << endl
             << endl;
        if (ca == 2)
        {
            cout << "PLEASE ENTER THE CARD NUMBER: ";
            long int card;
            cin >> card;
            int pin;
            cout << "PLEASE ENTER THE PIN: ";
            cin >> pin;
        }
        cout << endl
             << "THANK YOU FOR PROVIDING US THE DETAIL " << endl
             << endl;
    }
};
class dessert : public virtual FOOD
{
public:
    void detail5()
    {
        cout << "PRESS 1 : GULAB JAMUN\t\t\t15/piece" << endl;
        cout << "PRESS 2 : RASGULLA\t\t\t20/piece" << endl;
        cout << "PRESS 3 : KHER\t\t\t\t50/bowl" << endl;
        cout << "PRESS 4 : HALWA\t\t\t\t50/bowl" << endl;
        cout << "PRESS 5 : RAS MALAI\t\t\t30/piece" << endl;
        cout << "PRESS 6 : JALEBI\t\t\t40/plate" << endl;
        cout << "PRESS 7 : APPLE PIE\t\t\t220/plate" << endl;
        cout << "PRESS 8 : BANANA FOSTER\t\t\t320/plate" << endl;
        cout << "PRESS 9 : CHOCLATE FUDGE SUNDAE\t\t420/plate" << endl;
        cout << "PRESS 10: ICE CREAMS\t\t\tMRP(30)" << endl;
        m1[1] = "GULAB JAMUN";
        m1[2] = "RASGULLA";
        m1[3] = "KHER";
        m1[4] = "HALWA";
        m1[5] = "RAS MALAI";
        m1[6] = "JALEBI";
        m1[7] = "APPLE PIE";
        m1[8] = "BANANA FOSTER";
        m1[9] = "CHOCLATE FUDGE SUNDAE";
        m1[10] = "ICE CREAMS";
        m2[1] = 15;
        m2[2] = 20;
        m2[3] = 50;
        m2[4] = 50;
        m2[5] = 30;
        m2[6] = 40;
        m2[7] = 220;
        m2[8] = 320;
        m2[9] = 420;
        m2[10] = 30;
        vector<int> v1;
        vector<int> v2;
        int i = 1;
        while (true)
        {
            cout << endl
                 << "ENTER YOUR " << i << " CHOICE OR PRESS 0 TO SUBMIT :-" << endl;
            i++;
            int a;
            int q;
            cin >> a;
            if (a == 0)
            {
                break;
            }
            cout << "ITS QUUATITY :";
            cin >> q;
            v2.push_back(q);
            v1.push_back(a);
        }
        cout << endl
             << "PLEASE CONFIRM YOUR CHOICES :-" << endl
             << endl;
        for (i = 0; i < v1.size(); i++)
        {
            cout << m1.at(v1[i]) << "  "
                 << "(*" << v2[i] << ")" << endl;
            amount = amount + (m2.at(v1[i]) * v2[i]);
        }
        amount1 = amount + amount * .05;
        cout << endl
             << endl;
        cout << "PRESS 1: TO CONTINUE " << endl;
        cout << "PRESS 2: TO EXIT " << endl;
        int e;

        cin >> e;
        if (e == 2)
            exit(1);
        cout << endl
             << endl
             << "PRESS 1: TO PAY BY CASH " << endl;
        cout << "PRESS 2: TO PAY BY CARD " << endl;

        cin >> ca;
        cout << endl
             << endl;
        if (ca == 2)
        {
            cout << "PLEASE ENTER THE CARD NUMBER: ";
            long int card;
            cin >> card;
            int pin;
            cout << "PLEASE ENTER THE PIN: ";
            cin >> pin;
        }
        cout << endl
             << "THANK YOU FOR PROVIDING US THE DETAIL " << endl
             << endl;
    }
};
class chinese : virtual public FOOD
{
public:
    void detail7()
    {
        cout << "PRESS 1 : MANCHURIAN\t\t\t320/plate" << endl;
        cout << "PRESS 2 : CHOWMEIN\t\t\t120/plate" << endl;
        cout << "PRESS 3 : SPRING ROLLS\t\t\t150/plate" << endl;
        cout << "PRESS 4 : DARSAAN\t\t\t220/plate" << endl;
        cout << "PRESS 5 : MANCHOW SOUP\t\t\t250/plate" << endl;
        cout << "PRESS 6 : FRIED RICE\t\t\t150/plate" << endl;
        cout << "PRESS 7 : CHOP SUEY\t\t\t180/plate" << endl;
        cout << "PRESS 8 : HAKKA NOODLES\t\t\t120/plate" << endl;
        cout << "PRESS 9 : DIMSUMS\t\t\t450/plate" << endl;
        cout << "PRESS 10: CHILLI PANEER\t\t\t350/plate" << endl;
        m1[1] = "MANCHURIAN";
        m1[2] = "CHOWMEIN";
        m1[3] = "SPRING ROLLS";
        m1[4] = "DARSAAN";
        m1[5] = "MANCHOW SOUP";
        m1[6] = "FRIED RICE";
        m1[7] = "CHOP SUEY";
        m1[8] = "HAKKA NOODLES";
        m1[9] = "DIMSUMS";
        m1[10] = "CHILLI PANEER";
        m2[1] = 320;
        m2[2] = 120;
        m2[3] = 150;
        m2[4] = 220;
        m2[5] = 250;
        m2[6] = 150;
        m2[7] = 180;
        m2[8] = 120;
        m2[9] = 450;
        m2[10] = 350;

        vector<int> v1;
        vector<int> v2;
        int i = 1;
        while (true)
        {
            cout << endl
                 << "ENTER YOUR " << i << " CHOICE OR PRESS 0 TO SUBMIT :-" << endl;
            i++;
            int a;
            int q;
            cin >> a;
            if (a == 0)
            {
                break;
            }
            cout << "ITS QUUATITY :";
            cin >> q;
            v2.push_back(q);
            v1.push_back(a);
        }
        cout << endl
             << "PLEASE CONFIRM YOUR CHOICES :-" << endl
             << endl;
        for (i = 0; i < v1.size(); i++)
        {
            cout << m1.at(v1[i]) << "  "
                 << "(*" << v2[i] << ")" << endl;
            amount = amount + (m2.at(v1[i]) * v2[i]);
        }
        amount1 = amount + amount * .05;
        cout << endl
             << endl;
        cout << "PRESS 1: TO CONTINUE " << endl;
        cout << "PRESS 2: TO EXIT " << endl;
        int e;
        cin >> e;
        if (e == 2)
            exit(1);
        cout << endl
             << endl
             << "PRESS 1: TO PAY BY CASH " << endl;
        cout << "PRESS 2: TO PAY BY CARD " << endl;

        cin >> ca;
        cout << endl
             << endl;
        if (ca == 2)
        {
            cout << "PLEASE ENTER THE CARD NUMBER: ";
            long int card;
            cin >> card;
            int pin;
            cout << "PLEASE ENTER THE PIN: ";
            cin >> pin;
        }
        cout << endl
             << "THANK YOU FOR PROVIDING US THE DETAIL " << endl
             << endl;
    }
};
class italian : public virtual FOOD
{
public:
    void detail8()
    {
        cout << "PRESS 1 : STEPHEN MURELLO\t\t380/plate" << endl;
        cout << "PRESS 2 : PASTA\t\t\t\t220/plate" << endl;
        cout << "PRESS 3 : ROSSO BUCO\t\t\t340/plate" << endl;
        cout << "PRESS 4 : ROSITTO\t\t\t280/plate" << endl;
        cout << "PRESS 5 : FUSILLI TOMATINA\t\t290/plate" << endl;
        cout << "PRESS 6 : FRITTO MISTO\t\t\t320/plate" << endl;
        cout << "PRESS 7 : PANNA COTTA\t\t\t450/plate" << endl;
        cout << "PRESS 8 : PENNE ALA VODKA\t\t390/plate" << endl;
        cout << "PRESS 9 : ROESTI AND SALAD\t\t310/plate" << endl;
        cout << "PRESS 10: PANETTONE\t\t\t260/plate" << endl;
        m1[1] = "STEPHEN MURELLO";
        m1[2] = "PASTA";
        m1[3] = "ROSSO BUCO";
        m1[4] = "ROSITTO";
        m1[5] = "FUSILLI TOMATINA";
        m1[6] = "FRITTO MISTO";
        m1[7] = "PANNA COTTA";
        m1[8] = "PENNE ALA VODKA";
        m1[9] = "ROESTI AND SALAD";
        m1[10] = "PANETTONE";
        m2[1] = 380;
        m2[2] = 220;
        m2[3] = 340;
        m2[4] = 280;
        m2[5] = 290;
        m2[6] = 320;
        m2[7] = 450;
        m2[8] = 390;
        m2[9] = 310;
        m2[10] = 260;
        vector<int> v1;
        vector<int> v2;
        int i = 1;
        while (true)
        {
            cout << endl
                 << "ENTER YOUR " << i << " CHOICE OR PRESS 0 TO SUBMIT :-" << endl;
            i++;
            int a;
            int q;
            cin >> a;
            if (a == 0)
            {
                break;
            }
            cout << "ITS QUUATITY :";
            cin >> q;
            v2.push_back(q);
            v1.push_back(a);
        }
        cout << endl
             << "PLEASE CONFIRM YOUR CHOICES :-" << endl
             << endl;
        for (i = 0; i < v1.size(); i++)
        {
            cout << m1.at(v1[i]) << "  "
                 << "(*" << v2[i] << ")" << endl;
            amount = amount + (m2.at(v1[i]) * v2[i]);
        }
        amount1 = amount + amount * .05;
        cout << endl
             << endl;
        cout << "PRESS 1: TO CONTINUE " << endl;
        cout << "PRESS 2: TO EXIT " << endl;
        int e;
        cin >> e;
        if (e == 2)
            exit(1);
        cout << endl
             << endl
             << "PRESS 1: TO PAY BY CASH " << endl;
        cout << "PRESS 2: TO PAY BY CARD " << endl;

        cin >> ca;
        cout << endl
             << endl;
        if (ca == 2)
        {
            cout << "PLEASE ENTER THE CARD NUMBER: ";
            long int card;
            cin >> card;
            int pin;
            cout << "PLEASE ENTER THE PIN: ";
            cin >> pin;
        }
        cout << endl
             << "THANK YOU FOR PROVIDING US THE DETAIL " << endl
             << endl;
    }
};
class billF : public FOOD
{
public:
    void calc()
    {
        fstream billF;
        billF.open("billF.txt",ios::out);
        cout << "HERE IS YOUR BILL :)\n\n\n\n";
        cout << "*************************** CARZY FOR FOOD/khana khazana ***************************" << endl;
        cout << "\n\n       NAME: \t\t\t\t\t ";
        cout<<name;
        cout << "\n\n       PHONE: \t\t\t\t\t " << phonenumber[0] << phonenumber[1] << "*****" << phonenumber[7] << phonenumber[8] << phonenumber[9] << endl
             << endl;
        cout << "       DATE:\t\t\t\t\t "
             << daym<<"/"<<monthm<<"/"<<yearm<< endl;
        std::cout << std::fixed;
        std::cout << std::setprecision(2);
        cout << "    STATUS : \t\t\t\t    PAYMENT SUCCESSFULL " << endl;
        if (ca == 1)
        {
            cout << "    MODE OF PAYMENT :\t\t\t\tPAID BY CASH" << endl
                 << endl;
        }
        else if (ca == 2)
        {
            cout << "    MODE OF PAYMENT :\t\t\t\tPAID BY CARD" << endl
                 << endl;
        }
        cout << "    TOKEN NUMBER :\t\t\t\t";
        int ra = random_num(0, 500);
        std::cout << ra << endl;

        cout << endl
             << endl;
        std::cout << "    TOTAL AMOUNT:\t\t\t\t" << amount << endl;
        std::cout << std::fixed;
        std::cout << std::setprecision(2);
        std::cout << "    TOTAL AMOUNT (5% GST):\t\t\t" << amount1 << endl
                  << endl;
        billF<<amount1;
        billF<<endl;
        cout << "************************************************************************************" << endl;
        cout << "                         THANK YOU AND STAY SAFE " << endl;
        cout << "************************************************************************************" << endl;
        billF.close();
    }
};

double amount_enter;
double amount1_enter;
class TRANSPORT:public Customer{
    public:
    string destination;
    double amount;
    int n_vehicles;
    char op;
    double distance;
    map<int,string>m1;
    map<int,int>m2;

    void types()
    {
        int ch;
        loop:cout<<"PLEASE SELECT THE TYPE OF VEHICLE YOU WANT :-"<<endl;
        cout<<"1. BUS\t\t\t30/per km"<<endl;
        cout<<"2. CAR\t\t\t15/per km"<<endl;
        cout<<"3. BIKE\t\t\t06/per km"<<endl;
        cout<<"4. E-RIKSHAW\t\t05/per km"<<endl;
        m1[1]="BUS";
        m1[2]="CAR";
        m1[3]="BIKE";
        m1[4]="E-RIKSHAW";
        m2[1]=30;
        m2[2]=15;
        m2[3]=6;
        m2[4]=5;
        cin>>ch;
        cout<<endl;

        cout<<"ENTER THE NUMBER OF "<<m1.at(ch)<<" YOU WANT :";
        cin>>n_vehicles;


        cout<<endl<<endl<<"PLEASE ENTER THE DISTINATION :-"<<endl;
        cin>>op;
        getline(cin,destination);
        cout<<endl<<endl<<"ENTER THE DISTANCE :";
        cin>>distance;
        cout<<endl<<endl<<"HERE IS THE DETAIL OF THE JOURNEY :-"<<endl;
        cout<<"DESTINATION :\t\t"<<op<<destination<<endl;
        cout<<"MODE TYPE :\t\t"<<m1.at(ch)<<endl;
        cout<<"No. OF VEHICLES :\t"<<n_vehicles<<endl;
        amount = n_vehicles*(distance*m2.at(ch));
        double amount1=(amount*.05)+amount;
        cout<<"TOTAL AMOUNT :\t\t"<<amount1<<endl;

        cout<<endl<<"PRESS 1: TO CONTINUE"<<endl;
        cout<<"PRESS 2: TO RE-ENTER THE CHOICES "<<endl;
        int ch1;
        cin>>ch1;
        if(ch1==2)
        {
            amount=0;
            goto loop;
            cout<<endl;
        }
        else if(ch1==1)
        {

            int ca;
            cout<<endl<<endl<<"PRESS 1: TO PAY BY CASH "<<endl;
            cout<<"PRESS 2: TO PAY BY CARD "<<endl;
            cin>>ca;
            cout<<endl<<endl;
            if(ca==1)
            {
                amt(1,ch);
            }
            else if(ca==2)
            {
                cout<<"PLEASE ENTER THE CARD NUMBER: ";
                long int card;
                cin>>card;
                int pin;
                cout<<"PLEASE ENTER THE PIN: ";
                cin>>pin;

                cout<<endl<<"THANK YOU FOR PROVIDING US THE DETAIL "<<endl<<endl;
                amt(2,ch);
            }
        }
    }
    void amt(int choice,int choice1)
    {
        fstream Transport;
        Transport.open("transport.txt",ios::out);
        cout<<"HERE IS YOUR BILL :)\n\n\n\n";
        cout<<"*************************** WELCOME TO THE ROYAL PALACE ***************************"<<endl;
        cout<<"\n\n    GUEST'S NAME: \t\t\t\t "<<name;
        cout<<"\n\n    GUEST'S PHONE: \t\t\t\t "<<phonenumber[0]<<phonenumber[1]<<"*****"<<phonenumber[7]<<phonenumber[8]<<phonenumber[9]<<endl<<endl;
        cout<<"    DEPARTURE DATE:\t\t\t\t"<<daym<<"/"<<monthm<<"/"<<yearm<<endl<<endl;
        cout<<"    DROP ADDRESS:\t\t\t\t"<<op<<destination<<endl<<endl;
        std::cout << std::fixed;
        std::cout << std::setprecision(2);
        cout<<"    STATUS : \t\t\t\t    PAYMENT SUCCESSFULL "<<endl;
        if(choice==1)
        {
            cout<<"    MODE OF PAYMENT :\t\t\t\tPAID BY CASH"<<endl<<endl;
        }
        else if(choice ==2)
        {
            cout<<"    MODE OF PAYMENT :\t\t\t\tPAID BY CARD"<<endl<<endl;
        }
        cout<<"    VEHICLE TYPE :\t\t\t\t"<<m1.at(choice1)<<endl;
        cout<<"    VEHICLES BOOKED :\t\t\t\t";
        for(int i=0;i<n_vehicles;i++)
        {
            char cch = 'A' + rand()%26;
            char cch2 = 'A' + rand()%26;
            int ra=random_num(1000,9999);
            std::cout <<"UP32"<<cch<<cch2<<ra<<endl<<"\t\t\t\t\t\t";
        }
        cout<<endl<<endl;
        std::cout << "    TOTAL AMOUNT:\t\t\t\t"<<amount<<endl;
        double amount1=amount+amount*.05;
        Transport<<amount1;
        Transport<<endl;
        std::cout << std::fixed;
        std::cout << std::setprecision(2);
        std::cout << "    TOTAL AMOUNT (5% GST):\t\t\t"<<amount1<<endl<<endl;
        cout<<"************************************************************************************"<<endl;
        cout<<"                         THANK YOU AND STAY SAFE "<<endl;
        cout<<"                           VISIT US AGAIN SOON  "<<endl;
        cout<<"************************************************************************************"<<endl;
        Transport.close();
    }

};

class Entertainment:public Customer
{
protected:
    int ca;

public:
    string p_no = "9600XXXXXX";
    map<int, string> m1;
    map<int, int> m2;
    int ch;
    void disp()
    {

        cout << "**************  ENTERTAINMENT AWAITS YOU  **************" << endl
             << endl;
        cout << "THANK YOU FOR CHOSSING US :) " << endl;
        cout << endl;
        cout << "PRESS 1: MOVIE" << endl;
        cout << "PRESS 2: KID ZONE" << endl;
        cout << "PRESS 3: COMEDY SHOWS" << endl;
        cout << "PRESS 4: Esports CENTRE" << endl;
        cout << "PRESS 5: WORKSHOPS AND MORE" << endl;
    }
};

class MOVIE : virtual public Entertainment
{
private:
    long int card;
    int pin;

public:
    void detail1()
    {
        cout << "AVAILABLE CHOICE ARE :-" << endl;
        cout << "PRESS 1 : Mortal Kombat\t\t190/ticket" << endl;
        cout << "PRESS 2 : Stomaway\t\t160/ticket" << endl;
        cout << "PRESS 3 : Nobody\t\t120/ticket" << endl;
        cout << "PRESS 4 : Trigger Point\t\t150/ticket" << endl;
        cout << "PRESS 5 : The Marksman\t\t130/ticket" << endl;
        m1[1] = "Mortal Kombat";
        m1[2] = "Stomaway";
        m1[3] = "Nobody";
        m1[4] = "Trigger Point";
        m1[5] = "The Marksman";
        m2[1] = 190;
        m2[2] = 160;
        m2[3] = 120;
        m2[4] = 150;
        m2[5] = 130;
        vector<int> v1;
        vector<int> v2;
        int i = 1;
        while (true)
        {
            cout << endl
                 << "ENTER YOUR " << i << " CHOICE OR PRESS 0 TO SUBMIT :-" << endl;
            i++;
            int a;
            int q;
            cin >> a;
            if (a == 0)
            {
                break;
            }
            cout << "TICKETS :";
            cin >> q;
            v2.push_back(q);
            v1.push_back(a);
        }
        cout << endl
             << "PLEASE CONFIRM YOUR CHOICES :-" << endl
             << endl;
        for (i = 0; i < v1.size(); i++)
        {
            cout << m1.at(v1[i]) << "  "
                 << "(*" << v2[i] << ")" << endl;
            amount_enter = amount_enter + (m2.at(v1[i]) * v2[i]);
        }
        amount1_enter = amount_enter + amount_enter * .05;
        cout << endl
             << endl;
        cout << "PRESS 1: TO CONTINUE " << endl;
        cout << "PRESS 2: TO EXIT " << endl;
        int e;
        cin >> e;
        if (e == 2)
            exit(1);
        cout << endl
             << endl
             << "PRESS 1: TO PAY BY CASH " << endl;
        cout << "PRESS 2: TO PAY BY CARD " << endl;

        cin >> ca;
        cout << endl
             << endl;
        if (ca == 2)
        {
            cout << "PLEASE ENTER THE CARD NUMBER: ";
            cin >> card;
            cout << "PLEASE ENTER THE PIN: ";
            cin >> pin;
        }
        cout << endl
             << "THANK YOU FOR PROVIDING US THE DETAIL " << endl
             << endl;
    }
};

class KID_ZONE : public virtual Entertainment
{
private:
    long int card;
    int pin;

public:
    void detail2()
    {
        cout << "PRESS 1 : Doodling workshop ZOOM\t\t250/person" << endl;
        cout << "PRESS 2 : Origami and paper craft\t\t199/person" << endl;
        cout << "PRESS 3 : Art and Craft ZOOM\t\t\t280/person" << endl;
        cout << "PRESS 4 : Master Photoshop ZOOM\t\t\t320/person" << endl;
        cout << "PRESS 5 : Little Wonder Preschool Classes\t100/person" << endl;
        cout << "PRESS 6 : Summer camp ZOOM\t\t\t350/person" << endl;
        m1[1] = "Doodling workshop ZOOM";
        m1[2] = "Origami and paper craft";
        m1[3] = "Art and Craft ZOOM";
        m1[4] = "Master Photoshop ZOOM";
        m1[5] = "Little Wonder Preschool Classes";
        m1[6] = "Summer camp ZOOM";
        m2[1] = 250;
        m2[2] = 199;
        m2[3] = 280;
        m2[4] = 320;
        m2[5] = 1000;
        m2[6] = 350;
        vector<int> v1;
        vector<int> v2;
        int i = 1;
        while (true)
        {
            cout << endl
                 << "ENTER YOUR " << i << " CHOICE OR PRESS 0 TO SUBMIT :-" << endl;
            i++;
            int a;
            int q;
            cin >> a;
            if (a == 0)
            {
                break;
            }
            cout << "TICKETS :";
            cin >> q;
            v2.push_back(q);
            v1.push_back(a);
        }
        cout << endl
             << "PLEASE CONFIRM YOUR CHOICES :-" << endl
             << endl;
        for (i = 0; i < v1.size(); i++)
        {
            cout << m1.at(v1[i]) << "  "
                 << "(*" << v2[i] << ")" << endl;
            amount_enter = amount_enter + (m2.at(v1[i]) * v2[i]);
        }
        amount1_enter = amount_enter + amount_enter * .05;
        cout << endl
             << endl;
        cout << "PRESS 1: TO CONTINUE " << endl;
        cout << "PRESS 2: TO EXIT " << endl;
        int e;
        cin >> e;
        if (e == 2)
            exit(1);
        cout << endl
             << endl
             << "PRESS 1: TO PAY BY CASH " << endl;
        cout << "PRESS 2: TO PAY BY CARD " << endl;

        cin >> ca;
        cout << endl
             << endl;
        if (ca == 2)
        {
            cout << "PLEASE ENTER THE CARD NUMBER: ";
            cin >> card;
            cout << "PLEASE ENTER THE PIN: ";
            cin >> pin;
        }
        cout << endl
             << "THANK YOU FOR PROVIDING US THE DETAIL " << endl
             << endl;
    }
};

class COMEDY : public virtual Entertainment
{
private:
    long int card;
    int pin;

public:
    void detail3()
    {
        cout << "************ THE FOLLOWING SHOWS ARE AVILABLE THIS MONTH ************" << endl;
        cout << "         PERFORMER        \t\t\t   RATE   \t  DATE  " << endl;
        cout << "PRESS 1 : Gaurav Kapoor Live sitdowm ZOOM\t500/persont\t15/05/2021" << endl;
        cout << "PRESS 2 : Rohan gujral LIVE ZOOM\t\t600/person\t15/05/2021" << endl;
        cout << "PRESS 3 : Devash Dixit ZOOM\t\t\t200/person\t18/05/2021" << endl;
        cout << "PRESS 4 : In conversation with JEEYA ZOOM\t300/person\t19/05/2021" << endl;
        cout << "PRESS 5 : Punchliners by Garuav Gupta\t\t599/person\t21/05/2021" << endl;
        cout << "PRESS 6 : Bassi Jindabad\t\t\t650/person\t24/05/2021" << endl;
        cout << "PRESS 7 : Pi ke Mt chlana by Sundeep Sharma\t445/person\t26/05/2021" << endl;
        m1[1] = "Gaurav Kapoor Live sitdowm ZOOM";
        m1[2] = "Rohan gujral LIVE ZOOM";
        m1[3] = "Devash Dixit ZOOM";
        m1[4] = "In conversation with JEEYA ZOOM";
        m1[5] = "Punchliners by Garuav Gupta";
        m1[6] = "Bassi Jindabad";
        m1[7] = "Pi ke Mt chlana by Sundeep Sharma";
        m2[1] = 500;
        m2[2] = 600;
        m2[3] = 200;
        m2[4] = 300;
        m2[5] = 599;
        m2[6] = 650;
        m2[7] = 445;
        vector<int> v1;
        vector<int> v2;
        int i = 1;
        while (true)
        {
            cout << endl
                 << "ENTER YOUR " << i << " CHOICE OR PRESS 0 TO SUBMIT :-" << endl;
            i++;
            int a;
            int q;
            cin >> a;
            if (a == 0)
            {
                break;
            }
            cout << "TICKETS :";
            cin >> q;
            v2.push_back(q);
            v1.push_back(a);
        }
        cout << endl
             << "PLEASE CONFIRM YOUR CHOICES :-" << endl
             << endl;
        for (i = 0; i < v1.size(); i++)
        {
            cout << m1.at(v1[i]) << "  "
                 << "(*" << v2[i] << ")" << endl;
            amount_enter = amount_enter + (m2.at(v1[i]) * v2[i]);
        }
        amount1_enter = amount_enter + amount_enter * .05;
        cout << endl
             << endl;
        cout << "PRESS 1: TO CONTINUE " << endl;
        cout << "PRESS 2: TO EXIT " << endl;
        int e;
        cin >> e;
        if (e == 2)
            exit(1);
        cout << endl
             << endl
             << "PRESS 1: TO PAY BY CASH " << endl;
        cout << "PRESS 2: TO PAY BY CARD " << endl;

        cin >> ca;
        cout << endl
             << endl;
        if (ca == 2)
        {
            cout << "PLEASE ENTER THE CARD NUMBER: ";
            cin >> card;
            cout << "PLEASE ENTER THE PIN: ";
            cin >> pin;
        }
        cout << endl
             << "THANK YOU FOR PROVIDING US THE DETAIL " << endl
             << endl;
    }
};

class Esports : public virtual Entertainment
{
private:
    long int card;
    int pin;

public:
    void detail4()
    {
        cout << "************ THE FOLLOWING ARCADES ARE OPEN RIGHT NOW ************" << endl;
        cout << "PRESS 1 : Club Sega\t\t\t450/entry" << endl;
        cout << "PRESS 2 : Funspot\t\t\t450/entry" << endl;
        cout << "PRESS 3 : The 1up\t\t\t500/entry" << endl;
        cout << "PRESS 4 : Joypolis\t\t\t500/entry" << endl;
        m1[1] = "Club Sega";
        m1[2] = "Funspot";
        m1[3] = "The 1up";
        m1[4] = "Joypolis";
        m2[1] = 450;
        m2[2] = 450;
        m2[3] = 500;
        m2[4] = 500;
        vector<int> v1;
        vector<int> v2;
        int i = 1;
        while (true)
        {
            cout << endl
                 << "ENTER YOUR " << i << " CHOICE OR PRESS 0 TO SUBMIT :-" << endl;
            i++;
            int a;
            int q;
            cin >> a;
            if (a == 0)
            {
                break;
            }
            cout << "ITS QUUATITY :";
            cin >> q;
            v2.push_back(q);
            v1.push_back(a);
        }
        cout << endl
             << "PLEASE CONFIRM YOUR CHOICES :-" << endl
             << endl;
        for (i = 0; i < v1.size(); i++)
        {
            cout << m1.at(v1[i]) << "  "
                 << "(*" << v2[i] << ")" << endl;
            amount_enter = amount_enter + (m2.at(v1[i]) * v2[i]);
        }
        amount1_enter = amount_enter + amount_enter * .05;
        cout << endl
             << endl;
        cout << "PRESS 1: TO CONTINUE " << endl;
        cout << "PRESS 2: TO EXIT " << endl;
        int e;
        cin >> e;
        if (e == 2)
            exit(1);
        cout << endl
             << endl
             << "PRESS 1: TO PAY BY CASH " << endl;
        cout << "PRESS 2: TO PAY BY CARD " << endl;

        cin >> ca;
        cout << endl
             << endl;
        if (ca == 2)
        {
            cout << "PLEASE ENTER THE CARD NUMBER: ";
            cin >> card;
            cout << "PLEASE ENTER THE PIN: ";
            cin >> pin;
        }
        cout << endl
             << "THANK YOU FOR PROVIDING US THE DETAIL " << endl
             << endl;
    }
};

class Workshops : public virtual Entertainment
{
private:
    long int card;
    int pin;

public:
    void detail5()
    {
        cout << "************ THE FOLLOWING WORKSHOPS ARE ACCEPTING STUDENTS ************" << endl;
        cout << "PRESS 1 : Ruskind Bond Teached writing\t\t600/class" << endl;
        cout << "PRESS 2 : cure.fit live\t\t\t\t190/class" << endl;
        cout << "PRESS 3 : Manoj Bajpayee Teaches acting\t\t1140/class" << endl;
        cout << "PRESS 4 : Origami and paper craft\t\t150/class" << endl;
        cout << "PRESS 5 : Codathon\t\t\t\t160/class" << endl;
        cout << "PRESS 6 : Art and Drawing\t\t\t160/class" << endl;
        cout << "PRESS 7 : Web Development\t\t\t180/class" << endl;
        m1[1] = "Ruskind Bond Teached writing";
        m1[2] = "cure.fit live";
        m1[3] = "Manoj Bajpayee Teaches acting";
        m1[4] = "Origami and paper craft";
        m1[5] = "Codathon";
        m1[6] = "Art and Drawing";
        m1[7] = "Web Development";
        m2[1] = 600;
        m2[2] = 190;
        m2[3] = 1140;
        m2[4] = 150;
        m2[5] = 160;
        m2[6] = 160;
        m2[7] = 180;
        vector<int> v1;
        vector<int> v2;
        int i = 1;
        while (true)
        {
            cout << endl
                 << "ENTER YOUR " << i << " CHOICE OR PRESS 0 TO SUBMIT :-" << endl;
            i++;
            int a;
            int q;
            cin >> a;
            if (a == 0)
            {
                break;
            }
            cout << "CLASSES :";
            cin >> q;
            v2.push_back(q);
            v1.push_back(a);
        }
        cout << endl
             << "PLEASE CONFIRM YOUR CHOICES :-" << endl
             << endl;
        for (i = 0; i < v1.size(); i++)
        {
            cout << m1.at(v1[i]) << "  "
                 << "(*" << v2[i] << ")" << endl;
            amount_enter = amount_enter + (m2.at(v1[i]) * v2[i]);
        }
        amount1_enter = amount_enter + amount_enter * .05;
        cout << endl
             << endl;
        cout << "PRESS 1: TO CONTINUE " << endl;
        cout << "PRESS 2: TO EXIT " << endl;
        int e;
        cin >> e;
        if (e == 2)
            exit(1);
        cout << endl
             << endl
             << "PRESS 1: TO PAY BY CASH " << endl;
        cout << "PRESS 2: TO PAY BY CARD " << endl;

        cin >> ca;
        cout << endl
             << endl;
        if (ca == 2)
        {
            cout << "PLEASE ENTER THE CARD NUMBER: ";
            cin >> card;
            cout << "PLEASE ENTER THE PIN: ";
            cin >> pin;
        }
        cout << endl
             << "THANK YOU FOR PROVIDING US THE DETAIL " << endl
             << endl;
    }
};

class bill : public Entertainment
{
public:
    void calc()
    {
        fstream enter;
        enter.open("BILL.txt",ios::out);
        cout << "HERE IS YOUR BILL :)\n\n\n\n";
        cout << "*************************** ENTERTAINMENT AWAITS YOU ***************************" << endl;
        cout << "\n\n       NAME: \t\t\t\t\t "<<name;
        cout << "\n\n       PHONE: \t\t\t\t\t " << phonenumber[0] << phonenumber[1] << "*****" << phonenumber[7] << phonenumber[8] << phonenumber[9] << endl
             << endl;
        cout << "       DATE:\t\t\t\t\t "
             << daym<<"/"<<monthm<<"/"<<yearm<< endl;
        std::cout << std::fixed;
        std::cout << std::setprecision(2);
        cout << "    STATUS : \t\t\t\t    PAYMENT SUCCESSFULL " << endl;
        if (ca == 1)
        {
            cout << "    MODE OF PAYMENT :\t\t\t\tPAID BY CASH" << endl
                 << endl;
        }
        else if (ca == 2)
        {
            cout << "    MODE OF PAYMENT :\t\t\t\tPAID BY CARD" << endl
                 << endl;
        }
        cout << "    TOKEN NUMBER :\t\t\t\t";
        int ra = random_num(0, 500);
        std::cout << ra << endl;

        cout << endl
             << endl;
        std::cout << "    TOTAL AMOUNT:\t\t\t\t" << amount_enter << endl;
        std::cout << std::fixed;
        std::cout << std::setprecision(2);
        std::cout << "    TOTAL AMOUNT (5% GST):\t\t\t" << amount1_enter << endl
                  << endl;
        enter<<amount1_enter;
        enter<<endl;
        cout << "************************************************************************************" << endl;
        cout << "                         THANK YOU AND STAY SAFE " << endl;
        cout << "************************************************************************************" << endl;
        enter.close();
        }

};



int main()
{   system("COLOR 2F");
    cout<<"\t\t\t"<<"***********************       AARAKक्षण      ***********************  "<<endl;
    cout<<endl<<"\t\t\t\t\t\t"<<"HELLO SIR!!  GLAD MEETING YOU"<<endl;
    cout<<endl<<"PLEASE REGISTER YOURSELF :"<<endl;
    cout<<endl;
    Customer cu;
    cu.getdetails();
    cout<<endl<<"THANKS FOR PROVIDING THE DATAIL :"<<endl;
    cout<<endl<<endl<<"PLEASE ENTER TODAY'S DATE :"<<endl;
    cout<<"DAY   :\t";
    cin>>daym;
    cout<<"MONTH :\t";
    cin>>monthm;
    cout<<"YEAR  :\t";
    cin>>yearm;
    cout<<endl;
    cout<<"PLEASE SELECT AMONG THE FOLLOWING :"<<endl;
    cout<<"1-HOTEL BOOKING"<<endl;
    cout<<"2-TRANSPORTATION "<<endl;
    cout<<"3-ENTERTAINMENT"<<endl;
    cout<<"4-FOOD"<<endl;
    int ch;
    cin>>ch;
    if(ch==1)
    {
    Hotel a;
    a.getdetails();
    room b;
    b.types();
    Food d;
    d.getdetails();
    transport c;
    c.types();
    a.feed();
    return 0;

    }
    if(ch==3)
    {
        int t;
    Entertainment ob;
    ob.disp();
    cout << endl
         << "ENTER YOUR CHOICE :";
    cin >> t;
    if (t == 1)
    {
        MOVIE ob1;
        ob1.detail1();
        bill b1;
        b1.calc();
    }
    else if (t == 2)
    {
        KID_ZONE ob2;
        ob2.detail2();
        bill b2;
        b2.calc();
    }
    else if (t == 3)
    {
        COMEDY ob3;
        ob3.detail3();
        bill b3;
        b3.calc();
    }
    else if (t == 4)
    {
        Esports ob4;
        ob4.detail4();
        bill b4;
        b4.calc();
    }
    else if (t == 5)
    {
        Workshops ob5;
        ob5.detail5();
        bill b5;
        b5.calc();
    }
    }
    if(ch==4)
    {
        int t;
    FOOD ob;
    ob.disp();
    cout << endl
         << "ENTER YOUR CHOICE :";
    cin >> t;
    if (t == 1)
    {
        VEG ob1;
        ob1.detail1();
        billF b1;
        b1.calc();
    }
    else if (t == 2)
    {
        NONVEG ob2;
        ob2.detail2();
        billF b2;
        b2.calc();
    }
    else if (t == 3)
    {
        snacks ob3;
        ob3.detail3();
        billF b3;
        b3.calc();
    }
    else if (t == 4)
    {
        pizza ob4;
        ob4.detail4();
        billF b4;
        b4.calc();
    }
    else if (t == 5)
    {
        dessert ob5;
        ob5.detail5();
        billF b5;
        b5.calc();
    }
    else if (t == 6)
    {
        drink ob6;
        ob6.detail6();
        billF b6;
        b6.calc();
    }
    else if (t == 7)
    {
        chinese ob7;
        ob7.detail7();
        billF b7;
        b7.calc();
    }
    else if (t == 8)
    {
        italian ob8;
        ob8.detail8();
        billF b8;
        b8.calc();
    }
    }
    if(ch==2)
    {
        TRANSPORT t;
        t.types();
    }
}
