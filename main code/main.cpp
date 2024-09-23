#include<bits/stdc++.h>
#include<time.h>
#include<windows.h>
#include<stdlib.h>
#include<string>
#include<conio.h>
using namespace std;


void display_Banner();
void display_Banner2();
void print_Space();
void main_Menu();
void COVID_19_Sympyoms();
void Delay();
void about_Coronavirus();
//void //check_Fitnesss();
void prevent_COVID_19();
void check_COVID_19();
int check(int x);
void display_Thanks();
void  Color();


int main()
{
    Color();
    //system("color 06");
    char ch,ch1;
    display_Banner();
    display_Banner2();

    cout<<endl<<endl;
    print_Space();

    system("pause");
    system("CLS");
    Color();
up:
    display_Banner();
    display_Banner2();


Back:
    system("CLS");
    display_Banner();
    display_Banner2();
    main_Menu();
    cout<<endl;
    print_Space();
    cout<<"                 ";
    while(1)
    {
        ch = getch();
        Color();
        if(ch=='1' || ch=='2' || ch=='3' || ch=='4' || ch=='E' || ch=='e')
        {
            break;
        }
    }

    system("CLS");
    display_Banner();
    display_Banner2();
    if(ch=='1')
    {
        about_Coronavirus();
    }
    /*else if(ch=='2')
    {
        print_Space();
        cout<<"                              Check Your Body Fitness/BMI\n";
        print_Space();
        cout<<"                           ---------------------------------\n\n";

        check_Fitnesss( );
    }*/
    else if(ch=='2')
    {
        COVID_19_Sympyoms();
    }
    else if(ch=='3')
    {
        check_COVID_19();

    }
    else if(ch=='4')
    {
        prevent_COVID_19();
    }
    /*else if(ch=='b' ||ch=='B')
    {
        system("CLS");
        goto up;
    }*/
    else
    {
        system("CLS");
        display_Banner();
        display_Thanks();
        return 0;
    }

    cout<<endl<<endl;
    print_Space();
    cout<<"                            ----Press YOUR CHOICE----\n\n";

    print_Space();
    cout<<"                             => Back-------------[B]\n";

    print_Space();
    cout<<"                             => Exit-------------[E]\n\n";

    print_Space();
    cout<<"                              ";

    while(1)
    {
        ch = getch();
        Color();
        if(ch=='B' || ch=='b' || ch=='E' || ch=='e')
        {
            break;
        }
    }

    if(ch=='e' || ch=='E')
    {
        system("CLS");
        display_Banner();
        display_Thanks();
        return 0;
    }
    else
    {
        goto Back;
    }

    return 0;
}


