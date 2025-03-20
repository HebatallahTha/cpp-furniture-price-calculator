

char askUser(int &wood, int &shelves, int &doors);
float calculateCost(int &wood, int &shelves, int &doors);
float calculateCost(int &wood, int &shelves);

#include <iostream>
int main()
{
  int wood =0;
  int shelves = 0;
  int doors = 0;
  char choice;
  float price = 0;

  choice = askUser(wood, shelves, doors);

  if (choice == 'Y' || choice == 'y')
  price =  calculateCost(wood, shelves, doors);
  else if(choice == 'N' || choice == 'n')
  price = calculateCost(wood, shelves);

  std::cout<<"The price is $"<<price;

  return 0;
}
char askUser(int &wood, int &shelves, int &doors)
{
 char choice;

 std::cout<<"What type of wood do you prefer: 1. Mahogany 2. Oak 3. Pine? ";
 std::cin>>wood;

 std::cout<<"\nHow many shelves would you like? ";
 std::cin>>shelves;

 std::cout<<"\nWould you like glass windowed doors? (Y/N) ";
 std::cin>>choice;

 if(choice == 'Y' || choice == 'y')
 {
  std::cout<<"\nHow many doors would you like? ";
  std::cin>>doors;
  if(doors>shelves)
  {
    std::cout<<"\nInvalid! Number of doors should be less than shelves.";
    std::cout<<"\nHow many doors would you like? ";
    std::cin>>doors;
  }
 }

 return choice;
}

float calculateCost(int &wood, int &shelves, int &doors)
{
  float price = 0;

  switch(wood)
  {
  case 1: 
    price = 230;
    break;
  case 2: 
    price = 190;
    break;
  case 3: 
    price = 150;
    break;
  }

  price+=shelves * 55.00;

  price+=doors*45;

  return price;
}

float calculateCost(int &wood, int &shelves)
{
  float price = 0;

  switch(wood)
  {
  case 1: 
    price = 230;
    break;
  case 2: 
    price = 190;
    break;
  case 3: 
    price = 150;
    break;
  }

  price+=shelves * 55.00;

  return price;
}

