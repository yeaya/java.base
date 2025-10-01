#ifndef _sun_security_pkcs12_PKCS12KeyStore$DualFormatPKCS12_h_
#define _sun_security_pkcs12_PKCS12KeyStore$DualFormatPKCS12_h_
//$ class sun.security.pkcs12.PKCS12KeyStore$DualFormatPKCS12
//$ extends sun.security.util.KeyStoreDelegator

#include <sun/security/util/KeyStoreDelegator.h>

namespace sun {
	namespace security {
		namespace pkcs12 {

class PKCS12KeyStore$DualFormatPKCS12 : public ::sun::security::util::KeyStoreDelegator {
	$class(PKCS12KeyStore$DualFormatPKCS12, $NO_CLASS_INIT, ::sun::security::util::KeyStoreDelegator)
public:
	PKCS12KeyStore$DualFormatPKCS12();
	using ::sun::security::util::KeyStoreDelegator::engineStore;
	using ::sun::security::util::KeyStoreDelegator::engineLoad;
	void init$();
};

		} // pkcs12
	} // security
} // sun

#endif // _sun_security_pkcs12_PKCS12KeyStore$DualFormatPKCS12_h_