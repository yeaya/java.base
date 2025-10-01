#ifndef _sun_nio_fs_ExtendedOptions_h_
#define _sun_nio_fs_ExtendedOptions_h_
//$ class sun.nio.fs.ExtendedOptions
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("INTERRUPTIBLE")
#undef INTERRUPTIBLE
#pragma push_macro("NOSHARE_DELETE")
#undef NOSHARE_DELETE
#pragma push_macro("FILE_TREE")
#undef FILE_TREE
#pragma push_macro("SENSITIVITY_MEDIUM")
#undef SENSITIVITY_MEDIUM
#pragma push_macro("NOSHARE_WRITE")
#undef NOSHARE_WRITE
#pragma push_macro("SENSITIVITY_HIGH")
#undef SENSITIVITY_HIGH
#pragma push_macro("NOSHARE_READ")
#undef NOSHARE_READ
#pragma push_macro("SENSITIVITY_LOW")
#undef SENSITIVITY_LOW
#pragma push_macro("DIRECT")
#undef DIRECT

namespace java {
	namespace util {
		class Map;
	}
}
namespace sun {
	namespace nio {
		namespace fs {
			class ExtendedOptions$InternalOption;
		}
	}
}

namespace sun {
	namespace nio {
		namespace fs {

class $import ExtendedOptions : public ::java::lang::Object {
	$class(ExtendedOptions, 0, ::java::lang::Object)
public:
	ExtendedOptions();
	void init$();
	static ::java::util::Map* internalToExternal;
	static ::sun::nio::fs::ExtendedOptions$InternalOption* INTERRUPTIBLE;
	static ::sun::nio::fs::ExtendedOptions$InternalOption* NOSHARE_READ;
	static ::sun::nio::fs::ExtendedOptions$InternalOption* NOSHARE_WRITE;
	static ::sun::nio::fs::ExtendedOptions$InternalOption* NOSHARE_DELETE;
	static ::sun::nio::fs::ExtendedOptions$InternalOption* FILE_TREE;
	static ::sun::nio::fs::ExtendedOptions$InternalOption* DIRECT;
	static ::sun::nio::fs::ExtendedOptions$InternalOption* SENSITIVITY_HIGH;
	static ::sun::nio::fs::ExtendedOptions$InternalOption* SENSITIVITY_MEDIUM;
	static ::sun::nio::fs::ExtendedOptions$InternalOption* SENSITIVITY_LOW;
};

		} // fs
	} // nio
} // sun

#pragma pop_macro("INTERRUPTIBLE")
#pragma pop_macro("NOSHARE_DELETE")
#pragma pop_macro("FILE_TREE")
#pragma pop_macro("SENSITIVITY_MEDIUM")
#pragma pop_macro("NOSHARE_WRITE")
#pragma pop_macro("SENSITIVITY_HIGH")
#pragma pop_macro("NOSHARE_READ")
#pragma pop_macro("SENSITIVITY_LOW")
#pragma pop_macro("DIRECT")

#endif // _sun_nio_fs_ExtendedOptions_h_