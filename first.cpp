#include <iostream>
#include <string>
using namespace std;
int main(int argc,char **argv){
if(argc == 1){
 cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << endl;
 return 0;
 }
char *str;
 for(size_t i = 1; i < (size_t)argc;i++){
 str = argv[i];
for(size_t j = 0; str[j] !='\0';j++){
 str[j]=toupper(str[j]);
  cout << str[j];
 }
 cout << " " ;

 
 
 }
 cout << endl;
 
 

 return 0;
}
