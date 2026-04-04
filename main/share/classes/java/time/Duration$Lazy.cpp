#include <java/time/Duration$Lazy.h>
#include <java/time/Duration.h>
#include <java/util/regex/Pattern.h>
#include <jcpp.h>

#undef CASE_INSENSITIVE
#undef PATTERN

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Pattern = ::java::util::regex::Pattern;

namespace java {
	namespace time {

$Pattern* Duration$Lazy::PATTERN = nullptr;

void Duration$Lazy::init$() {
}

void Duration$Lazy::clinit$($Class* clazz) {
	$assignStatic(Duration$Lazy::PATTERN, $Pattern::compile("([-+]?)P(?:([-+]?[0-9]+)D)?(T(?:([-+]?[0-9]+)H)?(?:([-+]?[0-9]+)M)?(?:([-+]?[0-9]+)(?:[.,]([0-9]{0,9}))?S)?)?"_s, $Pattern::CASE_INSENSITIVE));
}

Duration$Lazy::Duration$Lazy() {
}

$Class* Duration$Lazy::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"PATTERN", "Ljava/util/regex/Pattern;", nullptr, $STATIC | $FINAL, $staticField(Duration$Lazy, PATTERN)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(Duration$Lazy, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.time.Duration$Lazy", "java.time.Duration", "Lazy", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.time.Duration$Lazy",
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
		"java.time.Duration"
	};
	$loadClass(Duration$Lazy, name, initialize, &classInfo$$, Duration$Lazy::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Duration$Lazy);
	});
	return class$;
}

$Class* Duration$Lazy::class$ = nullptr;

	} // time
} // java