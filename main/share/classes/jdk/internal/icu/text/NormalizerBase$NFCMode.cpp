#include <jdk/internal/icu/text/NormalizerBase$NFCMode.h>
#include <jdk/internal/icu/text/Normalizer2.h>
#include <jdk/internal/icu/text/NormalizerBase$Mode.h>
#include <jdk/internal/icu/text/NormalizerBase$ModeImpl.h>
#include <jdk/internal/icu/text/NormalizerBase$NFC32ModeImpl.h>
#include <jdk/internal/icu/text/NormalizerBase$NFCModeImpl.h>
#include <jdk/internal/icu/text/NormalizerBase.h>
#include <jcpp.h>

#undef INSTANCE

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Normalizer2 = ::jdk::internal::icu::text::Normalizer2;
using $NormalizerBase$Mode = ::jdk::internal::icu::text::NormalizerBase$Mode;
using $NormalizerBase$NFC32ModeImpl = ::jdk::internal::icu::text::NormalizerBase$NFC32ModeImpl;
using $NormalizerBase$NFCModeImpl = ::jdk::internal::icu::text::NormalizerBase$NFCModeImpl;

namespace jdk {
	namespace internal {
		namespace icu {
			namespace text {

void NormalizerBase$NFCMode::init$() {
	$NormalizerBase$Mode::init$();
}

$Normalizer2* NormalizerBase$NFCMode::getNormalizer2(int32_t options) {
	$init($NormalizerBase$NFC32ModeImpl);
	$init($NormalizerBase$NFCModeImpl);
	return (options & 0x20) != 0 ? $nc($NormalizerBase$NFC32ModeImpl::INSTANCE)->normalizer2 : $nc($NormalizerBase$NFCModeImpl::INSTANCE)->normalizer2;
}

NormalizerBase$NFCMode::NormalizerBase$NFCMode() {
}

$Class* NormalizerBase$NFCMode::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(NormalizerBase$NFCMode, init$, void)},
		{"getNormalizer2", "(I)Ljdk/internal/icu/text/Normalizer2;", nullptr, $PROTECTED, $virtualMethod(NormalizerBase$NFCMode, getNormalizer2, $Normalizer2*, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.icu.text.NormalizerBase$NFCMode", "jdk.internal.icu.text.NormalizerBase", "NFCMode", $PRIVATE | $STATIC | $FINAL},
		{"jdk.internal.icu.text.NormalizerBase$Mode", "jdk.internal.icu.text.NormalizerBase", "Mode", $PUBLIC | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"jdk.internal.icu.text.NormalizerBase$NFCMode",
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
	$loadClass(NormalizerBase$NFCMode, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(NormalizerBase$NFCMode);
	});
	return class$;
}

$Class* NormalizerBase$NFCMode::class$ = nullptr;

			} // text
		} // icu
	} // internal
} // jdk