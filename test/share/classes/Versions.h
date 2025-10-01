#ifndef _Versions_h_
#define _Versions_h_
//$ class Versions
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace lang {
		class ClassLoader;
	}
}

class $export Versions : public ::java::lang::Object {
	$class(Versions, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Versions();
	void init$();
	static void checkClassVersion(int32_t major, int32_t minor, bool expectSupported);
	static $String* getProperty($String* prop);
	static void main($StringArray* args);
	static ::java::lang::ClassLoader* cl;
};

#endif // _Versions_h_