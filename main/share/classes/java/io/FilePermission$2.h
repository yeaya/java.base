#ifndef _java_io_FilePermission$2_h_
#define _java_io_FilePermission$2_h_
//$ class java.io.FilePermission$2
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace java {
	namespace io {
		class FilePermission;
	}
}

namespace java {
	namespace io {

class FilePermission$2 : public ::java::security::PrivilegedAction {
	$class(FilePermission$2, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	FilePermission$2();
	void init$(::java::io::FilePermission* this$0);
	virtual $Object* run() override;
	::java::io::FilePermission* this$0 = nullptr;
};

	} // io
} // java

#endif // _java_io_FilePermission$2_h_