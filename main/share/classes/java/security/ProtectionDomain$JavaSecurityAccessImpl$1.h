#ifndef _java_security_ProtectionDomain$JavaSecurityAccessImpl$1_h_
#define _java_security_ProtectionDomain$JavaSecurityAccessImpl$1_h_
//$ class java.security.ProtectionDomain$JavaSecurityAccessImpl$1
//$ extends jdk.internal.access.JavaSecurityAccess$ProtectionDomainCache

#include <jdk/internal/access/JavaSecurityAccess$ProtectionDomainCache.h>

namespace java {
	namespace security {
		class PermissionCollection;
		class ProtectionDomain;
		class ProtectionDomain$JavaSecurityAccessImpl;
	}
}
namespace java {
	namespace util {
		class Map;
	}
}

namespace java {
	namespace security {

class ProtectionDomain$JavaSecurityAccessImpl$1 : public ::jdk::internal::access::JavaSecurityAccess$ProtectionDomainCache {
	$class(ProtectionDomain$JavaSecurityAccessImpl$1, $NO_CLASS_INIT, ::jdk::internal::access::JavaSecurityAccess$ProtectionDomainCache)
public:
	ProtectionDomain$JavaSecurityAccessImpl$1();
	void init$(::java::security::ProtectionDomain$JavaSecurityAccessImpl* this$0);
	virtual ::java::security::PermissionCollection* get(::java::security::ProtectionDomain* pd) override;
	virtual void put(::java::security::ProtectionDomain* pd, ::java::security::PermissionCollection* pc) override;
	::java::security::ProtectionDomain$JavaSecurityAccessImpl* this$0 = nullptr;
	::java::util::Map* map = nullptr;
};

	} // security
} // java

#endif // _java_security_ProtectionDomain$JavaSecurityAccessImpl$1_h_