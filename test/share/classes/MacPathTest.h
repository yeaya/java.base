#ifndef _MacPathTest_h_
#define _MacPathTest_h_
//$ class MacPathTest
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace io {
		class File;
	}
}

class $export MacPathTest : public ::java::lang::Object {
	$class(MacPathTest, $NO_CLASS_INIT, ::java::lang::Object)
public:
	MacPathTest();
	void init$();
	static bool equal(Object$* x, Object$* y);
	static void main($StringArray* args);
	static bool match(::java::io::File* target, ::java::io::File* src);
	static void open_read($String* what, ::java::io::File* file);
	static void removeAll(::java::io::File* file);
	static void test($String* testdir, $String* dname, $String* fname_nfc);
};

#endif // _MacPathTest_h_