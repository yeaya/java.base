#include <jdk/internal/icu/text/NormalizerBase$NFC32ModeImpl.h>

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

$FieldInfo _NormalizerBase$NFC32ModeImpl_FieldInfo_[] = {
	{"INSTANCE", "Ljdk/internal/icu/text/NormalizerBase$ModeImpl;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(NormalizerBase$NFC32ModeImpl, INSTANCE)},
	{}
};

$MethodInfo _NormalizerBase$NFC32ModeImpl_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(NormalizerBase$NFC32ModeImpl::*)()>(&NormalizerBase$NFC32ModeImpl::init$))},
	{}
};

$InnerClassInfo _NormalizerBase$NFC32ModeImpl_InnerClassesInfo_[] = {
	{"jdk.internal.icu.text.NormalizerBase$NFC32ModeImpl", "jdk.internal.icu.text.NormalizerBase", "NFC32ModeImpl", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _NormalizerBase$NFC32ModeImpl_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"jdk.internal.icu.text.NormalizerBase$NFC32ModeImpl",
	"java.lang.Object",
	nullptr,
	_NormalizerBase$NFC32ModeImpl_FieldInfo_,
	_NormalizerBase$NFC32ModeImpl_MethodInfo_,
	nullptr,
	nullptr,
	_NormalizerBase$NFC32ModeImpl_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.icu.text.NormalizerBase"
};

$Object* allocate$NormalizerBase$NFC32ModeImpl($Class* clazz) {
	return $of($alloc(NormalizerBase$NFC32ModeImpl));
}

$NormalizerBase$ModeImpl* NormalizerBase$NFC32ModeImpl::INSTANCE = nullptr;

void NormalizerBase$NFC32ModeImpl::init$() {
}

void clinit$NormalizerBase$NFC32ModeImpl($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$init($NormalizerBase$Unicode32);
	$assignStatic(NormalizerBase$NFC32ModeImpl::INSTANCE, $new($NormalizerBase$ModeImpl, $$new($FilteredNormalizer2, $($Normalizer2::getNFCInstance()), $NormalizerBase$Unicode32::INSTANCE)));
}

NormalizerBase$NFC32ModeImpl::NormalizerBase$NFC32ModeImpl() {
}

$Class* NormalizerBase$NFC32ModeImpl::load$($String* name, bool initialize) {
	$loadClass(NormalizerBase$NFC32ModeImpl, name, initialize, &_NormalizerBase$NFC32ModeImpl_ClassInfo_, clinit$NormalizerBase$NFC32ModeImpl, allocate$NormalizerBase$NFC32ModeImpl);
	return class$;
}

$Class* NormalizerBase$NFC32ModeImpl::class$ = nullptr;

			} // text
		} // icu
	} // internal
} // jdk