#include <jdk/internal/icu/text/NormalizerBase$NFKCMode.h>
#include <jdk/internal/icu/text/Normalizer2.h>
#include <jdk/internal/icu/text/NormalizerBase$Mode.h>
#include <jdk/internal/icu/text/NormalizerBase$ModeImpl.h>
#include <jdk/internal/icu/text/NormalizerBase$NFKC32ModeImpl.h>
#include <jdk/internal/icu/text/NormalizerBase$NFKCModeImpl.h>
#include <jdk/internal/icu/text/NormalizerBase.h>
#include <jcpp.h>

#undef INSTANCE

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Normalizer2 = ::jdk::internal::icu::text::Normalizer2;
using $NormalizerBase$Mode = ::jdk::internal::icu::text::NormalizerBase$Mode;
using $NormalizerBase$NFKC32ModeImpl = ::jdk::internal::icu::text::NormalizerBase$NFKC32ModeImpl;
using $NormalizerBase$NFKCModeImpl = ::jdk::internal::icu::text::NormalizerBase$NFKCModeImpl;

namespace jdk {
	namespace internal {
		namespace icu {
			namespace text {

void NormalizerBase$NFKCMode::init$() {
	$NormalizerBase$Mode::init$();
}

$Normalizer2* NormalizerBase$NFKCMode::getNormalizer2(int32_t options) {
	$init($NormalizerBase$NFKC32ModeImpl);
	$init($NormalizerBase$NFKCModeImpl);
	return (options & 0x20) != 0 ? $nc($NormalizerBase$NFKC32ModeImpl::INSTANCE)->normalizer2 : $nc($NormalizerBase$NFKCModeImpl::INSTANCE)->normalizer2;
}

NormalizerBase$NFKCMode::NormalizerBase$NFKCMode() {
}

$Class* NormalizerBase$NFKCMode::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(NormalizerBase$NFKCMode, init$, void)},
		{"getNormalizer2", "(I)Ljdk/internal/icu/text/Normalizer2;", nullptr, $PROTECTED, $virtualMethod(NormalizerBase$NFKCMode, getNormalizer2, $Normalizer2*, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.icu.text.NormalizerBase$NFKCMode", "jdk.internal.icu.text.NormalizerBase", "NFKCMode", $PRIVATE | $STATIC | $FINAL},
		{"jdk.internal.icu.text.NormalizerBase$Mode", "jdk.internal.icu.text.NormalizerBase", "Mode", $PUBLIC | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"jdk.internal.icu.text.NormalizerBase$NFKCMode",
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
	$loadClass(NormalizerBase$NFKCMode, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(NormalizerBase$NFKCMode);
	});
	return class$;
}

$Class* NormalizerBase$NFKCMode::class$ = nullptr;

			} // text
		} // icu
	} // internal
} // jdk