#ifndef _NullURLTest_h_
#define _NullURLTest_h_
//$ class NullURLTest
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace util {
		namespace jar {
			class JarFile;
		}
	}
}

class $export NullURLTest : public ::java::lang::Object {
	$class(NullURLTest, $NO_CLASS_INIT, ::java::lang::Object)
public:
	NullURLTest();
	void init$();
	static void main($StringArray* args);
	::java::util::jar::JarFile* jarFile = nullptr;
};

#endif // _NullURLTest_h_