#include <java/lang/ProcessImpl$LazyPattern.h>
#include <java/lang/ProcessImpl.h>
#include <java/util/regex/Pattern.h>
#include <jcpp.h>

#undef PATTERN

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Pattern = ::java::util::regex::Pattern;

namespace java {
	namespace lang {

$Pattern* ProcessImpl$LazyPattern::PATTERN = nullptr;

void ProcessImpl$LazyPattern::init$() {
}

void ProcessImpl$LazyPattern::clinit$($Class* clazz) {
	$assignStatic(ProcessImpl$LazyPattern::PATTERN, $Pattern::compile("[^\\s\"]+|\"[^\"]*\""_s));
}

ProcessImpl$LazyPattern::ProcessImpl$LazyPattern() {
}

$Class* ProcessImpl$LazyPattern::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"PATTERN", "Ljava/util/regex/Pattern;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ProcessImpl$LazyPattern, PATTERN)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(ProcessImpl$LazyPattern, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.ProcessImpl$LazyPattern", "java.lang.ProcessImpl", "LazyPattern", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.lang.ProcessImpl$LazyPattern",
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
		"java.lang.ProcessImpl"
	};
	$loadClass(ProcessImpl$LazyPattern, name, initialize, &classInfo$$, ProcessImpl$LazyPattern::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(ProcessImpl$LazyPattern);
	});
	return class$;
}

$Class* ProcessImpl$LazyPattern::class$ = nullptr;

	} // lang
} // java