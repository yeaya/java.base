#ifndef _java_security_interfaces_EdECPublicKey_h_
#define _java_security_interfaces_EdECPublicKey_h_
//$ interface java.security.interfaces.EdECPublicKey
//$ extends java.security.interfaces.EdECKey,java.security.PublicKey

#include <java/security/PublicKey.h>
#include <java/security/interfaces/EdECKey.h>

namespace java {
	namespace security {
		namespace spec {
			class EdECPoint;
		}
	}
}

namespace java {
	namespace security {
		namespace interfaces {

class $import EdECPublicKey : public ::java::security::interfaces::EdECKey, public ::java::security::PublicKey {
	$interface(EdECPublicKey, $NO_CLASS_INIT, ::java::security::interfaces::EdECKey, ::java::security::PublicKey)
public:
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual ::java::security::spec::EdECPoint* getPoint() {return nullptr;}
	virtual int32_t hashCode() override;
	virtual $String* toString() override;
};

		} // interfaces
	} // security
} // java

#endif // _java_security_interfaces_EdECPublicKey_h_