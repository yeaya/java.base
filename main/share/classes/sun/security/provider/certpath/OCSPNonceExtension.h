#ifndef _sun_security_provider_certpath_OCSPNonceExtension_h_
#define _sun_security_provider_certpath_OCSPNonceExtension_h_
//$ class sun.security.provider.certpath.OCSPNonceExtension
//$ extends sun.security.x509.Extension

#include <java/lang/Array.h>
#include <sun/security/x509/Extension.h>

#pragma push_macro("EXTENSION_NAME")
#undef EXTENSION_NAME

namespace sun {
	namespace security {
		namespace provider {
			namespace certpath {

class $export OCSPNonceExtension : public ::sun::security::x509::Extension {
	$class(OCSPNonceExtension, 0, ::sun::security::x509::Extension)
public:
	OCSPNonceExtension();
	void init$(int32_t length);
	void init$(bool isCritical, int32_t length);
	void init$($bytes* incomingNonce);
	void init$(bool isCritical, $bytes* incomingNonce);
	$String* getName();
	$bytes* getNonceValue();
	virtual $String* toString() override;
	static $String* EXTENSION_NAME;
	$bytes* nonceData = nullptr;
};

			} // certpath
		} // provider
	} // security
} // sun

#pragma pop_macro("EXTENSION_NAME")

#endif // _sun_security_provider_certpath_OCSPNonceExtension_h_