#include <iostream>
#include <string>
#include <cstdlib>

int main() {
    char c;
    int summation;
    std::string operand;
    char operation;
    bool first_number = true;
    while (std::cin >> c){
       bool is_operation = (c == '-' || c == '+');
       if (is_operation){
           // if encounter an operation, perform that
           // operation using the operand and the last
           // operation.
           if (first_number){
               summation = atoi(operand.c_str());
               first_number = false;
           }
           else {
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
       else if (c == ';'){
           // if we reach a ; , it's time to print the
           // summation
           if (first_number){
               // if there is only one number in the 
               // summation and no operations.
               summation = atoi(operand.c_str());
           }
           else {
               // do operation on the last number
               if (operation == '+'){
                   summation += atoi(operand.c_str());
               }
               else if (operation == '-'){
                   summation -= atoi(operand.c_str());
               }
           }
           std::cout << summation << std::endl;
           // reset all the values for the next summation
           first_number = true;
           operand = "";
       }
       else if (c == '^'){
           // square operand
           int n = atoi(operand.c_str());
           int square = n * n;
           operand = std::to_string(square);
       }
       else {
           // add the number to the operand string,
           // this will later be converted to an integer
           operand += c;
       }
    }
    return 0;
}
