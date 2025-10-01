#ifndef _java_security_DomainLoadStoreParameter_h_
#define _java_security_DomainLoadStoreParameter_h_
//$ class java.security.DomainLoadStoreParameter
//$ extends java.security.KeyStore$LoadStoreParameter

#include <java/security/KeyStore$LoadStoreParameter.h>

namespace java {
	namespace net {
		class URI;
	}
}
namespace java {
	namespace security {
		class KeyStore$ProtectionParameter;
	}
}
namespace java {
	namespace util {
		class Map;
	}
}

namespace java {
	namespace security {

class $import DomainLoadStoreParameter : public ::java::security::KeyStore$LoadStoreParameter {
	$class(DomainLoadStoreParameter, $NO_CLASS_INIT, ::java::security::KeyStore$LoadStoreParameter)
public:
	DomainLoadStoreParameter();
	void init$(::java::net::URI* configuration, ::java::util::Map* protectionParams);
	::java::net::URI* getConfiguration();
	virtual ::java::security::KeyStore$ProtectionParameter* getProtectionParameter() override;
	::java::util::Map* getProtectionParams();
	::java::net::URI* configuration = nullptr;
	::java::util::Map* protectionParams = nullptr;
};

	} // security
} // java

#endif // _java_security_DomainLoadStoreParameter_h_