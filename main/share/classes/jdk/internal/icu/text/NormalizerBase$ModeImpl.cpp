#include <jdk/internal/icu/text/NormalizerBase$ModeImpl.h>

#include <jdk/internal/icu/text/Normalizer2.h>
#include <jdk/internal/icu/text/NormalizerBase.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Normalizer2 = ::jdk::internal::icu::text::Normalizer2;
using $NormalizerBase = ::jdk::internal::icu::text::NormalizerBase;

namespace jdk {
	namespace internal {
		namespace icu {
			namespace text {

$FieldInfo _NormalizerBase$ModeImpl_FieldInfo_[] = {
	{"normalizer2", "Ljdk/internal/icu/text/Normalizer2;", nullptr, $PRIVATE | $FINAL, $field(NormalizerBase$ModeImpl, normalizer2)},
	{}
};

$MethodInfo _NormalizerBase$ModeImpl_MethodInfo_[] = {
	{"<init>", "(Ljdk/internal/icu/text/Normalizer2;)V", nullptr, $PRIVATE, $method(static_cast<void(NormalizerBase$ModeImpl::*)($Normalizer2*)>(&NormalizerBase$ModeImpl::init$))},
	{}
};

$InnerClassInfo _NormalizerBase$ModeImpl_InnerClassesInfo_[] = {
	{"jdk.internal.icu.text.NormalizerBase$ModeImpl", "jdk.internal.icu.text.NormalizerBase", "ModeImpl", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _NormalizerBase$ModeImpl_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"jdk.internal.icu.text.NormalizerBase$ModeImpl",
	"java.lang.Object",
	nullptr,
	_NormalizerBase$ModeImpl_FieldInfo_,
	_NormalizerBase$ModeImpl_MethodInfo_,
	nullptr,
	nullptr,
	_NormalizerBase$ModeImpl_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.icu.text.NormalizerBase"
};

$Object* allocate$NormalizerBase$ModeImpl($Class* clazz) {
	return $of($alloc(NormalizerBase$ModeImpl));
}

void NormalizerBase$ModeImpl::init$($Normalizer2* n2) {
	$set(this, normalizer2, n2);
}

NormalizerBase$ModeImpl::NormalizerBase$ModeImpl() {
}

$Class* NormalizerBase$ModeImpl::load$($String* name, bool initialize) {
	$loadClass(NormalizerBase$ModeImpl, name, initialize, &_NormalizerBase$ModeImpl_ClassInfo_, allocate$NormalizerBase$ModeImpl);
	return class$;
}

$Class* NormalizerBase$ModeImpl::class$ = nullptr;

			} // text
		} // icu
	} // internal
} // jdk