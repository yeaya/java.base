#ifndef _java_io_SerializablePermission_h_
#define _java_io_SerializablePermission_h_
//$ class java.io.SerializablePermission
//$ extends java.security.BasicPermission

#include <java/security/BasicPermission.h>

namespace java {
	namespace io {

class $export SerializablePermission : public ::java::security::BasicPermission {
	$class(SerializablePermission, $NO_CLASS_INIT, ::java::security::BasicPermission)
public:
	SerializablePermission();
	void init$($String* name);
	void init$($String* name, $String* actions);
	static const int64_t serialVersionUID = (int64_t)0x767A4535D602EFDA;
	$String* actions = nullptr;
};

	} // io
} // java

#endif // _java_io_SerializablePermission_h_