#include <sun/security/jca/JCAUtil$CachedSecureRandomHolder.h>
#include <java/security/SecureRandom.h>
#include <sun/security/jca/JCAUtil.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SecureRandom = ::java::security::SecureRandom;

namespace sun {
	namespace security {
		namespace jca {

$SecureRandom* JCAUtil$CachedSecureRandomHolder::instance = nullptr;

void JCAUtil$CachedSecureRandomHolder::init$() {
}

void JCAUtil$CachedSecureRandomHolder::clinit$($Class* clazz) {
	$assignStatic(JCAUtil$CachedSecureRandomHolder::instance, $new($SecureRandom));
}

JCAUtil$CachedSecureRandomHolder::JCAUtil$CachedSecureRandomHolder() {
}

$Class* JCAUtil$CachedSecureRandomHolder::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"instance", "Ljava/security/SecureRandom;", nullptr, $PUBLIC | $STATIC, $staticField(JCAUtil$CachedSecureRandomHolder, instance)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(JCAUtil$CachedSecureRandomHolder, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.jca.JCAUtil$CachedSecureRandomHolder", "sun.security.jca.JCAUtil", "CachedSecureRandomHolder", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.security.jca.JCAUtil$CachedSecureRandomHolder",
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
		"sun.security.jca.JCAUtil"
	};
	$loadClass(JCAUtil$CachedSecureRandomHolder, name, initialize, &classInfo$$, JCAUtil$CachedSecureRandomHolder::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(JCAUtil$CachedSecureRandomHolder);
	});
	return class$;
}

$Class* JCAUtil$CachedSecureRandomHolder::class$ = nullptr;

		} // jca
	} // security
} // sun