#ifndef _sun_security_util_Length_h_
#define _sun_security_util_Length_h_
//$ interface sun.security.util.Length
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace sun {
	namespace security {
		namespace util {

class $import Length : public ::java::lang::Object {
	$interface(Length, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual int32_t length() {return 0;}
};

		} // util
	} // security
} // sun

#endif // _sun_security_util_Length_h_