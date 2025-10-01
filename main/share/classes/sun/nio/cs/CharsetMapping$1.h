#ifndef _sun_nio_cs_CharsetMapping$1_h_
#define _sun_nio_cs_CharsetMapping$1_h_
//$ class sun.nio.cs.CharsetMapping$1
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace java {
	namespace io {
		class InputStream;
	}
}

namespace sun {
	namespace nio {
		namespace cs {

class CharsetMapping$1 : public ::java::security::PrivilegedAction {
	$class(CharsetMapping$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	CharsetMapping$1();
	void init$(::java::io::InputStream* val$is);
	virtual $Object* run() override;
	::java::io::InputStream* val$is = nullptr;
};

		} // cs
	} // nio
} // sun

#endif // _sun_nio_cs_CharsetMapping$1_h_