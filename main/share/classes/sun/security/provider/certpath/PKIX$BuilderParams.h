#ifndef _sun_security_provider_certpath_PKIX$BuilderParams_h_
#define _sun_security_provider_certpath_PKIX$BuilderParams_h_
//$ class sun.security.provider.certpath.PKIX$BuilderParams
//$ extends sun.security.provider.certpath.PKIX$ValidatorParams

#include <sun/security/provider/certpath/PKIX$ValidatorParams.h>

namespace java {
	namespace security {
		namespace cert {
			class PKIXBuilderParameters;
			class X509CertSelector;
		}
	}
}
namespace java {
	namespace util {
		class List;
	}
}
namespace javax {
	namespace security {
		namespace auth {
			namespace x500 {
				class X500Principal;
			}
		}
	}
}

namespace sun {
	namespace security {
		namespace provider {
			namespace certpath {

class PKIX$BuilderParams : public ::sun::security::provider::certpath::PKIX$ValidatorParams {
	$class(PKIX$BuilderParams, $NO_CLASS_INIT, ::sun::security::provider::certpath::PKIX$ValidatorParams)
public:
	PKIX$BuilderParams();
	void init$(::java::security::cert::PKIXBuilderParameters* params);
	virtual ::java::util::List* certStores() override;
	void checkParams(::java::security::cert::PKIXBuilderParameters* params);
	static ::javax::security::auth::x500::X500Principal* getTargetSubject(::java::util::List* stores, ::java::security::cert::X509CertSelector* sel);
	virtual int32_t maxPathLength();
	virtual ::java::security::cert::PKIXBuilderParameters* params();
	virtual ::javax::security::auth::x500::X500Principal* targetSubject();
	::java::security::cert::PKIXBuilderParameters* params$ = nullptr;
	::java::util::List* stores = nullptr;
	::javax::security::auth::x500::X500Principal* targetSubject$ = nullptr;
};

			} // certpath
		} // provider
	} // security
} // sun

#endif // _sun_security_provider_certpath_PKIX$BuilderParams_h_