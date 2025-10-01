#ifndef _java_util_regex_PrintPattern_h_
#define _java_util_regex_PrintPattern_h_
//$ class java.util.regex.PrintPattern
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace util {
		class HashMap;
	}
}
namespace java {
	namespace util {
		namespace regex {
			class Pattern$Node;
		}
	}
}

namespace java {
	namespace util {
		namespace regex {

class $import PrintPattern : public ::java::lang::Object {
	$class(PrintPattern, 0, ::java::lang::Object)
public:
	PrintPattern();
	void init$();
	static void main($StringArray* args);
	static void print(::java::util::regex::Pattern$Node* node, $String* text, int32_t depth);
	static void print($String* s, int32_t depth);
	using ::java::lang::Object::toString;
	static $String* toString(::java::util::regex::Pattern$Node* node);
	static $String* toStringCP(int32_t cp);
	static $String* toStringCPS($ints* cps);
	static $String* toStringCtype(int32_t type);
	static $String* toStringRange(int32_t min, int32_t max);
	static void walk(::java::util::regex::Pattern$Node* node, int32_t depth);
	static ::java::util::HashMap* ids;
	static ::java::util::HashMap* pmap;
};

		} // regex
	} // util
} // java

#endif // _java_util_regex_PrintPattern_h_