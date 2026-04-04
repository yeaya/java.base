#include <jdk/internal/icu/text/NormalizerBase$NFDModeImpl.h>
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

$NormalizerBase$ModeImpl* NormalizerBase$NFDModeImpl::INSTANCE = nullptr;

void NormalizerBase$NFDModeImpl::init$() {
}

void NormalizerBase$NFDModeImpl::clinit$($Class* clazz) {
	$assignStatic(NormalizerBase$NFDModeImpl::INSTANCE, $new($NormalizerBase$ModeImpl, $($Normalizer2::getNFDInstance())));
}

NormalizerBase$NFDModeImpl::NormalizerBase$NFDModeImpl() {
}

$Class* NormalizerBase$NFDModeImpl::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"INSTANCE", "Ljdk/internal/icu/text/NormalizerBase$ModeImpl;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(NormalizerBase$NFDModeImpl, INSTANCE)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(NormalizerBase$NFDModeImpl, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.icu.text.NormalizerBase$NFDModeImpl", "jdk.internal.icu.text.NormalizerBase", "NFDModeImpl", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"jdk.internal.icu.text.NormalizerBase$NFDModeImpl",
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
	$loadClass(NormalizerBase$NFDModeImpl, name, initialize, &classInfo$$, NormalizerBase$NFDModeImpl::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(NormalizerBase$NFDModeImpl);
	});
	return class$;
}

$Class* NormalizerBase$NFDModeImpl::class$ = nullptr;

			} // text
		} // icu
	} // internal
} // jdk