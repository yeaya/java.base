#ifndef _java_security_PrivateKey_h_
#define _java_security_PrivateKey_h_
//$ interface java.security.PrivateKey
//$ extends java.security.Key,javax.security.auth.Destroyable

#include <java/security/Key.h>
#include <javax/security/auth/Destroyable.h>

namespace java {
	namespace security {

class $import PrivateKey : public ::java::security::Key, public ::javax::security::auth::Destroyable {
	$interface(PrivateKey, $NO_CLASS_INIT, ::java::security::Key, ::javax::security::auth::Destroyable)
public:
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	virtual $String* toString() override;
	static const int64_t serialVersionUID = (int64_t)0x53BD3B559A12C6D6;
};

	} // security
} // java

#endif // _java_security_PrivateKey_h_