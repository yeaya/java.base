#include <java/security/SecureRandom$StrongPatternHolder.h>
#include <java/security/SecureRandom.h>
#include <java/util/regex/Pattern.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Pattern = ::java::util::regex::Pattern;

namespace java {
	namespace security {

$Pattern* SecureRandom$StrongPatternHolder::pattern = nullptr;

void SecureRandom$StrongPatternHolder::init$() {
}

void SecureRandom$StrongPatternHolder::clinit$($Class* clazz) {
	$assignStatic(SecureRandom$StrongPatternHolder::pattern, $Pattern::compile("\\s*([\\S&&[^:,]]*)(\\:([\\S&&[^,]]*))?\\s*(\\,(.*))?"_s));
}

SecureRandom$StrongPatternHolder::SecureRandom$StrongPatternHolder() {
}

$Class* SecureRandom$StrongPatternHolder::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"pattern", "Ljava/util/regex/Pattern;", nullptr, $PRIVATE | $STATIC, $staticField(SecureRandom$StrongPatternHolder, pattern)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(SecureRandom$StrongPatternHolder, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.security.SecureRandom$StrongPatternHolder", "java.security.SecureRandom", "StrongPatternHolder", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.security.SecureRandom$StrongPatternHolder",
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
		"java.security.SecureRandom"
	};
	$loadClass(SecureRandom$StrongPatternHolder, name, initialize, &classInfo$$, SecureRandom$StrongPatternHolder::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(SecureRandom$StrongPatternHolder);
	});
	return class$;
}

$Class* SecureRandom$StrongPatternHolder::class$ = nullptr;

	} // security
} // java