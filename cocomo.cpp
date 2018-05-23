#include<iostream>
#include<conio.h>
#include<math.h>
#include<vector>

using namespace std;

int main()
{
    int c;
    int kloc;
    float eff;
    float tdev;
    float cd;
    float total=1;
    vector <string> arg;
    arg.push_back("Required Software");
    arg.push_back("Reliablity");
    arg.push_back("Database size");
    arg.push_back("Product complexity");
    arg.push_back("Execution Time Constrains");
    arg.push_back("Main Storage Constrains");
    arg.push_back("Virtual Machine");
    arg.push_back("Volitility");
    arg.push_back("Computer TurnAround Time");
    arg.push_back("Analyst capability");
    arg.push_back("Applications experience");
    arg.push_back("Programmer capability");
    arg.push_back("Virtutal Machine Experience");
    arg.push_back("Programming language Experirnce");
    arg.push_back("Use of modern Programming practices");
    arg.push_back("Use of Software Tools");
    arg.push_back("Required development Schedule");
    
   
    
    cout<<"Enter the type of product:\n 1.organic \n 2.Semi-detached\n 3.Embedded:"<<endl;
    cin>>c;
    cout<<"Enter the kilo lines of code(Number):"<<endl;
    cin>>kloc;
    
    cout<<"Enter the Cost Drivers(14 values if not give '0'):"<<endl;
    for (int i=0;i<17;i++)
    {
        cout<<arg[i]<<endl;
    
            cin>>cd;
            if(cd!=0)
            {
                 total=total*cd;    
            }
    }
    if(c==1)
    {
            eff=2.4 * pow(kloc,1.05);
            tdev=2.5*pow(eff,0.38);
            
    }
    
     if(c==2)
    {
            eff=2.4 * pow(kloc,1.12);
            tdev=2.5*pow(eff,0.35);
            
    }
    
     if(c==3)
    {
            eff=2.4 * pow(kloc,1.20);
            tdev=2.5*pow(eff,0.32);
            
    }
    
    cout<<"Basic Effort:"<<eff<<" PM"<<endl;
    cout<<"Basic Development Time:"<<tdev<<" Months"<<endl;
    cout<<"Intermediate Effort"<<eff*total<<endl;
    getch();
    return 0;
    
}
