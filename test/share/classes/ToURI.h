#ifndef _ToURI_h_
#define _ToURI_h_
//$ class ToURI
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace io {
		class PrintStream;
	}
}

class $export ToURI : public ::java::lang::Object {
	$class(ToURI, 0, ::java::lang::Object)
public:
	ToURI();
	void init$();
	static void go($String* fn);
	static void main($StringArray* args);
	static ::java::io::PrintStream* log;
	static int32_t failures;
};

#endif // _ToURI_h_