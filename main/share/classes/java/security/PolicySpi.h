#ifndef _java_security_PolicySpi_h_
#define _java_security_PolicySpi_h_
//$ class java.security.PolicySpi
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace security {
		class CodeSource;
		class Permission;
		class PermissionCollection;
		class ProtectionDomain;
	}
}

namespace java {
	namespace security {

class $export PolicySpi : public ::java::lang::Object {
	$class(PolicySpi, $NO_CLASS_INIT, ::java::lang::Object)
public:
	PolicySpi();
	void init$();
	virtual ::java::security::PermissionCollection* engineGetPermissions(::java::security::CodeSource* codesource);
	virtual ::java::security::PermissionCollection* engineGetPermissions(::java::security::ProtectionDomain* domain);
	virtual bool engineImplies(::java::security::ProtectionDomain* domain, ::java::security::Permission* permission) {return false;}
	virtual void engineRefresh();
};

	} // security
} // java

#endif // _java_security_PolicySpi_h_