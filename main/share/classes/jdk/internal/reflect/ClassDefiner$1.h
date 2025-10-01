#ifndef _jdk_internal_reflect_ClassDefiner$1_h_
#define _jdk_internal_reflect_ClassDefiner$1_h_
//$ class jdk.internal.reflect.ClassDefiner$1
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace java {
	namespace lang {
		class ClassLoader;
	}
}

namespace jdk {
	namespace internal {
		namespace reflect {

class ClassDefiner$1 : public ::java::security::PrivilegedAction {
	$class(ClassDefiner$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	ClassDefiner$1();
	void init$(::java::lang::ClassLoader* val$parentClassLoader);
	virtual $Object* run() override;
	::java::lang::ClassLoader* val$parentClassLoader = nullptr;
};

		} // reflect
	} // internal
} // jdk

#endif // _jdk_internal_reflect_ClassDefiner$1_h_