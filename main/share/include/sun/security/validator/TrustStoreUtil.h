#ifndef _sun_security_validator_TrustStoreUtil_h_
#define _sun_security_validator_TrustStoreUtil_h_
//$ class sun.security.validator.TrustStoreUtil
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace security {
		class KeyStore;
	}
}
namespace java {
	namespace util {
		class Set;
	}
}

namespace sun {
	namespace security {
		namespace validator {

class $import TrustStoreUtil : public ::java::lang::Object {
	$class(TrustStoreUtil, $NO_CLASS_INIT, ::java::lang::Object)
public:
	TrustStoreUtil();
	void init$();
	static ::java::util::Set* getTrustedCerts(::java::security::KeyStore* ks);
};

		} // validator
	} // security
} // sun

#endif // _sun_security_validator_TrustStoreUtil_h_