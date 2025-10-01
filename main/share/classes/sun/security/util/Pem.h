#ifndef _sun_security_util_Pem_h_
#define _sun_security_util_Pem_h_
//$ class sun.security.util.Pem
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace sun {
	namespace security {
		namespace util {

class $export Pem : public ::java::lang::Object {
	$class(Pem, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Pem();
	void init$();
	static $bytes* decode($String* input);
};

		} // util
	} // security
} // sun

#endif // _sun_security_util_Pem_h_