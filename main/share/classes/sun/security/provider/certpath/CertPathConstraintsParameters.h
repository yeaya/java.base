#ifndef _sun_security_provider_certpath_CertPathConstraintsParameters_h_
#define _sun_security_provider_certpath_CertPathConstraintsParameters_h_
//$ class sun.security.provider.certpath.CertPathConstraintsParameters
//$ extends sun.security.util.ConstraintsParameters

#include <sun/security/util/ConstraintsParameters.h>

namespace java {
	namespace security {
		class Key;
	}
}
namespace java {
	namespace security {
		namespace cert {
			class TrustAnchor;
			class X509Certificate;
		}
	}
}
namespace java {
	namespace util {
		class Date;
		class Set;
	}
}

namespace sun {
	namespace security {
		namespace provider {
			namespace certpath {

class CertPathConstraintsParameters : public ::sun::security::util::ConstraintsParameters {
	$class(CertPathConstraintsParameters, $NO_CLASS_INIT, ::sun::security::util::ConstraintsParameters)
public:
	CertPathConstraintsParameters();
	void init$(::java::security::cert::X509Certificate* cert, $String* variant, ::java::security::cert::TrustAnchor* anchor, ::java::util::Date* date);
	void init$(::java::security::Key* key, $String* variant, ::java::security::cert::TrustAnchor* anchor);
	void init$(::java::security::Key* key, $String* variant, ::java::security::cert::TrustAnchor* anchor, ::java::util::Date* date, ::java::security::cert::X509Certificate* cert);
	virtual bool anchorIsJdkCA() override;
	virtual $String* extendedExceptionMsg() override;
	virtual ::java::util::Date* getDate() override;
	virtual ::java::util::Set* getKeys() override;
	virtual $String* getVariant() override;
	virtual $String* toString() override;
	::java::security::Key* key = nullptr;
	::java::security::cert::TrustAnchor* anchor = nullptr;
	::java::util::Date* date = nullptr;
	$String* variant = nullptr;
	::java::security::cert::X509Certificate* cert = nullptr;
};

			} // certpath
		} // provider
	} // security
} // sun

#endif // _sun_security_provider_certpath_CertPathConstraintsParameters_h_