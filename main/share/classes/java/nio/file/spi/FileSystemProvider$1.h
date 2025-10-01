#ifndef _java_nio_file_spi_FileSystemProvider$1_h_
#define _java_nio_file_spi_FileSystemProvider$1_h_
//$ class java.nio.file.spi.FileSystemProvider$1
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace java {
	namespace nio {
		namespace file {
			namespace spi {

class FileSystemProvider$1 : public ::java::security::PrivilegedAction {
	$class(FileSystemProvider$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	FileSystemProvider$1();
	void init$();
	virtual $Object* run() override;
};

			} // spi
		} // file
	} // nio
} // java

#endif // _java_nio_file_spi_FileSystemProvider$1_h_