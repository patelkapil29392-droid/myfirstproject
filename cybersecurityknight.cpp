#include<iostream>
using namespace std;
int main() {
    int start,a,b,c,d,e,f,b1,c1,d1,e1,f1,r,s;
    int p=0;
    int h=10;
    string name,lastname;
    cout<<"         WELLCOME TO CYBERSECURITY KNIGHT    "<<endl;
    cout<<"--------------DETAILS---------------"<<endl;
    cout<<"IT IS A QUIZ TYPED GAME"<<endl;
    cout<<"----> HOW TO PLAY THE GAME"<<endl;
    cout<<"It is a five levels game "<<endl;
    cout<<"Player should complete all five levels to winning the game"<<endl;
    cout<<"For starting the game, enter the '0'   &&  Exit enter '100' "<<endl;
    cout<<endl;

    cout<<"Enter '0' to start the game"<<endl;
    cin>>start;
    cout<<endl;

    if (start == 0) {
        cout<<"GAME HAS STARTED"<<endl;
        cout<<"ENTER YOUR NAME"<<endl;
        cin>>name;
    }
    else {
        cout<<"INVALID CHOICE"<<endl;
        cout<<"Enter '0' to start the game"<<endl;
        cin>>start;
        cout<<"GAME HAS STARTED"<<endl;
        cout<<"ENTER YOUR NAME"<<endl;
        cin>>name>>lastname;
    }
    cout<<" WELCOME TO LEVEL 1 "<<endl;
    cout<<"-->Phishing"<<endl;
    cout<<"Choose the correct the option"<<endl;
    cout<<endl;
    cout<<"1.Fake email & text to steal the sensitive information"<<endl;
    cout<<"2.Maliciou software thet steal & corrupt the data & information"<<endl;
    cout<<"3.Flooding a website or server with fake traffic from multiple devices until it crashes"<<endl;
    cout<<"4.Malicious code into a website input box to force it to leak private data"<<endl;
    cout<<"5.Attacker secretly intrecepts data between user a website to steal data"<<endl;
    cin>>b;
        if (b==1){
            cout<<"correct answer"<<endl;
            cout<<"choose prevention"<<endl;
            cout<<endl;
            cout<<"1.Use CDNs Cloud based DOS scrubbing services"<<endl;
            cout<<"2.Run reputable antivirus software"<<endl;
            cout<<"3.Use parameterized queries in development"<<endl;
            cout<<"4.Deploy DMARC authentication protocols"<<endl;
            cout<<"5.VPN & HTTPs sites"<<endl;
            cin>>b1;
            if (b1==4) {
                cout<<" good  correct answer"<<endl;
            }
            else {
                cout<<" bad    wrong answer"<<endl;
            }
        }
        else {
            cout<<"wrong answer"<<endl;
        }
    cout<<"WELCOME TO LEVEL 2 "<<endl;
    cout<<endl;
    cout<<"--->Malware"<<endl;
    cout<<"Choose the correct the option"<<endl;
    cout<<endl;
    cout<<"1.Fake email & text to steal the sensitive information"<<endl;
    cout<<"2.Maliciou software thet steal & corrupt the data & information"<<endl;
    cout<<"3.Flooding a website or server with fake traffic from multiple devices until it crashes"<<endl;
    cout<<"4.Malicious code into a website input box to force it to leak private data"<<endl;
    cout<<"5.Attacker secretly intrecepts data between user a website to steal data"<<endl;
           cin>>c;
    if (c==2){
        cout<<"correct answer"<<endl;
        cout<<"choose prevention"<<endl;
        cout<<endl;
        cout<<"1.Use CDNs Cloud based DOS scrubbing services"<<endl;
        cout<<"2.Run reputable antivirus software"<<endl;
        cout<<"3.Use parameterized queries in development"<<endl;
        cout<<"4.Deploy DMARC authentication protocols"<<endl;
        cout<<"5.VPN & HTTPs sites"<<endl;
        cin>>c1;
        if (c1==2) {
            cout<<"  very good  correct answer"<<endl;
        }
        else {
            cout<<" bad    wrong answer"<<endl;
        }
    }
    else {
        cout<<"wrong answer"<<endl;
    }
    cout<<"WELCOME TO LEVEL 3"<<endl;
    cout<<endl;
    cout<<"--->Denial Of Service(DOS)"<<endl;
    cout<<"Choose the correct the option"<<endl;
    cout<<endl;
    cout<<"1.Fake email & text to steal the sensitive information"<<endl;
    cout<<"2.Maliciou software thet steal & corrupt the data & information"<<endl;
    cout<<"3.Flooding a website or server with fake traffic from multiple devices until it crashes"<<endl;
    cout<<"4.Malicious code into a website input box to force it to leak private data"<<endl;
    cout<<"5.Attacker secretly intrecepts data between user a website to steal data"<<endl;
    cin>>d;
    if (d==3){
        cout<<"correct answer"<<endl;
        cout<<"choose prevention"<<endl;
        cout<<endl;
        cout<<"1.Use CDNs Cloud based DOS scrubbing services"<<endl;
        cout<<"2.Run reputable antivirus software"<<endl;
        cout<<"3.Use parameterized queries in development"<<endl;
        cout<<"4.Deploy DMARC authentication protocols"<<endl;
        cout<<"5.VPN & HTTPs sites"<<endl;
        cin>>d1;
        if (d1==1) {
            cout<<" excellence correct answer"<<endl;
        }
        else {
            cout<<" bad    wrong answer"<<endl;
        }
    }
    else {
        cout<<"wrong answere"<<endl;
    }
    cout<<"WELCOME TO LEVEL 4 "<<endl;
    cout<<endl;
    cout<<"--->SQJ Injection"<<endl;
    cout<<"Choose the correct the option"<<endl;
    cout<<endl;
    cout<<"1.Fake email & text to steal the sensitive information"<<endl;
    cout<<"2.Maliciou software thet steal & corrupt the data & information"<<endl;
    cout<<"3.Flooding a website or server with fake traffic from multiple devices until it crashes"<<endl;
    cout<<"4.Malicious code into a website input box to force it to leak private data"<<endl;
    cout<<"5.Attacker secretly intrecepts data between user a website to steal data"<<endl;
    cin>>e;
    if (e==4){
        cout<<"correct answer"<<endl;
        cout<<"choose prevention"<<endl;
        cout<<endl;
        cout<<"1.Use CDNs Cloud based DOS scrubbing services"<<endl;
        cout<<"2.Run reputable antivirus software"<<endl;
        cout<<"3.Use parameterized queries in development"<<endl;
        cout<<"4.Deploy DMARC authentication protocols"<<endl;
        cout<<"5.VPN & HTTPs sites"<<endl;
        cin>>e1;
        if (e1==3) {

            cout<<" outstanding correct answer"<<endl;
        }
        else {
            cout<<" bad    wrong answer"<<endl;
        }
    }
    else {
        cout<<"wrong answer"<<endl;
    }

    cout<<"WELCOME TO LEVEL 5"<<endl;
    cout<<endl;
    cout<<"-->Man In The Middle"<<endl;
    cout<<"Choose the correct the option"<<endl;
    cout<<endl;
    cout<<"1.Fake email & text to steal the sensitive information"<<endl;
    cout<<"2.Maliciou software thet steal & corrupt the data & information"<<endl;
    cout<<"3.Flooding a website or server with fake traffic from multiple devices until it crashes"<<endl;
    cout<<"4.Malicious code into a website input box to force it to leak private data"<<endl;
    cout<<"5.Attacker secretly intrecepts data between user a website to steal data"<<endl;
    cin>>f;
    if (f==5){
        cout<<"correct answer"<<endl;
        cout<<"choose prevention"<<endl;
        cout<<endl;
        cout<<"1.Use CDNs Cloud based DOS scrubbing services"<<endl;
        cout<<"2.Run reputable antivirus software"<<endl;
        cout<<"3.Use parameterized queries in development"<<endl;
        cout<<"4.Deploy DMARC authentication protocols"<<endl;
        cout<<"5.VPN & HTTPs sites"<<endl;
        cin>>f1;
        if (f1==5) {
            cout<<" outstanding correct answer"<<endl;
        }
        else {
            cout<<" bad    wrong answer"<<endl;
        }
    }
    else {
        cout<<"wrong answer"<<endl;
    }

       cout<<"GAME IS FINISHED"<<endl;
       cout<<"Enter '100' to exit the game"<<endl;
       cin>>a;
       cout<<"GAME OVER"<<endl;






    }





