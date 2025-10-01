#ifndef _java_util_regex_Matcher$1MatchResultIterator_h_
#define _java_util_regex_Matcher$1MatchResultIterator_h_
//$ class java.util.regex.Matcher$1MatchResultIterator
//$ extends java.util.Iterator

#include <java/util/Iterator.h>

namespace java {
	namespace util {
		namespace function {
			class Consumer;
		}
	}
}
namespace java {
	namespace util {
		namespace regex {
			class Matcher;
		}
	}
}

namespace java {
	namespace util {
		namespace regex {

class Matcher$1MatchResultIterator : public ::java::util::Iterator {
	$class(Matcher$1MatchResultIterator, $NO_CLASS_INIT, ::java::util::Iterator)
public:
	Matcher$1MatchResultIterator();
	void init$(::java::util::regex::Matcher* this$0);
	virtual void forEachRemaining(::java::util::function::Consumer* action) override;
	virtual bool hasNext() override;
	virtual $Object* next() override;
	::java::util::regex::Matcher* this$0 = nullptr;
	int32_t state = 0;
	int32_t expectedCount = 0;
	$String* textAsString = nullptr;
};

		} // regex
	} // util
} // java

#endif // _java_util_regex_Matcher$1MatchResultIterator_h_