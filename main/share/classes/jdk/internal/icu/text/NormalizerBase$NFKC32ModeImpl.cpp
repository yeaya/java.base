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

$FieldInfo _NormalizerBase$NFKC32ModeImpl_FieldInfo_[] = {
	{"INSTANCE", "Ljdk/internal/icu/text/NormalizerBase$ModeImpl;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(NormalizerBase$NFKC32ModeImpl, INSTANCE)},
	{}
};

$MethodInfo _NormalizerBase$NFKC32ModeImpl_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(NormalizerBase$NFKC32ModeImpl::*)()>(&NormalizerBase$NFKC32ModeImpl::init$))},
	{}
};

$InnerClassInfo _NormalizerBase$NFKC32ModeImpl_InnerClassesInfo_[] = {
	{"jdk.internal.icu.text.NormalizerBase$NFKC32ModeImpl", "jdk.internal.icu.text.NormalizerBase", "NFKC32ModeImpl", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _NormalizerBase$NFKC32ModeImpl_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"jdk.internal.icu.text.NormalizerBase$NFKC32ModeImpl",
	"java.lang.Object",
	nullptr,
	_NormalizerBase$NFKC32ModeImpl_FieldInfo_,
	_NormalizerBase$NFKC32ModeImpl_MethodInfo_,
	nullptr,
	nullptr,
	_NormalizerBase$NFKC32ModeImpl_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.icu.text.NormalizerBase"
};

$Object* allocate$NormalizerBase$NFKC32ModeImpl($Class* clazz) {
	return $of($alloc(NormalizerBase$NFKC32ModeImpl));
}

$NormalizerBase$ModeImpl* NormalizerBase$NFKC32ModeImpl::INSTANCE = nullptr;

void NormalizerBase$NFKC32ModeImpl::init$() {
}

void clinit$NormalizerBase$NFKC32ModeImpl($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$init($NormalizerBase$Unicode32);
	$assignStatic(NormalizerBase$NFKC32ModeImpl::INSTANCE, $new($NormalizerBase$ModeImpl, $$new($FilteredNormalizer2, $($Normalizer2::getNFKCInstance()), $NormalizerBase$Unicode32::INSTANCE)));
}

NormalizerBase$NFKC32ModeImpl::NormalizerBase$NFKC32ModeImpl() {
}

$Class* NormalizerBase$NFKC32ModeImpl::load$($String* name, bool initialize) {
	$loadClass(NormalizerBase$NFKC32ModeImpl, name, initialize, &_NormalizerBase$NFKC32ModeImpl_ClassInfo_, clinit$NormalizerBase$NFKC32ModeImpl, allocate$NormalizerBase$NFKC32ModeImpl);
	return class$;
}

$Class* NormalizerBase$NFKC32ModeImpl::class$ = nullptr;

			} // text
		} // icu
	} // internal
} // jdk