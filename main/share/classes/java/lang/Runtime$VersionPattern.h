#ifndef _java_lang_Runtime$VersionPattern_h_
#define _java_lang_Runtime$VersionPattern_h_
//$ class java.lang.Runtime$VersionPattern
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("VSTR_FORMAT")
#undef VSTR_FORMAT
#pragma push_macro("VSTR_PATTERN")
#undef VSTR_PATTERN
#pragma push_macro("OPT_GROUP")
#undef OPT_GROUP
#pragma push_macro("PRE")
#undef PRE
#pragma push_macro("OPT")
#undef OPT
#pragma push_macro("PLUS_GROUP")
#undef PLUS_GROUP
#pragma push_macro("VNUM_GROUP")
#undef VNUM_GROUP
#pragma push_macro("BUILD_GROUP")
#undef BUILD_GROUP
#pragma push_macro("BUILD")
#undef BUILD
#pragma push_macro("VNUM")
#undef VNUM
#pragma push_macro("PRE_GROUP")
#undef PRE_GROUP

namespace java {
	namespace util {
		namespace regex {
			class Pattern;
		}
	}
}

namespace java {
	namespace lang {

class Runtime$VersionPattern : public ::java::lang::Object {
	$class(Runtime$VersionPattern, 0, ::java::lang::Object)
public:
	Runtime$VersionPattern();
	void init$();
	static $String* VNUM;
	static $String* PRE;
	static $String* BUILD;
	static $String* OPT;
	static $String* VSTR_FORMAT;
	static ::java::util::regex::Pattern* VSTR_PATTERN;
	static $String* VNUM_GROUP;
	static $String* PRE_GROUP;
	static $String* PLUS_GROUP;
	static $String* BUILD_GROUP;
	static $String* OPT_GROUP;
};

	} // lang
} // java

#pragma pop_macro("VSTR_FORMAT")
#pragma pop_macro("VSTR_PATTERN")
#pragma pop_macro("OPT_GROUP")
#pragma pop_macro("PRE")
#pragma pop_macro("OPT")
#pragma pop_macro("PLUS_GROUP")
#pragma pop_macro("VNUM_GROUP")
#pragma pop_macro("BUILD_GROUP")
#pragma pop_macro("BUILD")
#pragma pop_macro("VNUM")
#pragma pop_macro("PRE_GROUP")

#endif // _java_lang_Runtime$VersionPattern_h_