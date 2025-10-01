#ifndef _java_io_FilePermission$1_h_
#define _java_io_FilePermission$1_h_
//$ class java.io.FilePermission$1
//$ extends jdk.internal.access.JavaIOFilePermissionAccess

#include <jdk/internal/access/JavaIOFilePermissionAccess.h>

namespace java {
	namespace io {
		class FilePermission;
	}
}

namespace java {
	namespace io {

class FilePermission$1 : public ::jdk::internal::access::JavaIOFilePermissionAccess {
	$class(FilePermission$1, $NO_CLASS_INIT, ::jdk::internal::access::JavaIOFilePermissionAccess)
public:
	FilePermission$1();
	void init$();
	virtual ::java::io::FilePermission* newPermPlusAltPath(::java::io::FilePermission* input) override;
	virtual ::java::io::FilePermission* newPermUsingAltPath(::java::io::FilePermission* input) override;
};

	} // io
} // java

#endif // _java_io_FilePermission$1_h_