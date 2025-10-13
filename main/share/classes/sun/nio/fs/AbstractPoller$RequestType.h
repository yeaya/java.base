#ifndef _sun_nio_fs_AbstractPoller$RequestType_h_
#define _sun_nio_fs_AbstractPoller$RequestType_h_
//$ class sun.nio.fs.AbstractPoller$RequestType
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("CANCEL")
#undef CANCEL
#pragma push_macro("CLOSE")
#undef CLOSE
#pragma push_macro("REGISTER")
#undef REGISTER

namespace sun {
	namespace nio {
		namespace fs {

class AbstractPoller$RequestType : public ::java::lang::Enum {
	$class(AbstractPoller$RequestType, 0, ::java::lang::Enum)
public:
	AbstractPoller$RequestType();
	static $Array<::sun::nio::fs::AbstractPoller$RequestType>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::sun::nio::fs::AbstractPoller$RequestType* valueOf($String* name);
	static $Array<::sun::nio::fs::AbstractPoller$RequestType>* values();
	static ::sun::nio::fs::AbstractPoller$RequestType* REGISTER;
	static ::sun::nio::fs::AbstractPoller$RequestType* CANCEL;
	static ::sun::nio::fs::AbstractPoller$RequestType* CLOSE;
	static $Array<::sun::nio::fs::AbstractPoller$RequestType>* $VALUES;
};

		} // fs
	} // nio
} // sun

#pragma pop_macro("CANCEL")
#pragma pop_macro("CLOSE")
#pragma pop_macro("REGISTER")

#endif // _sun_nio_fs_AbstractPoller$RequestType_h_