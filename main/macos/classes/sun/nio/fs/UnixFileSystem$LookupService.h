#ifndef _sun_nio_fs_UnixFileSystem$LookupService_h_
#define _sun_nio_fs_UnixFileSystem$LookupService_h_
//$ class sun.nio.fs.UnixFileSystem$LookupService
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace nio {
		namespace file {
			namespace attribute {
				class UserPrincipalLookupService;
			}
		}
	}
}

namespace sun {
	namespace nio {
		namespace fs {

class UnixFileSystem$LookupService : public ::java::lang::Object {
	$class(UnixFileSystem$LookupService, 0, ::java::lang::Object)
public:
	UnixFileSystem$LookupService();
	void init$();
	static ::java::nio::file::attribute::UserPrincipalLookupService* instance;
};

		} // fs
	} // nio
} // sun

#endif // _sun_nio_fs_UnixFileSystem$LookupService_h_