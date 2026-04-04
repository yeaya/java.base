#include <jdk/internal/icu/text/NormalizerBase$Mode.h>
#include <jdk/internal/icu/text/Normalizer2.h>
#include <jdk/internal/icu/text/NormalizerBase.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Normalizer2 = ::jdk::internal::icu::text::Normalizer2;

namespace jdk {
	namespace internal {
		namespace icu {
			namespace text {

void NormalizerBase$Mode::init$() {
}

NormalizerBase$Mode::NormalizerBase$Mode() {
}

$Class* NormalizerBase$Mode::load$($String* name, bool initialize) {
	$CompoundAttribute init$methodAnnotations$$[] = {
		{"Ljava/lang/Deprecated;", nullptr},
		{}
	};
	$CompoundAttribute getNormalizer2methodAnnotations$$[] = {
		{"Ljava/lang/Deprecated;", nullptr},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PROTECTED | $DEPRECATED, $method(NormalizerBase$Mode, init$, void), nullptr, nullptr, init$methodAnnotations$$},
		{"getNormalizer2", "(I)Ljdk/internal/icu/text/Normalizer2;", nullptr, $PROTECTED | $ABSTRACT | $DEPRECATED, $virtualMethod(NormalizerBase$Mode, getNormalizer2, $Normalizer2*, int32_t), nullptr, nullptr, getNormalizer2methodAnnotations$$},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.icu.text.NormalizerBase$Mode", "jdk.internal.icu.text.NormalizerBase", "Mode", $PUBLIC | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"jdk.internal.icu.text.NormalizerBase$Mode",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.icu.text.NormalizerBase"
	};
	$loadClass(NormalizerBase$Mode, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(NormalizerBase$Mode);
	});
	return class$;
}

$Class* NormalizerBase$Mode::class$ = nullptr;

			} // text
		} // icu
	} // internal
} // jdk