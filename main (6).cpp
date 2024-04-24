#include <iostream>
#include <string>
using namespace std;

int main()
{
    char rep='j';
 do{
  int k=5;
  std:: cout<<"menu 1to 5"<<std::endl;
  std:: cout<<"1 addition"<<std::endl;
  std:: cout <<"2 subtraction"<<std:: endl;
  std:: cout<<"3 multiplication "<<std:: endl;
  std::cout << "4 division" << std::endl;
  std::cout << "5 modulus" << std::endl;
  std::cin>>k;
  switch (k){
      case 1:
          int addition1;
          int addition2;
          int sum;
          std::cout << "enter 1st variable" <<std:: endl;
         std:: cin >> addition1;
          
          std::cout << "enter second variable" <<std:: endl;
          std::cin >> addition2;

          sum = addition2 + addition1;
          std::cout << sum << "this is sum" << std::endl;

 
        
       

          
            
      
      
      break;
    
      case 2:

          int subtraction1;
          int subtraction2;
          int subtraction;
          std::cout << "enter 1st variable" << std::endl;
          std::cin >> subtraction1;

          std::cout << "enter second variable" << std::endl;
          std::cin >> subtraction2;

          subtraction = subtraction - subtraction;
          std::cout << subtraction << "this is subtraction" << std::endl;

      
          

     
      break;
    
      case 3:
          int multiplication1;
          int multiplication2;
          int multiplication;
          std::cout << "enter 1st variable" << std::endl;
          std::cin >> multiplication1;

          std::cout << "enter second variable" << std::endl;
          std::cin >> multiplication2;

          multiplication = multiplication2*multiplication1;
          std::cout << sum << "this is sum" << std::endl;

         
         
     
      break;
      case 4:
          int division1;
          int division2;
          int divisions;
          std::cout << "enter 1st variable" << std::endl;
          std::cin >> division1;

          std::cout << "enter second variable" << std::endl;
          std::cin >> division2;

          divisions = division2/division1;
          std::cout << sum << "this is sum" << std::endl;

         
    
          break;
      case 5:
          int modulus1;
          int modulus2;
          int modulus;
          std::cout << "enter 1st variable" << std::endl;
          std::cin >> modulus1;

          std::cout << "enter second variable" << std::endl;
          std::cin >> modulus2;

          mod = modulus2%modulus1;
          std::cout << sum << "this is sum" << std::endl;

         
         
          break;

  }
std::cout<<"wanna continue press k to end press n"<<std::endl;
std::cin>>rep;}
while(rep=='j' || rep=='J');
    return 0;

}
