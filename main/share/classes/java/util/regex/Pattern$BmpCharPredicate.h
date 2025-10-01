#ifndef _java_util_regex_Pattern$BmpCharPredicate_h_
#define _java_util_regex_Pattern$BmpCharPredicate_h_
//$ interface java.util.regex.Pattern$BmpCharPredicate
//$ extends java.util.regex.Pattern$CharPredicate

#include <java/lang/Array.h>
#include <java/util/regex/Pattern$CharPredicate.h>

namespace java {
	namespace util {
		namespace regex {

class $export Pattern$BmpCharPredicate : public ::java::util::regex::Pattern$CharPredicate {
	$interface(Pattern$BmpCharPredicate, $NO_CLASS_INIT, ::java::util::regex::Pattern$CharPredicate)
public:
	virtual ::java::util::regex::Pattern$CharPredicate* and$(::java::util::regex::Pattern$CharPredicate* p) override;
	bool lambda$and$0(::java::util::regex::Pattern$CharPredicate* p, int32_t ch);
	bool lambda$union$2(::java::util::regex::Pattern$CharPredicate* p, int32_t ch);
	static bool lambda$union$4($Array<::java::util::regex::Pattern$CharPredicate>* predicates, int32_t ch);
	using ::java::util::regex::Pattern$CharPredicate::union$;
	virtual ::java::util::regex::Pattern$CharPredicate* union$(::java::util::regex::Pattern$CharPredicate* p) override;
	static ::java::util::regex::Pattern$CharPredicate* union$($Array<::java::util::regex::Pattern$CharPredicate>* predicates);
};

		} // regex
	} // util
} // java

#endif // _java_util_regex_Pattern$BmpCharPredicate_h_