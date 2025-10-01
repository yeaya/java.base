#ifndef _Resources_h_
#define _Resources_h_
//$ class Resources
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace io {
		class PrintStream;
	}
}

class $export Resources : public ::java::lang::Object {
	$class(Resources, 0, ::java::lang::Object)
public:
	Resources();
	void init$();
	static void main($StringArray* args);
	static ::java::io::PrintStream* out;
};

#endif // _Resources_h_