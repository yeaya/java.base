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

$MethodInfo _NormalizerBase$NFDMode_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(NormalizerBase$NFDMode::*)()>(&NormalizerBase$NFDMode::init$))},
	{"getNormalizer2", "(I)Ljdk/internal/icu/text/Normalizer2;", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _NormalizerBase$NFDMode_InnerClassesInfo_[] = {
	{"jdk.internal.icu.text.NormalizerBase$NFDMode", "jdk.internal.icu.text.NormalizerBase", "NFDMode", $PRIVATE | $STATIC | $FINAL},
	{"jdk.internal.icu.text.NormalizerBase$Mode", "jdk.internal.icu.text.NormalizerBase", "Mode", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _NormalizerBase$NFDMode_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"jdk.internal.icu.text.NormalizerBase$NFDMode",
	"jdk.internal.icu.text.NormalizerBase$Mode",
	nullptr,
	nullptr,
	_NormalizerBase$NFDMode_MethodInfo_,
	nullptr,
	nullptr,
	_NormalizerBase$NFDMode_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.icu.text.NormalizerBase"
};

$Object* allocate$NormalizerBase$NFDMode($Class* clazz) {
	return $of($alloc(NormalizerBase$NFDMode));
}

void NormalizerBase$NFDMode::init$() {
	$NormalizerBase$Mode::init$();
}

$Normalizer2* NormalizerBase$NFDMode::getNormalizer2(int32_t options) {
	$init($NormalizerBase$NFD32ModeImpl);
	$init($NormalizerBase$NFDModeImpl);
	return ((int32_t)(options & (uint32_t)32)) != 0 ? $nc($NormalizerBase$NFD32ModeImpl::INSTANCE)->normalizer2 : $nc($NormalizerBase$NFDModeImpl::INSTANCE)->normalizer2;
}

NormalizerBase$NFDMode::NormalizerBase$NFDMode() {
}

$Class* NormalizerBase$NFDMode::load$($String* name, bool initialize) {
	$loadClass(NormalizerBase$NFDMode, name, initialize, &_NormalizerBase$NFDMode_ClassInfo_, allocate$NormalizerBase$NFDMode);
	return class$;
}

$Class* NormalizerBase$NFDMode::class$ = nullptr;

			} // text
		} // icu
	} // internal
} // jdk