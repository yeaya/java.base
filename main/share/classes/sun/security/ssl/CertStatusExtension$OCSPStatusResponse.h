#ifndef _sun_security_ssl_CertStatusExtension$OCSPStatusResponse_h_
#define _sun_security_ssl_CertStatusExtension$OCSPStatusResponse_h_
//$ class sun.security.ssl.CertStatusExtension$OCSPStatusResponse
//$ extends sun.security.ssl.CertStatusExtension$CertStatusResponse

#include <java/lang/Array.h>
#include <sun/security/ssl/CertStatusExtension$CertStatusResponse.h>

namespace sun {
	namespace security {
		namespace provider {
			namespace certpath {
				class OCSPResponse;
			}
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class CertStatusExtension$OCSPStatusResponse : public ::sun::security::ssl::CertStatusExtension$CertStatusResponse {
	$class(CertStatusExtension$OCSPStatusResponse, $NO_CLASS_INIT, ::sun::security::ssl::CertStatusExtension$CertStatusResponse)
public:
	CertStatusExtension$OCSPStatusResponse();
	void init$(int8_t statusType, $bytes* encoded);
	virtual $String* toString() override;
	::sun::security::provider::certpath::OCSPResponse* ocspResponse = nullptr;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_CertStatusExtension$OCSPStatusResponse_h_