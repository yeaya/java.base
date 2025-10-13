#ifndef _sun_security_provider_certpath_URICertStore_h_
#define _sun_security_provider_certpath_URICertStore_h_
//$ class sun.security.provider.certpath.URICertStore
//$ extends java.security.cert.CertStoreSpi

#include <java/security/cert/CertStoreSpi.h>

#pragma push_macro("CACHE_SIZE")
#undef CACHE_SIZE
#pragma push_macro("CHECK_INTERVAL")
#undef CHECK_INTERVAL
#pragma push_macro("CRL_CONNECT_TIMEOUT")
#undef CRL_CONNECT_TIMEOUT
#pragma push_macro("CRL_READ_TIMEOUT")
#undef CRL_READ_TIMEOUT
#pragma push_macro("DEFAULT_CRL_CONNECT_TIMEOUT")
#undef DEFAULT_CRL_CONNECT_TIMEOUT
#pragma push_macro("DEFAULT_CRL_READ_TIMEOUT")
#undef DEFAULT_CRL_READ_TIMEOUT

namespace java {
	namespace net {
		class URI;
	}
}
namespace java {
	namespace security {
		namespace cert {
			class CRLSelector;
			class CertSelector;
			class CertStore;
			class CertStoreParameters;
			class CertificateFactory;
			class URICertStoreParameters;
			class X509CRL;
		}
	}
}
namespace java {
	namespace util {
		class Collection;
	}
}
namespace sun {
	namespace security {
		namespace util {
			class Cache;
			class Debug;
		}
	}
}
namespace sun {
	namespace security {
		namespace x509 {
			class AccessDescription;
		}
	}
}

namespace sun {
	namespace security {
		namespace provider {
			namespace certpath {

class URICertStore : public ::java::security::cert::CertStoreSpi {
	$class(URICertStore, 0, ::java::security::cert::CertStoreSpi)
public:
	URICertStore();
	void init$(::java::security::cert::CertStoreParameters* params);
	virtual ::java::util::Collection* engineGetCRLs(::java::security::cert::CRLSelector* selector) override;
	virtual ::java::util::Collection* engineGetCertificates(::java::security::cert::CertSelector* selector) override;
	static ::java::security::cert::CertStore* getInstance(::java::security::cert::URICertStoreParameters* params);
	static ::java::security::cert::CertStore* getInstance(::sun::security::x509::AccessDescription* ad);
	static ::java::util::Collection* getMatchingCRLs(::java::security::cert::X509CRL* crl, ::java::security::cert::CRLSelector* selector);
	static ::java::util::Collection* getMatchingCerts(::java::util::Collection* certs, ::java::security::cert::CertSelector* selector);
	static int32_t initializeTimeout($String* prop, int32_t def);
	static ::sun::security::util::Debug* debug;
	static const int32_t CHECK_INTERVAL = 30000; // 30 * 1000
	static const int32_t CACHE_SIZE = 185;
	::java::security::cert::CertificateFactory* factory = nullptr;
	::java::util::Collection* certs = nullptr;
	::java::security::cert::X509CRL* crl = nullptr;
	int64_t lastChecked = 0;
	int64_t lastModified = 0;
	::java::net::URI* uri = nullptr;
	bool ldap = false;
	::java::security::cert::CertStore* ldapCertStore = nullptr;
	static const int32_t DEFAULT_CRL_CONNECT_TIMEOUT = 15000;
	static const int32_t DEFAULT_CRL_READ_TIMEOUT = 15000;
	static int32_t CRL_CONNECT_TIMEOUT;
	static int32_t CRL_READ_TIMEOUT;
	static ::sun::security::util::Cache* certStoreCache;
};

			} // certpath
		} // provider
	} // security
} // sun

#pragma pop_macro("CACHE_SIZE")
#pragma pop_macro("CHECK_INTERVAL")
#pragma pop_macro("CRL_CONNECT_TIMEOUT")
#pragma pop_macro("CRL_READ_TIMEOUT")
#pragma pop_macro("DEFAULT_CRL_CONNECT_TIMEOUT")
#pragma pop_macro("DEFAULT_CRL_READ_TIMEOUT")

#endif // _sun_security_provider_certpath_URICertStore_h_