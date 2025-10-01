#ifndef _sun_security_provider_PolicyFile$PolicyInfo_h_
#define _sun_security_provider_PolicyFile$PolicyInfo_h_
//$ class sun.security.provider.PolicyFile$PolicyInfo
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace util {
		class List;
		class Map;
		class Random;
	}
}
namespace jdk {
	namespace internal {
		namespace access {
			class JavaSecurityAccess$ProtectionDomainCache;
		}
	}
}

namespace sun {
	namespace security {
		namespace provider {

class PolicyFile$PolicyInfo : public ::java::lang::Object {
	$class(PolicyFile$PolicyInfo, $NO_CLASS_INIT, ::java::lang::Object)
public:
	PolicyFile$PolicyInfo();
	void init$(int32_t numCaches);
	virtual ::jdk::internal::access::JavaSecurityAccess$ProtectionDomainCache* getPdMapping();
	static const bool verbose = false;
	::java::util::List* policyEntries = nullptr;
	::java::util::Map* aliasMapping = nullptr;
	$Array<::jdk::internal::access::JavaSecurityAccess$ProtectionDomainCache>* pdMapping = nullptr;
	::java::util::Random* random = nullptr;
};

		} // provider
	} // security
} // sun

#endif // _sun_security_provider_PolicyFile$PolicyInfo_h_