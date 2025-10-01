#ifndef _jdk_internal_misc_InnocuousThread$3_h_
#define _jdk_internal_misc_InnocuousThread$3_h_
//$ class jdk.internal.misc.InnocuousThread$3
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace java {
	namespace lang {
		class ThreadGroup;
	}
}

namespace jdk {
	namespace internal {
		namespace misc {

class InnocuousThread$3 : public ::java::security::PrivilegedAction {
	$class(InnocuousThread$3, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	InnocuousThread$3();
	void init$(::java::lang::ThreadGroup* val$root);
	virtual $Object* run() override;
	::java::lang::ThreadGroup* val$root = nullptr;
};

		} // misc
	} // internal
} // jdk

#endif // _jdk_internal_misc_InnocuousThread$3_h_