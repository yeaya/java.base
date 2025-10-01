#ifndef _sun_security_provider_JavaKeyStore$DualFormatJKS_h_
#define _sun_security_provider_JavaKeyStore$DualFormatJKS_h_
//$ class sun.security.provider.JavaKeyStore$DualFormatJKS
//$ extends sun.security.util.KeyStoreDelegator

#include <sun/security/util/KeyStoreDelegator.h>

namespace java {
	namespace io {
		class InputStream;
	}
}

namespace sun {
	namespace security {
		namespace provider {

class $export JavaKeyStore$DualFormatJKS : public ::sun::security::util::KeyStoreDelegator {
	$class(JavaKeyStore$DualFormatJKS, $NO_CLASS_INIT, ::sun::security::util::KeyStoreDelegator)
public:
	JavaKeyStore$DualFormatJKS();
	using ::sun::security::util::KeyStoreDelegator::engineStore;
	using ::sun::security::util::KeyStoreDelegator::engineLoad;
	void init$();
	virtual bool engineProbe(::java::io::InputStream* stream) override;
};

		} // provider
	} // security
} // sun

#endif // _sun_security_provider_JavaKeyStore$DualFormatJKS_h_