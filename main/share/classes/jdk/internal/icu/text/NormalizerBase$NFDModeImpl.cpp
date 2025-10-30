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
using $NormalizerBase = ::jdk::internal::icu::text::NormalizerBase;
using $NormalizerBase$ModeImpl = ::jdk::internal::icu::text::NormalizerBase$ModeImpl;

namespace jdk {
	namespace internal {
		namespace icu {
			namespace text {

$FieldInfo _NormalizerBase$NFDModeImpl_FieldInfo_[] = {
	{"INSTANCE", "Ljdk/internal/icu/text/NormalizerBase$ModeImpl;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(NormalizerBase$NFDModeImpl, INSTANCE)},
	{}
};

$MethodInfo _NormalizerBase$NFDModeImpl_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(NormalizerBase$NFDModeImpl::*)()>(&NormalizerBase$NFDModeImpl::init$))},
	{}
};

$InnerClassInfo _NormalizerBase$NFDModeImpl_InnerClassesInfo_[] = {
	{"jdk.internal.icu.text.NormalizerBase$NFDModeImpl", "jdk.internal.icu.text.NormalizerBase", "NFDModeImpl", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _NormalizerBase$NFDModeImpl_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"jdk.internal.icu.text.NormalizerBase$NFDModeImpl",
	"java.lang.Object",
	nullptr,
	_NormalizerBase$NFDModeImpl_FieldInfo_,
	_NormalizerBase$NFDModeImpl_MethodInfo_,
	nullptr,
	nullptr,
	_NormalizerBase$NFDModeImpl_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.icu.text.NormalizerBase"
};

$Object* allocate$NormalizerBase$NFDModeImpl($Class* clazz) {
	return $of($alloc(NormalizerBase$NFDModeImpl));
}

$NormalizerBase$ModeImpl* NormalizerBase$NFDModeImpl::INSTANCE = nullptr;

void NormalizerBase$NFDModeImpl::init$() {
}

void clinit$NormalizerBase$NFDModeImpl($Class* class$) {
	$assignStatic(NormalizerBase$NFDModeImpl::INSTANCE, $new($NormalizerBase$ModeImpl, $($Normalizer2::getNFDInstance())));
}

NormalizerBase$NFDModeImpl::NormalizerBase$NFDModeImpl() {
}

$Class* NormalizerBase$NFDModeImpl::load$($String* name, bool initialize) {
	$loadClass(NormalizerBase$NFDModeImpl, name, initialize, &_NormalizerBase$NFDModeImpl_ClassInfo_, clinit$NormalizerBase$NFDModeImpl, allocate$NormalizerBase$NFDModeImpl);
	return class$;
}

$Class* NormalizerBase$NFDModeImpl::class$ = nullptr;

			} // text
		} // icu
	} // internal
} // jdk