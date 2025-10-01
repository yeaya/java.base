#ifndef _java_util_regex_Pattern$GroupCurly_h_
#define _java_util_regex_Pattern$GroupCurly_h_
//$ class java.util.regex.Pattern$GroupCurly
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

class $export Pattern$GroupCurly : public ::java::util::regex::Pattern$Node {
	$class(Pattern$GroupCurly, $NO_CLASS_INIT, ::java::util::regex::Pattern$Node)
public:
	Pattern$GroupCurly();
	void init$(::java::util::regex::Pattern$Node* node, int32_t cmin, int32_t cmax, ::java::util::regex::Pattern$Qtype* type, int32_t local, int32_t group, bool capture);
	virtual bool match(::java::util::regex::Matcher* matcher, int32_t i, ::java::lang::CharSequence* seq) override;
	bool match0(::java::util::regex::Matcher* matcher, int32_t i, int32_t j, ::java::lang::CharSequence* seq);
	bool match1(::java::util::regex::Matcher* matcher, int32_t i, int32_t j, ::java::lang::CharSequence* seq);
	bool match2(::java::util::regex::Matcher* matcher, int32_t i, int32_t j, ::java::lang::CharSequence* seq);
	virtual bool study(::java::util::regex::Pattern$TreeInfo* info) override;
	::java::util::regex::Pattern$Node* atom = nullptr;
	::java::util::regex::Pattern$Qtype* type = nullptr;
	int32_t cmin = 0;
	int32_t cmax = 0;
	int32_t localIndex = 0;
	int32_t groupIndex = 0;
	bool capture = false;
};

		} // regex
	} // util
} // java

#endif // _java_util_regex_Pattern$GroupCurly_h_