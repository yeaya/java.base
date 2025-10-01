#ifndef _java_util_regex_Pattern$1MatcherIterator_h_
#define _java_util_regex_Pattern$1MatcherIterator_h_
//$ class java.util.regex.Pattern$1MatcherIterator
//$ extends java.util.Iterator

#include <java/util/Iterator.h>

namespace java {
	namespace lang {
		class CharSequence;
	}
}
namespace java {
	namespace util {
		namespace regex {
			class Matcher;
			class Pattern;
		}
	}
}

namespace java {
	namespace util {
		namespace regex {

class Pattern$1MatcherIterator : public ::java::util::Iterator {
	$class(Pattern$1MatcherIterator, $NO_CLASS_INIT, ::java::util::Iterator)
public:
	Pattern$1MatcherIterator();
	void init$(::java::util::regex::Pattern* this$0, ::java::lang::CharSequence* val$input);
	virtual bool hasNext() override;
	virtual $Object* next() override;
	::java::util::regex::Pattern* this$0 = nullptr;
	::java::lang::CharSequence* val$input = nullptr;
	::java::util::regex::Matcher* matcher = nullptr;
	int32_t current = 0;
	$String* nextElement = nullptr;
	int32_t emptyElementCount = 0;
};

		} // regex
	} // util
} // java

#endif // _java_util_regex_Pattern$1MatcherIterator_h_