void display_Banner()
{
    cout<<"$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n";
    cout<<"$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n";
    cout<<"$$$$$$$$$$$$$$$$   $$$$$$  $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$.^^^^^^^^^.$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$   $$$$$$  $$$$$$$$$$$$\n";
    cout<<"$$$$$$$$$   $$$$$  $$$$$   $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$.             .$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$   $$$$$  $$$$$   $$$$$$$$$$$$\n";
    cout<<"$$$$$$$$$                 $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$'                 `$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$                 $$$$$$$$$$$$$\n";
    cout<<"$$$$$$$$$$$                 $   $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$'                     `$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$                 $   $$$$$$$\n";
    cout<<"$$$$$                           $$$$$$$$$$$$$$$'`$$$$$$$$$$$$$'`$$$$$$!                         !$$$$$$'`$$$$$$$$$$$$$'`$$$$$$$$$$$$$                           $$$$$$$\n";
    cout<<"$$$$$                         $$$$$$$$$$$$$$$$$$  $$$$$$$$$$$  $$$$$$$$$    ^^^^^     ^^^^^    $$$$$$$$$  $$$$$$$$$$$  $$$$$$$$$$$$$$                         $$$$$$$$$\n";
    cout<<"$$$$$$$$                          $$$$$$$$$$$$$$. `$' |' |$`  $$$$$$$! .$    (o)       (o)    $. !$$$$$$$  '$/ `/ `$' .$$$$$$$$$$$$$$$$$                          $$$$$\n";
    cout<<"$$$$$$$                           $$$$$$$$$$$$$$$. !|  i  i .$$$$$$$$   .$                   $.   $$$$$$$$. i  i  /! .$$$$$$$$$$$$$$$$$                           $$$$$\n";
    cout<<"$$$$$                         $$$$$$$$$$$$$$$$$$$$   `--`--.$$$$$$$$$    .$                 $.    $$$$$$$$$.--'--'   $$$$$$$$$$$$$$$$                         $$$$$$$$$\n";
    cout<<"$$$$$  $$                    $$$$$$$$$$$$$$$$$$$$$L        `$$$$$^^$$     .$$$$$$$$$$$$$$$$$.     $$^^$$$$$'        J$$$$$$$$$$$$$$$$  $$                    $$$$$$$$$$\n";
    cout<<"$$$$$$$$$$                      $$$$$$$$$$$$$$$$$$$.   .'   ^^~   $$$$$    .$$$$$$$$$$$$$$$.    $$$$$   ~^^   `.   .$$$$$$$$$$$$$$$$$$$$$$                      $$$$$$$\n";
    cout<<"$$$$$$$$    $             $$$  $$$$$$$$$$$$$$$$$$$$$.  ;      .e$$$$$! $    .$$$$$$$$$$$$$.    $ !$$$$$e,      ;  .$$$$$$$$$$$$$$$$$$$$$    $             $$$  $$$$$$$$\n";
    cout<<"$$$$$$$$$  $$$$$    $$    $$$$$$$$$$$$$$$$$$$$$$$$$$$   `.$$$$$$$$$$$$  .$  .$$$$$$$$$$$$$.  $.  $$$$$$$$$$$$.'   $$$$$$$$$$$$$$$$$$$$$$$  $$$$$    $$    $$$$$$$$$$$$$\n";
    cout<<"$$$$$$$$$$$$$$$   $$$$$   $$$$$$$$$$$$$$$$$$$$$$$$$$    .$$$$$$$$$$$$$!  .$ .$$$$$$$$$$$$$. $.  !$$$$$$$$$$$$$.    $$$$$$$$$$$$$$$$$$$$$$$$$$$$   $$$$$   $$$$$$$$$$$$$\n";
    cout<<"$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$    .$$$$$$$$$$$$$$$$  .$$$$$$$$$$$$$$$$$.  $$$$$$$$$$$$$$$$.    $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n";
    cout<<"$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$    .$$$$$$$$$$$$$$$$$$  .$$$$$$$$$$$$$$$.  $$$$$$$$$$$$$$$$$$.    $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n\n";
    cout<<"                                                                         STAY HOME, STAY SAFE!                                                                         \n";
}


int x1=0;
void display_Banner2()
{
    x1++;
    if(x1!=1)
    {
        cout<<endl;
        print_Space();

        for(int i=0; i<87; i++)
        {
            printf("*");
        }

        cout<<endl;
        print_Space();
        cout<<"                            COVID-19 DETECTION & PREVENTION                            \n";

        print_Space();
        for(int i=0; i<87; i++)
        {
            printf("*");
        }

        cout<<endl<<endl;
    }
}


void display_Thanks()
{
    cout<<"\n\n";
    cout<<"                                               -::::::::::::-`....`   `....      .::::     `////`   .+++/ `////`   .////`\n";
    cout<<"                                               ://///////////`----.   `----`    `/++++.    .oooo+`  :oooo``ssss.  :ssss: \n";
    cout<<"                                               .::://////:::: ----.   `----`    -+++++/    -ooooo+` -oooo``ssss. /ssss:  \n";
    cout<<"                                                   -////:     ----.   `----`   `+++:/++.   -oooooo+`-oooo``ssss-+ssso.   \n";
    cout<<"                                                   .////:     -----....----`   -+++.-++/   -oooooooo/oooo`.sssssssso`    \n";
    cout<<"                                                   ./////     -------------.  `+++/ `+++.  -ooooooooooooo`.ssssssss`     \n";
    cout<<"                                                   ./////     -----....----.  -+++/..+++:  -oooo-oooooooo`.ssssssss+`    \n";
    cout<<"                                                   `/////     .----    ----.  /++++++++++` -oooo..ooooooo`.ssss/osss+`   \n";
    cout<<"                                                   `/////     .----    ----. .++++/--/+++: -oooo` -oooooo`.ssss:`osss+`  \n";
    cout<<"                                                   `/////     .----    .---- :++++.  -++++`-oooo`  -ooooo`.ssss: `ossso` \n";
    cout<<"                                                   ./////     .----    .----`++++/    /+++--oooo`   :oooo`.ssss:  `+ssso`\n\n";
    cout<<"                                                               :yhy/   `syyy- -/+++++/:.```--:-`   .----`.---`           \n";
    cout<<"                                                                shhh.  ohhho /oooooooooo/ `::::    -:::: ----            \n";
    cout<<"                                                                `yhhy`:hhhy`-ooo+-``-+ooo-`::::    -:::: ----            \n";
    cout<<"                                                                 .hhhshhhy. :oo+`    :ooo-.::::    ::::: ----            \n";
    cout<<"                                                                  :hhhhhh.  :oo/     -ooo-.::::    ::::: ----            \n";
    cout<<"                                                                  `hhhhh.   :oo/     .ooo-.::::    ::::: .---            \n";
    cout<<"                                                                  ohhhh-    :oo+     .ooo-.::::    ::::- .---            \n";
    cout<<"                                                                 /hhhh-     -oo+`    -ooo..::::`   ::::- .---            \n";
    cout<<"                                                                -hhhh:      .ooo/.``-+oo+`.::::-..-::::. ````            \n";
    cout<<"                                                               `yhhh+       `+ooooooooo+-  :::::::::::-  .---`           \n";
    cout<<"                                                               /ssso         `:/+++++/-`    `--:::::-`   ....            \n";
}



