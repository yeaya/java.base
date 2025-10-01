#ifndef _java_security_cert_Certificate_h_
#define _java_security_cert_Certificate_h_
//$ class java.security.cert.Certificate
//$ extends java.io.Serializable

#include <java/io/Serializable.h>
#include <java/lang/Array.h>

namespace java {
	namespace security {
		class Provider;
		class PublicKey;
	}
}

namespace java {
	namespace security {
		namespace cert {

class $import Certificate : public ::java::io::Serializable {
	$class(Certificate, $PRELOAD | $NO_CLASS_INIT, ::java::io::Serializable)
public:
	Certificate();
	void init$($String* type);
	virtual bool equals(Object$* other) override;
	virtual $bytes* getEncoded() {return nullptr;}
	virtual ::java::security::PublicKey* getPublicKey() {return nullptr;}
	$String* getType();
	virtual int32_t hashCode() override;
	virtual $String* toString() override;
	virtual void verify(::java::security::PublicKey* key) {}
	virtual void verify(::java::security::PublicKey* key, $String* sigProvider) {}
	virtual void verify(::java::security::PublicKey* key, ::java::security::Provider* sigProvider);
	virtual $Object* writeReplace();
	static const int64_t serialVersionUID = (int64_t)0xCE3DF4C4F2080A1B;
	$String* type = nullptr;
	int32_t hash = 0;
};

		} // cert
	} // security
} // java

#endif // _java_security_cert_Certificate_h_