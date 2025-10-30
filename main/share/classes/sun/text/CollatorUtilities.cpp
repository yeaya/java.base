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

$FieldInfo _CollatorUtilities_FieldInfo_[] = {
	{"legacyModeMap", "[Ljdk/internal/icu/text/NormalizerBase$Mode;", nullptr, $STATIC, $staticField(CollatorUtilities, legacyModeMap)},
	{}
};

$MethodInfo _CollatorUtilities_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CollatorUtilities::*)()>(&CollatorUtilities::init$))},
	{"toLegacyMode", "(Ljdk/internal/icu/text/NormalizerBase$Mode;)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($NormalizerBase$Mode*)>(&CollatorUtilities::toLegacyMode))},
	{"toNormalizerMode", "(I)Ljdk/internal/icu/text/NormalizerBase$Mode;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$NormalizerBase$Mode*(*)(int32_t)>(&CollatorUtilities::toNormalizerMode))},
	{}
};

$ClassInfo _CollatorUtilities_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.CollatorUtilities",
	"java.lang.Object",
	nullptr,
	_CollatorUtilities_FieldInfo_,
	_CollatorUtilities_MethodInfo_
};

$Object* allocate$CollatorUtilities($Class* clazz) {
	return $of($alloc(CollatorUtilities));
}

$NormalizerBase$ModeArray* CollatorUtilities::legacyModeMap = nullptr;

void CollatorUtilities::init$() {
}

int32_t CollatorUtilities::toLegacyMode($NormalizerBase$Mode* mode) {
	$init(CollatorUtilities);
	int32_t legacyMode = $nc(CollatorUtilities::legacyModeMap)->length;
	while (legacyMode > 0) {
		--legacyMode;
		if ($nc(CollatorUtilities::legacyModeMap)->get(legacyMode) == mode) {
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

void clinit$CollatorUtilities($Class* class$) {
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
	$loadClass(CollatorUtilities, name, initialize, &_CollatorUtilities_ClassInfo_, clinit$CollatorUtilities, allocate$CollatorUtilities);
	return class$;
}

$Class* CollatorUtilities::class$ = nullptr;

	} // text
} // sun