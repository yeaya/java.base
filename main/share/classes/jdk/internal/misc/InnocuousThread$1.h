#ifndef _jdk_internal_misc_InnocuousThread$1_h_
#define _jdk_internal_misc_InnocuousThread$1_h_
//$ class jdk.internal.misc.InnocuousThread$1
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace java {
	namespace lang {
		class Runnable;
	}
}

namespace jdk {
	namespace internal {
		namespace misc {

class InnocuousThread$1 : public ::java::security::PrivilegedAction {
	$class(InnocuousThread$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	InnocuousThread$1();
	void init$($String* val$name, ::java::lang::Runnable* val$target, int32_t val$priority);
	virtual $Object* run() override;
	int32_t val$priority = 0;
	::java::lang::Runnable* val$target = nullptr;
	$String* val$name = nullptr;
};

		} // misc
	} // internal
} // jdk

#endif // _jdk_internal_misc_InnocuousThread$1_h_