#ifndef _sun_security_util_PropertyExpander_h_
#define _sun_security_util_PropertyExpander_h_
//$ class sun.security.util.PropertyExpander
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace sun {
	namespace security {
		namespace util {

class $import PropertyExpander : public ::java::lang::Object {
	$class(PropertyExpander, $NO_CLASS_INIT, ::java::lang::Object)
public:
	PropertyExpander();
	void init$();
	static $String* expand($String* value);
	static $String* expand($String* value, bool encodeURL);
};

		} // util
	} // security
} // sun

#endif // _sun_security_util_PropertyExpander_h_