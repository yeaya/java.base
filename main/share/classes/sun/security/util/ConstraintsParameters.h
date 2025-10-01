#ifndef _sun_security_util_ConstraintsParameters_h_
#define _sun_security_util_ConstraintsParameters_h_
//$ interface sun.security.util.ConstraintsParameters
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		class Date;
		class Set;
	}
}

namespace sun {
	namespace security {
		namespace util {

class $export ConstraintsParameters : public ::java::lang::Object {
	$interface(ConstraintsParameters, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual bool anchorIsJdkCA() {return false;}
	virtual $String* extendedExceptionMsg() {return nullptr;}
	virtual ::java::util::Date* getDate() {return nullptr;}
	virtual ::java::util::Set* getKeys() {return nullptr;}
	virtual $String* getVariant() {return nullptr;}
};

		} // util
	} // security
} // sun

#endif // _sun_security_util_ConstraintsParameters_h_