void print_Space()
{
    cout<<"                                        ";
}


void main_Menu()
{
    print_Space();
    cout<<"                                  PRESS YOUR OPTION\n";
    print_Space();
    cout<<"                               -----------------------\n\n";

    print_Space();
    cout<<"                 => About Coronavirus(SARS-CoV-2)------------[1]\n";

    /* print_Space();
     cout<<"                 => Check Your Body Fitness/BMI[2]\n";*/

    print_Space();
    cout<<"                 => COVID-19 Sympyoms------------------------[2]\n";

    print_Space();
    cout<<"                 => Check Your COVID-19 Positivity-----------[3]\n";

    print_Space();
    cout<<"                 => How to Prevent COVID-19?-----------------[4]\n";

    print_Space();
    cout<<"                 => Back-------------------------------------[B]\n";

    print_Space();
    cout<<"                 => Exit-------------------------------------[E]\n";
}


void Delay()
{
    cout<<"Please wait ";

    Sleep(500 );
    cout<<". ";

    Sleep(500);
    cout<<". ";

    Sleep(500);
    cout<<". ";

    Sleep(500);
    cout<<". ";

    Sleep(500);
    cout<<". ";
}


void about_Coronavirus()
{
    print_Space();
    cout<<"                                  About Coronavirus\n";

    print_Space();
    cout<<"                              -------------------------\n\n";

    print_Space();
    cout<<"Coronavirus disease (COVID-19) is an infectious disease caused by a newly discovered\n";

    print_Space();
    cout<<"coronavirus SARS-CoV-2. it was previously referred to by its provisional name, 2019\n";

    print_Space();
    cout<<"novel coronavirus (2019-nCoV).\n\n";

    print_Space();
    cout<<"                            $$$$$$$$$$$$$$$$$$$$$$$$$$\n";

    print_Space();
    cout<<"                            $$$$$$$$$$$$$$$$$$$$$$$$$$\n";

    print_Space();
    cout<<"                            $$$$$$$$$$$  $$$  $$$$$$$$\n";

    print_Space();
    cout<<"                            $$$$$$$           $$$$$$$$\n";

    print_Space();
    cout<<"                            $$$$ $$               $$$$\n";

    print_Space();
    cout<<"                            $$$$                $$$$$$\n";

    print_Space();
    cout<<"                            $$$$$$                 $$$\n";

    print_Space();
    cout<<"                            $$$                 $$$$$$\n";

    print_Space();
    cout<<"                            $$$$$$$              $$$$$\n";

    print_Space();
    cout<<"                            $$$$$$            $$ $$$$$\n";

    print_Space();
    cout<<"                            $$$$$$$$$$   $$   $$$$$$$$\n";

    print_Space();
    cout<<"                            $$$$$$$$$$$$$$$$$$$$$$$$$$\n";

    print_Space();
    cout<<"                            $$$$$$$$$$$$$$$$$$$$$$$$$$\n\n";

    print_Space();
    cout<<"                             Coronavirus(SARS-CoV-2)\n\n";

    print_Space();
    cout<<"There is no evidence yet to link an intermediate host, such as a pangolin, to its\n";

    print_Space();
    cout<<"introduction to humans. The virus subsequently spread to alprovinces of China and\n";

    print_Space();
    cout<<"to more than 200 other countries in Asia, Europe, North America,South America,\n";

    print_Space();
    cout<<"Africa, and Oceania.\n\n";

    print_Space();
    cout<<"The COVID-19 virusspreads primarily through dropletsof saliva or discharge from\n";

    print_Space();
    cout<<"the nose whena r infected person coughs or sneezes, so it is important that you\n";

    print_Space();
    cout<<"also practice espiratory etiquette (example, by coughing into a flexed elbow).\n";

    print_Space();
    cout<<"\n\n";

    print_Space();
    cout<<"References: https://www.who.int; https://wikipedia.org.\n\n";

    print_Space();
    cout<<"----------------------------------------X----------------------------------------------\n";
}


