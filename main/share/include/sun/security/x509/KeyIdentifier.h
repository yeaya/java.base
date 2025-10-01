#ifndef _sun_security_x509_KeyIdentifier_h_
#define _sun_security_x509_KeyIdentifier_h_
//$ class sun.security.x509.KeyIdentifier
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace security {
		class PublicKey;
	}
}
namespace sun {
	namespace security {
		namespace util {
			class DerOutputStream;
			class DerValue;
		}
	}
}

namespace sun {
	namespace security {
		namespace x509 {

class $import KeyIdentifier : public ::java::lang::Object {
	$class(KeyIdentifier, $NO_CLASS_INIT, ::java::lang::Object)
public:
	KeyIdentifier();
	void init$($bytes* octetString);
	void init$(::sun::security::util::DerValue* val);
	void init$(::java::security::PublicKey* pubKey);
	virtual void encode(::sun::security::util::DerOutputStream* out);
	virtual bool equals(Object$* other) override;
	virtual $bytes* getIdentifier();
	virtual int32_t hashCode() override;
	virtual $String* toString() override;
	$bytes* octetString = nullptr;
};

		} // x509
	} // security
} // sun

#endif // _sun_security_x509_KeyIdentifier_h_