#ifndef _java_io_DeleteOnExitHook_h_
#define _java_io_DeleteOnExitHook_h_
//$ class java.io.DeleteOnExitHook
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		class LinkedHashSet;
	}
}

namespace java {
	namespace io {

class DeleteOnExitHook : public ::java::lang::Object {
	$class(DeleteOnExitHook, 0, ::java::lang::Object)
public:
	DeleteOnExitHook();
	void init$();
	static void add($String* file);
	static void runHooks();
	static ::java::util::LinkedHashSet* files;
};

	} // io
} // java

#endif // _java_io_DeleteOnExitHook_h_