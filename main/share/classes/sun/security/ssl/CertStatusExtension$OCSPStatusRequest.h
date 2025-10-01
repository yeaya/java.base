#ifndef _sun_security_ssl_CertStatusExtension$OCSPStatusRequest_h_
#define _sun_security_ssl_CertStatusExtension$OCSPStatusRequest_h_
//$ class sun.security.ssl.CertStatusExtension$OCSPStatusRequest
//$ extends sun.security.ssl.CertStatusExtension$CertStatusRequest

#include <java/lang/Array.h>
#include <sun/security/ssl/CertStatusExtension$CertStatusRequest.h>

#pragma push_macro("EMPTY_OCSP")
#undef EMPTY_OCSP
#pragma push_macro("EMPTY_OCSP_MULTI")
#undef EMPTY_OCSP_MULTI

namespace java {
	namespace util {
		class List;
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class CertStatusExtension$OCSPStatusRequest : public ::sun::security::ssl::CertStatusExtension$CertStatusRequest {
	$class(CertStatusExtension$OCSPStatusRequest, 0, ::sun::security::ssl::CertStatusExtension$CertStatusRequest)
public:
	CertStatusExtension$OCSPStatusRequest();
	void init$(int8_t statusType, $bytes* encoded);
	virtual $String* toString() override;
	static ::sun::security::ssl::CertStatusExtension$OCSPStatusRequest* EMPTY_OCSP;
	static ::sun::security::ssl::CertStatusExtension$OCSPStatusRequest* EMPTY_OCSP_MULTI;
	::java::util::List* responderIds = nullptr;
	::java::util::List* extensions = nullptr;
};

		} // ssl
	} // security
} // sun

#pragma pop_macro("EMPTY_OCSP")
#pragma pop_macro("EMPTY_OCSP_MULTI")

#endif // _sun_security_ssl_CertStatusExtension$OCSPStatusRequest_h_