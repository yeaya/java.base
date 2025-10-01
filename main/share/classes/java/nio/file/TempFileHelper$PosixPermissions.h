#ifndef _java_nio_file_TempFileHelper$PosixPermissions_h_
#define _java_nio_file_TempFileHelper$PosixPermissions_h_
//$ class java.nio.file.TempFileHelper$PosixPermissions
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace nio {
		namespace file {
			namespace attribute {
				class FileAttribute;
			}
		}
	}
}

namespace java {
	namespace nio {
		namespace file {

class TempFileHelper$PosixPermissions : public ::java::lang::Object {
	$class(TempFileHelper$PosixPermissions, 0, ::java::lang::Object)
public:
	TempFileHelper$PosixPermissions();
	void init$();
	static ::java::nio::file::attribute::FileAttribute* filePermissions;
	static ::java::nio::file::attribute::FileAttribute* dirPermissions;
};

		} // file
	} // nio
} // java

#endif // _java_nio_file_TempFileHelper$PosixPermissions_h_