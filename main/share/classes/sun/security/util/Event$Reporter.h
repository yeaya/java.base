#ifndef _sun_security_util_Event$Reporter_h_
#define _sun_security_util_Event$Reporter_h_
//$ interface sun.security.util.Event$Reporter
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace sun {
	namespace security {
		namespace util {

class $export Event$Reporter : public ::java::lang::Object {
	$interface(Event$Reporter, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void handle($String* type, $ObjectArray* args) {}
};

		} // util
	} // security
} // sun

#endif // _sun_security_util_Event$Reporter_h_