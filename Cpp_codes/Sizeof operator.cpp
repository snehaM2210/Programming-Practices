//The sizeof operator
#include<iostream>
#include<climits>//we include climits for integer types
                 //similar information for floating point numbers
                 //is contained in <cfloat>

using namespace std;

int main() {
cout<<"size of information"<<endl;
cout<<"======================="<<endl;

cout<<"char:"<<sizeof(char)<<" bytes."<<endl;
cout<<"int:"<<sizeof(int)<<" bytes."<<endl;
cout<<"unsigned int:"<<sizeof(unsigned int)<<" bytes."<<endl;
cout<<"short:"<<sizeof(short)<<" bytes."<<endl;
cout<<"long:"<<sizeof(long)<<" bytes."<<endl;
cout<<"long long:"<<sizeof(long long)<<" bytes."<<endl;

cout<<"========================="<<endl;
cout<<"float:"<<sizeof(float)<<" bytes."<<endl;
cout<<"double:"<<sizeof(double)<<" bytes."<<endl;
cout<<"long double:"<<sizeof(long double)<<" bytes."<<endl;
//
//
//use values defined in<climits>
cout<<"======================="<<endl;

cout<<"Minimum values:"<<endl;
cout<<"char:"<<CHAR_MIN<<endl;
cout<<"int:"<<INT_MIN<<endl;
cout<<"short:"<<SHRT_MIN<<endl;
cout<<"long:"<<LONG_MIN<<endl;
cout<<"long long:"<<LLONG_MIN<<endl;

cout<<"======================="<<endl;

cout<<"Maximum values:"<<endl;
cout<<"char:"<<CHAR_MAX<<endl;
cout<<"int:"<<INT_MAX<<endl;
cout<<"short:"<<SHRT_MAX<<endl;
cout<<"long:"<<LONG_MAX<<endl;
cout<<"long long:"<<LLONG_MAX<<endl;

//sizeof can be used with variables names
cout<<"=========================="<<endl;

int age{21};
cout<<"age is "<<sizeof(age)<<" bytes."<<endl;
cout<<"age is "<<sizeof age<<" bytes."<<endl;

double profit{54.27};
cout<<"profit is "<<sizeof(profit)<<" bytes."<<endl;
cout<<"profit is "<<sizeof profit<<" bytes."<<endl;

return 0;
}                 
                 
                


