#include <jdk/internal/icu/text/NormalizerBase$NFKDModeImpl.h>

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

$FieldInfo _NormalizerBase$NFKDModeImpl_FieldInfo_[] = {
	{"INSTANCE", "Ljdk/internal/icu/text/NormalizerBase$ModeImpl;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(NormalizerBase$NFKDModeImpl, INSTANCE)},
	{}
};

$MethodInfo _NormalizerBase$NFKDModeImpl_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(NormalizerBase$NFKDModeImpl, init$, void)},
	{}
};

$InnerClassInfo _NormalizerBase$NFKDModeImpl_InnerClassesInfo_[] = {
	{"jdk.internal.icu.text.NormalizerBase$NFKDModeImpl", "jdk.internal.icu.text.NormalizerBase", "NFKDModeImpl", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _NormalizerBase$NFKDModeImpl_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"jdk.internal.icu.text.NormalizerBase$NFKDModeImpl",
	"java.lang.Object",
	nullptr,
	_NormalizerBase$NFKDModeImpl_FieldInfo_,
	_NormalizerBase$NFKDModeImpl_MethodInfo_,
	nullptr,
	nullptr,
	_NormalizerBase$NFKDModeImpl_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.icu.text.NormalizerBase"
};

$Object* allocate$NormalizerBase$NFKDModeImpl($Class* clazz) {
	return $of($alloc(NormalizerBase$NFKDModeImpl));
}

$NormalizerBase$ModeImpl* NormalizerBase$NFKDModeImpl::INSTANCE = nullptr;

void NormalizerBase$NFKDModeImpl::init$() {
}

void clinit$NormalizerBase$NFKDModeImpl($Class* class$) {
	$assignStatic(NormalizerBase$NFKDModeImpl::INSTANCE, $new($NormalizerBase$ModeImpl, $($Normalizer2::getNFKDInstance())));
}

NormalizerBase$NFKDModeImpl::NormalizerBase$NFKDModeImpl() {
}

$Class* NormalizerBase$NFKDModeImpl::load$($String* name, bool initialize) {
	$loadClass(NormalizerBase$NFKDModeImpl, name, initialize, &_NormalizerBase$NFKDModeImpl_ClassInfo_, clinit$NormalizerBase$NFKDModeImpl, allocate$NormalizerBase$NFKDModeImpl);
	return class$;
}

$Class* NormalizerBase$NFKDModeImpl::class$ = nullptr;

			} // text
		} // icu
	} // internal
} // jdk