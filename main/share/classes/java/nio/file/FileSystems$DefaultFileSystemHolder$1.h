#ifndef _java_nio_file_FileSystems$DefaultFileSystemHolder$1_h_
#define _java_nio_file_FileSystems$DefaultFileSystemHolder$1_h_
//$ class java.nio.file.FileSystems$DefaultFileSystemHolder$1
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace java {
	namespace nio {
		namespace file {

class FileSystems$DefaultFileSystemHolder$1 : public ::java::security::PrivilegedAction {
	$class(FileSystems$DefaultFileSystemHolder$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	FileSystems$DefaultFileSystemHolder$1();
	void init$();
	virtual $Object* run() override;
};

		} // file
	} // nio
} // java

#endif // _java_nio_file_FileSystems$DefaultFileSystemHolder$1_h_