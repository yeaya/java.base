#ifndef _java_security_cert_CertificateRevokedException_h_
#define _java_security_cert_CertificateRevokedException_h_
//$ class java.security.cert.CertificateRevokedException
//$ extends java.security.cert.CertificateException

#include <java/security/cert/CertificateException.h>

namespace java {
	namespace io {
		class ObjectInputStream;
		class ObjectOutputStream;
	}
}
namespace java {
	namespace security {
		namespace cert {
			class CRLReason;
		}
	}
}
namespace java {
	namespace util {
		class Date;
		class Map;
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

namespace java {
	namespace security {
		namespace cert {

class $export CertificateRevokedException : public ::java::security::cert::CertificateException {
	$class(CertificateRevokedException, $NO_CLASS_INIT, ::java::security::cert::CertificateException)
public:
	CertificateRevokedException();
	void init$(::java::util::Date* revocationDate, ::java::security::cert::CRLReason* reason, ::javax::security::auth::x500::X500Principal* authority, ::java::util::Map* extensions);
	virtual ::javax::security::auth::x500::X500Principal* getAuthorityName();
	virtual ::java::util::Map* getExtensions();
	virtual ::java::util::Date* getInvalidityDate();
	virtual $String* getMessage() override;
	virtual ::java::util::Date* getRevocationDate();
	virtual ::java::security::cert::CRLReason* getRevocationReason();
	void readObject(::java::io::ObjectInputStream* ois);
	void writeObject(::java::io::ObjectOutputStream* oos);
	static const int64_t serialVersionUID = (int64_t)0x6CCD4365F915B433;
	::java::util::Date* revocationDate = nullptr;
	::java::security::cert::CRLReason* reason = nullptr;
	::javax::security::auth::x500::X500Principal* authority = nullptr;
	::java::util::Map* extensions = nullptr;
	CertificateRevokedException(const CertificateRevokedException& e);
	virtual void throw$() override;
	inline CertificateRevokedException* operator ->() {
		return (CertificateRevokedException*)throwing$;
	}
};

		} // cert
	} // security
} // java

#endif // _java_security_cert_CertificateRevokedException_h_