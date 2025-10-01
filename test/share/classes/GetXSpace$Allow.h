#ifndef _GetXSpace$Allow_h_
#define _GetXSpace$Allow_h_
//$ class GetXSpace$Allow
//$ extends java.lang.SecurityManager

#include <java/lang/SecurityManager.h>

namespace java {
	namespace security {
		class Permission;
	}
}

class GetXSpace$Allow : public ::java::lang::SecurityManager {
	$class(GetXSpace$Allow, $NO_CLASS_INIT, ::java::lang::SecurityManager)
public:
	GetXSpace$Allow();
	using ::java::lang::SecurityManager::checkRead;
	void init$();
	virtual void checkPermission(::java::security::Permission* p) override;
	virtual void checkPermission(::java::security::Permission* p, Object$* context) override;
	virtual void checkRead($String* file) override;
};

#endif // _GetXSpace$Allow_h_