#ifndef _p3_NoGetClassLoaderAccess_h_
#define _p3_NoGetClassLoaderAccess_h_
//$ class p3.NoGetClassLoaderAccess
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("GET_CLASSLOADER_PERMISSION")
#undef GET_CLASSLOADER_PERMISSION

namespace java {
	namespace lang {
		class Module;
	}
}
namespace java {
	namespace security {
		class Permission;
	}
}

namespace p3 {

class $export NoGetClassLoaderAccess : public ::java::lang::Object {
	$class(NoGetClassLoaderAccess, 0, ::java::lang::Object)
public:
	NoGetClassLoaderAccess();
	void init$();
	static $Class* findClass(::java::lang::Module* module, $String* cn);
	static void main($StringArray* args);
	static ::java::lang::Module* m3;
	static ::java::security::Permission* GET_CLASSLOADER_PERMISSION;
};

} // p3

#pragma pop_macro("GET_CLASSLOADER_PERMISSION")

#endif // _p3_NoGetClassLoaderAccess_h_