#ifndef _java_util_regex_Pattern$LookBehindEndNode_h_
#define _java_util_regex_Pattern$LookBehindEndNode_h_
//$ class java.util.regex.Pattern$LookBehindEndNode
//$ extends java.util.regex.Pattern$Node

#include <java/util/regex/Pattern$Node.h>

#pragma push_macro("INSTANCE")
#undef INSTANCE

namespace java {
	namespace lang {
		class CharSequence;
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

class $export Pattern$LookBehindEndNode : public ::java::util::regex::Pattern$Node {
	$class(Pattern$LookBehindEndNode, 0, ::java::util::regex::Pattern$Node)
public:
	Pattern$LookBehindEndNode();
	void init$();
	virtual bool match(::java::util::regex::Matcher* matcher, int32_t i, ::java::lang::CharSequence* seq) override;
	static ::java::util::regex::Pattern$LookBehindEndNode* INSTANCE;
};

		} // regex
	} // util
} // java

#pragma pop_macro("INSTANCE")

#endif // _java_util_regex_Pattern$LookBehindEndNode_h_