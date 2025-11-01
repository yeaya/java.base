#ifndef _java_security_interfaces_ECPublicKey_h_
#define _java_security_interfaces_ECPublicKey_h_
//$ interface java.security.interfaces.ECPublicKey
//$ extends java.security.PublicKey,java.security.interfaces.ECKey

#include <java/security/PublicKey.h>
#include <java/security/interfaces/ECKey.h>

namespace java {
	namespace security {
		namespace spec {
			class ECPoint;
		}
	}
}

namespace java {
	namespace security {
		namespace interfaces {

class $import ECPublicKey : public ::java::security::PublicKey, public ::java::security::interfaces::ECKey {
	$interface(ECPublicKey, $NO_CLASS_INIT, ::java::security::PublicKey, ::java::security::interfaces::ECKey)
public:
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual ::java::security::spec::ECPoint* getW() {return nullptr;}
	virtual int32_t hashCode() override;
	virtual $String* toString() override;
	static const int64_t serialVersionUID = (int64_t)0xD1FECB679990CC46;
};

		} // interfaces
	} // security
} // java

#endif // _java_security_interfaces_ECPublicKey_h_