#include <bits/stdc++.h>
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <sstream>
#include <fstream>
#include <string>

using namespace std;

double Pay(double hours, double wage, double deduction);
int main() {
double hours; double wage; double deduction;

    cout << "\n\nEnter the employee's hours worked = ";
    cin >> hours;
    cout << "\n\nEnter the employee's hourly wage = ";
    cin >> wage;
    cout << "\n\nEnter the employee's deduction: ";
    cin >> deduction;

    int filename;
    if (hours >= 40){
    ofstream out_stream("csc231_apopovych_program2_overtime.txt ", ios::out);
    out_stream << "CSC231-1301: Discrete Structures and Applications to Computer Science BMCC/CUNY Fall 2019" << endl;
out_stream <<"Program project #2 specifications: NetPay" << endl;
out_stream << "Artem Popovych " << endl;

out_stream << "Employee Hours of Work ............. = " << hours << endl;
out_stream << "Employee Wage............. = " << wage << endl;
out_stream << "Employee Deduction............. = " << deduction << endl;
out_stream << "The gross pay working over time is...= "; 
out_stream << Pay( hours, wage, deduction) <<endl;
out_stream.close();
}
else{
  ofstream out_stream("csc231_apopovych_program2_noovertime.txt ", ios::out);
out_stream << "CSC231-1301: Discrete Structures and Applications to Computer Science BMCC/CUNY Fall 2019" << endl;
out_stream <<"Program project #2 specifications:NetPay " << endl;
out_stream << "Artem Popovych ID:23579191" << endl;
out_stream << "Employee Hours of Work ............. = " << hours << endl;
out_stream << "Employee Wage............. = " << wage << endl;
out_stream << "Employee Deduction............. = " << deduction << endl;
out_stream << "The gross pay working over time is...= "; 
out_stream << Pay( hours, wage, deduction) <<endl;
out_stream.close();
}
return 0;
}
double Pay(double hours, double rate, double deduction){
 double Pay, grossPay;
 if (hours >= 40){
 grossPay =(hours)*(rate);}
 else{
   grossPay = ((hours)*(rate)*1.5);
 }
 Pay = grossPay-deduction;
   return Pay;
 }