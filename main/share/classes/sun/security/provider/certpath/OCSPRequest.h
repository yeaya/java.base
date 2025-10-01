#ifndef _sun_security_provider_certpath_OCSPRequest_h_
#define _sun_security_provider_certpath_OCSPRequest_h_
//$ class sun.security.provider.certpath.OCSPRequest
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace util {
		class List;
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
		namespace util {
			class Debug;
		}
	}
}

namespace sun {
	namespace security {
		namespace provider {
			namespace certpath {

class OCSPRequest : public ::java::lang::Object {
	$class(OCSPRequest, 0, ::java::lang::Object)
public:
	OCSPRequest();
	void init$(::sun::security::provider::certpath::CertId* certId);
	void init$(::java::util::List* certIds);
	void init$(::java::util::List* certIds, ::java::util::List* extensions);
	virtual $bytes* encodeBytes();
	virtual ::java::util::List* getCertIds();
	virtual $bytes* getNonce();
	static ::sun::security::util::Debug* debug;
	static bool dump;
	::java::util::List* certIds = nullptr;
	::java::util::List* extensions = nullptr;
	$bytes* nonce = nullptr;
};

			} // certpath
		} // provider
	} // security
} // sun

#endif // _sun_security_provider_certpath_OCSPRequest_h_