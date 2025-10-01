#ifndef _sun_security_ssl_CertStatusExtension$CertStatusResponse_h_
#define _sun_security_ssl_CertStatusExtension$CertStatusResponse_h_
//$ class sun.security.ssl.CertStatusExtension$CertStatusResponse
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace sun {
	namespace security {
		namespace ssl {

class CertStatusExtension$CertStatusResponse : public ::java::lang::Object {
	$class(CertStatusExtension$CertStatusResponse, $NO_CLASS_INIT, ::java::lang::Object)
public:
	CertStatusExtension$CertStatusResponse();
	void init$(int8_t statusType, $bytes* respDer);
	virtual $bytes* toByteArray();
	virtual $String* toString() override;
	int8_t statusType = 0;
	$bytes* encodedResponse = nullptr;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_CertStatusExtension$CertStatusResponse_h_