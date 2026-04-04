#include <sun/security/jca/JCAUtil.h>
#include <java/lang/Math.h>
#include <java/security/SecureRandom.h>
#include <sun/security/jca/JCAUtil$CachedSecureRandomHolder.h>
#include <jcpp.h>

#undef ARRAY_SIZE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $SecureRandom = ::java::security::SecureRandom;
using $JCAUtil$CachedSecureRandomHolder = ::sun::security::jca::JCAUtil$CachedSecureRandomHolder;

namespace sun {
	namespace security {
		namespace jca {

$volatile($SecureRandom*) JCAUtil::def = nullptr;

void JCAUtil::init$() {
}

int32_t JCAUtil::getTempArraySize(int32_t totalSize) {
	$init(JCAUtil);
	return $Math::min(JCAUtil::ARRAY_SIZE, totalSize);
}

$SecureRandom* JCAUtil::getSecureRandom() {
	$init(JCAUtil);
	$init($JCAUtil$CachedSecureRandomHolder);
	return $JCAUtil$CachedSecureRandomHolder::instance;
}

void JCAUtil::clearDefSecureRandom() {
	$init(JCAUtil);
	$assignStatic(JCAUtil::def, nullptr);
}

$SecureRandom* JCAUtil::getDefSecureRandom() {
	$init(JCAUtil);
	$var($SecureRandom, result, JCAUtil::def);
	if (result == nullptr) {
		$synchronized(JCAUtil::class$) {
			$assign(result, JCAUtil::def);
			if (result == nullptr) {
				$assignStatic(JCAUtil::def, $assign(result, $new($SecureRandom)));
			}
		}
	}
	return result;
}

void JCAUtil::clinit$($Class* clazz) {
	$assignStatic(JCAUtil::def, nullptr);
}

JCAUtil::JCAUtil() {
}

$Class* JCAUtil::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"ARRAY_SIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JCAUtil, ARRAY_SIZE)},
		{"def", "Ljava/security/SecureRandom;", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(JCAUtil, def)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(JCAUtil, init$, void)},
		{"clearDefSecureRandom", "()V", nullptr, $STATIC, $staticMethod(JCAUtil, clearDefSecureRandom, void)},
		{"getDefSecureRandom", "()Ljava/security/SecureRandom;", nullptr, $PUBLIC | $STATIC, $staticMethod(JCAUtil, getDefSecureRandom, $SecureRandom*)},
		{"getSecureRandom", "()Ljava/security/SecureRandom;", nullptr, $PUBLIC | $STATIC, $staticMethod(JCAUtil, getSecureRandom, $SecureRandom*)},
		{"getTempArraySize", "(I)I", nullptr, $PUBLIC | $STATIC, $staticMethod(JCAUtil, getTempArraySize, int32_t, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.jca.JCAUtil$CachedSecureRandomHolder", "sun.security.jca.JCAUtil", "CachedSecureRandomHolder", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.security.jca.JCAUtil",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"sun.security.jca.JCAUtil$CachedSecureRandomHolder"
	};
	$loadClass(JCAUtil, name, initialize, &classInfo$$, JCAUtil::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(JCAUtil);
	});
	return class$;
}

$Class* JCAUtil::class$ = nullptr;

		} // jca
	} // security
} // sun