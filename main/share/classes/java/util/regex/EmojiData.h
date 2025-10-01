#ifndef _java_util_regex_EmojiData_h_
#define _java_util_regex_EmojiData_h_
//$ class java.util.regex.EmojiData
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		namespace regex {

class EmojiData : public ::java::lang::Object {
	$class(EmojiData, $NO_CLASS_INIT, ::java::lang::Object)
public:
	EmojiData();
	void init$();
	static bool isExtendedPictographic(int32_t cp);
	static bool isHigh(int32_t cp);
};

		} // regex
	} // util
} // java

#endif // _java_util_regex_EmojiData_h_