#ifndef _FilePermissionTest_h_
#define _FilePermissionTest_h_
//$ class FilePermissionTest
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace lang {
		class StringBuilder;
	}
}
namespace java {
	namespace util {
		class List;
	}
}

class $export FilePermissionTest : public ::java::lang::Object {
	$class(FilePermissionTest, $NO_CLASS_INIT, ::java::lang::Object)
public:
	FilePermissionTest();
	void init$();
	static void check(::java::util::List* files, $String* expected);
	static void lambda$check$0(::java::lang::StringBuilder* actual, $String* f);
	static void main($StringArray* args);
};

#endif // _FilePermissionTest_h_