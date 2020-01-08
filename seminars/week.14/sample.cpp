#include<iostream>
#include<cstring>

using mapper = void (*) (const int&);

void map(int* start, int* end, mapper m) {
    for(int* i = start; i < end; i++){
        m(*i);
    }
}

void print(const int& elem) {
    std::cout << elem << std::endl;
}

struct Product {
    double price;
    int code;
    char* name;
    void print(){
        std::cout << name << " : " << code << " : " << price << std::endl;
    }
};

void set_name(Product& p, const char* str) {
    p.name = new char[strlen(str)+1];
    strcpy(p.name, str);
}

void print_product(Product* p, size_t size) {
    for(int i=0;i < size; i++){
        std::cout << p[i].name << p[i].price << p[i].code;
        p[i].print();
    }
}

int main() {
    size_t arr_size;
    std::cin >> arr_size;

    int* arr = new int[arr_size];
    for(int i = 0; i < arr_size; i++){
        std::cin >> arr[i];
    }

    map(arr, arr + arr_size, print);
    delete [] arr;

    Product p;
    p.price = 10.50;
    set_name(p, "Wine");
    delete [] p.name;
    
    // map(arr, size, addOne);
    return 0;
}