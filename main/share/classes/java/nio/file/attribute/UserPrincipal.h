#ifndef _java_nio_file_attribute_UserPrincipal_h_
#define _java_nio_file_attribute_UserPrincipal_h_
//$ interface java.nio.file.attribute.UserPrincipal
//$ extends java.security.Principal

#include <java/security/Principal.h>

namespace java {
	namespace nio {
		namespace file {
			namespace attribute {

class $export UserPrincipal : public ::java::security::Principal {
	$interface(UserPrincipal, $NO_CLASS_INIT, ::java::security::Principal)
};

			} // attribute
		} // file
	} // nio
} // java

#endif // _java_nio_file_attribute_UserPrincipal_h_