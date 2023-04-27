#include "lib_hello.h"
#include <iostream>

int main(int argc, char const* argv[]) {
    use_lib_is(cv);
    use_lib_is(Eigen);

    show_vector_format_of(cv);
    show_vector_format_of(Eigen);

    return 0;
}
