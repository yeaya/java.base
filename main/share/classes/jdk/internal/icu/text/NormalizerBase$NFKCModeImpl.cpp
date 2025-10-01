#include <jdk/internal/icu/text/NormalizerBase$NFKCModeImpl.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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

$FieldInfo _NormalizerBase$NFKCModeImpl_FieldInfo_[] = {
	{"INSTANCE", "Ljdk/internal/icu/text/NormalizerBase$ModeImpl;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(NormalizerBase$NFKCModeImpl, INSTANCE)},
	{}
};

$MethodInfo _NormalizerBase$NFKCModeImpl_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(NormalizerBase$NFKCModeImpl::*)()>(&NormalizerBase$NFKCModeImpl::init$))},
	{}
};

$InnerClassInfo _NormalizerBase$NFKCModeImpl_InnerClassesInfo_[] = {
	{"jdk.internal.icu.text.NormalizerBase$NFKCModeImpl", "jdk.internal.icu.text.NormalizerBase", "NFKCModeImpl", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _NormalizerBase$NFKCModeImpl_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"jdk.internal.icu.text.NormalizerBase$NFKCModeImpl",
	"java.lang.Object",
	nullptr,
	_NormalizerBase$NFKCModeImpl_FieldInfo_,
	_NormalizerBase$NFKCModeImpl_MethodInfo_,
	nullptr,
	nullptr,
	_NormalizerBase$NFKCModeImpl_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.icu.text.NormalizerBase"
};

$Object* allocate$NormalizerBase$NFKCModeImpl($Class* clazz) {
	return $of($alloc(NormalizerBase$NFKCModeImpl));
}

$NormalizerBase$ModeImpl* NormalizerBase$NFKCModeImpl::INSTANCE = nullptr;

void NormalizerBase$NFKCModeImpl::init$() {
}

void clinit$NormalizerBase$NFKCModeImpl($Class* class$) {
	$assignStatic(NormalizerBase$NFKCModeImpl::INSTANCE, $new($NormalizerBase$ModeImpl, $($Normalizer2::getNFKCInstance())));
}

NormalizerBase$NFKCModeImpl::NormalizerBase$NFKCModeImpl() {
}

$Class* NormalizerBase$NFKCModeImpl::load$($String* name, bool initialize) {
	$loadClass(NormalizerBase$NFKCModeImpl, name, initialize, &_NormalizerBase$NFKCModeImpl_ClassInfo_, clinit$NormalizerBase$NFKCModeImpl, allocate$NormalizerBase$NFKCModeImpl);
	return class$;
}

$Class* NormalizerBase$NFKCModeImpl::class$ = nullptr;

			} // text
		} // icu
	} // internal
} // jdk