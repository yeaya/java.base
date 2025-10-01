#ifndef _javax_security_cert_Certificate_h_
#define _javax_security_cert_Certificate_h_
//$ class javax.security.cert.Certificate
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace security {
		class PublicKey;
	}
}

namespace javax {
	namespace security {
		namespace cert {

class $import Certificate : public ::java::lang::Object {
	$class(Certificate, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Certificate();
	void init$();
	virtual bool equals(Object$* other) override;
	virtual $bytes* getEncoded() {return nullptr;}
	virtual ::java::security::PublicKey* getPublicKey() {return nullptr;}
	virtual int32_t hashCode() override;
	virtual $String* toString() override;
	virtual void verify(::java::security::PublicKey* key) {}
	virtual void verify(::java::security::PublicKey* key, $String* sigProvider) {}
};

		} // cert
	} // security
} // javax

#endif // _javax_security_cert_Certificate_h_