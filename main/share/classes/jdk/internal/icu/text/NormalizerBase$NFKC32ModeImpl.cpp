#include <jdk/internal/icu/text/NormalizerBase$NFKC32ModeImpl.h>
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

$NormalizerBase$ModeImpl* NormalizerBase$NFKC32ModeImpl::INSTANCE = nullptr;

void NormalizerBase$NFKC32ModeImpl::init$() {
}

void NormalizerBase$NFKC32ModeImpl::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$init($NormalizerBase$Unicode32);
	$assignStatic(NormalizerBase$NFKC32ModeImpl::INSTANCE, $new($NormalizerBase$ModeImpl, $$new($FilteredNormalizer2, $($Normalizer2::getNFKCInstance()), $NormalizerBase$Unicode32::INSTANCE)));
}

NormalizerBase$NFKC32ModeImpl::NormalizerBase$NFKC32ModeImpl() {
}

$Class* NormalizerBase$NFKC32ModeImpl::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"INSTANCE", "Ljdk/internal/icu/text/NormalizerBase$ModeImpl;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(NormalizerBase$NFKC32ModeImpl, INSTANCE)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(NormalizerBase$NFKC32ModeImpl, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.icu.text.NormalizerBase$NFKC32ModeImpl", "jdk.internal.icu.text.NormalizerBase", "NFKC32ModeImpl", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"jdk.internal.icu.text.NormalizerBase$NFKC32ModeImpl",
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
	$loadClass(NormalizerBase$NFKC32ModeImpl, name, initialize, &classInfo$$, NormalizerBase$NFKC32ModeImpl::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(NormalizerBase$NFKC32ModeImpl);
	});
	return class$;
}

$Class* NormalizerBase$NFKC32ModeImpl::class$ = nullptr;

			} // text
		} // icu
	} // internal
} // jdk