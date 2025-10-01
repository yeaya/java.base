#ifndef _java_util_regex_MatchResult_h_
#define _java_util_regex_MatchResult_h_
//$ interface java.util.regex.MatchResult
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		namespace regex {

class $export MatchResult : public ::java::lang::Object {
	$interface(MatchResult, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual int32_t end() {return 0;}
	virtual int32_t end(int32_t group) {return 0;}
	virtual $String* group() {return nullptr;}
	virtual $String* group(int32_t group) {return nullptr;}
	virtual int32_t groupCount() {return 0;}
	virtual int32_t start() {return 0;}
	virtual int32_t start(int32_t group) {return 0;}
};

		} // regex
	} // util
} // java

#endif // _java_util_regex_MatchResult_h_