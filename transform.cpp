#include <iostream>
#include <cmath>

int base_ten_to_two(int number);

int main(){
int number = 65;
std::cout << base_ten_to_two(number) << std::endl;
}

int base_ten_to_two(int number){
int i = 0;
while ((int)pow(2,i) <= number)
{
    i++;
}
i = i - 1;
int base = 0;
if (number == (int)pow(2,i))
{
base = base + (int)pow(10,i);
 return base;   /* code */
}
int remaining = number;
for (int j = 0; j < i; j++)
{
    if (remaining - pow(2,(i-j)) < (int)pow(2,i-j-1)){
    continue;
    }
    remaining = remaining - pow(2,i-j);
    base = base + (int)pow(10,(i-j-1));
}

return base;
}

