#ifndef _sun_invoke_util_VerifyAccess$1_h_
#define _sun_invoke_util_VerifyAccess$1_h_
//$ class sun.invoke.util.VerifyAccess$1
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace java {
	namespace lang {
		class ClassLoader;
	}
}

namespace sun {
	namespace invoke {
		namespace util {

class VerifyAccess$1 : public ::java::security::PrivilegedAction {
	$class(VerifyAccess$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	VerifyAccess$1();
	void init$($String* val$name, ::java::lang::ClassLoader* val$refcLoader);
	virtual $Object* run() override;
	::java::lang::ClassLoader* val$refcLoader = nullptr;
	$String* val$name = nullptr;
};

		} // util
	} // invoke
} // sun

#endif // _sun_invoke_util_VerifyAccess$1_h_