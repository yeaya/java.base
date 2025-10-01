#ifndef _GetXSpace$Deny_h_
#define _GetXSpace$Deny_h_
//$ class GetXSpace$Deny
//$ extends java.lang.SecurityManager

#include <java/lang/SecurityManager.h>

namespace java {
	namespace security {
		class Permission;
	}
}

class GetXSpace$Deny : public ::java::lang::SecurityManager {
	$class(GetXSpace$Deny, $NO_CLASS_INIT, ::java::lang::SecurityManager)
public:
	GetXSpace$Deny();
	void init$();
	virtual void checkPermission(::java::security::Permission* p) override;
	virtual void checkPermission(::java::security::Permission* p, Object$* context) override;
};

#endif // _GetXSpace$Deny_h_