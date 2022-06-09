#include <iostream>
int productnum (int first_param, int second_param){
	int result = first_param * second_param;
}
int main()
{
	int first_number {10};  // 10 
	int second_number {5};  // 5
	
	std::cout <<"first_number :"<< first_number << std::endl;  //  5
	std::cout<<"second_number :" << second_number << std::endl;  // 5
	
	int product = first_number * second_number;
	std::cout <<"product:" << product << std::endl;  // 50
	
	product = productnum (5,5);
	std::cout << "product:" <<product <<std::endl;  // 25
	
	std::cout << "product"<< productnum(5,4) << std::endl;  // 20
	
}

