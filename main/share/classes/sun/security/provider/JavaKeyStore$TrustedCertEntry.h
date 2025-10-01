#ifndef _sun_security_provider_JavaKeyStore$TrustedCertEntry_h_
#define _sun_security_provider_JavaKeyStore$TrustedCertEntry_h_
//$ class sun.security.provider.JavaKeyStore$TrustedCertEntry
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace security {
		namespace cert {
			class Certificate;
		}
	}
}
namespace java {
	namespace util {
		class Date;
	}
}

namespace sun {
	namespace security {
		namespace provider {

class JavaKeyStore$TrustedCertEntry : public ::java::lang::Object {
	$class(JavaKeyStore$TrustedCertEntry, $NO_CLASS_INIT, ::java::lang::Object)
public:
	JavaKeyStore$TrustedCertEntry();
	void init$();
	::java::util::Date* date = nullptr;
	::java::security::cert::Certificate* cert = nullptr;
};

		} // provider
	} // security
} // sun

#endif // _sun_security_provider_JavaKeyStore$TrustedCertEntry_h_