#ifndef _java_util_regex_Pattern$CharPredicate_h_
#define _java_util_regex_Pattern$CharPredicate_h_
//$ interface java.util.regex.Pattern$CharPredicate
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		namespace regex {

class $export Pattern$CharPredicate : public ::java::lang::Object {
	$interface(Pattern$CharPredicate, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::java::util::regex::Pattern$CharPredicate* and$(::java::util::regex::Pattern$CharPredicate* p);
	virtual bool is(int32_t ch) {return false;}
	bool lambda$and$0(::java::util::regex::Pattern$CharPredicate* p, int32_t ch);
	bool lambda$negate$3(int32_t ch);
	bool lambda$union$1(::java::util::regex::Pattern$CharPredicate* p, int32_t ch);
	bool lambda$union$2(::java::util::regex::Pattern$CharPredicate* p1, ::java::util::regex::Pattern$CharPredicate* p2, int32_t ch);
	virtual ::java::util::regex::Pattern$CharPredicate* negate();
	virtual ::java::util::regex::Pattern$CharPredicate* union$(::java::util::regex::Pattern$CharPredicate* p);
	virtual ::java::util::regex::Pattern$CharPredicate* union$(::java::util::regex::Pattern$CharPredicate* p1, ::java::util::regex::Pattern$CharPredicate* p2);
};

		} // regex
	} // util
} // java

#endif // _java_util_regex_Pattern$CharPredicate_h_