#ifndef _sun_nio_fs_UnixFileModeAttribute_h_
#define _sun_nio_fs_UnixFileModeAttribute_h_
//$ class sun.nio.fs.UnixFileModeAttribute
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("ALL_PERMISSIONS")
#undef ALL_PERMISSIONS
#pragma push_macro("ALL_READWRITE")
#undef ALL_READWRITE
#pragma push_macro("TEMPFILE_PERMISSIONS")
#undef TEMPFILE_PERMISSIONS

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
	namespace util {
		class Set;
	}
}

namespace sun {
	namespace nio {
		namespace fs {

class UnixFileModeAttribute : public ::java::lang::Object {
	$class(UnixFileModeAttribute, 0, ::java::lang::Object)
public:
	UnixFileModeAttribute();
	void init$();
	static int32_t toUnixMode(::java::util::Set* perms);
	static int32_t toUnixMode(int32_t defaultMode, $Array<::java::nio::file::attribute::FileAttribute>* attrs);
	static int32_t ALL_PERMISSIONS;
	static int32_t ALL_READWRITE;
	static int32_t TEMPFILE_PERMISSIONS;
};

		} // fs
	} // nio
} // sun

#pragma pop_macro("ALL_PERMISSIONS")
#pragma pop_macro("ALL_READWRITE")
#pragma pop_macro("TEMPFILE_PERMISSIONS")

#endif // _sun_nio_fs_UnixFileModeAttribute_h_