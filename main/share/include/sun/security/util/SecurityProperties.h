#ifndef _sun_security_util_SecurityProperties_h_
#define _sun_security_util_SecurityProperties_h_
//$ class sun.security.util.SecurityProperties
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("INCLUDE_JAR_NAME_IN_EXCEPTIONS")
#undef INCLUDE_JAR_NAME_IN_EXCEPTIONS

namespace sun {
	namespace security {
		namespace util {

class $import SecurityProperties : public ::java::lang::Object {
	$class(SecurityProperties, 0, ::java::lang::Object)
public:
	SecurityProperties();
	void init$();
	static $String* getOverridableProperty($String* propName);
	static bool includedInExceptions($String* refName);
	static $String* lambda$privilegedGetOverridable$0($String* propName);
	static $String* privilegedGetOverridable($String* propName);
	static bool INCLUDE_JAR_NAME_IN_EXCEPTIONS;
};

		} // util
	} // security
} // sun

#pragma pop_macro("INCLUDE_JAR_NAME_IN_EXCEPTIONS")

#endif // _sun_security_util_SecurityProperties_h_