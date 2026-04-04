#include <jdk/internal/icu/text/NormalizerBase$NFKDModeImpl.h>
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

$NormalizerBase$ModeImpl* NormalizerBase$NFKDModeImpl::INSTANCE = nullptr;

void NormalizerBase$NFKDModeImpl::init$() {
}

void NormalizerBase$NFKDModeImpl::clinit$($Class* clazz) {
	$assignStatic(NormalizerBase$NFKDModeImpl::INSTANCE, $new($NormalizerBase$ModeImpl, $($Normalizer2::getNFKDInstance())));
}

NormalizerBase$NFKDModeImpl::NormalizerBase$NFKDModeImpl() {
}

$Class* NormalizerBase$NFKDModeImpl::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"INSTANCE", "Ljdk/internal/icu/text/NormalizerBase$ModeImpl;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(NormalizerBase$NFKDModeImpl, INSTANCE)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(NormalizerBase$NFKDModeImpl, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.icu.text.NormalizerBase$NFKDModeImpl", "jdk.internal.icu.text.NormalizerBase", "NFKDModeImpl", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"jdk.internal.icu.text.NormalizerBase$NFKDModeImpl",
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
	$loadClass(NormalizerBase$NFKDModeImpl, name, initialize, &classInfo$$, NormalizerBase$NFKDModeImpl::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(NormalizerBase$NFKDModeImpl);
	});
	return class$;
}

$Class* NormalizerBase$NFKDModeImpl::class$ = nullptr;

			} // text
		} // icu
	} // internal
} // jdk