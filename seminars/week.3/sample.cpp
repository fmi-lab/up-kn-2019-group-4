#include<iostream>

int log(int number, int number_2);

int main() {
    // for(;;){
    //     std::cout << "No\n";
    // }
    // for(i = 8; i< 10; std::cout << "No\n", i++) {}
    // int fake_number = 3;
    // std::cout << log(2,10) << '\n'; 

    int arr[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    for(int i=0; i < 10; i++) {
        std::cout << arr[i];
    }

    return 0;
}

int log(int number=10, int other_number=2) {
    int number_2 = 5;
    std::cout << number << " " << other_number << '\n';
    return number_2;
}