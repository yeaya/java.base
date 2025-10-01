#ifndef _jdk_internal_access_JavaSecurityAccess_h_
#define _jdk_internal_access_JavaSecurityAccess_h_
//$ interface jdk.internal.access.JavaSecurityAccess
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace security {
		class AccessControlContext;
		class PrivilegedAction;
		class ProtectionDomain;
	}
}
namespace jdk {
	namespace internal {
		namespace access {
			class JavaSecurityAccess$ProtectionDomainCache;
		}
	}
}

namespace jdk {
	namespace internal {
		namespace access {

class $export JavaSecurityAccess : public ::java::lang::Object {
	$interface(JavaSecurityAccess, $PRELOAD | $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual $Object* doIntersectionPrivilege(::java::security::PrivilegedAction* action, ::java::security::AccessControlContext* stack, ::java::security::AccessControlContext* context) {return nullptr;}
	virtual $Object* doIntersectionPrivilege(::java::security::PrivilegedAction* action, ::java::security::AccessControlContext* context) {return nullptr;}
	virtual $Array<::java::security::ProtectionDomain>* getProtectDomains(::java::security::AccessControlContext* context) {return nullptr;}
	virtual ::jdk::internal::access::JavaSecurityAccess$ProtectionDomainCache* getProtectionDomainCache() {return nullptr;}
};

		} // access
	} // internal
} // jdk

#endif // _jdk_internal_access_JavaSecurityAccess_h_