#include<iostream>
#include<cmath>
#include<iomanip>
#include<string>

#define NEW_LINE "\n"
#define DEFAULT_MESSAGE ""
#define DEFAULT_ARRAY_SEPARATOR " "

namespace utils{
    template<class T>
    void element_log(const T& element, const std::string& message = DEFAULT_MESSAGE, const std::string& delimiter = NEW_LINE){
        if(!message.empty()){
            std::cout << message << " -> " << element << delimiter;
        } else {
            std::cout << element << delimiter;
        }
    }

    template<class T>
    void array_log(const T*& array, const size_t& size, const std::string& message = DEFAULT_MESSAGE, const std::string& delimiter = DEFAULT_ARRAY_SEPARATOR) {
        std::cout << message << NEW_LINE;
        for(int i=0; i < size; i++) {
            element_log(array[i], DEFAULT_MESSAGE, DEFAULT_ARRAY_SEPARATOR);
        }
        std::cout << NEW_LINE;
    }
}