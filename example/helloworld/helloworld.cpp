#include <jcpp.h>

int main() {
    $System::init();
    try {
        $System::out->println("hello, world"_s);
    } catch ($Throwable&) {
        $var($Throwable, e, $catch());
        e->printStackTrace();
    }
    $System::deinit();
    return 0;
}