#ifndef _sun_nio_fs_WindowsPathType_h_
#define _sun_nio_fs_WindowsPathType_h_
//$ class sun.nio.fs.WindowsPathType
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("ABSOLUTE")
#undef ABSOLUTE
#pragma push_macro("DIRECTORY_RELATIVE")
#undef DIRECTORY_RELATIVE
#pragma push_macro("DRIVE_RELATIVE")
#undef DRIVE_RELATIVE
#pragma push_macro("RELATIVE")
#undef RELATIVE
#pragma push_macro("UNC")
#undef UNC

namespace sun {
	namespace nio {
		namespace fs {

class WindowsPathType : public ::java::lang::Enum {
	$class(WindowsPathType, 0, ::java::lang::Enum)
public:
	WindowsPathType();
	static $Array<::sun::nio::fs::WindowsPathType>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::sun::nio::fs::WindowsPathType* valueOf($String* name);
	static $Array<::sun::nio::fs::WindowsPathType>* values();
	static ::sun::nio::fs::WindowsPathType* ABSOLUTE;
	static ::sun::nio::fs::WindowsPathType* UNC;
	static ::sun::nio::fs::WindowsPathType* RELATIVE;
	static ::sun::nio::fs::WindowsPathType* DIRECTORY_RELATIVE;
	static ::sun::nio::fs::WindowsPathType* DRIVE_RELATIVE;
	static $Array<::sun::nio::fs::WindowsPathType>* $VALUES;
};

		} // fs
	} // nio
} // sun

#pragma pop_macro("ABSOLUTE")
#pragma pop_macro("DIRECTORY_RELATIVE")
#pragma pop_macro("DRIVE_RELATIVE")
#pragma pop_macro("RELATIVE")
#pragma pop_macro("UNC")

#endif // _sun_nio_fs_WindowsPathType_h_