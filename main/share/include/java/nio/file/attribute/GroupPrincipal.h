#ifndef _java_nio_file_attribute_GroupPrincipal_h_
#define _java_nio_file_attribute_GroupPrincipal_h_
//$ interface java.nio.file.attribute.GroupPrincipal
//$ extends java.nio.file.attribute.UserPrincipal

#include <java/nio/file/attribute/UserPrincipal.h>

namespace java {
	namespace nio {
		namespace file {
			namespace attribute {

class $import GroupPrincipal : public ::java::nio::file::attribute::UserPrincipal {
	$interface(GroupPrincipal, $NO_CLASS_INIT, ::java::nio::file::attribute::UserPrincipal)
};

			} // attribute
		} // file
	} // nio
} // java

#endif // _java_nio_file_attribute_GroupPrincipal_h_