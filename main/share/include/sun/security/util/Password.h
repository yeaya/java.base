#ifndef _sun_security_util_Password_h_
#define _sun_security_util_Password_h_
//$ class sun.security.util.Password
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace io {
		class InputStream;
	}
}
namespace java {
	namespace nio {
		namespace charset {
			class CharsetEncoder;
		}
	}
}

namespace sun {
	namespace security {
		namespace util {

class $import Password : public ::java::lang::Object {
	$class(Password, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Password();
	void init$();
	static $bytes* convertToBytes($chars* pass);
	static $chars* readPassword(::java::io::InputStream* in);
	static $chars* readPassword(::java::io::InputStream* in, bool isEchoOn);
	static $volatile(::java::nio::charset::CharsetEncoder*) enc;
};

		} // util
	} // security
} // sun

#endif // _sun_security_util_Password_h_