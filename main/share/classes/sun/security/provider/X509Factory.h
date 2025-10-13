#ifndef _sun_security_provider_X509Factory_h_
#define _sun_security_provider_X509Factory_h_
//$ class sun.security.provider.X509Factory
//$ extends java.security.cert.CertificateFactorySpi

#include <java/lang/Array.h>
#include <java/security/cert/CertificateFactorySpi.h>

#pragma push_macro("BEGIN_CERT")
#undef BEGIN_CERT
#pragma push_macro("ENC_MAX_LENGTH")
#undef ENC_MAX_LENGTH
#pragma push_macro("END_CERT")
#undef END_CERT

namespace java {
	namespace io {
		class ByteArrayOutputStream;
		class InputStream;
	}
}
namespace java {
	namespace security {
		namespace cert {
			class CRL;
			class CertPath;
			class Certificate;
			class X509CRL;
			class X509Certificate;
		}
	}
}
namespace java {
	namespace util {
		class Collection;
		class Iterator;
		class List;
	}
}
namespace sun {
	namespace security {
		namespace util {
			class Cache;
		}
	}
}
namespace sun {
	namespace security {
		namespace x509 {
			class X509CRLImpl;
			class X509CertImpl;
		}
	}
}

namespace sun {
	namespace security {
		namespace provider {

class $export X509Factory : public ::java::security::cert::CertificateFactorySpi {
	$class(X509Factory, 0, ::java::security::cert::CertificateFactorySpi)
public:
	X509Factory();
	void init$();
	static void addToCache(::sun::security::util::Cache* cache, $bytes* encoding, Object$* value);
	static void checkHeaderFooter($String* header, $String* footer);
	void commitEvent(::sun::security::x509::X509CertImpl* info);
	virtual ::java::security::cert::CRL* engineGenerateCRL(::java::io::InputStream* is) override;
	virtual ::java::util::Collection* engineGenerateCRLs(::java::io::InputStream* is) override;
	virtual ::java::security::cert::CertPath* engineGenerateCertPath(::java::io::InputStream* inStream) override;
	virtual ::java::security::cert::CertPath* engineGenerateCertPath(::java::io::InputStream* inStream, $String* encoding) override;
	virtual ::java::security::cert::CertPath* engineGenerateCertPath(::java::util::List* certificates) override;
	virtual ::java::security::cert::Certificate* engineGenerateCertificate(::java::io::InputStream* is) override;
	virtual ::java::util::Collection* engineGenerateCertificates(::java::io::InputStream* is) override;
	virtual ::java::util::Iterator* engineGetCertPathEncodings() override;
	static $Object* getFromCache(::sun::security::util::Cache* cache, $bytes* encoding);
	static ::sun::security::x509::X509CertImpl* intern(::java::security::cert::X509Certificate* c);
	static ::sun::security::x509::X509CRLImpl* intern(::java::security::cert::X509CRL* c);
	::java::util::Collection* parseX509orPKCS7CRL(::java::io::InputStream* is);
	::java::util::Collection* parseX509orPKCS7Cert(::java::io::InputStream* is);
	static int32_t readBERInternal(::java::io::InputStream* is, ::java::io::ByteArrayOutputStream* bout, int32_t tag);
	static int32_t readFully(::java::io::InputStream* in, ::java::io::ByteArrayOutputStream* bout, int32_t length);
	static $bytes* readOneBlock(::java::io::InputStream* is);
	static $String* BEGIN_CERT;
	static $String* END_CERT;
	static const int32_t ENC_MAX_LENGTH = 4194304; // 4096 * 1024
	static ::sun::security::util::Cache* certCache;
	static ::sun::security::util::Cache* crlCache;
};

		} // provider
	} // security
} // sun

#pragma pop_macro("BEGIN_CERT")
#pragma pop_macro("ENC_MAX_LENGTH")
#pragma pop_macro("END_CERT")

#endif // _sun_security_provider_X509Factory_h_