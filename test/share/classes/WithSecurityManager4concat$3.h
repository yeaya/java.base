#ifndef _WithSecurityManager4concat$3_h_
#define _WithSecurityManager4concat$3_h_
//$ class WithSecurityManager4concat$3
//$ extends java.lang.SecurityManager

#include <java/lang/SecurityManager.h>

namespace java {
	namespace security {
		class Permission;
	}
}

class WithSecurityManager4concat$3 : public ::java::lang::SecurityManager {
	$class(WithSecurityManager4concat$3, $NO_CLASS_INIT, ::java::lang::SecurityManager)
public:
	WithSecurityManager4concat$3();
	using ::java::lang::SecurityManager::checkPermission;
	void init$();
	virtual void checkPermission(::java::security::Permission* perm) override;
};

#endif // _WithSecurityManager4concat$3_h_