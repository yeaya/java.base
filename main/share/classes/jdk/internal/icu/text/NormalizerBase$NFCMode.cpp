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

$MethodInfo _NormalizerBase$NFCMode_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(NormalizerBase$NFCMode, init$, void)},
	{"getNormalizer2", "(I)Ljdk/internal/icu/text/Normalizer2;", nullptr, $PROTECTED, $virtualMethod(NormalizerBase$NFCMode, getNormalizer2, $Normalizer2*, int32_t)},
	{}
};

$InnerClassInfo _NormalizerBase$NFCMode_InnerClassesInfo_[] = {
	{"jdk.internal.icu.text.NormalizerBase$NFCMode", "jdk.internal.icu.text.NormalizerBase", "NFCMode", $PRIVATE | $STATIC | $FINAL},
	{"jdk.internal.icu.text.NormalizerBase$Mode", "jdk.internal.icu.text.NormalizerBase", "Mode", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _NormalizerBase$NFCMode_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"jdk.internal.icu.text.NormalizerBase$NFCMode",
	"jdk.internal.icu.text.NormalizerBase$Mode",
	nullptr,
	nullptr,
	_NormalizerBase$NFCMode_MethodInfo_,
	nullptr,
	nullptr,
	_NormalizerBase$NFCMode_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.icu.text.NormalizerBase"
};

$Object* allocate$NormalizerBase$NFCMode($Class* clazz) {
	return $of($alloc(NormalizerBase$NFCMode));
}

void NormalizerBase$NFCMode::init$() {
	$NormalizerBase$Mode::init$();
}

$Normalizer2* NormalizerBase$NFCMode::getNormalizer2(int32_t options) {
	$init($NormalizerBase$NFC32ModeImpl);
	$init($NormalizerBase$NFCModeImpl);
	return ((int32_t)(options & (uint32_t)32)) != 0 ? $nc($NormalizerBase$NFC32ModeImpl::INSTANCE)->normalizer2 : $nc($NormalizerBase$NFCModeImpl::INSTANCE)->normalizer2;
}

NormalizerBase$NFCMode::NormalizerBase$NFCMode() {
}

$Class* NormalizerBase$NFCMode::load$($String* name, bool initialize) {
	$loadClass(NormalizerBase$NFCMode, name, initialize, &_NormalizerBase$NFCMode_ClassInfo_, allocate$NormalizerBase$NFCMode);
	return class$;
}

$Class* NormalizerBase$NFCMode::class$ = nullptr;

			} // text
		} // icu
	} // internal
} // jdk