#ifndef _java_util_regex_Pattern$Ques_h_
#define _java_util_regex_Pattern$Ques_h_
//$ class java.util.regex.Pattern$Ques
//$ extends java.util.regex.Pattern$Node

#include <java/util/regex/Pattern$Node.h>

namespace java {
	namespace lang {
		class CharSequence;
	}
}
namespace java {
	namespace util {
		namespace regex {
			class Matcher;
			class Pattern$Qtype;
			class Pattern$TreeInfo;
		}
	}
}

namespace java {
	namespace util {
		namespace regex {

class $export Pattern$Ques : public ::java::util::regex::Pattern$Node {
	$class(Pattern$Ques, $NO_CLASS_INIT, ::java::util::regex::Pattern$Node)
public:
	Pattern$Ques();
	void init$(::java::util::regex::Pattern$Node* node, ::java::util::regex::Pattern$Qtype* type);
	virtual bool match(::java::util::regex::Matcher* matcher, int32_t i, ::java::lang::CharSequence* seq) override;
	virtual bool study(::java::util::regex::Pattern$TreeInfo* info) override;
	::java::util::regex::Pattern$Node* atom = nullptr;
	::java::util::regex::Pattern$Qtype* type = nullptr;
};

		} // regex
	} // util
} // java

#endif // _java_util_regex_Pattern$Ques_h_