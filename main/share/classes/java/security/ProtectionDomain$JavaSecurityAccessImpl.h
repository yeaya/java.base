#ifndef _java_security_ProtectionDomain$JavaSecurityAccessImpl_h_
#define _java_security_ProtectionDomain$JavaSecurityAccessImpl_h_
//$ class java.security.ProtectionDomain$JavaSecurityAccessImpl
//$ extends jdk.internal.access.JavaSecurityAccess

#include <java/lang/Array.h>
#include <jdk/internal/access/JavaSecurityAccess.h>

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

namespace java {
	namespace security {

class ProtectionDomain$JavaSecurityAccessImpl : public ::jdk::internal::access::JavaSecurityAccess {
	$class(ProtectionDomain$JavaSecurityAccessImpl, $PRELOAD | $NO_CLASS_INIT, ::jdk::internal::access::JavaSecurityAccess)
public:
	ProtectionDomain$JavaSecurityAccessImpl();
	void init$();
	virtual $Object* doIntersectionPrivilege(::java::security::PrivilegedAction* action, ::java::security::AccessControlContext* stack, ::java::security::AccessControlContext* context) override;
	virtual $Object* doIntersectionPrivilege(::java::security::PrivilegedAction* action, ::java::security::AccessControlContext* context) override;
	static ::java::security::AccessControlContext* getCombinedACC(::java::security::AccessControlContext* context, ::java::security::AccessControlContext* stack);
	virtual $Array<::java::security::ProtectionDomain>* getProtectDomains(::java::security::AccessControlContext* context) override;
	virtual ::jdk::internal::access::JavaSecurityAccess$ProtectionDomainCache* getProtectionDomainCache() override;
};

	} // security
} // java

#endif // _java_security_ProtectionDomain$JavaSecurityAccessImpl_h_