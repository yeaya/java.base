#ifndef _Shutdown_h_
#define _Shutdown_h_
//$ class Shutdown
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace io {
		class Closeable;
	}
}

class $export Shutdown : public ::java::lang::Object {
	$class(Shutdown, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Shutdown();
	void init$();
	static void assertTrue(bool condition, $String* error);
	static void close(::java::io::Closeable* c);
	static void main($StringArray* args);
	static void runTest();
	static bool supported();
};

#endif // _Shutdown_h_