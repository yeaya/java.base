#ifndef _p3_NoAccess_h_
#define _p3_NoAccess_h_
//$ class p3.NoAccess
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("MODS_DIR1")
#undef MODS_DIR1
#pragma push_macro("MODS_DIR2")
#undef MODS_DIR2
#pragma push_macro("M3")
#undef M3

namespace java {
	namespace lang {
		class Module;
	}
}
namespace java {
	namespace nio {
		namespace file {
			class Path;
		}
	}
}
namespace java {
	namespace security {
		class Permission;
	}
}

namespace p3 {

class $export NoAccess : public ::java::lang::Object {
	$class(NoAccess, 0, ::java::lang::Object)
public:
	NoAccess();
	void init$();
	static $Class* findClass(::java::lang::Module* module, $String* cn);
	static $Class* findClass(::java::lang::Module* module, $String* cn, ::java::security::Permission* perm);
	static void main($StringArray* args);
	static ::java::lang::Module* M3;
	static ::java::nio::file::Path* MODS_DIR1;
	static ::java::nio::file::Path* MODS_DIR2;
};

} // p3

#pragma pop_macro("MODS_DIR1")
#pragma pop_macro("MODS_DIR2")
#pragma pop_macro("M3")

#endif // _p3_NoAccess_h_