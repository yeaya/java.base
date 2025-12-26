#include <jdk/internal/org/objectweb/asm/util/Textifier.h>
#include <java.base.h>
#include <jcpp.h>

#ifdef JCPP_SUBSYSTEM_WINDOWS
#include <windows.h>
int WINAPI WinMain(HINSTANCE inst, HINSTANCE previnst, LPSTR cmdline, int cmdshow) {
	return $System::launchwin(true, ::java$base::init, []($StringArray* args)->void {
		::jdk::internal::org::objectweb::asm$::util::Textifier::main(args);
	});
}
#else
int main(int argc, char** argv) {
	return $System::launch(argc, argv, true, ::java$base::init, []($StringArray* args)->void {
		::jdk::internal::org::objectweb::asm$::util::Textifier::main(args);
	});
}
#endif