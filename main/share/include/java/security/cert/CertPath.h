#ifndef _java_security_cert_CertPath_h_
#define _java_security_cert_CertPath_h_
//$ class java.security.cert.CertPath
//$ extends java.io.Serializable

#include <java/io/Serializable.h>
#include <java/lang/Array.h>

namespace java {
	namespace util {
		class Iterator;
		class List;
	}
}

namespace java {
	namespace security {
		namespace cert {

class $import CertPath : public ::java::io::Serializable {
	$class(CertPath, $NO_CLASS_INIT, ::java::io::Serializable)
public:
	CertPath();
	void init$($String* type);
	virtual bool equals(Object$* other) override;
	virtual ::java::util::List* getCertificates() {return nullptr;}
	virtual $bytes* getEncoded() {return nullptr;}
	virtual $bytes* getEncoded($String* encoding) {return nullptr;}
	virtual ::java::util::Iterator* getEncodings() {return nullptr;}
	virtual $String* getType();
	virtual int32_t hashCode() override;
	virtual $String* toString() override;
	virtual $Object* writeReplace();
	static const int64_t serialVersionUID = (int64_t)0x543789977DD3E5FB;
	$String* type = nullptr;
};

		} // cert
	} // security
} // java

#endif // _java_security_cert_CertPath_h_