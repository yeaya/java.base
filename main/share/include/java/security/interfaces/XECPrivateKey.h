#ifndef _java_security_interfaces_XECPrivateKey_h_
#define _java_security_interfaces_XECPrivateKey_h_
//$ interface java.security.interfaces.XECPrivateKey
//$ extends java.security.interfaces.XECKey,java.security.PrivateKey

#include <java/security/PrivateKey.h>
#include <java/security/interfaces/XECKey.h>

namespace java {
	namespace util {
		class Optional;
	}
}

namespace java {
	namespace security {
		namespace interfaces {

class $import XECPrivateKey : public ::java::security::interfaces::XECKey, public ::java::security::PrivateKey {
	$interface(XECPrivateKey, $NO_CLASS_INIT, ::java::security::interfaces::XECKey, ::java::security::PrivateKey)
public:
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual ::java::util::Optional* getScalar() {return nullptr;}
	virtual int32_t hashCode() override;
	virtual $String* toString() override;
};

		} // interfaces
	} // security
} // java

#endif // _java_security_interfaces_XECPrivateKey_h_