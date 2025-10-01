#ifndef _GetXSpace$DenyFSA_h_
#define _GetXSpace$DenyFSA_h_
//$ class GetXSpace$DenyFSA
//$ extends GetXSpace$Deny

#include <GetXSpace$Deny.h>

namespace java {
	namespace security {
		class Permission;
	}
}

class GetXSpace$DenyFSA : public ::GetXSpace$Deny {
	$class(GetXSpace$DenyFSA, $NO_CLASS_INIT, ::GetXSpace$Deny)
public:
	GetXSpace$DenyFSA();
	void init$();
	virtual void checkPermission(::java::security::Permission* p) override;
	virtual void checkPermission(::java::security::Permission* p, Object$* context) override;
	$String* err = nullptr;
};

#endif // _GetXSpace$DenyFSA_h_