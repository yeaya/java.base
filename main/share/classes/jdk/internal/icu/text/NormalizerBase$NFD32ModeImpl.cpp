#include <jdk/internal/icu/text/NormalizerBase$NFD32ModeImpl.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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

$FieldInfo _NormalizerBase$NFD32ModeImpl_FieldInfo_[] = {
	{"INSTANCE", "Ljdk/internal/icu/text/NormalizerBase$ModeImpl;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(NormalizerBase$NFD32ModeImpl, INSTANCE)},
	{}
};

$MethodInfo _NormalizerBase$NFD32ModeImpl_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(NormalizerBase$NFD32ModeImpl::*)()>(&NormalizerBase$NFD32ModeImpl::init$))},
	{}
};

$InnerClassInfo _NormalizerBase$NFD32ModeImpl_InnerClassesInfo_[] = {
	{"jdk.internal.icu.text.NormalizerBase$NFD32ModeImpl", "jdk.internal.icu.text.NormalizerBase", "NFD32ModeImpl", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _NormalizerBase$NFD32ModeImpl_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"jdk.internal.icu.text.NormalizerBase$NFD32ModeImpl",
	"java.lang.Object",
	nullptr,
	_NormalizerBase$NFD32ModeImpl_FieldInfo_,
	_NormalizerBase$NFD32ModeImpl_MethodInfo_,
	nullptr,
	nullptr,
	_NormalizerBase$NFD32ModeImpl_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.icu.text.NormalizerBase"
};

$Object* allocate$NormalizerBase$NFD32ModeImpl($Class* clazz) {
	return $of($alloc(NormalizerBase$NFD32ModeImpl));
}

$NormalizerBase$ModeImpl* NormalizerBase$NFD32ModeImpl::INSTANCE = nullptr;

void NormalizerBase$NFD32ModeImpl::init$() {
}

void clinit$NormalizerBase$NFD32ModeImpl($Class* class$) {
	$init($NormalizerBase$Unicode32);
	$assignStatic(NormalizerBase$NFD32ModeImpl::INSTANCE, $new($NormalizerBase$ModeImpl, $$new($FilteredNormalizer2, $($Normalizer2::getNFDInstance()), $NormalizerBase$Unicode32::INSTANCE)));
}

NormalizerBase$NFD32ModeImpl::NormalizerBase$NFD32ModeImpl() {
}

$Class* NormalizerBase$NFD32ModeImpl::load$($String* name, bool initialize) {
	$loadClass(NormalizerBase$NFD32ModeImpl, name, initialize, &_NormalizerBase$NFD32ModeImpl_ClassInfo_, clinit$NormalizerBase$NFD32ModeImpl, allocate$NormalizerBase$NFD32ModeImpl);
	return class$;
}

$Class* NormalizerBase$NFD32ModeImpl::class$ = nullptr;

			} // text
		} // icu
	} // internal
} // jdk