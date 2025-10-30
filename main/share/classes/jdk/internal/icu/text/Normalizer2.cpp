#include <jdk/internal/icu/text/Normalizer2.h>

#include <java/lang/Appendable.h>
#include <java/lang/CharSequence.h>
#include <jdk/internal/icu/impl/Norm2AllModes$ComposeNormalizer2.h>
#include <jdk/internal/icu/impl/Norm2AllModes$DecomposeNormalizer2.h>
#include <jdk/internal/icu/impl/Norm2AllModes$Normalizer2WithImpl.h>
#include <jdk/internal/icu/impl/Norm2AllModes.h>
#include <jcpp.h>

using $Appendable = ::java::lang::Appendable;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Norm2AllModes = ::jdk::internal::icu::impl::Norm2AllModes;
using $Norm2AllModes$ComposeNormalizer2 = ::jdk::internal::icu::impl::Norm2AllModes$ComposeNormalizer2;
using $Norm2AllModes$DecomposeNormalizer2 = ::jdk::internal::icu::impl::Norm2AllModes$DecomposeNormalizer2;
using $Norm2AllModes$Normalizer2WithImpl = ::jdk::internal::icu::impl::Norm2AllModes$Normalizer2WithImpl;

namespace jdk {
	namespace internal {
		namespace icu {
			namespace text {

$MethodInfo _Normalizer2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(Normalizer2::*)()>(&Normalizer2::init$))},
	{"append", "(Ljava/lang/StringBuilder;Ljava/lang/CharSequence;)Ljava/lang/StringBuilder;", nullptr, $PUBLIC | $ABSTRACT},
	{"getCombiningClass", "(I)I", nullptr, $PUBLIC},
	{"getDecomposition", "(I)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getNFCInstance", "()Ljdk/internal/icu/text/Normalizer2;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Normalizer2*(*)()>(&Normalizer2::getNFCInstance))},
	{"getNFDInstance", "()Ljdk/internal/icu/text/Normalizer2;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Normalizer2*(*)()>(&Normalizer2::getNFDInstance))},
	{"getNFKCInstance", "()Ljdk/internal/icu/text/Normalizer2;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Normalizer2*(*)()>(&Normalizer2::getNFKCInstance))},
	{"getNFKDInstance", "()Ljdk/internal/icu/text/Normalizer2;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Normalizer2*(*)()>(&Normalizer2::getNFKDInstance))},
	{"hasBoundaryBefore", "(I)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"isNormalized", "(Ljava/lang/CharSequence;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"normalize", "(Ljava/lang/CharSequence;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"normalize", "(Ljava/lang/CharSequence;Ljava/lang/StringBuilder;)Ljava/lang/StringBuilder;", nullptr, $PUBLIC | $ABSTRACT},
	{"normalize", "(Ljava/lang/CharSequence;Ljava/lang/Appendable;)Ljava/lang/Appendable;", nullptr, $PUBLIC | $ABSTRACT},
	{"normalizeSecondAndAppend", "(Ljava/lang/StringBuilder;Ljava/lang/CharSequence;)Ljava/lang/StringBuilder;", nullptr, $PUBLIC | $ABSTRACT},
	{"spanQuickCheckYes", "(Ljava/lang/CharSequence;)I", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _Normalizer2_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"jdk.internal.icu.text.Normalizer2",
	"java.lang.Object",
	nullptr,
	nullptr,
	_Normalizer2_MethodInfo_
};

$Object* allocate$Normalizer2($Class* clazz) {
	return $of($alloc(Normalizer2));
}

Normalizer2* Normalizer2::getNFCInstance() {
	return $nc($($Norm2AllModes::getNFCInstance()))->comp;
}

Normalizer2* Normalizer2::getNFDInstance() {
	return $nc($($Norm2AllModes::getNFCInstance()))->decomp;
}

Normalizer2* Normalizer2::getNFKCInstance() {
	return $nc($($Norm2AllModes::getNFKCInstance()))->comp;
}

Normalizer2* Normalizer2::getNFKDInstance() {
	return $nc($($Norm2AllModes::getNFKCInstance()))->decomp;
}

$String* Normalizer2::normalize($CharSequence* src) {
	$useLocalCurrentObjectStackCache();
	if ($instanceOf($String, src)) {
		int32_t spanLength = spanQuickCheckYes(src);
		if (spanLength == $nc(src)->length()) {
			return $cast($String, src);
		}
		if (spanLength != 0) {
			$var($StringBuilder, sb, $$new($StringBuilder, $nc(src)->length())->append(src, 0, spanLength));
			return $nc($(normalizeSecondAndAppend(sb, $($nc(src)->subSequence(spanLength, src->length())))))->toString();
		}
	}
	return $nc($(normalize(src, $$new($StringBuilder, $nc(src)->length()))))->toString();
}

int32_t Normalizer2::getCombiningClass(int32_t c) {
	return 0;
}

void Normalizer2::init$() {
}

Normalizer2::Normalizer2() {
}

$Class* Normalizer2::load$($String* name, bool initialize) {
	$loadClass(Normalizer2, name, initialize, &_Normalizer2_ClassInfo_, allocate$Normalizer2);
	return class$;
}

$Class* Normalizer2::class$ = nullptr;

			} // text
		} // icu
	} // internal
} // jdk