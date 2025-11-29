#include <jdk/internal/icu/impl/Norm2AllModes$DecomposeNormalizer2.h>

#include <java/lang/CharSequence.h>
#include <jdk/internal/icu/impl/Norm2AllModes$Normalizer2WithImpl.h>
#include <jdk/internal/icu/impl/Norm2AllModes.h>
#include <jdk/internal/icu/impl/NormalizerImpl$ReorderingBuffer.h>
#include <jdk/internal/icu/impl/NormalizerImpl.h>
#include <jcpp.h>

using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Norm2AllModes$Normalizer2WithImpl = ::jdk::internal::icu::impl::Norm2AllModes$Normalizer2WithImpl;
using $NormalizerImpl = ::jdk::internal::icu::impl::NormalizerImpl;
using $NormalizerImpl$ReorderingBuffer = ::jdk::internal::icu::impl::NormalizerImpl$ReorderingBuffer;

namespace jdk {
	namespace internal {
		namespace icu {
			namespace impl {

$MethodInfo _Norm2AllModes$DecomposeNormalizer2_MethodInfo_[] = {
	{"<init>", "(Ljdk/internal/icu/impl/NormalizerImpl;)V", nullptr, $PUBLIC, $method(static_cast<void(Norm2AllModes$DecomposeNormalizer2::*)($NormalizerImpl*)>(&Norm2AllModes$DecomposeNormalizer2::init$))},
	{"hasBoundaryBefore", "(I)Z", nullptr, $PUBLIC},
	{"normalize", "(Ljava/lang/CharSequence;Ljdk/internal/icu/impl/NormalizerImpl$ReorderingBuffer;)V", nullptr, $PROTECTED},
	{"normalizeAndAppend", "(Ljava/lang/CharSequence;ZLjdk/internal/icu/impl/NormalizerImpl$ReorderingBuffer;)V", nullptr, $PROTECTED},
	{"spanQuickCheckYes", "(Ljava/lang/CharSequence;)I", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Norm2AllModes$DecomposeNormalizer2_InnerClassesInfo_[] = {
	{"jdk.internal.icu.impl.Norm2AllModes$DecomposeNormalizer2", "jdk.internal.icu.impl.Norm2AllModes", "DecomposeNormalizer2", $PUBLIC | $STATIC | $FINAL},
	{"jdk.internal.icu.impl.Norm2AllModes$Normalizer2WithImpl", "jdk.internal.icu.impl.Norm2AllModes", "Normalizer2WithImpl", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _Norm2AllModes$DecomposeNormalizer2_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"jdk.internal.icu.impl.Norm2AllModes$DecomposeNormalizer2",
	"jdk.internal.icu.impl.Norm2AllModes$Normalizer2WithImpl",
	nullptr,
	nullptr,
	_Norm2AllModes$DecomposeNormalizer2_MethodInfo_,
	nullptr,
	nullptr,
	_Norm2AllModes$DecomposeNormalizer2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.icu.impl.Norm2AllModes"
};

$Object* allocate$Norm2AllModes$DecomposeNormalizer2($Class* clazz) {
	return $of($alloc(Norm2AllModes$DecomposeNormalizer2));
}

void Norm2AllModes$DecomposeNormalizer2::init$($NormalizerImpl* ni) {
	$Norm2AllModes$Normalizer2WithImpl::init$(ni);
}

void Norm2AllModes$DecomposeNormalizer2::normalize($CharSequence* src, $NormalizerImpl$ReorderingBuffer* buffer) {
	$nc(this->impl)->decompose(src, 0, $nc(src)->length(), buffer);
}

void Norm2AllModes$DecomposeNormalizer2::normalizeAndAppend($CharSequence* src, bool doNormalize, $NormalizerImpl$ReorderingBuffer* buffer) {
	$nc(this->impl)->decomposeAndAppend(src, doNormalize, buffer);
}

int32_t Norm2AllModes$DecomposeNormalizer2::spanQuickCheckYes($CharSequence* s) {
	return $nc(this->impl)->decompose(s, 0, $nc(s)->length(), nullptr);
}

bool Norm2AllModes$DecomposeNormalizer2::hasBoundaryBefore(int32_t c) {
	return $nc(this->impl)->hasDecompBoundaryBefore(c);
}

Norm2AllModes$DecomposeNormalizer2::Norm2AllModes$DecomposeNormalizer2() {
}

$Class* Norm2AllModes$DecomposeNormalizer2::load$($String* name, bool initialize) {
	$loadClass(Norm2AllModes$DecomposeNormalizer2, name, initialize, &_Norm2AllModes$DecomposeNormalizer2_ClassInfo_, allocate$Norm2AllModes$DecomposeNormalizer2);
	return class$;
}

$Class* Norm2AllModes$DecomposeNormalizer2::class$ = nullptr;

			} // impl
		} // icu
	} // internal
} // jdk