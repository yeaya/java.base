#ifndef _sun_security_provider_certpath_Builder_h_
#define _sun_security_provider_certpath_Builder_h_
//$ class sun.security.provider.certpath.Builder
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("USE_AIA")
#undef USE_AIA

namespace java {
	namespace security {
		namespace cert {
			class X509CertSelector;
			class X509Certificate;
		}
	}
}
namespace java {
	namespace util {
		class Collection;
		class LinkedList;
		class List;
		class Set;
	}
}
namespace sun {
	namespace security {
		namespace provider {
			namespace certpath {
				class PKIX$BuilderParams;
				class State;
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
			class GeneralNameInterface;
			class NameConstraintsExtension;
		}
	}
}

namespace sun {
	namespace security {
		namespace provider {
			namespace certpath {

class $import Builder : public ::java::lang::Object {
	$class(Builder, 0, ::java::lang::Object)
public:
	Builder();
	void init$(::sun::security::provider::certpath::PKIX$BuilderParams* buildParams);
	virtual void addCertToPath(::java::security::cert::X509Certificate* cert, ::java::util::LinkedList* certPathList) {}
	virtual bool addMatchingCerts(::java::security::cert::X509CertSelector* selector, ::java::util::Collection* certStores, ::java::util::Collection* resultCerts, bool checkAll);
	static int32_t distance(::sun::security::x509::GeneralNameInterface* base, ::sun::security::x509::GeneralNameInterface* test, int32_t incomparable);
	virtual ::java::util::Collection* getMatchingCerts(::sun::security::provider::certpath::State* currentState, ::java::util::List* certStores) {return nullptr;}
	virtual ::java::util::Set* getMatchingPolicies();
	static int32_t hops(::sun::security::x509::GeneralNameInterface* base, ::sun::security::x509::GeneralNameInterface* test, int32_t incomparable);
	virtual bool isPathCompleted(::java::security::cert::X509Certificate* cert) {return false;}
	virtual void removeFinalCertFromPath(::java::util::LinkedList* certPathList) {}
	static int32_t targetDistance(::sun::security::x509::NameConstraintsExtension* constraints, ::java::security::cert::X509Certificate* cert, ::sun::security::x509::GeneralNameInterface* target);
	virtual void verifyCert(::java::security::cert::X509Certificate* cert, ::sun::security::provider::certpath::State* currentState, ::java::util::List* certPathList) {}
	static ::sun::security::util::Debug* debug;
	::java::util::Set* matchingPolicies = nullptr;
	::sun::security::provider::certpath::PKIX$BuilderParams* buildParams = nullptr;
	::java::security::cert::X509CertSelector* targetCertConstraints = nullptr;
	static bool USE_AIA;
};

			} // certpath
		} // provider
	} // security
} // sun

#pragma pop_macro("USE_AIA")

#endif // _sun_security_provider_certpath_Builder_h_