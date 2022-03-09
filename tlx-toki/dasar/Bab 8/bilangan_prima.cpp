#include <cstdio>
#include <iostream>

int main() {
int N;
std::cin >> N;

for (int i=0;i<N;i++) {
    int bil;
    std::cin >> bil;

    bool prime = true;
    if (bil == 1 || bil == 4 || bil == 9){
        prime = false;
    }
    int divisor = 2;
    while (divisor * divisor < bil) {
    if (bil % divisor == 0){
        prime = false;
    }
    divisor++;
}
if (prime) {
    std::cout << "YA" << std::endl;
} else {
    std::cout << "BUKAN" << std::endl;
}
}



return 0;
}
