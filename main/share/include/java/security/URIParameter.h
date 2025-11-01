#ifndef _java_security_URIParameter_h_
#define _java_security_URIParameter_h_
//$ class java.security.URIParameter
//$ extends java.security.Policy$Parameters
//$ implements javax.security.auth.login.Configuration$Parameters

#include <java/security/Policy$Parameters.h>
#include <javax/security/auth/login/Configuration$Parameters.h>

namespace java {
	namespace net {
		class URI;
	}
}

namespace java {
	namespace security {

class $import URIParameter : public ::java::security::Policy$Parameters, public ::javax::security::auth::login::Configuration$Parameters {
	$class(URIParameter, $NO_CLASS_INIT, ::java::security::Policy$Parameters, ::javax::security::auth::login::Configuration$Parameters)
public:
	URIParameter();
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::java::net::URI* uri);
	virtual ::java::net::URI* getURI();
	virtual $String* toString() override;
	::java::net::URI* uri = nullptr;
};

	} // security
} // java

#endif // _java_security_URIParameter_h_