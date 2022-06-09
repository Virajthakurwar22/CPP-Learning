#include <iostream>
/*  a function is a block of code that perorms some operation.
    A function can optionally define input parameters that enable
    callers to pass arguments into the finction.
    */
    int addnumbers( int first_param, int second_param){      //    function which should write before main function 
	int result =  first_param + second_param;
	return result;
}
int main()
{
	/* statements are the program elements that control how and
	in what order objects are manipulated.
	*/
	int first_number {13};    // Statement 
	int second_number {7};
	
	std::cout << "first number : " <<first_number << std::endl;    // 13
	std::cout << "second number :" <<second_number << std::endl;   // 7
	
	int sum = first_number + second_number;    
	std::cout <<"sum :" <<sum << std::endl;    // 20 
     
    sum = addnumbers(25,7);
    std:: cout << "sum :" <<sum << std::endl;  // 32
    
    sum = addnumbers(30,54);
    std:: cout <<"sum:" <<sum << std::endl;   // 84
    
    std::cout <<"sum :" << addnumbers(3,42) <<std::endl;   // 45
	return 0; 
	
}
