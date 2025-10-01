#ifndef _java_nio_file_Files$FileTypeDetectors$2_h_
#define _java_nio_file_Files$FileTypeDetectors$2_h_
//$ class java.nio.file.Files$FileTypeDetectors$2
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace java {
	namespace nio {
		namespace file {

class Files$FileTypeDetectors$2 : public ::java::security::PrivilegedAction {
	$class(Files$FileTypeDetectors$2, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	Files$FileTypeDetectors$2();
	void init$();
	virtual $Object* run() override;
};

		} // file
	} // nio
} // java

#endif // _java_nio_file_Files$FileTypeDetectors$2_h_