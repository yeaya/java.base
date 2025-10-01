#include <java/util/regex/Pattern$TreeInfo.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/regex/Pattern.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Pattern = ::java::util::regex::Pattern;

namespace java {
	namespace util {
		namespace regex {

$FieldInfo _Pattern$TreeInfo_FieldInfo_[] = {
	{"minLength", "I", nullptr, 0, $field(Pattern$TreeInfo, minLength)},
	{"maxLength", "I", nullptr, 0, $field(Pattern$TreeInfo, maxLength)},
	{"maxValid", "Z", nullptr, 0, $field(Pattern$TreeInfo, maxValid)},
	{"deterministic", "Z", nullptr, 0, $field(Pattern$TreeInfo, deterministic)},
	{}
};

$MethodInfo _Pattern$TreeInfo_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Pattern$TreeInfo::*)()>(&Pattern$TreeInfo::init$))},
	{"reset", "()V", nullptr, 0, $method(static_cast<void(Pattern$TreeInfo::*)()>(&Pattern$TreeInfo::reset))},
	{}
};

$InnerClassInfo _Pattern$TreeInfo_InnerClassesInfo_[] = {
	{"java.util.regex.Pattern$TreeInfo", "java.util.regex.Pattern", "TreeInfo", $STATIC | $FINAL},
	{}
};

$ClassInfo _Pattern$TreeInfo_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.regex.Pattern$TreeInfo",
	"java.lang.Object",
	nullptr,
	_Pattern$TreeInfo_FieldInfo_,
	_Pattern$TreeInfo_MethodInfo_,
	nullptr,
	nullptr,
	_Pattern$TreeInfo_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.regex.Pattern"
};

$Object* allocate$Pattern$TreeInfo($Class* clazz) {
	return $of($alloc(Pattern$TreeInfo));
}

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
	$loadClass(Pattern$TreeInfo, name, initialize, &_Pattern$TreeInfo_ClassInfo_, allocate$Pattern$TreeInfo);
	return class$;
}

$Class* Pattern$TreeInfo::class$ = nullptr;

		} // regex
	} // util
} // java