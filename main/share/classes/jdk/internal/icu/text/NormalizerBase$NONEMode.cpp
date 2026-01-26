#include <jdk/internal/icu/text/NormalizerBase$NONEMode.h>

#include <jdk/internal/icu/impl/Norm2AllModes$NoopNormalizer2.h>
#include <jdk/internal/icu/impl/Norm2AllModes.h>
#include <jdk/internal/icu/text/Normalizer2.h>
#include <jdk/internal/icu/text/NormalizerBase$Mode.h>
#include <jdk/internal/icu/text/NormalizerBase.h>
#include <jcpp.h>

#undef NOOP_NORMALIZER2

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Norm2AllModes = ::jdk::internal::icu::impl::Norm2AllModes;
using $Normalizer2 = ::jdk::internal::icu::text::Normalizer2;
using $NormalizerBase$Mode = ::jdk::internal::icu::text::NormalizerBase$Mode;

namespace jdk {
	namespace internal {
		namespace icu {
			namespace text {

$MethodInfo _NormalizerBase$NONEMode_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(NormalizerBase$NONEMode, init$, void)},
	{"getNormalizer2", "(I)Ljdk/internal/icu/text/Normalizer2;", nullptr, $PROTECTED, $virtualMethod(NormalizerBase$NONEMode, getNormalizer2, $Normalizer2*, int32_t)},
	{}
};

$InnerClassInfo _NormalizerBase$NONEMode_InnerClassesInfo_[] = {
	{"jdk.internal.icu.text.NormalizerBase$NONEMode", "jdk.internal.icu.text.NormalizerBase", "NONEMode", $PRIVATE | $STATIC | $FINAL},
	{"jdk.internal.icu.text.NormalizerBase$Mode", "jdk.internal.icu.text.NormalizerBase", "Mode", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _NormalizerBase$NONEMode_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"jdk.internal.icu.text.NormalizerBase$NONEMode",
	"jdk.internal.icu.text.NormalizerBase$Mode",
	nullptr,
	nullptr,
	_NormalizerBase$NONEMode_MethodInfo_,
	nullptr,
	nullptr,
	_NormalizerBase$NONEMode_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.icu.text.NormalizerBase"
};

$Object* allocate$NormalizerBase$NONEMode($Class* clazz) {
	return $of($alloc(NormalizerBase$NONEMode));
}

void NormalizerBase$NONEMode::init$() {
	$NormalizerBase$Mode::init$();
}

$Normalizer2* NormalizerBase$NONEMode::getNormalizer2(int32_t options) {
	$init($Norm2AllModes);
	return $Norm2AllModes::NOOP_NORMALIZER2;
}

NormalizerBase$NONEMode::NormalizerBase$NONEMode() {
}

$Class* NormalizerBase$NONEMode::load$($String* name, bool initialize) {
	$loadClass(NormalizerBase$NONEMode, name, initialize, &_NormalizerBase$NONEMode_ClassInfo_, allocate$NormalizerBase$NONEMode);
	return class$;
}

$Class* NormalizerBase$NONEMode::class$ = nullptr;

			} // text
		} // icu
	} // internal
} // jdk