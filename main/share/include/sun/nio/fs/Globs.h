#ifndef _sun_nio_fs_Globs_h_
#define _sun_nio_fs_Globs_h_
//$ class sun.nio.fs.Globs
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("EOL")
#undef EOL

namespace sun {
	namespace nio {
		namespace fs {

class $import Globs : public ::java::lang::Object {
	$class(Globs, 0, ::java::lang::Object)
public:
	Globs();
	void init$();
	static bool isGlobMeta(char16_t c);
	static bool isRegexMeta(char16_t c);
	static char16_t next($String* glob, int32_t i);
	static $String* toRegexPattern($String* globPattern, bool isDos);
	static $String* toUnixRegexPattern($String* globPattern);
	static $String* toWindowsRegexPattern($String* globPattern);
	static $String* regexMetaChars;
	static $String* globMetaChars;
	static char16_t EOL;
};

		} // fs
	} // nio
} // sun

#pragma pop_macro("EOL")

#endif // _sun_nio_fs_Globs_h_