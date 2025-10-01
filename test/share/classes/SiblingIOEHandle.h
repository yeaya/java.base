#ifndef _SiblingIOEHandle_h_
#define _SiblingIOEHandle_h_
//$ class SiblingIOEHandle
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("SIGNAL")
#undef SIGNAL
#pragma push_macro("JAVA_EXE")
#undef JAVA_EXE

namespace java {
	namespace io {
		class File;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			class CyclicBarrier;
		}
	}
}

class $export SiblingIOEHandle : public ::java::lang::Object {
	$class(SiblingIOEHandle, 0, ::java::lang::Object)
public:
	SiblingIOEHandle();
	void init$();
	static $StringArray* getCommandArray($String* processName);
	static void main($StringArray* args);
	static void performA(bool fileOut);
	static void performB();
	static void performC();
	static void waitAbit();
	static bool waitBarrier(::java::util::concurrent::CyclicBarrier* barrier);
	static ::java::io::File* stopC;
	static $String* SIGNAL;
	static $String* JAVA_EXE;
	static bool procClaunched;
};

#pragma pop_macro("SIGNAL")
#pragma pop_macro("JAVA_EXE")

#endif // _SiblingIOEHandle_h_