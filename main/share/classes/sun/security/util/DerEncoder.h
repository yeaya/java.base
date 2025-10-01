#ifndef _sun_security_util_DerEncoder_h_
#define _sun_security_util_DerEncoder_h_
//$ interface sun.security.util.DerEncoder
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace io {
		class OutputStream;
	}
}

namespace sun {
	namespace security {
		namespace util {

class $export DerEncoder : public ::java::lang::Object {
	$interface(DerEncoder, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void derEncode(::java::io::OutputStream* out) {}
};

		} // util
	} // security
} // sun

#endif // _sun_security_util_DerEncoder_h_