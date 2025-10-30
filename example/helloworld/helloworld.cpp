#include <jcpp.h>

int main() {
    $System::init();
    try {
        $System::out->println("hello, world"_s);
    } catch ($Throwable& e) {
        e->printStackTrace();
    }
    $System::deinit();
    return 0;
}