/*void check_Fitnesss()
{
info:

    print_Space();
    cout<<"                           PLEASE ENTER YOUR BASIC INFORMATION \n";

    print_Space();
    cout<<"                         ---------------------------------------\n\n";

    print_Space();

    string weight;
    char feet,inch;

    cout<<"1. Weight(kg) : ";

    getline(cin, weight);
    Color();

    double height;

    print_Space();
    cout<<"2. Height     : \n\n";

    print_Space();
    cout<<"       Feet\n";

    print_Space();
    cout<<"     --------\n";

    for(int i=0; i<9; i++)
    {
        print_Space();
        cout<<"      "<<i+1<<".---"<<i+1<<"'\n";
    }

    print_Space();

    while(1)
    {
        feet = getch();

        Color();

        if(feet=='1' || feet=='2'|| feet=='3'|| feet=='4'|| feet=='5'|| feet=='6'|| feet=='7'|| feet=='8'|| feet=='9')
        {
            break;
        }
    }

    system("CLS");

    display_Banner();
    display_Banner2();

    print_Space();
    cout<<"                        ---PLEASE ENTER YOUR BASIC INFORMATION--- \n";

    print_Space();
    cout<<"1. Weight(kg) : "<<weight<<endl;

    print_Space();
    cout<<"2. Height     : "<<feet<<"'\n\n";

    print_Space();
    cout<<"       Inches\n";

    print_Space();
    cout<<"     ----------\n";

    for(int i=0; i<12; i++)
    {
        if( i==10)
        {
            print_Space();
            cout<<"      A.----"<<i<<'"'<<endl;
        }
        else if(i==11 )
        {
            print_Space();
            cout<<"      B.----"<<i<<'"'<<endl;
        }
        else
        {
            print_Space();
            cout<<"      "<<i<<".----"<<i<<'"'<<endl;
        }
    }

    print_Space();

    while(1)
    {
        inch = getch();
        Color();

        if(inch=='1' || inch=='2'|| inch=='3'|| inch=='4'|| inch=='5'|| inch=='6'|| inch=='7'|| inch=='8'|| inch=='9'|| inch=='A'|| inch=='B'|| inch=='a'|| inch=='b')
        {
            break;
        }
    }
    if(inch=='A'||inch=='a')
    {
        inch=':';
    }

    if(inch=='B'||inch=='b')
    {
        inch=';';
    }

    system("CLS");
    display_Banner();
    display_Banner2();

    print_Space();
    cout<<"                              ENTER YOUR BASIC INFORMATION \n";

    print_Space();
    cout<<"                        ---------------------------------------\n\n";

    print_Space();
    cout<<"1. Weight(kg) : "<<weight<<endl;

    print_Space();
    cout<<"2. Height     : "<<feet<<"'"<<inch-48<<'"'<<endl;

    print_Space();

    int Weight,j=2;

    stringstream y(weight);

    y >> Weight;
    int I=1;

    if( Weight<1 || Weight>1000)
    {
        I=2;
    }

    if(I==1)
    {
        cout<<endl<<endl;
        print_Space();
        cout<<"                                 SUBMISSION SUCCESSFULL\n";
        cout<<endl<<endl;

        print_Space();
        Delay();

        Color();

        system("CLS");
        display_Banner();
        display_Banner2();
    }
    else
    {
        cout<<endl<<endl;
        print_Space();
        cout<<"                               !SUBMISSION UNSUCCESSFULL\n";
        cout<<endl<<endl;

        print_Space();
        Delay();

        system("CLS");
        display_Banner();
        display_Banner2();

        goto info;
    }
    print_Space();
    double z= ((feet-48)*12+(inch-48))/39.37;

    double x = (double)Weight/(z*z);

    cout<<"Your BMI Point is : ";
    printf("%.2f\n\n",x);

    if(x<18.5)
    {
        print_Space();
        cout<<"You are Underweight.\n\n";
    }
    else if(x>=18.5 && x<=24.9)
    {
        print_Space();
        cout<<"You are Normal Weight.\n\n";
    }
    else if(x<=29.9 && x>24.9)
    {
        print_Space();
        cout<<"You are Overweight.\n\n";
    }
    else if(x>29.9 && x<=34.9)
    {
        print_Space();
        cout<<"Your  Weight is High.\n\n";
    }
    else if(x>34.9 && x<=39.9)
    {
        print_Space();
        cout<<"Your  Weight is Very High.\n\n";
    }
    else
    {
        print_Space();
        cout<<"Your  Weight is Extremly High.\n\n\n";
    }
    print_Space();
    cout<<"This BMI nomogram is not intended for use with:\n";

    print_Space();
    cout<<"   1. Those under 18 years of age.\n";

    print_Space();
    cout<<"   2. pregnant and lactating women.\n\n\n";

    print_Space();
    cout<<"Source: Health Canada.\n";

    cout<<endl;
    print_Space();
    cout<<"----------------------------------------X----------------------------------------------\n";
}
*/

