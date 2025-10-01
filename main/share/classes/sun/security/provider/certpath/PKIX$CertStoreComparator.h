#ifndef _sun_security_provider_certpath_PKIX$CertStoreComparator_h_
#define _sun_security_provider_certpath_PKIX$CertStoreComparator_h_
//$ class sun.security.provider.certpath.PKIX$CertStoreComparator
//$ extends java.util.Comparator

#include <java/util/Comparator.h>

namespace java {
	namespace security {
		namespace cert {
			class CertStore;
		}
	}
}

namespace sun {
	namespace security {
		namespace provider {
			namespace certpath {

class PKIX$CertStoreComparator : public ::java::util::Comparator {
	$class(PKIX$CertStoreComparator, $NO_CLASS_INIT, ::java::util::Comparator)
public:
	PKIX$CertStoreComparator();
	void init$();
	virtual int32_t compare(::java::security::cert::CertStore* store1, ::java::security::cert::CertStore* store2);
	virtual int32_t compare(Object$* store1, Object$* store2) override;
};

			} // certpath
		} // provider
	} // security
} // sun

#endif // _sun_security_provider_certpath_PKIX$CertStoreComparator_h_