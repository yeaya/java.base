#ifndef _CheckPermission_h_
#define _CheckPermission_h_
//$ class CheckPermission
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("CHECK_PERMISSION_TEST")
#undef CHECK_PERMISSION_TEST

namespace java {
	namespace io {
		class File;
	}
}
namespace java {
	namespace lang {
		class ThreadLocal;
	}
}
namespace java {
	namespace util {
		class EnumSet;
		class List;
		class Set;
	}
}

class $export CheckPermission : public ::java::lang::Object {
	$class(CheckPermission, 0, ::java::lang::Object)
public:
	CheckPermission();
	void init$();
	static void assertCheckOperation(::java::io::File* file, ::java::util::Set* ops);
	static void assertCheckPermission($Class* type, $String* name);
	static void assertCheckPropertyAccess($String* key);
	static void assertChecked(::java::io::File* file, ::java::util::List* list);
	static void assertNotCheckOperation(::java::io::File* file, ::java::util::Set* ops);
	static void assertNotChecked(::java::io::File* file, ::java::util::List* list);
	static void assertOnlyCheckOperation(::java::io::File* file, ::java::util::EnumSet* ops);
	static void main($StringArray* args);
	static void prepare();
	static void setup();
	static $String* CHECK_PERMISSION_TEST;
	static ::java::lang::ThreadLocal* myChecks;
	static ::java::io::File* testFile;
	static ::java::io::File* another;
};

#pragma pop_macro("CHECK_PERMISSION_TEST")

#endif // _CheckPermission_h_