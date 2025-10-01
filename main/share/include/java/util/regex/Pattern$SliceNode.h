#ifndef _java_util_regex_Pattern$SliceNode_h_
#define _java_util_regex_Pattern$SliceNode_h_
//$ class java.util.regex.Pattern$SliceNode
//$ extends java.util.regex.Pattern$Node

#include <java/lang/Array.h>
#include <java/util/regex/Pattern$Node.h>

namespace java {
	namespace util {
		namespace regex {
			class Pattern$TreeInfo;
		}
	}
}

namespace java {
	namespace util {
		namespace regex {

class $import Pattern$SliceNode : public ::java::util::regex::Pattern$Node {
	$class(Pattern$SliceNode, $NO_CLASS_INIT, ::java::util::regex::Pattern$Node)
public:
	Pattern$SliceNode();
	void init$($ints* buf);
	virtual bool study(::java::util::regex::Pattern$TreeInfo* info) override;
	$ints* buffer = nullptr;
};

		} // regex
	} // util
} // java

#endif // _java_util_regex_Pattern$SliceNode_h_