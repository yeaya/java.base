#ifndef _sun_security_ssl_StatusResponseManager$StatusInfo_h_
#define _sun_security_ssl_StatusResponseManager$StatusInfo_h_
//$ class sun.security.ssl.StatusResponseManager$StatusInfo
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace net {
		class URI;
	}
}
namespace java {
	namespace security {
		namespace cert {
			class X509Certificate;
		}
	}
}
namespace sun {
	namespace security {
		namespace provider {
			namespace certpath {
				class CertId;
			}
		}
	}
}
namespace sun {
	namespace security {
		namespace ssl {
			class StatusResponseManager;
			class StatusResponseManager$ResponseCacheEntry;
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class StatusResponseManager$StatusInfo : public ::java::lang::Object {
	$class(StatusResponseManager$StatusInfo, $NO_CLASS_INIT, ::java::lang::Object)
public:
	StatusResponseManager$StatusInfo();
	void init$(::sun::security::ssl::StatusResponseManager* this$0, ::java::security::cert::X509Certificate* subjectCert, ::java::security::cert::X509Certificate* issuerCert);
	void init$(::sun::security::ssl::StatusResponseManager* this$0, ::java::security::cert::X509Certificate* subjectCert, ::sun::security::provider::certpath::CertId* certId);
	void init$(::sun::security::ssl::StatusResponseManager* this$0, ::sun::security::ssl::StatusResponseManager$StatusInfo* orig);
	virtual $String* toString() override;
	::sun::security::ssl::StatusResponseManager* this$0 = nullptr;
	::java::security::cert::X509Certificate* cert = nullptr;
	::sun::security::provider::certpath::CertId* cid = nullptr;
	::java::net::URI* responder = nullptr;
	::sun::security::ssl::StatusResponseManager$ResponseCacheEntry* responseData = nullptr;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_StatusResponseManager$StatusInfo_h_