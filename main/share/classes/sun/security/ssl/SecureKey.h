#ifndef _sun_security_ssl_SecureKey_h_
#define _sun_security_ssl_SecureKey_h_
//$ class sun.security.ssl.SecureKey
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace sun {
	namespace security {
		namespace ssl {

class SecureKey : public ::java::lang::Object {
	$class(SecureKey, 0, ::java::lang::Object)
public:
	SecureKey();
	void init$(Object$* key);
	virtual bool equals(Object$* o) override;
	virtual $Object* getAppKey();
	static $Object* getCurrentSecurityContext();
	virtual $Object* getSecurityContext();
	virtual int32_t hashCode() override;
	static $Object* nullObject;
	$Object* appKey = nullptr;
	$Object* securityCtx = nullptr;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_SecureKey_h_