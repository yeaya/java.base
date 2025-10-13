#ifndef _InheritIOEHandle_h_
#define _InheritIOEHandle_h_
//$ class InheritIOEHandle
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("JAVA_EXE")
#undef JAVA_EXE
#pragma push_macro("SIGNAL")
#undef SIGNAL

namespace java {
	namespace io {
		class File;
	}
}

class $export InheritIOEHandle : public ::java::lang::Object {
	$class(InheritIOEHandle, 0, ::java::lang::Object)
public:
	InheritIOEHandle();
	void init$();
	static $StringArray* getCommandArray($String* processName);
	static void main($StringArray* args);
	static void performA();
	static void performB();
	static void performC();
	static ::java::io::File* stopC;
	static $String* SIGNAL;
	static $String* JAVA_EXE;
};

#pragma pop_macro("JAVA_EXE")
#pragma pop_macro("SIGNAL")

#endif // _InheritIOEHandle_h_