#ifndef _java_util_regex_Pattern$BnM_h_
#define _java_util_regex_Pattern$BnM_h_
//$ class java.util.regex.Pattern$BnM
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

class $export Pattern$BnM : public ::java::util::regex::Pattern$Node {
	$class(Pattern$BnM, $NO_CLASS_INIT, ::java::util::regex::Pattern$Node)
public:
	Pattern$BnM();
	void init$($ints* src, $ints* lastOcc, $ints* optoSft, ::java::util::regex::Pattern$Node* next);
	virtual bool match(::java::util::regex::Matcher* matcher, int32_t i, ::java::lang::CharSequence* seq) override;
	static ::java::util::regex::Pattern$Node* optimize(::java::util::regex::Pattern$Node* node);
	virtual bool study(::java::util::regex::Pattern$TreeInfo* info) override;
	$ints* buffer = nullptr;
	$ints* lastOcc = nullptr;
	$ints* optoSft = nullptr;
};

		} // regex
	} // util
} // java

#endif // _java_util_regex_Pattern$BnM_h_