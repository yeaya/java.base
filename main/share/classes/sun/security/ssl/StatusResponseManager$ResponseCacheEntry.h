#ifndef _sun_security_ssl_StatusResponseManager$ResponseCacheEntry_h_
#define _sun_security_ssl_StatusResponseManager$ResponseCacheEntry_h_
//$ class sun.security.ssl.StatusResponseManager$ResponseCacheEntry
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace util {
		class Date;
	}
}
namespace sun {
	namespace security {
		namespace provider {
			namespace certpath {
				class CertId;
				class OCSPResponse$ResponseStatus;
				class OCSPResponse$SingleResponse;
				class ResponderId;
			}
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class StatusResponseManager$ResponseCacheEntry : public ::java::lang::Object {
	$class(StatusResponseManager$ResponseCacheEntry, $NO_CLASS_INIT, ::java::lang::Object)
public:
	StatusResponseManager$ResponseCacheEntry();
	void init$($bytes* responseBytes, ::sun::security::provider::certpath::CertId* cid);
	::sun::security::provider::certpath::OCSPResponse$ResponseStatus* status = nullptr;
	$bytes* ocspBytes = nullptr;
	::java::util::Date* nextUpdate = nullptr;
	::sun::security::provider::certpath::OCSPResponse$SingleResponse* singleResp = nullptr;
	::sun::security::provider::certpath::ResponderId* respId = nullptr;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_StatusResponseManager$ResponseCacheEntry_h_