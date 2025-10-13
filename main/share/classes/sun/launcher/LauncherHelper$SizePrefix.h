#ifndef _sun_launcher_LauncherHelper$SizePrefix_h_
#define _sun_launcher_LauncherHelper$SizePrefix_h_
//$ class sun.launcher.LauncherHelper$SizePrefix
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("GIGA")
#undef GIGA
#pragma push_macro("KILO")
#undef KILO
#pragma push_macro("MEGA")
#undef MEGA
#pragma push_macro("TERA")
#undef TERA

namespace sun {
	namespace launcher {

class LauncherHelper$SizePrefix : public ::java::lang::Enum {
	$class(LauncherHelper$SizePrefix, 0, ::java::lang::Enum)
public:
	LauncherHelper$SizePrefix();
	static $Array<::sun::launcher::LauncherHelper$SizePrefix>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal, int64_t size, $String* abbrev);
	static $String* scale(int64_t v, ::sun::launcher::LauncherHelper$SizePrefix* prefix);
	static $String* scaleValue(int64_t v);
	static ::sun::launcher::LauncherHelper$SizePrefix* valueOf($String* name);
	static $Array<::sun::launcher::LauncherHelper$SizePrefix>* values();
	static ::sun::launcher::LauncherHelper$SizePrefix* KILO;
	static ::sun::launcher::LauncherHelper$SizePrefix* MEGA;
	static ::sun::launcher::LauncherHelper$SizePrefix* GIGA;
	static ::sun::launcher::LauncherHelper$SizePrefix* TERA;
	static $Array<::sun::launcher::LauncherHelper$SizePrefix>* $VALUES;
	int64_t size = 0;
	$String* abbrev = nullptr;
};

	} // launcher
} // sun

#pragma pop_macro("GIGA")
#pragma pop_macro("KILO")
#pragma pop_macro("MEGA")
#pragma pop_macro("TERA")

#endif // _sun_launcher_LauncherHelper$SizePrefix_h_