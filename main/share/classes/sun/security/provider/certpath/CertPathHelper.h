#ifndef _sun_security_provider_certpath_CertPathHelper_h_
#define _sun_security_provider_certpath_CertPathHelper_h_
//$ class sun.security.provider.certpath.CertPathHelper
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace security {
		namespace cert {
			class TrustAnchor;
			class X509CRLSelector;
			class X509CertSelector;
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

class $export CertPathHelper : public ::java::lang::Object {
	$class(CertPathHelper, $NO_CLASS_INIT, ::java::lang::Object)
public:
	CertPathHelper();
	void init$();
	virtual bool implIsJdkCA(::java::security::cert::TrustAnchor* anchor) {return false;}
	virtual void implSetDateAndTime(::java::security::cert::X509CRLSelector* sel, ::java::util::Date* date, int64_t skew) {}
	virtual void implSetPathToNames(::java::security::cert::X509CertSelector* sel, ::java::util::Set* names) {}
	static bool isJdkCA(::java::security::cert::TrustAnchor* anchor);
	static void setDateAndTime(::java::security::cert::X509CRLSelector* sel, ::java::util::Date* date, int64_t skew);
	static void setPathToNames(::java::security::cert::X509CertSelector* sel, ::java::util::Set* names);
	static ::sun::security::provider::certpath::CertPathHelper* instance;
};

			} // certpath
		} // provider
	} // security
} // sun

#endif // _sun_security_provider_certpath_CertPathHelper_h_