#include <java/lang/Runtime$VersionPattern.h>

#include <java/lang/Runtime.h>
#include <java/util/regex/Pattern.h>
#include <jcpp.h>

#undef BUILD
#undef BUILD_GROUP
#undef OPT
#undef OPT_GROUP
#undef PLUS_GROUP
#undef PRE
#undef PRE_GROUP
#undef VNUM
#undef VNUM_GROUP
#undef VSTR_FORMAT
#undef VSTR_PATTERN

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runtime = ::java::lang::Runtime;
using $Pattern = ::java::util::regex::Pattern;

namespace java {
	namespace lang {

$FieldInfo _Runtime$VersionPattern_FieldInfo_[] = {
	{"VNUM", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Runtime$VersionPattern, VNUM)},
	{"PRE", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Runtime$VersionPattern, PRE)},
	{"BUILD", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Runtime$VersionPattern, BUILD)},
	{"OPT", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Runtime$VersionPattern, OPT)},
	{"VSTR_FORMAT", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Runtime$VersionPattern, VSTR_FORMAT)},
	{"VSTR_PATTERN", "Ljava/util/regex/Pattern;", nullptr, $STATIC | $FINAL, $staticField(Runtime$VersionPattern, VSTR_PATTERN)},
	{"VNUM_GROUP", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(Runtime$VersionPattern, VNUM_GROUP)},
	{"PRE_GROUP", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(Runtime$VersionPattern, PRE_GROUP)},
	{"PLUS_GROUP", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(Runtime$VersionPattern, PLUS_GROUP)},
	{"BUILD_GROUP", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(Runtime$VersionPattern, BUILD_GROUP)},
	{"OPT_GROUP", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(Runtime$VersionPattern, OPT_GROUP)},
	{}
};

$MethodInfo _Runtime$VersionPattern_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(Runtime$VersionPattern::*)()>(&Runtime$VersionPattern::init$))},
	{}
};

$InnerClassInfo _Runtime$VersionPattern_InnerClassesInfo_[] = {
	{"java.lang.Runtime$VersionPattern", "java.lang.Runtime", "VersionPattern", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _Runtime$VersionPattern_ClassInfo_ = {
	$ACC_SUPER,
	"java.lang.Runtime$VersionPattern",
	"java.lang.Object",
	nullptr,
	_Runtime$VersionPattern_FieldInfo_,
	_Runtime$VersionPattern_MethodInfo_,
	nullptr,
	nullptr,
	_Runtime$VersionPattern_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.Runtime"
};

$Object* allocate$Runtime$VersionPattern($Class* clazz) {
	return $of($alloc(Runtime$VersionPattern));
}

$String* Runtime$VersionPattern::VNUM = nullptr;
$String* Runtime$VersionPattern::PRE = nullptr;
$String* Runtime$VersionPattern::BUILD = nullptr;
$String* Runtime$VersionPattern::OPT = nullptr;
$String* Runtime$VersionPattern::VSTR_FORMAT = nullptr;
$Pattern* Runtime$VersionPattern::VSTR_PATTERN = nullptr;
$String* Runtime$VersionPattern::VNUM_GROUP = nullptr;
$String* Runtime$VersionPattern::PRE_GROUP = nullptr;
$String* Runtime$VersionPattern::PLUS_GROUP = nullptr;
$String* Runtime$VersionPattern::BUILD_GROUP = nullptr;
$String* Runtime$VersionPattern::OPT_GROUP = nullptr;

void Runtime$VersionPattern::init$() {
}

void clinit$Runtime$VersionPattern($Class* class$) {
	$assignStatic(Runtime$VersionPattern::VNUM, "(?<VNUM>[1-9][0-9]*(?:(?:\\.0)*\\.[1-9][0-9]*)*)"_s);
	$assignStatic(Runtime$VersionPattern::PRE, "(?:-(?<PRE>[a-zA-Z0-9]+))?"_s);
	$assignStatic(Runtime$VersionPattern::BUILD, "(?:(?<PLUS>\\+)(?<BUILD>0|[1-9][0-9]*)?)?"_s);
	$assignStatic(Runtime$VersionPattern::OPT, "(?:-(?<OPT>[-a-zA-Z0-9.]+))?"_s);
	$assignStatic(Runtime$VersionPattern::VSTR_FORMAT, $str({Runtime$VersionPattern::VNUM, Runtime$VersionPattern::PRE, Runtime$VersionPattern::BUILD, Runtime$VersionPattern::OPT}));
	$assignStatic(Runtime$VersionPattern::VNUM_GROUP, "VNUM"_s);
	$assignStatic(Runtime$VersionPattern::PRE_GROUP, "PRE"_s);
	$assignStatic(Runtime$VersionPattern::PLUS_GROUP, "PLUS"_s);
	$assignStatic(Runtime$VersionPattern::BUILD_GROUP, "BUILD"_s);
	$assignStatic(Runtime$VersionPattern::OPT_GROUP, "OPT"_s);
	$assignStatic(Runtime$VersionPattern::VSTR_PATTERN, $Pattern::compile(Runtime$VersionPattern::VSTR_FORMAT));
}

Runtime$VersionPattern::Runtime$VersionPattern() {
}

$Class* Runtime$VersionPattern::load$($String* name, bool initialize) {
	$loadClass(Runtime$VersionPattern, name, initialize, &_Runtime$VersionPattern_ClassInfo_, clinit$Runtime$VersionPattern, allocate$Runtime$VersionPattern);
	return class$;
}

$Class* Runtime$VersionPattern::class$ = nullptr;

	} // lang
} // java