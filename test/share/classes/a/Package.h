#ifndef _a_Package_h_
#define _a_Package_h_
//$ class a.Package
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace lang {
		class Void;
	}
}
namespace java {
	namespace lang {
		namespace reflect {
			class AccessibleObject;
		}
	}
}

namespace a {

class Package : public ::java::lang::Object {
	$class(Package, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Package();
	void init$(::java::lang::Void* _1, ::java::lang::Void* _2, ::java::lang::Void* _3);
	void init$(::java::lang::Void* _1, ::java::lang::Void* _2);
	void init$(::java::lang::Void* _1);
	void init$();
	static void checkAccess(::java::lang::reflect::AccessibleObject* accessibleObject, Object$* obj);
	virtual int32_t packageInstance();
	static int32_t packageStatic();
	int32_t privateInstance();
	static int32_t privateStatic();
	virtual int32_t protectedInstance();
	static int32_t protectedStatic();
	virtual int32_t publicInstance();
	static int32_t publicStatic();
	static int32_t privateStatic$;
	int32_t privateInstance$ = 0;
	static int32_t packageStatic$;
	int32_t packageInstance$ = 0;
	static int32_t protectedStatic$;
	int32_t protectedInstance$ = 0;
	static int32_t publicStatic$;
	int32_t publicInstance$ = 0;
};

} // a

#endif // _a_Package_h_