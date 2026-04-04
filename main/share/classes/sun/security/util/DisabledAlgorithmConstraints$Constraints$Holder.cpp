#include <sun/security/util/DisabledAlgorithmConstraints$Constraints$Holder.h>
#include <java/util/regex/Pattern.h>
#include <sun/security/util/DisabledAlgorithmConstraints$Constraints.h>
#include <jcpp.h>

#undef DENY_AFTER_PATTERN

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Pattern = ::java::util::regex::Pattern;

namespace sun {
	namespace security {
		namespace util {

$Pattern* DisabledAlgorithmConstraints$Constraints$Holder::DENY_AFTER_PATTERN = nullptr;

void DisabledAlgorithmConstraints$Constraints$Holder::init$() {
}

void DisabledAlgorithmConstraints$Constraints$Holder::clinit$($Class* clazz) {
	$assignStatic(DisabledAlgorithmConstraints$Constraints$Holder::DENY_AFTER_PATTERN, $Pattern::compile("denyAfter\\s+(\\d{4})-(\\d{2})-(\\d{2})"_s));
}

DisabledAlgorithmConstraints$Constraints$Holder::DisabledAlgorithmConstraints$Constraints$Holder() {
}

$Class* DisabledAlgorithmConstraints$Constraints$Holder::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"DENY_AFTER_PATTERN", "Ljava/util/regex/Pattern;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DisabledAlgorithmConstraints$Constraints$Holder, DENY_AFTER_PATTERN)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(DisabledAlgorithmConstraints$Constraints$Holder, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.util.DisabledAlgorithmConstraints$Constraints", "sun.security.util.DisabledAlgorithmConstraints", "Constraints", $PRIVATE | $STATIC},
		{"sun.security.util.DisabledAlgorithmConstraints$Constraints$Holder", "sun.security.util.DisabledAlgorithmConstraints$Constraints", "Holder", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.security.util.DisabledAlgorithmConstraints$Constraints$Holder",
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
		"sun.security.util.DisabledAlgorithmConstraints"
	};
	$loadClass(DisabledAlgorithmConstraints$Constraints$Holder, name, initialize, &classInfo$$, DisabledAlgorithmConstraints$Constraints$Holder::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(DisabledAlgorithmConstraints$Constraints$Holder);
	});
	return class$;
}

$Class* DisabledAlgorithmConstraints$Constraints$Holder::class$ = nullptr;

		} // util
	} // security
} // sun