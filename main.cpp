/*
   Author: Mohammad Seeam;
   Course: COSC 1337 Spring 2022 
   Lab 1:  Provide menu-driven loop to calculate U.S. Federal Income taxes
*/

#include <iostream>
using namespace std;

int main(){

    cout<< "This program estimates 2021 Federal taxes for single filers. Not for official use." << endl;

    double totalW2Amount = 0.0;

    while(true){
        cout << " Enter option letter, q=quit: d)deadline e)enter W2s h)help q)quit t)tax: ";
        char something=' ';
        cin >> something; 

        char something1 = tolower(something);

        if(something1=='d'){
            cout << "File your Federal taxes by Monday, April 18, 2022." << endl;
        }
        else if(something1=='e'){
            totalW2Amount = 0.0;
            int x = 1;
            while(true){
                cout << "Enter W2 #" << x << "s amount, in dollars, (0 to quit):";
                x = x+1;
                double newValue;
                cin >> newValue;  //0, 0.0, 5.2
                if(newValue==0){
                    break;
                }
                newValue = (double) newValue;
                totalW2Amount = totalW2Amount + newValue;
                cout << "Total W2 amounts are now: " << (double) totalW2Amount << endl;
            } 
            
        }else if (something1=='t'){

            double tax = 0.0;

            double taxableIncome = totalW2Amount - 12550;

            if(taxableIncome>=0 && taxableIncome<=9950){
                tax =  (double) taxableIncome * (0.1);
            }else if(taxableIncome>9951 && taxableIncome<=40525){
                tax = 995 + ((taxableIncome-9950)*0.12);
            }else if (taxableIncome>40526 && taxableIncome<=86375){
                tax = 4664 + ((taxableIncome-40525)*0.22);
            }else if(taxableIncome>86376 && taxableIncome<=164925){
                tax = 14751 + ((taxableIncome-86375)*0.24);
            }else if (taxableIncome>=164926 && taxableIncome<=209425){
                tax = 33603+((taxableIncome-164925)*0.32);
            }else if(taxableIncome>=209426 && taxableIncome<=523600){
                tax = 47843+((taxableIncome-209425)*0.35);
            }else if(taxableIncome>=523601){
                tax = 157804.25+((taxableIncome-523600)*0.37);
            }

            cout<<"Using standard deduction of $12550; W2 total: " << totalW2Amount << ", the estimated tax is: $" << (double) tax << endl;
        }else if (something1=='h'){
            cout << "Enter d option for filing date deadline." << endl;
            cout << "Enter e option to enter income from W2 statements." << endl;
            cout << "Enter h option to read this help." << endl;
            cout << "Enter q option to quit." << endl;
            cout << "Enter t option to see tax estimate. "<<endl;
        
        }else if(something1=='q'){
            break;
        }

    }

    cout<<"Good-bye!"<<endl;

    return 0;
}

/* 
When total W2=0, output is:
This program estimates 2021 Federal taxes for single filers. Not for official use.
Enter option letter, q=quit: d)deadline e)enter W2s h)help q)quit t)tax: E
Enter W2 #1s amount, in dollars, (0 to quit):0
Enter option letter, q=quit: d)deadline e)enter W2s h)help q)quit t)tax: T
Using standard deduction of $12550; W2 total: 0, the estimated tax is: $0
Enter option letter, q=quit: d)deadline e)enter W2s h)help q)quit t)tax: 
 */

/* 
when total W2=5000, output is :
This program estimates 2021 Federal taxes for single filers. Not for official use.
Enter option letter, q=quit: d)deadline e)enter W2s h)help q)quit t)tax: e
Enter W2 #1s amount, in dollars, (0 to quit):5000
Total W2 amounts are now: 5000
Enter W2 #2s amount, in dollars, (0 to quit):0Enter option letter, q=quit: d)deadline e)enter W2s h)help q)quit t)tax: t
Using standard deduction of $12550; W2 total: 5000, the estimated tax is: $0
Enter option letter, q=quit: d)deadline e)enter W2s h)help q)quit t)tax: 
 */

/* 
when total w2=40000, output is :
This program estimates 2021 Federal taxes for single filers. Not for official use.
Enter option letter, q=quit: d)deadline e)enter W2s h)help q)quit t)tax: e
Enter W2 #1s amount, in dollars, (0 to quit):40000         
Total W2 amounts are now: 40000
Enter W2 #2s amount, in dollars, (0 to quit):0
Enter option letter, q=quit: d)deadline e)enter W2s h)help q)quit t)tax: t
Using standard deduction of $12550; W2 total: 40000, the estimated tax is: $3095
Enter option letter, q=quit: d)deadline e)enter W2s h)help q)quit t)tax: q
Good-bye!
*/

