#ifndef _jdk_internal_access_JavaSecurityAccess$ProtectionDomainCache_h_
#define _jdk_internal_access_JavaSecurityAccess$ProtectionDomainCache_h_
//$ interface jdk.internal.access.JavaSecurityAccess$ProtectionDomainCache
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace security {
		class PermissionCollection;
		class ProtectionDomain;
	}
}

namespace jdk {
	namespace internal {
		namespace access {

class $import JavaSecurityAccess$ProtectionDomainCache : public ::java::lang::Object {
	$interface(JavaSecurityAccess$ProtectionDomainCache, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::java::security::PermissionCollection* get(::java::security::ProtectionDomain* pd) {return nullptr;}
	virtual void put(::java::security::ProtectionDomain* pd, ::java::security::PermissionCollection* pc) {}
};

		} // access
	} // internal
} // jdk

#endif // _jdk_internal_access_JavaSecurityAccess$ProtectionDomainCache_h_