#include <iostream>
#include <cstring>



    int main(int argc, char** argv){
        if(argc != 4){
            std::cerr << "Invalid number of inputs!\nUse the following example: a + b" << std::endl;
            std::cerr << "What you have entered is: ";
            for(size_t i{1}; i < argc; ++i){
                std::cerr << argv[i] << " ";
            }
            return 0;
        }

        const char* operation{argv[2]};
        if(std::strlen(operation) != 1){
            std::cerr << "Invalid operator!";
            return 0;
        }

        double num1{atof(argv[1])};
        double num2{atof(argv[3])};

        if((num2 == 0.0) && (operation[0] == '/')){
            std::cerr << "Error!";
            return 0;
        }

 
        if((operation[0] == '+') || (operation[0] == '-') || (operation[0] == '/') || (operation[0] == 'x')){
            char c{operation[0]};
            switch(c){
                case '+': {
                    std::cout << "The result of " << num1 << " " << operation << " " << num2 << ": " << num1 + num2;
                }
                break;
                case '-': {
                    std::cout << "The result of " << num1 << " " << operation << " " << num2 << ": " << num1 - num2;
                }
                break; 
                case '/': {
                    std::cout << "The result of " << num1 << " " << operation << " " << num2 << ": " << num1 / num2;
                }
                break;  
                case 'x': {
                    std::cout << "The result of " << num1 << " " << operation << " " << num2 << ": " << num1 * num2;
                }
                break;                                             
            }
        } else{
            std::cerr << "Invalid operator!";
            return 0;
        }

        



        

        

    }


