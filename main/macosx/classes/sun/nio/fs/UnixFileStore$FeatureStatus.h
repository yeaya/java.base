#ifndef _sun_nio_fs_UnixFileStore$FeatureStatus_h_
#define _sun_nio_fs_UnixFileStore$FeatureStatus_h_
//$ class sun.nio.fs.UnixFileStore$FeatureStatus
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("NOT_PRESENT")
#undef NOT_PRESENT
#pragma push_macro("PRESENT")
#undef PRESENT
#pragma push_macro("UNKNOWN")
#undef UNKNOWN

namespace sun {
	namespace nio {
		namespace fs {

class UnixFileStore$FeatureStatus : public ::java::lang::Enum {
	$class(UnixFileStore$FeatureStatus, 0, ::java::lang::Enum)
public:
	UnixFileStore$FeatureStatus();
	static $Array<::sun::nio::fs::UnixFileStore$FeatureStatus>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::sun::nio::fs::UnixFileStore$FeatureStatus* valueOf($String* name);
	static $Array<::sun::nio::fs::UnixFileStore$FeatureStatus>* values();
	static ::sun::nio::fs::UnixFileStore$FeatureStatus* PRESENT;
	static ::sun::nio::fs::UnixFileStore$FeatureStatus* NOT_PRESENT;
	static ::sun::nio::fs::UnixFileStore$FeatureStatus* UNKNOWN;
	static $Array<::sun::nio::fs::UnixFileStore$FeatureStatus>* $VALUES;
};

		} // fs
	} // nio
} // sun

#pragma pop_macro("NOT_PRESENT")
#pragma pop_macro("PRESENT")
#pragma pop_macro("UNKNOWN")

#endif // _sun_nio_fs_UnixFileStore$FeatureStatus_h_