void COVID_19_Sympyoms()
{
    print_Space();
    cout<<"                                  COVID_19_Sympyoms \n";

    print_Space();
    cout<<"                                --------------------\n\n";

    print_Space();
    cout<<"# COVID-19 affects different people in different ways. Most infected people will develop\n";

    print_Space();
    cout<<"  mild to moderate illness and recover without hospitalization.\n\n";

    print_Space();
    cout<<"   *Most common symptoms:\n\n";

    print_Space();
    cout<<"          - Fever.\n";

    print_Space();
    cout<<"          - Dry cough.\n";

    print_Space();
    cout<<"          - Tiredness.\n\n";


    print_Space();
    cout<<"   *Less common symptoms:\n\n";

    print_Space();
    cout<<"          - Aches and pains.\n";

    print_Space();
    cout<<"          - Sore throat.\n";

    print_Space();
    cout<<"          - Diarrhoea.\n";

    print_Space();
    cout<<"          - Conjunctivitis.\n";

    print_Space();
    cout<<"          - Headache.\n";

    print_Space();
    cout<<"          - Loss of taste or smell.\n";

    print_Space();
    cout<<"          - A rash on skin, or discolouration of fingers or toes.\n\n";

    print_Space();
    cout<<"   *Serious Symptoms:\n\n";

    print_Space();
    cout<<"          - Difficulty breathing or shortness of breath.\n";

    print_Space();
    cout<<"          - Chest pain or pressure.\n";

    print_Space();
    cout<<"          - Loss of speech or movement.\n\n";

    print_Space();
    cout<<"Seek immediate medical attention if you have serious symptoms. Always call before\n";

    print_Space();
    cout<<"visiting your doctor or health facility.\n\n";

    print_Space();
    cout<<"People with mild symptoms who are otherwise healthy should manage their symptoms\n";

    print_Space();
    cout<<"at home.\n\n";

    print_Space();
    cout<<"On average it takes 5–6 days from when someone is infected with the virus for\n";

    print_Space();
    cout<<"symptoms to show, however it can take up to 14 days.\n\n";

    cout<<"\n";
    print_Space();

    cout<<"Source : https://www.who.int\n";
    cout<<endl;

    print_Space();
    cout<<"----------------------------------------X----------------------------------------------\n";
}


void prevent_COVID_19()
{
    print_Space();
    cout<<"                              How to Prevent COVID-19?\n";

    print_Space();
    cout<<"                           -----------------------------\n\n";

    print_Space();
    cout<<"# To prevent infection and to slow transmission of COVID-19, do the following:\n\n\n";

    print_Space();
    cout<<"      - Wash your hands regularly with soap and water, or clean them with alcohol-based\n";

    print_Space();
    cout<<"        hand rub. Right way for washing hands- https://youtu.be/L-QWAi6n1Bk\n\n";

    print_Space();
    cout<<"      - Maintain at least 1 metre distance between you and people coughing or sneezing.\n\n";

    print_Space();
    cout<<"      - Avoid touching your face.\n\n";

    print_Space();
    cout<<"      - Cover your mouth and nose when coughing or sneezing.\n\n";

    print_Space();
    cout<<"      - Stay home if you feel unwell.\n\n";

    print_Space();
    cout<<"      - Refrain from smoking and other activities that weaken the lungs.\n\n";

    print_Space();
    cout<<"      - Practice physical distancing by avoiding unnecessary travel and staying away\n";

    print_Space();
    cout<<"        from large groups of people.\n\n\n";

    print_Space();
    cout<<"      - You must wear a mask when going to the hospital and avoid public transport\n";

    print_Space();
    cout<<"        or crowds.\n\n";

    print_Space();
    cout<<"      - You can have only one companion with you while traveling but you have to\n";

    print_Space();
    cout<<"        maintain a safe distance (3 feet) with him.\n\n";

    print_Space();
    cout<<"Source : https://www.who.int\n";

    cout<<"\n";
    print_Space();
    cout<<"----------------------------------------X----------------------------------------------\n";
}


