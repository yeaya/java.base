#ifndef _jdk_internal_jrtfs_JrtUtils_h_
#define _jdk_internal_jrtfs_JrtUtils_h_
//$ class jdk.internal.jrtfs.JrtUtils
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("EOL")
#undef EOL

namespace jdk {
	namespace internal {
		namespace jrtfs {

class JrtUtils : public ::java::lang::Object {
	$class(JrtUtils, 0, ::java::lang::Object)
public:
	JrtUtils();
	void init$();
	static bool isGlobMeta(char16_t c);
	static bool isRegexMeta(char16_t c);
	static char16_t next($String* glob, int32_t i);
	static $String* toRegexPattern($String* globPattern);
	static $String* regexMetaChars;
	static $String* globMetaChars;
	static const char16_t EOL = 0;
};

		} // jrtfs
	} // internal
} // jdk

#pragma pop_macro("EOL")

#endif // _jdk_internal_jrtfs_JrtUtils_h_