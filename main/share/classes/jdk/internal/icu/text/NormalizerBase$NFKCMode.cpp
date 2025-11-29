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

$MethodInfo _NormalizerBase$NFKCMode_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(NormalizerBase$NFKCMode::*)()>(&NormalizerBase$NFKCMode::init$))},
	{"getNormalizer2", "(I)Ljdk/internal/icu/text/Normalizer2;", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _NormalizerBase$NFKCMode_InnerClassesInfo_[] = {
	{"jdk.internal.icu.text.NormalizerBase$NFKCMode", "jdk.internal.icu.text.NormalizerBase", "NFKCMode", $PRIVATE | $STATIC | $FINAL},
	{"jdk.internal.icu.text.NormalizerBase$Mode", "jdk.internal.icu.text.NormalizerBase", "Mode", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _NormalizerBase$NFKCMode_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"jdk.internal.icu.text.NormalizerBase$NFKCMode",
	"jdk.internal.icu.text.NormalizerBase$Mode",
	nullptr,
	nullptr,
	_NormalizerBase$NFKCMode_MethodInfo_,
	nullptr,
	nullptr,
	_NormalizerBase$NFKCMode_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.icu.text.NormalizerBase"
};

$Object* allocate$NormalizerBase$NFKCMode($Class* clazz) {
	return $of($alloc(NormalizerBase$NFKCMode));
}

void NormalizerBase$NFKCMode::init$() {
	$NormalizerBase$Mode::init$();
}

$Normalizer2* NormalizerBase$NFKCMode::getNormalizer2(int32_t options) {
	$init($NormalizerBase$NFKC32ModeImpl);
	$init($NormalizerBase$NFKCModeImpl);
	return ((int32_t)(options & (uint32_t)32)) != 0 ? $nc($NormalizerBase$NFKC32ModeImpl::INSTANCE)->normalizer2 : $nc($NormalizerBase$NFKCModeImpl::INSTANCE)->normalizer2;
}

NormalizerBase$NFKCMode::NormalizerBase$NFKCMode() {
}

$Class* NormalizerBase$NFKCMode::load$($String* name, bool initialize) {
	$loadClass(NormalizerBase$NFKCMode, name, initialize, &_NormalizerBase$NFKCMode_ClassInfo_, allocate$NormalizerBase$NFKCMode);
	return class$;
}

$Class* NormalizerBase$NFKCMode::class$ = nullptr;

			} // text
		} // icu
	} // internal
} // jdk