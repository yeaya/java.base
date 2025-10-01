#ifndef _sun_security_ssl_StatusResponseManager$StaplingParameters_h_
#define _sun_security_ssl_StatusResponseManager$StaplingParameters_h_
//$ class sun.security.ssl.StatusResponseManager$StaplingParameters
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		class Map;
	}
}
namespace sun {
	namespace security {
		namespace ssl {
			class CertStatusExtension$CertStatusRequest;
			class CertStatusExtension$CertStatusRequestType;
			class SSLExtension;
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class StatusResponseManager$StaplingParameters : public ::java::lang::Object {
	$class(StatusResponseManager$StaplingParameters, $NO_CLASS_INIT, ::java::lang::Object)
public:
	StatusResponseManager$StaplingParameters();
	void init$(::sun::security::ssl::SSLExtension* ext, ::sun::security::ssl::CertStatusExtension$CertStatusRequestType* type, ::sun::security::ssl::CertStatusExtension$CertStatusRequest* req, ::java::util::Map* responses);
	::sun::security::ssl::SSLExtension* statusRespExt = nullptr;
	::sun::security::ssl::CertStatusExtension$CertStatusRequestType* statReqType = nullptr;
	::sun::security::ssl::CertStatusExtension$CertStatusRequest* statReqData = nullptr;
	::java::util::Map* responseMap = nullptr;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_StatusResponseManager$StaplingParameters_h_