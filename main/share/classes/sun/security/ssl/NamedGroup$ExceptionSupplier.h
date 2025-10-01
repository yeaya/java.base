#ifndef _sun_security_ssl_NamedGroup$ExceptionSupplier_h_
#define _sun_security_ssl_NamedGroup$ExceptionSupplier_h_
//$ interface sun.security.ssl.NamedGroup$ExceptionSupplier
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace sun {
	namespace security {
		namespace ssl {

class NamedGroup$ExceptionSupplier : public ::java::lang::Object {
	$interface(NamedGroup$ExceptionSupplier, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void apply($String* s) {}
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_NamedGroup$ExceptionSupplier_h_