#ifndef _sun_nio_fs_WindowsFileSystem$LookupService$1_h_
#define _sun_nio_fs_WindowsFileSystem$LookupService$1_h_
//$ class sun.nio.fs.WindowsFileSystem$LookupService$1
//$ extends java.nio.file.attribute.UserPrincipalLookupService

#include <java/nio/file/attribute/UserPrincipalLookupService.h>

namespace java {
	namespace nio {
		namespace file {
			namespace attribute {
				class GroupPrincipal;
				class UserPrincipal;
			}
		}
	}
}

namespace sun {
	namespace nio {
		namespace fs {

class WindowsFileSystem$LookupService$1 : public ::java::nio::file::attribute::UserPrincipalLookupService {
	$class(WindowsFileSystem$LookupService$1, $NO_CLASS_INIT, ::java::nio::file::attribute::UserPrincipalLookupService)
public:
	WindowsFileSystem$LookupService$1();
	void init$();
	virtual ::java::nio::file::attribute::GroupPrincipal* lookupPrincipalByGroupName($String* group) override;
	virtual ::java::nio::file::attribute::UserPrincipal* lookupPrincipalByName($String* name) override;
};

		} // fs
	} // nio
} // sun

#endif // _sun_nio_fs_WindowsFileSystem$LookupService$1_h_