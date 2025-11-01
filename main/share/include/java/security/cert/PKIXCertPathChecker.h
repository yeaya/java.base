#ifndef _java_security_cert_PKIXCertPathChecker_h_
#define _java_security_cert_PKIXCertPathChecker_h_
//$ class java.security.cert.PKIXCertPathChecker
//$ extends java.security.cert.CertPathChecker
//$ implements java.lang.Cloneable

#include <java/lang/Cloneable.h>
#include <java/security/cert/CertPathChecker.h>

namespace java {
	namespace security {
		namespace cert {
			class Certificate;
		}
	}
}
namespace java {
	namespace util {
		class Collection;
		class Set;
	}
}

namespace java {
	namespace security {
		namespace cert {

class $import PKIXCertPathChecker : public ::java::security::cert::CertPathChecker, public ::java::lang::Cloneable {
	$class(PKIXCertPathChecker, $NO_CLASS_INIT, ::java::security::cert::CertPathChecker, ::java::lang::Cloneable)
public:
	PKIXCertPathChecker();
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	virtual void init(bool forward) override {}
	void init$();
	virtual void check(::java::security::cert::Certificate* cert, ::java::util::Collection* unresolvedCritExts) {}
	virtual void check(::java::security::cert::Certificate* cert) override;
	virtual $Object* clone() override;
	virtual ::java::util::Set* getSupportedExtensions() {return nullptr;}
	virtual bool isForwardCheckingSupported() override {return false;}
	virtual $String* toString() override;
};

		} // cert
	} // security
} // java

#endif // _java_security_cert_PKIXCertPathChecker_h_