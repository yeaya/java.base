#include <jdk/internal/icu/text/NormalizerBase$NFDMode.h>
#include <jdk/internal/icu/text/Normalizer2.h>
#include <jdk/internal/icu/text/NormalizerBase$Mode.h>
#include <jdk/internal/icu/text/NormalizerBase$ModeImpl.h>
#include <jdk/internal/icu/text/NormalizerBase$NFD32ModeImpl.h>
#include <jdk/internal/icu/text/NormalizerBase$NFDModeImpl.h>
#include <jdk/internal/icu/text/NormalizerBase.h>
#include <jcpp.h>

#undef INSTANCE

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Normalizer2 = ::jdk::internal::icu::text::Normalizer2;
using $NormalizerBase$Mode = ::jdk::internal::icu::text::NormalizerBase$Mode;
using $NormalizerBase$NFD32ModeImpl = ::jdk::internal::icu::text::NormalizerBase$NFD32ModeImpl;
using $NormalizerBase$NFDModeImpl = ::jdk::internal::icu::text::NormalizerBase$NFDModeImpl;

namespace jdk {
	namespace internal {
		namespace icu {
			namespace text {

void NormalizerBase$NFDMode::init$() {
	$NormalizerBase$Mode::init$();
}

$Normalizer2* NormalizerBase$NFDMode::getNormalizer2(int32_t options) {
	$init($NormalizerBase$NFD32ModeImpl);
	$init($NormalizerBase$NFDModeImpl);
	return (options & 0x20) != 0 ? $nc($NormalizerBase$NFD32ModeImpl::INSTANCE)->normalizer2 : $nc($NormalizerBase$NFDModeImpl::INSTANCE)->normalizer2;
}

NormalizerBase$NFDMode::NormalizerBase$NFDMode() {
}

$Class* NormalizerBase$NFDMode::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(NormalizerBase$NFDMode, init$, void)},
		{"getNormalizer2", "(I)Ljdk/internal/icu/text/Normalizer2;", nullptr, $PROTECTED, $virtualMethod(NormalizerBase$NFDMode, getNormalizer2, $Normalizer2*, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.icu.text.NormalizerBase$NFDMode", "jdk.internal.icu.text.NormalizerBase", "NFDMode", $PRIVATE | $STATIC | $FINAL},
		{"jdk.internal.icu.text.NormalizerBase$Mode", "jdk.internal.icu.text.NormalizerBase", "Mode", $PUBLIC | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"jdk.internal.icu.text.NormalizerBase$NFDMode",
		"jdk.internal.icu.text.NormalizerBase$Mode",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.icu.text.NormalizerBase"
	};
	$loadClass(NormalizerBase$NFDMode, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(NormalizerBase$NFDMode);
	});
	return class$;
}

$Class* NormalizerBase$NFDMode::class$ = nullptr;

			} // text
		} // icu
	} // internal
} // jdk