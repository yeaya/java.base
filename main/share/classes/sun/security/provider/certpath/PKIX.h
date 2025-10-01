#ifndef _sun_security_provider_certpath_PKIX_h_
#define _sun_security_provider_certpath_PKIX_h_
//$ class sun.security.provider.certpath.PKIX
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace security {
		class PublicKey;
	}
}
namespace java {
	namespace security {
		namespace cert {
			class CertPath;
			class CertPathParameters;
		}
	}
}
namespace sun {
	namespace security {
		namespace provider {
			namespace certpath {
				class PKIX$BuilderParams;
				class PKIX$ValidatorParams;
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

class PKIX : public ::java::lang::Object {
	$class(PKIX, 0, ::java::lang::Object)
public:
	PKIX();
	void init$();
	static ::sun::security::provider::certpath::PKIX$BuilderParams* checkBuilderParams(::java::security::cert::CertPathParameters* params);
	static ::sun::security::provider::certpath::PKIX$ValidatorParams* checkParams(::java::security::cert::CertPath* cp, ::java::security::cert::CertPathParameters* params);
	static bool isDSAPublicKeyWithoutParams(::java::security::PublicKey* publicKey);
	static ::sun::security::util::Debug* debug;
};

			} // certpath
		} // provider
	} // security
} // sun

#endif // _sun_security_provider_certpath_PKIX_h_