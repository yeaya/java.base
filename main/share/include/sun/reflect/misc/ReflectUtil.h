#ifndef _sun_reflect_misc_ReflectUtil_h_
#define _sun_reflect_misc_ReflectUtil_h_
//$ class sun.reflect.misc.ReflectUtil
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("PROXY_PACKAGE")
#undef PROXY_PACKAGE

namespace java {
	namespace lang {
		class ClassLoader;
		class SecurityManager;
	}
}
namespace java {
	namespace lang {
		namespace reflect {
			class Member;
			class Method;
		}
	}
}

namespace sun {
	namespace reflect {
		namespace misc {

class $import ReflectUtil : public ::java::lang::Object {
	$class(ReflectUtil, 0, ::java::lang::Object)
public:
	ReflectUtil();
	void init$();
	static void checkPackageAccess($Class* clazz);
	static void checkPackageAccess($String* name);
	static void checkProxyMethod(Object$* proxy, ::java::lang::reflect::Method* method);
	static void checkProxyPackageAccess($Class* clazz);
	static void checkProxyPackageAccess(::java::lang::ClassLoader* ccl, $ClassArray* interfaces);
	static void conservativeCheckMemberAccess(::java::lang::reflect::Member* m);
	static void ensureMemberAccess($Class* currentClass, $Class* memberClass, Object$* target, int32_t modifiers);
	static $Class* forName($String* name);
	static bool isAncestor(::java::lang::ClassLoader* p, ::java::lang::ClassLoader* cl);
	static bool isNonPublicProxyClass($Class* cls);
	static bool isPackageAccessible($Class* clazz);
	static bool isSuperInterface($Class* c, $Class* intf);
	static bool needsPackageAccessCheck(::java::lang::ClassLoader* from, ::java::lang::ClassLoader* to);
	static void privateCheckPackageAccess(::java::lang::SecurityManager* s, $Class* clazz);
	static void privateCheckProxyPackageAccess(::java::lang::SecurityManager* s, $Class* clazz);
	static $String* PROXY_PACKAGE;
};

		} // misc
	} // reflect
} // sun

#pragma pop_macro("PROXY_PACKAGE")

#endif // _sun_reflect_misc_ReflectUtil_h_