#include <jdk/internal/icu/text/NormalizerBase$NFCModeImpl.h>
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

$NormalizerBase$ModeImpl* NormalizerBase$NFCModeImpl::INSTANCE = nullptr;

void NormalizerBase$NFCModeImpl::init$() {
}

void NormalizerBase$NFCModeImpl::clinit$($Class* clazz) {
	$assignStatic(NormalizerBase$NFCModeImpl::INSTANCE, $new($NormalizerBase$ModeImpl, $($Normalizer2::getNFCInstance())));
}

NormalizerBase$NFCModeImpl::NormalizerBase$NFCModeImpl() {
}

$Class* NormalizerBase$NFCModeImpl::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"INSTANCE", "Ljdk/internal/icu/text/NormalizerBase$ModeImpl;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(NormalizerBase$NFCModeImpl, INSTANCE)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(NormalizerBase$NFCModeImpl, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.icu.text.NormalizerBase$NFCModeImpl", "jdk.internal.icu.text.NormalizerBase", "NFCModeImpl", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"jdk.internal.icu.text.NormalizerBase$NFCModeImpl",
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
	$loadClass(NormalizerBase$NFCModeImpl, name, initialize, &classInfo$$, NormalizerBase$NFCModeImpl::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(NormalizerBase$NFCModeImpl);
	});
	return class$;
}

$Class* NormalizerBase$NFCModeImpl::class$ = nullptr;

			} // text
		} // icu
	} // internal
} // jdk