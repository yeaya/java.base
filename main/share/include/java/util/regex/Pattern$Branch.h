#ifndef _java_util_regex_Pattern$Branch_h_
#define _java_util_regex_Pattern$Branch_h_
//$ class java.util.regex.Pattern$Branch
//$ extends java.util.regex.Pattern$Node

#include <java/lang/Array.h>
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
			class Pattern$TreeInfo;
		}
	}
}

namespace java {
	namespace util {
		namespace regex {

class $import Pattern$Branch : public ::java::util::regex::Pattern$Node {
	$class(Pattern$Branch, $NO_CLASS_INIT, ::java::util::regex::Pattern$Node)
public:
	Pattern$Branch();
	void init$(::java::util::regex::Pattern$Node* first, ::java::util::regex::Pattern$Node* second, ::java::util::regex::Pattern$Node* branchConn);
	void add(::java::util::regex::Pattern$Node* node);
	virtual bool match(::java::util::regex::Matcher* matcher, int32_t i, ::java::lang::CharSequence* seq) override;
	virtual bool study(::java::util::regex::Pattern$TreeInfo* info) override;
	$Array<::java::util::regex::Pattern$Node>* atoms = nullptr;
	int32_t size = 0;
	::java::util::regex::Pattern$Node* conn = nullptr;
};

		} // regex
	} // util
} // java

#endif // _java_util_regex_Pattern$Branch_h_