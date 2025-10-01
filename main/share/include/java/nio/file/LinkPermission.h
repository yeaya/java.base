#ifndef _java_nio_file_LinkPermission_h_
#define _java_nio_file_LinkPermission_h_
//$ class java.nio.file.LinkPermission
//$ extends java.security.BasicPermission

#include <java/security/BasicPermission.h>

namespace java {
	namespace nio {
		namespace file {

class $import LinkPermission : public ::java::security::BasicPermission {
	$class(LinkPermission, $NO_CLASS_INIT, ::java::security::BasicPermission)
public:
	LinkPermission();
	void init$($String* name);
	void init$($String* name, $String* actions);
	void checkName($String* name);
	static const int64_t serialVersionUID = (int64_t)0xEBFECA402A80441C;
};

		} // file
	} // nio
} // java

#endif // _java_nio_file_LinkPermission_h_