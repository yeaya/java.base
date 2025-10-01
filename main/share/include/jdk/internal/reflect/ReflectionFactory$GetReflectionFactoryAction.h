#ifndef _jdk_internal_reflect_ReflectionFactory$GetReflectionFactoryAction_h_
#define _jdk_internal_reflect_ReflectionFactory$GetReflectionFactoryAction_h_
//$ class jdk.internal.reflect.ReflectionFactory$GetReflectionFactoryAction
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace jdk {
	namespace internal {
		namespace reflect {

class $import ReflectionFactory$GetReflectionFactoryAction : public ::java::security::PrivilegedAction {
	$class(ReflectionFactory$GetReflectionFactoryAction, $PRELOAD | $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	ReflectionFactory$GetReflectionFactoryAction();
	void init$();
	virtual $Object* run() override;
};

		} // reflect
	} // internal
} // jdk

#endif // _jdk_internal_reflect_ReflectionFactory$GetReflectionFactoryAction_h_