/* 
when W2 total = 100000, output is:
This program estimates 2021 Federal taxes for single filers. Not for official use.
Enter option letter, q=quit: d)deadline e)enter W2s h)help q)quit t)tax: e
Enter W2 #1s amount, in dollars, (0 to quit):50000
Total W2 amounts are now: 50000
Enter W2 #2s amount, in dollars, (0 to quit):50000
Total W2 amounts are now: 100000
Enter W2 #3s amount, in dollars, (0 to quit):0
Enter option letter, q=quit: d)deadline e)enter W2s h)help q)quit t)tax: T
Using standard deduction of $12550; W2 total: 100000, the estimated tax is: $15009
Enter option letter, q=quit: d)deadline e)enter W2s h)help q)quit t)tax: q
Good-bye!
*/

/* 
When total W2 = 200000, output is:
This program estimates 2021 Federal taxes for single filers. Not for official use.
Enter option letter, q=quit: d)deadline e)enter W2s h)help q)quit t)tax: e
Enter W2 #1s amount, in dollars, (0 to quit):10000
Total W2 amounts are now: 10000
Enter W2 #2s amount, in dollars, (0 to quit):50000
Total W2 amounts are now: 60000
Enter W2 #3s amount, in dollars, (0 to quit):40000
Total W2 amounts are now: 100000
Enter W2 #4s amount, in dollars, (0 to quit):50000
Total W2 amounts are now: 150000
Enter W2 #5s amount, in dollars, (0 to quit):50000
Total W2 amounts are now: 200000
Enter W2 #6s amount, in dollars, (0 to quit):0
Enter option letter, q=quit: d)deadline e)enter W2s h)help q)quit t)tax: t
Using standard deduction of $12550; W2 total: 200000, the estimated tax is: $40811
Enter option letter, q=quit: d)deadline e)enter W2s h)help q)quit t)tax: q
Good-bye!
*/

/* 
When total W2 is my ACCeID=2214646, output is:
This program estimates 2021 Federal taxes for single filers. Not for official use.
Enter option letter, q=quit: d)deadline e)enter W2s h)help q)quit t)tax: e
Enter W2 #1s amount, in dollars, (0 to quit):2214646
Total W2 amounts are now: 2.21465e+06
Enter W2 #2s amount, in dollars, (0 to quit):0
Enter option letter, q=quit: d)deadline e)enter W2s h)help q)quit t)tax: t
Using standard deduction of $12550; W2 total: 2.21465e+06, the estimated tax is: $778848
Enter option letter, q=quit: d)deadline e)enter W2s h)help q)quit t)tax: q
Good-bye!
*/

/*
This program estimates 2021 Federal taxes for single filers. Not for official use.
Enter option letter, q=quit: d)deadline e)enter W2s h)help q)quit t)tax: e
Enter W2 #1s amount, in dollars, (0 to quit):5000
Total W2 amounts are now: 5000
Enter W2 #2s amount, in dollars, (0 to quit):40000
Total W2 amounts are now: 45000
Enter W2 #3s amount, in dollars, (0 to quit):100000
Total W2 amounts are now: 145000
Enter W2 #4s amount, in dollars, (0 to quit):200000
Total W2 amounts are now: 345000
Enter W2 #5s amount, in dollars, (0 to quit):2214646            
Total W2 amounts are now: 2.55965e+06
Enter W2 #6s amount, in dollars, (0 to quit):0
Enter option letter, q=quit: d)deadline e)enter W2s h)help q)quit t)tax: t
Using standard deduction of $12550; W2 total: 2.55965e+06, the estimated tax is: $906498
Enter option letter, q=quit: d)deadline e)enter W2s h)help q)quit t)tax: q
Good-bye!
*/

/* 
This program estimates 2021 Federal taxes for single filers. Not for official use.
Enter option letter, q=quit: d)deadline e)enter W2s h)help q)quit t)tax: d
File your Federal taxes by Monday, April 18, 2022.
Enter option letter, q=quit: d)deadline e)enter W2s h)help q)quit t)tax: q
Good-bye!
*/

/*
This program estimates 2021 Federal taxes for single filers. Not for official use.
Enter option letter, q=quit: d)deadline e)enter W2s h)help q)quit t)tax: h
Enter d option for filing date deadline.
Enter e option to enter income from W2 statements.
Enter h option to read this help.
Enter q option to quit.
Enter t option to see tax estimate. 
Enter option letter, q=quit: d)deadline e)enter W2s h)help q)quit t)tax: q
Good-bye!
*/

/*
This program estimates 2021 Federal taxes for single filers. Not for official use.
Enter option letter, q=quit: d)deadline e)enter W2s h)help q)quit t)tax: t
Using standard deduction of $12550; W2 total: 0, the estimated tax is: $0
Enter option letter, q=quit: d)deadline e)enter W2s h)help q)quit t)tax: q
Good-bye!
*/

/*
This program estimates 2021 Federal taxes for single filers. Not for official use.
Enter option letter, q=quit: d)deadline e)enter W2s h)help q)quit t)tax: q
Good-bye!
*/