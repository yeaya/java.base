#ifndef _sun_security_provider_certpath_PKIXMasterCertPathValidator_h_
#define _sun_security_provider_certpath_PKIXMasterCertPathValidator_h_
//$ class sun.security.provider.certpath.PKIXMasterCertPathValidator
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace security {
		namespace cert {
			class CertPath;
		}
	}
}
namespace java {
	namespace util {
		class List;
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

class PKIXMasterCertPathValidator : public ::java::lang::Object {
	$class(PKIXMasterCertPathValidator, 0, ::java::lang::Object)
public:
	PKIXMasterCertPathValidator();
	void init$();
	static void validate(::java::security::cert::CertPath* cpOriginal, ::java::util::List* reversedCertList, ::java::util::List* certPathCheckers);
	static ::sun::security::util::Debug* debug;
};

			} // certpath
		} // provider
	} // security
} // sun

#endif // _sun_security_provider_certpath_PKIXMasterCertPathValidator_h_