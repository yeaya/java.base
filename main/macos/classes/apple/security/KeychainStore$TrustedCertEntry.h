#ifndef _apple_security_KeychainStore$TrustedCertEntry_h_
#define _apple_security_KeychainStore$TrustedCertEntry_h_
//$ class apple.security.KeychainStore$TrustedCertEntry
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

namespace apple {
	namespace security {

class KeychainStore$TrustedCertEntry : public ::java::lang::Object {
	$class(KeychainStore$TrustedCertEntry, $NO_CLASS_INIT, ::java::lang::Object)
public:
	KeychainStore$TrustedCertEntry();
	void init$();
	::java::util::Date* date = nullptr;
	::java::security::cert::Certificate* cert = nullptr;
	int64_t certRef = 0;
};

	} // security
} // apple

#endif // _apple_security_KeychainStore$TrustedCertEntry_h_