#ifndef _sun_security_provider_certpath_X509CertPath_h_
#define _sun_security_provider_certpath_X509CertPath_h_
//$ class sun.security.provider.certpath.X509CertPath
//$ extends java.security.cert.CertPath

#include <java/lang/Array.h>
#include <java/security/cert/CertPath.h>

#pragma push_macro("COUNT_ENCODING")
#undef COUNT_ENCODING
#pragma push_macro("PKCS7_ENCODING")
#undef PKCS7_ENCODING
#pragma push_macro("PKIPATH_ENCODING")
#undef PKIPATH_ENCODING

namespace java {
	namespace io {
		class InputStream;
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
		namespace provider {
			namespace certpath {

class $import X509CertPath : public ::java::security::cert::CertPath {
	$class(X509CertPath, 0, ::java::security::cert::CertPath)
public:
	X509CertPath();
	void init$(::java::util::List* certs);
	void init$(::java::io::InputStream* is);
	void init$(::java::io::InputStream* is, $String* encoding);
	$bytes* encodePKCS7();
	$bytes* encodePKIPATH();
	virtual ::java::util::List* getCertificates() override;
	virtual $bytes* getEncoded() override;
	virtual $bytes* getEncoded($String* encoding) override;
	virtual ::java::util::Iterator* getEncodings() override;
	static ::java::util::Iterator* getEncodingsStatic();
	static ::java::util::List* parsePKCS7(::java::io::InputStream* is);
	static ::java::util::List* parsePKIPATH(::java::io::InputStream* is);
	static $bytes* readAllBytes(::java::io::InputStream* is);
	static const int64_t serialVersionUID = (int64_t)0x453F54F74C4520B4;
	::java::util::List* certs = nullptr;
	static $String* COUNT_ENCODING;
	static $String* PKCS7_ENCODING;
	static $String* PKIPATH_ENCODING;
	static ::java::util::Collection* encodingList;
};

			} // certpath
		} // provider
	} // security
} // sun

#pragma pop_macro("COUNT_ENCODING")
#pragma pop_macro("PKCS7_ENCODING")
#pragma pop_macro("PKIPATH_ENCODING")

#endif // _sun_security_provider_certpath_X509CertPath_h_