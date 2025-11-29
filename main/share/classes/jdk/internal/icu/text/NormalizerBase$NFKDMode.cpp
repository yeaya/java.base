#include <jdk/internal/icu/text/NormalizerBase$NFKDMode.h>

#include <jdk/internal/icu/text/Normalizer2.h>
#include <jdk/internal/icu/text/NormalizerBase$Mode.h>
#include <jdk/internal/icu/text/NormalizerBase$ModeImpl.h>
#include <jdk/internal/icu/text/NormalizerBase$NFKD32ModeImpl.h>
#include <jdk/internal/icu/text/NormalizerBase$NFKDModeImpl.h>
#include <jdk/internal/icu/text/NormalizerBase.h>
#include <jcpp.h>

#undef INSTANCE

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Normalizer2 = ::jdk::internal::icu::text::Normalizer2;
using $NormalizerBase$Mode = ::jdk::internal::icu::text::NormalizerBase$Mode;
using $NormalizerBase$NFKD32ModeImpl = ::jdk::internal::icu::text::NormalizerBase$NFKD32ModeImpl;
using $NormalizerBase$NFKDModeImpl = ::jdk::internal::icu::text::NormalizerBase$NFKDModeImpl;

namespace jdk {
	namespace internal {
		namespace icu {
			namespace text {

$MethodInfo _NormalizerBase$NFKDMode_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(NormalizerBase$NFKDMode::*)()>(&NormalizerBase$NFKDMode::init$))},
	{"getNormalizer2", "(I)Ljdk/internal/icu/text/Normalizer2;", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _NormalizerBase$NFKDMode_InnerClassesInfo_[] = {
	{"jdk.internal.icu.text.NormalizerBase$NFKDMode", "jdk.internal.icu.text.NormalizerBase", "NFKDMode", $PRIVATE | $STATIC | $FINAL},
	{"jdk.internal.icu.text.NormalizerBase$Mode", "jdk.internal.icu.text.NormalizerBase", "Mode", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _NormalizerBase$NFKDMode_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"jdk.internal.icu.text.NormalizerBase$NFKDMode",
	"jdk.internal.icu.text.NormalizerBase$Mode",
	nullptr,
	nullptr,
	_NormalizerBase$NFKDMode_MethodInfo_,
	nullptr,
	nullptr,
	_NormalizerBase$NFKDMode_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.icu.text.NormalizerBase"
};

$Object* allocate$NormalizerBase$NFKDMode($Class* clazz) {
	return $of($alloc(NormalizerBase$NFKDMode));
}

void NormalizerBase$NFKDMode::init$() {
	$NormalizerBase$Mode::init$();
}

$Normalizer2* NormalizerBase$NFKDMode::getNormalizer2(int32_t options) {
	$init($NormalizerBase$NFKD32ModeImpl);
	$init($NormalizerBase$NFKDModeImpl);
	return ((int32_t)(options & (uint32_t)32)) != 0 ? $nc($NormalizerBase$NFKD32ModeImpl::INSTANCE)->normalizer2 : $nc($NormalizerBase$NFKDModeImpl::INSTANCE)->normalizer2;
}

NormalizerBase$NFKDMode::NormalizerBase$NFKDMode() {
}

$Class* NormalizerBase$NFKDMode::load$($String* name, bool initialize) {
	$loadClass(NormalizerBase$NFKDMode, name, initialize, &_NormalizerBase$NFKDMode_ClassInfo_, allocate$NormalizerBase$NFKDMode);
	return class$;
}

$Class* NormalizerBase$NFKDMode::class$ = nullptr;

			} // text
		} // icu
	} // internal
} // jdk