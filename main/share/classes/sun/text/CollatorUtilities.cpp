#include <sun/text/CollatorUtilities.h>
#include <java/lang/ArrayIndexOutOfBoundsException.h>
#include <jdk/internal/icu/text/NormalizerBase$Mode.h>
#include <jdk/internal/icu/text/NormalizerBase.h>
#include <jcpp.h>

#undef NFD
#undef NFKD
#undef NONE

using $NormalizerBase$ModeArray = $Array<::jdk::internal::icu::text::NormalizerBase$Mode>;
using $ArrayIndexOutOfBoundsException = ::java::lang::ArrayIndexOutOfBoundsException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NormalizerBase = ::jdk::internal::icu::text::NormalizerBase;
using $NormalizerBase$Mode = ::jdk::internal::icu::text::NormalizerBase$Mode;

namespace sun {
	namespace text {

$NormalizerBase$ModeArray* CollatorUtilities::legacyModeMap = nullptr;

void CollatorUtilities::init$() {
}

int32_t CollatorUtilities::toLegacyMode($NormalizerBase$Mode* mode) {
	$init(CollatorUtilities);
	int32_t legacyMode = $nc(CollatorUtilities::legacyModeMap)->length;
	while (legacyMode > 0) {
		--legacyMode;
		if (CollatorUtilities::legacyModeMap->get(legacyMode) == mode) {
			break;
		}
	}
	return legacyMode;
}

$NormalizerBase$Mode* CollatorUtilities::toNormalizerMode(int32_t mode) {
	$init(CollatorUtilities);
	$var($NormalizerBase$Mode, normalizerMode, nullptr);
	try {
		$assign(normalizerMode, $nc(CollatorUtilities::legacyModeMap)->get(mode));
	} catch ($ArrayIndexOutOfBoundsException& e) {
		$init($NormalizerBase);
		$assign(normalizerMode, $NormalizerBase::NONE);
	}
	return normalizerMode;
}

void CollatorUtilities::clinit$($Class* clazz) {
	$init($NormalizerBase);
	$assignStatic(CollatorUtilities::legacyModeMap, $new($NormalizerBase$ModeArray, {
		$NormalizerBase::NONE,
		$NormalizerBase::NFD,
		$NormalizerBase::NFKD
	}));
}

CollatorUtilities::CollatorUtilities() {
}

$Class* CollatorUtilities::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"legacyModeMap", "[Ljdk/internal/icu/text/NormalizerBase$Mode;", nullptr, $STATIC, $staticField(CollatorUtilities, legacyModeMap)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(CollatorUtilities, init$, void)},
		{"toLegacyMode", "(Ljdk/internal/icu/text/NormalizerBase$Mode;)I", nullptr, $PUBLIC | $STATIC, $staticMethod(CollatorUtilities, toLegacyMode, int32_t, $NormalizerBase$Mode*)},
		{"toNormalizerMode", "(I)Ljdk/internal/icu/text/NormalizerBase$Mode;", nullptr, $PUBLIC | $STATIC, $staticMethod(CollatorUtilities, toNormalizerMode, $NormalizerBase$Mode*, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.text.CollatorUtilities",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(CollatorUtilities, name, initialize, &classInfo$$, CollatorUtilities::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(CollatorUtilities);
	});
	return class$;
}

$Class* CollatorUtilities::class$ = nullptr;

	} // text
} // sun