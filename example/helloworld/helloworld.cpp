#include <jcpp.h>

int main(int argc, char** argv) {
	return $System::launch(argc, argv, nullptr, []($StringArray* args)->void {
		$System::out->println("hello, world"_s);
	});
}