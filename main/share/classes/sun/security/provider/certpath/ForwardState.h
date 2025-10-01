#ifndef _sun_security_provider_certpath_ForwardState_h_
#define _sun_security_provider_certpath_ForwardState_h_
//$ class sun.security.provider.certpath.ForwardState
//$ extends sun.security.provider.certpath.State

#include <sun/security/provider/certpath/State.h>

namespace java {
	namespace security {
		namespace cert {
			class X509Certificate;
		}
	}
}
namespace java {
	namespace util {
		class ArrayList;
		class HashSet;
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
				class UntrustedChecker;
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
		namespace x509 {
			class X509CertImpl;
		}
	}
}

namespace sun {
	namespace security {
		namespace provider {
			namespace certpath {

class ForwardState : public ::sun::security::provider::certpath::State {
	$class(ForwardState, 0, ::sun::security::provider::certpath::State)
public:
	ForwardState();
	void init$();
	virtual $Object* clone() override;
	virtual void initState(::java::util::List* certPathCheckers);
	virtual bool isInitial() override;
	virtual bool keyParamsNeeded() override;
	virtual $String* toString() override;
	virtual void updateState(::java::security::cert::X509Certificate* cert) override;
	static ::sun::security::util::Debug* debug;
	::javax::security::auth::x500::X500Principal* issuerDN = nullptr;
	::sun::security::x509::X509CertImpl* cert = nullptr;
	::java::util::HashSet* subjectNamesTraversed = nullptr;
	int32_t traversedCACerts = 0;
	bool init = false;
	::sun::security::provider::certpath::UntrustedChecker* untrustedChecker = nullptr;
	::java::util::ArrayList* forwardCheckers = nullptr;
	bool keyParamsNeededFlag = false;
};

			} // certpath
		} // provider
	} // security
} // sun

#endif // _sun_security_provider_certpath_ForwardState_h_