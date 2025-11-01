#ifndef _java_security_interfaces_EdECPrivateKey_h_
#define _java_security_interfaces_EdECPrivateKey_h_
//$ interface java.security.interfaces.EdECPrivateKey
//$ extends java.security.interfaces.EdECKey,java.security.PrivateKey

#include <java/security/PrivateKey.h>
#include <java/security/interfaces/EdECKey.h>

namespace java {
	namespace util {
		class Optional;
	}
}

namespace java {
	namespace security {
		namespace interfaces {

class $export EdECPrivateKey : public ::java::security::interfaces::EdECKey, public ::java::security::PrivateKey {
	$interface(EdECPrivateKey, $NO_CLASS_INIT, ::java::security::interfaces::EdECKey, ::java::security::PrivateKey)
public:
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual ::java::util::Optional* getBytes() {return nullptr;}
	virtual int32_t hashCode() override;
	virtual $String* toString() override;
};

		} // interfaces
	} // security
} // java

#endif // _java_security_interfaces_EdECPrivateKey_h_