#ifndef _sun_security_ssl_CertStatusExtension$CertStatusRequest_h_
#define _sun_security_ssl_CertStatusExtension$CertStatusRequest_h_
//$ class sun.security.ssl.CertStatusExtension$CertStatusRequest
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace sun {
	namespace security {
		namespace ssl {

class CertStatusExtension$CertStatusRequest : public ::java::lang::Object {
	$class(CertStatusExtension$CertStatusRequest, $NO_CLASS_INIT, ::java::lang::Object)
public:
	CertStatusExtension$CertStatusRequest();
	void init$(int8_t statusType, $bytes* encodedRequest);
	virtual $String* toString() override;
	int8_t statusType = 0;
	$bytes* encodedRequest = nullptr;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_CertStatusExtension$CertStatusRequest_h_