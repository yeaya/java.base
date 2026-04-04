#ifndef _OpenSync_h_
#define _OpenSync_h_
//$ class OpenSync
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace io {
		class PrintStream;
	}
}

class $export OpenSync : public ::java::lang::Object {
	$class(OpenSync, 0, ::java::lang::Object)
public:
	OpenSync();
	static void clinit$(::java::lang::Class* clazz);
	void init$();
	static void main($StringArray* args);
	static ::java::io::PrintStream* log;
};

#endif // _OpenSync_h_