#ifndef _java_security_cert_PKIXRevocationChecker_h_
#define _java_security_cert_PKIXRevocationChecker_h_
//$ class java.security.cert.PKIXRevocationChecker
//$ extends java.security.cert.PKIXCertPathChecker

#include <java/security/cert/PKIXCertPathChecker.h>

namespace java {
	namespace net {
		class URI;
	}
}
namespace java {
	namespace security {
		namespace cert {
			class X509Certificate;
		}
	}
}
namespace java {
	namespace util {
		class List;
		class Map;
		class Set;
	}
}

namespace java {
	namespace security {
		namespace cert {

class $import PKIXRevocationChecker : public ::java::security::cert::PKIXCertPathChecker {
	$class(PKIXRevocationChecker, $NO_CLASS_INIT, ::java::security::cert::PKIXCertPathChecker)
public:
	PKIXRevocationChecker();
	void init$();
	virtual $Object* clone() override;
	virtual ::java::util::List* getOcspExtensions();
	virtual ::java::net::URI* getOcspResponder();
	virtual ::java::security::cert::X509Certificate* getOcspResponderCert();
	virtual ::java::util::Map* getOcspResponses();
	virtual ::java::util::Set* getOptions();
	virtual ::java::util::List* getSoftFailExceptions() {return nullptr;}
	virtual void setOcspExtensions(::java::util::List* extensions);
	virtual void setOcspResponder(::java::net::URI* uri);
	virtual void setOcspResponderCert(::java::security::cert::X509Certificate* cert);
	virtual void setOcspResponses(::java::util::Map* responses);
	virtual void setOptions(::java::util::Set* options);
	::java::net::URI* ocspResponder = nullptr;
	::java::security::cert::X509Certificate* ocspResponderCert = nullptr;
	::java::util::List* ocspExtensions = nullptr;
	::java::util::Map* ocspResponses = nullptr;
	::java::util::Set* options = nullptr;
};

		} // cert
	} // security
} // java

#endif // _java_security_cert_PKIXRevocationChecker_h_