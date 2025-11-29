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

$FieldInfo _NormalizerBase$NFCModeImpl_FieldInfo_[] = {
	{"INSTANCE", "Ljdk/internal/icu/text/NormalizerBase$ModeImpl;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(NormalizerBase$NFCModeImpl, INSTANCE)},
	{}
};

$MethodInfo _NormalizerBase$NFCModeImpl_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(NormalizerBase$NFCModeImpl::*)()>(&NormalizerBase$NFCModeImpl::init$))},
	{}
};

$InnerClassInfo _NormalizerBase$NFCModeImpl_InnerClassesInfo_[] = {
	{"jdk.internal.icu.text.NormalizerBase$NFCModeImpl", "jdk.internal.icu.text.NormalizerBase", "NFCModeImpl", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _NormalizerBase$NFCModeImpl_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"jdk.internal.icu.text.NormalizerBase$NFCModeImpl",
	"java.lang.Object",
	nullptr,
	_NormalizerBase$NFCModeImpl_FieldInfo_,
	_NormalizerBase$NFCModeImpl_MethodInfo_,
	nullptr,
	nullptr,
	_NormalizerBase$NFCModeImpl_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.icu.text.NormalizerBase"
};

$Object* allocate$NormalizerBase$NFCModeImpl($Class* clazz) {
	return $of($alloc(NormalizerBase$NFCModeImpl));
}

$NormalizerBase$ModeImpl* NormalizerBase$NFCModeImpl::INSTANCE = nullptr;

void NormalizerBase$NFCModeImpl::init$() {
}

void clinit$NormalizerBase$NFCModeImpl($Class* class$) {
	$assignStatic(NormalizerBase$NFCModeImpl::INSTANCE, $new($NormalizerBase$ModeImpl, $($Normalizer2::getNFCInstance())));
}

NormalizerBase$NFCModeImpl::NormalizerBase$NFCModeImpl() {
}

$Class* NormalizerBase$NFCModeImpl::load$($String* name, bool initialize) {
	$loadClass(NormalizerBase$NFCModeImpl, name, initialize, &_NormalizerBase$NFCModeImpl_ClassInfo_, clinit$NormalizerBase$NFCModeImpl, allocate$NormalizerBase$NFCModeImpl);
	return class$;
}

$Class* NormalizerBase$NFCModeImpl::class$ = nullptr;

			} // text
		} // icu
	} // internal
} // jdk