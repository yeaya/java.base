#include <java/util/regex/Pattern$TreeInfo.h>
#include <java/util/regex/Pattern.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace util {
		namespace regex {

void Pattern$TreeInfo::init$() {
	reset();
}

void Pattern$TreeInfo::reset() {
	this->minLength = 0;
	this->maxLength = 0;
	this->maxValid = true;
	this->deterministic = true;
}

Pattern$TreeInfo::Pattern$TreeInfo() {
}

$Class* Pattern$TreeInfo::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"minLength", "I", nullptr, 0, $field(Pattern$TreeInfo, minLength)},
		{"maxLength", "I", nullptr, 0, $field(Pattern$TreeInfo, maxLength)},
		{"maxValid", "Z", nullptr, 0, $field(Pattern$TreeInfo, maxValid)},
		{"deterministic", "Z", nullptr, 0, $field(Pattern$TreeInfo, deterministic)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(Pattern$TreeInfo, init$, void)},
		{"reset", "()V", nullptr, 0, $method(Pattern$TreeInfo, reset, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.regex.Pattern$TreeInfo", "java.util.regex.Pattern", "TreeInfo", $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.util.regex.Pattern$TreeInfo",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.regex.Pattern"
	};
	$loadClass(Pattern$TreeInfo, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Pattern$TreeInfo);
	});
	return class$;
}

$Class* Pattern$TreeInfo::class$ = nullptr;

		} // regex
	} // util
} // java