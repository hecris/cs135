#include <iostream>
#include <string>
#include <cstdlib>

int main() {
    char c;
    int summation;
    char operation;
    bool first_number = true;
    // this string will later be converted to an integer.
    std::string operand;
    while (std::cin >> c){
        if (c == '+' || c == '-'){
            // if this is the first number encountered,
            // set summation to this number
            if (first_number){
                summation = atoi(operand.c_str());
                first_number = false;
            }
            else {
                // if an operation is encountered,
                // carry out the operation
                if (operation == '+'){
                    summation += atoi(operand.c_str());
                }
                else if (operation == '-'){
                    summation -= atoi(operand.c_str());
                }
            }
            operation = c;
            operand = "";

        }
        else {
            // if character is a number, add it to the
            // operand string.
            operand += c;
        }

    }
    // do this procedure one last time out of the loop
    // for the last operation
    if (operation == '+'){
        summation += atoi(operand.c_str());
    }
    else if (operation == '-'){
        summation -= atoi(operand.c_str());
    }

    if (first_number){
        // if there is only one number and no operations
        // then the summation is just the number
        summation = atoi(operand.c_str());
    }
    // print out summation
    std::cout << summation << std::endl;
    return 0;
}
