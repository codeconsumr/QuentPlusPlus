#include <pybind11/pybind11.h>

namespace py = pybind11;

//C++ function

int add_numbers(int a, int b) {
    return a + b;
}

//expose the function to python 
PYBIND11_MODULE(example, m) {
    m.def("add_numbers", &add_numbers, "A function that adds two numbers");

}