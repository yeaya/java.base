#ifndef _sun_security_provider_AbstractDrbg$NonceProvider_h_
#define _sun_security_provider_AbstractDrbg$NonceProvider_h_
//$ class sun.security.provider.AbstractDrbg$NonceProvider
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace sun {
	namespace security {
		namespace provider {

class AbstractDrbg$NonceProvider : public ::java::lang::Object {
	$class(AbstractDrbg$NonceProvider, 0, ::java::lang::Object)
public:
	AbstractDrbg$NonceProvider();
	void init$();
	static $bytes* next();
	static $bytes* block;
};

		} // provider
	} // security
} // sun

#endif // _sun_security_provider_AbstractDrbg$NonceProvider_h_