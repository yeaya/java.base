#include <jdk/internal/icu/text/NormalizerBase$NFKCModeImpl.h>
#include <jdk/internal/icu/text/Normalizer2.h>
#include <jdk/internal/icu/text/NormalizerBase$ModeImpl.h>
#include <jdk/internal/icu/text/NormalizerBase.h>
#include <jcpp.h>

#undef INSTANCE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Normalizer2 = ::jdk::internal::icu::text::Normalizer2;
using $NormalizerBase$ModeImpl = ::jdk::internal::icu::text::NormalizerBase$ModeImpl;

namespace jdk {
	namespace internal {
		namespace icu {
			namespace text {

$NormalizerBase$ModeImpl* NormalizerBase$NFKCModeImpl::INSTANCE = nullptr;

void NormalizerBase$NFKCModeImpl::init$() {
}

void NormalizerBase$NFKCModeImpl::clinit$($Class* clazz) {
	$assignStatic(NormalizerBase$NFKCModeImpl::INSTANCE, $new($NormalizerBase$ModeImpl, $($Normalizer2::getNFKCInstance())));
}

NormalizerBase$NFKCModeImpl::NormalizerBase$NFKCModeImpl() {
}

$Class* NormalizerBase$NFKCModeImpl::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"INSTANCE", "Ljdk/internal/icu/text/NormalizerBase$ModeImpl;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(NormalizerBase$NFKCModeImpl, INSTANCE)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(NormalizerBase$NFKCModeImpl, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.icu.text.NormalizerBase$NFKCModeImpl", "jdk.internal.icu.text.NormalizerBase", "NFKCModeImpl", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"jdk.internal.icu.text.NormalizerBase$NFKCModeImpl",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.icu.text.NormalizerBase"
	};
	$loadClass(NormalizerBase$NFKCModeImpl, name, initialize, &classInfo$$, NormalizerBase$NFKCModeImpl::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(NormalizerBase$NFKCModeImpl);
	});
	return class$;
}

$Class* NormalizerBase$NFKCModeImpl::class$ = nullptr;

			} // text
		} // icu
	} // internal
} // jdk