void check_COVID_19()
{
cc:
    int u=0,x,w=0;

    print_Space();
    cout<<"                             COVID-19 Self Checker\n";

    print_Space();
    cout<<"                        ----------------------------------\n\n";

    print_Space();
    cout<<"# The purpose of the Coronavirus Self-Checker is to help you make decisions about \n";

    print_Space();
    cout<<" seeking appropriate medical care. This system is not intended for the diagnosis or \n";

    print_Space();
    cout<<" treatment of disease or other conditions, including COVID-19.\n\n";

    print_Space();
    cout<<"     1. I agree\n";

    print_Space();
    cout<<"     2. I don't agree\n";

    print_Space();

    char ch;
    while(1)
    {
        ch = getch();
        Color();
        if(ch=='1' || ch=='2')
        {
            break;
        }
    }

    if(ch=='2')
    {
        cout<<"\n";
        print_Space();

        cout<<" I don't agree";
        goto m;
    }

    cout<<"\n";
    print_Space();
    cout<<" I agree\n\n";

    print_Space();
    cout<<"     \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n";

    print_Space();
    cout<<"     \xB2                                                                           \xB2\n";

    print_Space();
    cout<<"     \xB2                Welcome to COVID-19 self checker chatbot                   \xB2\n";

    print_Space();
    cout<<"     \xB2              ---------------------------------------------                \xB2\n";


    print_Space();
    cout<<"     \xB2                                                                           \xB2\n";

    print_Space();
    cout<<"     \xB2 Press any key to continue . . . ";

    getch();
    Color();
    cout<<"\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b";
    cout<<"\xB2 I will use your answers to give you advice about the level                \xB2\n";

    print_Space();
    cout<<"     \xB2 of medical care you should seek.                                          \xB2\n";

    print_Space();
    cout<<"     \xB2                                                                           \xB2\n";

    print_Space();
    cout<<"     \xB2 But first, if you are experiencing a life-threatening                     \xB2\n";

    print_Space();
    cout<<"     \xB2 emergency, please call 999 immediately. If you are not                    \xB2\n";

    print_Space();
    cout<<"     \xB2 experiencing a life-threatening emergency.                                \xB2\n";

    print_Space();
    cout<<"     \xB2                                                                           \xB2\n";

    print_Space();
    cout<<"     \xB2 # Let\'s get started(press Y for yes and N for no).                        \xB2\n";

    print_Space();
    cout<<"     \xB2                                                                           \xB2\n";

    print_Space();
    cout<<"     \xB2 Press any key to continue . . . ";

    getch();
    Color();

    cout<<"\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b";
    cout<<"                                  ";
    cout<<"                                 Start  \xB2\n";

    print_Space();
    cout<<"     \xB2                                                                           \xB2\n";

    print_Space();
    cout<<"     \xB2 # Do you have any of these life-threatening symptoms?(Y/N)                \xB2\n";

    print_Space();
    cout<<"     \xB2    - Extreme difficulty breathing                                         \xB2\n";

    print_Space();
    cout<<"     \xB2    - Bluish lips or face                                                  \xB2\n";

    print_Space();
    cout<<"     \xB2    - Loss of speech or movement                                           \xB2\n";

    print_Space();
    cout<<"     \xB2    - New disorientation (acting confused)                                 \xB2\n";

    print_Space();
    cout<<"     \xB2                                                                      ";

    x = check(100);
    cout<<"  \xB2\n";

    print_Space();
    cout<<"     \xB2                                                                           \xB2\n";

    if(x==100)
    {
        w=1;
        print_Space();
        cout<<"     \xB2 Urgent medical attention may be needed. Please Call emergency             \xB2\n";

        print_Space();
        cout<<"     \xB2 hotline 999 or Contact the hospital immediately.                          \xB2\n";

        print_Space();
        cout<<"     \xB2                                                                           \xB2\n";

        print_Space();
        cout<<"     \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n";

        cout<<"\n";
        //print_Space();
        //cout<<"----------------------------------------X----------------------------------------------\n";

        goto m;
    }

    print_Space();
    cout<<"     \xB2 # Are you over 60 years old?(Y/N)                                         \xB2\n";

    print_Space();
    cout<<"     \xB2                                                                      ";

    x = check(5);
    u+=x;
    cout<<"  \xB2\n";

    print_Space();
    cout<<"     \xB2                                                                           \xB2\n";
    print_Space();
    cout<<"     \xB2 # Are you feeling seek?(Y/N)                                              \xB2\n";

    print_Space();
    cout<<"     \xB2                                                                      ";
    x = check(5);
    u+=x;
    cout<<"  \xB2\n";

    print_Space();
    cout<<"     \xB2                                                                           \xB2\n";

    print_Space();
    cout<<"     \xB2 # Do you have a fever?(Y/N)                                               \xB2\n";

    print_Space();
    cout<<"     \xB2                                                                      ";
    x = check(20);
    u+=x;
    cout<<"  \xB2\n";

    print_Space();
    cout<<"     \xB2                                                                           \xB2\n";
    print_Space();
    cout<<"     \xB2 # Do you have a dry caugh?(Y/N)                                           \xB2\n";

    print_Space();
    cout<<"     \xB2                                                                      ";
    x = check(20);
    u+=x;
    cout<<"  \xB2\n";

    print_Space();
    cout<<"     \xB2                                                                           \xB2\n";
    print_Space();
    cout<<"     \xB2 # Did you have close contact with COVID-19 patient?(Y/N)                  \xB2\n";

    print_Space();
    cout<<"     \xB2                                                                      ";
    x = check(40);
    u+=x;
    cout<<"  \xB2\n";

    print_Space();
    cout<<"     \xB2                                                                           \xB2\n";

    print_Space();
    cout<<"     \xB2 # Do you have any of the following?(Y/N)                                  \xB2\n";

    print_Space();
    cout<<"     \xB2    - New loss of taste or smell                                           \xB2\n";

    print_Space();
    cout<<"     \xB2    - Vomiting or diarrhea                                                 \xB2\n";

    print_Space();
    cout<<"     \xB2    - Muscle aches or body aches                                           \xB2\n";

    print_Space();
    cout<<"     \xB2    - Sore throat                                                          \xB2\n";

    print_Space();
    cout<<"     \xB2                                                                      ";
    x = check(10);
    u+=x;
    cout<<"  \xB2\n";

    print_Space();
    cout<<"     \xB2 # Do you live in a long-term care facility, or homeless                   \xB2\n";

    print_Space();
    cout<<"     \xB2   shelter?(Y/N)                                                           \xB2\n";
    print_Space();
    cout<<"     \xB2                                                                      ";
    x = check(10);
    u+=x;
    cout<<"  \xB2\n";

    print_Space();
    cout<<"     \xB2                                                                           \xB2\n";

    print_Space();
    cout<<"     \xB2 # Have you worked in a healthcare facility?(Y/N)                          \xB2\n";

    print_Space();
    cout<<"     \xB2                                                                      ";
    x = check(51);
    u+=x;
    cout<<"  \xB2\n";

    print_Space();
    cout<<"     \xB2                                                                           \xB2\n";

    print_Space();
    cout<<"     \xB2 # Has breathing difficulty started in the last 2 weks?(Y/N)               \xB2\n";

    print_Space();
    cout<<"     \xB2                                                                      ";
    x = check(56);
    u+=x;
    cout<<"  \xB2\n";

    print_Space();
    cout<<"     \xB2                                                                           \xB2\n";

    print_Space();
    cout<<"     \xB2                               Chat Closed                                 \xB2\n";

    print_Space();
    cout<<"     \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n";
    cout<<"\n\n\n";

    print_Space();
    cout<<" Your data is analysing.\n\n";

    print_Space();
    cout<<" Please wait ";

    Sleep(1000 );
    cout<<". ";

    Sleep(1000);
    cout<<". ";

    Sleep(1000);
    cout<<". ";

    Sleep(1000);
    cout<<". ";

    Sleep(1000);
    cout<<". ";

    Sleep(1000);
    cout<<". ";

    Sleep(1000);
    cout<<"\n\n\n";


    //print_Space();
    //
    /*for(int i=0; i<100;i++)
     {
         cout<<'';
     }
     print_Space();
     cout<<"was analyzed.\n\n\n";*/
    Color();
    print_Space();
    cout<<"                                    \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n";

    print_Space();
    cout<<"                                    \xB2  REPORT  \xB2\n";

    print_Space();
    cout<<"                                    \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n";

    if(u<25)
    {
        print_Space();
    cout<<"You are in Green Zone\n\n";
        //system("COLOR 02");
        if (u==0)
        {
            print_Space();
            cout<<"You don\’t appear to have symptoms of COVID-19.\n";
        }
        else
        {
            print_Space();
            cout<<"Stay home  and take care of yourself.Your  symptoms may be\n";

            print_Space();
            cout<<"related to COVID-19.\n";
        }
    }
    else if(u>=25 && u<=50)
    {print_Space();
    cout<<"You are in Yellow Zone\n\n";
        // system("COLOR 06");
        print_Space();
        cout<<"Stay home  and take care of yourself. Call your medical provider. Sorry you\n";

        print_Space();
        cout<<"are not feeling well. Your symptoms may be related to COVID-19.\n";
    }
    else if(u>=51 && u<=75)
    {print_Space();
    cout<<"You are in Orange Zone\n\n";
        //system("COLOR 01");
        print_Space();
        cout<<"You may be eligible for COVID-19 testing. We are recomended you contacted with\n";

        print_Space();
        cout<<"doctor and IIDCR helpline.\n";
    }
    else
    {print_Space();
    cout<<"You are in Red Zone\n\n";
        //system("COLOR 04");
        print_Space();
        cout<<"We are highly recomended you to contact 333 or 16263 hotline or seek medical\n";

        print_Space();
        cout<<"care immediately.\n\n";
    }

    cout<<"\n";
    print_Space();
    cout<<"Please check with your Ministry of Health or local health department for additional\n";

    print_Space();
    cout<<"information and guidelines about COVID-19 in your location.\n";
    cout<<"\n";
    print_Space();
    cout<<"Wash your hands frequently with soap and water (more than 20 seconds at a time).\n";

    print_Space();
    cout<<"You can use sanitizer if necessary.\n\n";

    print_Space();
    cout<<"Avoid public gatherings unless absolutely necessary, try to stay home most of the time.\n";

    print_Space();
    cout<<"Proper hand washing rules: https://youtu.be/L-QWAi6n1Bk\n\n";

    print_Space();
    cout<<"You must wear a mask when going to the hospital and avoid public transport or crowds.\n";

    print_Space();
    cout<<"You can have only one companion with you while traveling but you have to maintain\n";

    print_Space();
    cout<<"a safe distance (3 feet) with him.\n";
    print_Space();
    cout<<"                                                                   --------------------\n";
     print_Space();
    cout<<"                                                                   \xB3Symbol \xB3 Zone     \xB3\n";
    print_Space();
    cout<<"                                                                   --------------------\n";
 print_Space();
    cout<<"                                                                   \xB3Green  \xB3 Normal   \xB3\n";



    print_Space();
    cout<<"This is our observations only.                                     \xB3Yellow \xB3 Bad      \xB3\n";

    print_Space();
    cout<<"Seeks medical attention before any kind of tretement.              \xB3Orange \xB3 Risky    \xB3\n";
print_Space();
    cout<<"                                                                   \xB3Red    \xB3 Dangerous\xB3\n";
print_Space();
    cout<<"                                                                   --------------------\n";


m:
    ;
cout<<"\n";
    print_Space();
    cout<<"----------------------------------------X----------------------------------------------\n";


    cout<<"\n\n";
    if(w!=1)
    {
        print_Space();
        cout<<"                            ----Recheck COVID-19----\n\n";
        print_Space();
        cout<<"                             => Yes--------------[Y]\n";
        print_Space();
        cout<<"                             => No---------------[N]\n";
        print_Space();
        // cout<<"                          ";
        char h;
        cout<<"                             ";
        while(1)
        {
            h = getch();
            Color();
            if(h=='y' || h=='Y' || h=='n' || h=='N')
            {
                break;
            }
        }
        cout<<"                             ";
        print_Space();
        cout<<h;
        if(h=='y' || h=='Y')
        {
            system("CLS");
            display_Banner();
            display_Banner2();
            goto cc;
        }

    }

}


int check( int x)
{
    char c;
    while(1)
    {
        c = getch();
        Color();
        if(c=='y' || c=='Y' || c=='n' || c=='N')
        {
            break;
        }
    }
    if(c=='y' || c=='Y')
    {
        cout<<"Yes";
    }
    else
    {
        cout<<" No";
        x= 0;
    }
    return x;
}


int co=0;
void Color()
{

    co%=3;
    co++;
    switch(co)
    {
    case 1:
        system("COLOR 06");
        break;

    case 2:
        system("COLOR 02");
        break;

    case 3:
        system("COLOR 01");
        break;



    }
}





