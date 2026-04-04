#include <jdk/internal/icu/text/NormalizerBase$NFD32ModeImpl.h>
#include <jdk/internal/icu/text/FilteredNormalizer2.h>
#include <jdk/internal/icu/text/Normalizer2.h>
#include <jdk/internal/icu/text/NormalizerBase$ModeImpl.h>
#include <jdk/internal/icu/text/NormalizerBase$Unicode32.h>
#include <jdk/internal/icu/text/NormalizerBase.h>
#include <jdk/internal/icu/text/UnicodeSet.h>
#include <jcpp.h>

#undef INSTANCE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $FilteredNormalizer2 = ::jdk::internal::icu::text::FilteredNormalizer2;
using $Normalizer2 = ::jdk::internal::icu::text::Normalizer2;
using $NormalizerBase$ModeImpl = ::jdk::internal::icu::text::NormalizerBase$ModeImpl;
using $NormalizerBase$Unicode32 = ::jdk::internal::icu::text::NormalizerBase$Unicode32;

namespace jdk {
	namespace internal {
		namespace icu {
			namespace text {

$NormalizerBase$ModeImpl* NormalizerBase$NFD32ModeImpl::INSTANCE = nullptr;

void NormalizerBase$NFD32ModeImpl::init$() {
}

void NormalizerBase$NFD32ModeImpl::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$init($NormalizerBase$Unicode32);
	$assignStatic(NormalizerBase$NFD32ModeImpl::INSTANCE, $new($NormalizerBase$ModeImpl, $$new($FilteredNormalizer2, $($Normalizer2::getNFDInstance()), $NormalizerBase$Unicode32::INSTANCE)));
}

NormalizerBase$NFD32ModeImpl::NormalizerBase$NFD32ModeImpl() {
}

$Class* NormalizerBase$NFD32ModeImpl::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"INSTANCE", "Ljdk/internal/icu/text/NormalizerBase$ModeImpl;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(NormalizerBase$NFD32ModeImpl, INSTANCE)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(NormalizerBase$NFD32ModeImpl, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.icu.text.NormalizerBase$NFD32ModeImpl", "jdk.internal.icu.text.NormalizerBase", "NFD32ModeImpl", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"jdk.internal.icu.text.NormalizerBase$NFD32ModeImpl",
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
	$loadClass(NormalizerBase$NFD32ModeImpl, name, initialize, &classInfo$$, NormalizerBase$NFD32ModeImpl::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(NormalizerBase$NFD32ModeImpl);
	});
	return class$;
}

$Class* NormalizerBase$NFD32ModeImpl::class$ = nullptr;

			} // text
		} // icu
	} // internal
} // jdk