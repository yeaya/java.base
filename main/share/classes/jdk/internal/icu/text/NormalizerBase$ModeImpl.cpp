#include <jdk/internal/icu/text/NormalizerBase$ModeImpl.h>
#include <jdk/internal/icu/text/Normalizer2.h>
#include <jdk/internal/icu/text/NormalizerBase.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Normalizer2 = ::jdk::internal::icu::text::Normalizer2;

namespace jdk {
	namespace internal {
		namespace icu {
			namespace text {

void NormalizerBase$ModeImpl::init$($Normalizer2* n2) {
	$set(this, normalizer2, n2);
}

NormalizerBase$ModeImpl::NormalizerBase$ModeImpl() {
}

$Class* NormalizerBase$ModeImpl::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"normalizer2", "Ljdk/internal/icu/text/Normalizer2;", nullptr, $PRIVATE | $FINAL, $field(NormalizerBase$ModeImpl, normalizer2)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljdk/internal/icu/text/Normalizer2;)V", nullptr, $PRIVATE, $method(NormalizerBase$ModeImpl, init$, void, $Normalizer2*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.icu.text.NormalizerBase$ModeImpl", "jdk.internal.icu.text.NormalizerBase", "ModeImpl", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"jdk.internal.icu.text.NormalizerBase$ModeImpl",
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
	$loadClass(NormalizerBase$ModeImpl, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(NormalizerBase$ModeImpl);
	});
	return class$;
}

$Class* NormalizerBase$ModeImpl::class$ = nullptr;

			} // text
		} // icu
	} // internal
} // jdk