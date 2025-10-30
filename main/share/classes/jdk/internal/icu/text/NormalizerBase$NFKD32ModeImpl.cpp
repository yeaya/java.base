#include <jdk/internal/icu/text/NormalizerBase$NFKD32ModeImpl.h>

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
using $NormalizerBase = ::jdk::internal::icu::text::NormalizerBase;
using $NormalizerBase$ModeImpl = ::jdk::internal::icu::text::NormalizerBase$ModeImpl;
using $NormalizerBase$Unicode32 = ::jdk::internal::icu::text::NormalizerBase$Unicode32;
using $UnicodeSet = ::jdk::internal::icu::text::UnicodeSet;

namespace jdk {
	namespace internal {
		namespace icu {
			namespace text {

$FieldInfo _NormalizerBase$NFKD32ModeImpl_FieldInfo_[] = {
	{"INSTANCE", "Ljdk/internal/icu/text/NormalizerBase$ModeImpl;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(NormalizerBase$NFKD32ModeImpl, INSTANCE)},
	{}
};

$MethodInfo _NormalizerBase$NFKD32ModeImpl_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(NormalizerBase$NFKD32ModeImpl::*)()>(&NormalizerBase$NFKD32ModeImpl::init$))},
	{}
};

$InnerClassInfo _NormalizerBase$NFKD32ModeImpl_InnerClassesInfo_[] = {
	{"jdk.internal.icu.text.NormalizerBase$NFKD32ModeImpl", "jdk.internal.icu.text.NormalizerBase", "NFKD32ModeImpl", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _NormalizerBase$NFKD32ModeImpl_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"jdk.internal.icu.text.NormalizerBase$NFKD32ModeImpl",
	"java.lang.Object",
	nullptr,
	_NormalizerBase$NFKD32ModeImpl_FieldInfo_,
	_NormalizerBase$NFKD32ModeImpl_MethodInfo_,
	nullptr,
	nullptr,
	_NormalizerBase$NFKD32ModeImpl_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.icu.text.NormalizerBase"
};

$Object* allocate$NormalizerBase$NFKD32ModeImpl($Class* clazz) {
	return $of($alloc(NormalizerBase$NFKD32ModeImpl));
}

$NormalizerBase$ModeImpl* NormalizerBase$NFKD32ModeImpl::INSTANCE = nullptr;

void NormalizerBase$NFKD32ModeImpl::init$() {
}

void clinit$NormalizerBase$NFKD32ModeImpl($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$init($NormalizerBase$Unicode32);
	$assignStatic(NormalizerBase$NFKD32ModeImpl::INSTANCE, $new($NormalizerBase$ModeImpl, $$new($FilteredNormalizer2, $($Normalizer2::getNFKDInstance()), $NormalizerBase$Unicode32::INSTANCE)));
}

NormalizerBase$NFKD32ModeImpl::NormalizerBase$NFKD32ModeImpl() {
}

$Class* NormalizerBase$NFKD32ModeImpl::load$($String* name, bool initialize) {
	$loadClass(NormalizerBase$NFKD32ModeImpl, name, initialize, &_NormalizerBase$NFKD32ModeImpl_ClassInfo_, clinit$NormalizerBase$NFKD32ModeImpl, allocate$NormalizerBase$NFKD32ModeImpl);
	return class$;
}

$Class* NormalizerBase$NFKD32ModeImpl::class$ = nullptr;

			} // text
		} // icu
	} // internal
} // jdk