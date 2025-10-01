#include <jdk/internal/icu/impl/Norm2AllModes$Normalizer2WithImpl.h>

#include <java/lang/AbstractStringBuilder.h>
#include <java/lang/Appendable.h>
#include <java/lang/CharSequence.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/StringBuilder.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jdk/internal/icu/impl/Norm2AllModes.h>
#include <jdk/internal/icu/impl/NormalizerImpl$ReorderingBuffer.h>
#include <jdk/internal/icu/impl/NormalizerImpl.h>
#include <jdk/internal/icu/text/Normalizer2.h>
#include <jcpp.h>

using $AbstractStringBuilder = ::java::lang::AbstractStringBuilder;
using $Appendable = ::java::lang::Appendable;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Norm2AllModes = ::jdk::internal::icu::impl::Norm2AllModes;
using $NormalizerImpl = ::jdk::internal::icu::impl::NormalizerImpl;
using $NormalizerImpl$ReorderingBuffer = ::jdk::internal::icu::impl::NormalizerImpl$ReorderingBuffer;
using $Normalizer2 = ::jdk::internal::icu::text::Normalizer2;

namespace jdk {
	namespace internal {
		namespace icu {
			namespace impl {

$FieldInfo _Norm2AllModes$Normalizer2WithImpl_FieldInfo_[] = {
	{"impl", "Ljdk/internal/icu/impl/NormalizerImpl;", nullptr, $PUBLIC | $FINAL, $field(Norm2AllModes$Normalizer2WithImpl, impl)},
	{}
};

$MethodInfo _Norm2AllModes$Normalizer2WithImpl_MethodInfo_[] = {
	{"<init>", "(Ljdk/internal/icu/impl/NormalizerImpl;)V", nullptr, $PUBLIC, $method(static_cast<void(Norm2AllModes$Normalizer2WithImpl::*)($NormalizerImpl*)>(&Norm2AllModes$Normalizer2WithImpl::init$))},
	{"append", "(Ljava/lang/StringBuilder;Ljava/lang/CharSequence;)Ljava/lang/StringBuilder;", nullptr, $PUBLIC},
	{"getCombiningClass", "(I)I", nullptr, $PUBLIC},
	{"getDecomposition", "(I)Ljava/lang/String;", nullptr, $PUBLIC},
	{"isNormalized", "(Ljava/lang/CharSequence;)Z", nullptr, $PUBLIC},
	{"normalize", "(Ljava/lang/CharSequence;Ljava/lang/StringBuilder;)Ljava/lang/StringBuilder;", nullptr, $PUBLIC},
	{"normalize", "(Ljava/lang/CharSequence;Ljava/lang/Appendable;)Ljava/lang/Appendable;", nullptr, $PUBLIC},
	{"normalize", "(Ljava/lang/CharSequence;Ljdk/internal/icu/impl/NormalizerImpl$ReorderingBuffer;)V", nullptr, $PROTECTED | $ABSTRACT},
	{"normalizeAndAppend", "(Ljava/lang/CharSequence;ZLjdk/internal/icu/impl/NormalizerImpl$ReorderingBuffer;)V", nullptr, $PROTECTED | $ABSTRACT},
	{"normalizeSecondAndAppend", "(Ljava/lang/StringBuilder;Ljava/lang/CharSequence;)Ljava/lang/StringBuilder;", nullptr, $PUBLIC},
	{"normalizeSecondAndAppend", "(Ljava/lang/StringBuilder;Ljava/lang/CharSequence;Z)Ljava/lang/StringBuilder;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Norm2AllModes$Normalizer2WithImpl_InnerClassesInfo_[] = {
	{"jdk.internal.icu.impl.Norm2AllModes$Normalizer2WithImpl", "jdk.internal.icu.impl.Norm2AllModes", "Normalizer2WithImpl", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _Norm2AllModes$Normalizer2WithImpl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"jdk.internal.icu.impl.Norm2AllModes$Normalizer2WithImpl",
	"jdk.internal.icu.text.Normalizer2",
	nullptr,
	_Norm2AllModes$Normalizer2WithImpl_FieldInfo_,
	_Norm2AllModes$Normalizer2WithImpl_MethodInfo_,
	nullptr,
	nullptr,
	_Norm2AllModes$Normalizer2WithImpl_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.icu.impl.Norm2AllModes"
};

$Object* allocate$Norm2AllModes$Normalizer2WithImpl($Class* clazz) {
	return $of($alloc(Norm2AllModes$Normalizer2WithImpl));
}

void Norm2AllModes$Normalizer2WithImpl::init$($NormalizerImpl* ni) {
	$Normalizer2::init$();
	$set(this, impl, ni);
}

$StringBuilder* Norm2AllModes$Normalizer2WithImpl::normalize($CharSequence* src, $StringBuilder* dest) {
	if ($equals(dest, src)) {
		$throwNew($IllegalArgumentException);
	}
	$nc(dest)->setLength(0);
	normalize(src, $$new($NormalizerImpl$ReorderingBuffer, this->impl, dest, $nc(src)->length()));
	return dest;
}

$Appendable* Norm2AllModes$Normalizer2WithImpl::normalize($CharSequence* src, $Appendable* dest) {
	if ($equals(dest, src)) {
		$throwNew($IllegalArgumentException);
	}
	$var($NormalizerImpl$ReorderingBuffer, buffer, $new($NormalizerImpl$ReorderingBuffer, this->impl, dest, $nc(src)->length()));
	normalize(src, buffer);
	buffer->flush();
	return dest;
}

$StringBuilder* Norm2AllModes$Normalizer2WithImpl::normalizeSecondAndAppend($StringBuilder* first, $CharSequence* second) {
	return normalizeSecondAndAppend(first, second, true);
}

$StringBuilder* Norm2AllModes$Normalizer2WithImpl::append($StringBuilder* first, $CharSequence* second) {
	return normalizeSecondAndAppend(first, second, false);
}

$StringBuilder* Norm2AllModes$Normalizer2WithImpl::normalizeSecondAndAppend($StringBuilder* first, $CharSequence* second, bool doNormalize) {
	if ($equals(first, second)) {
		$throwNew($IllegalArgumentException);
	}
	int32_t var$0 = $nc(first)->length();
	normalizeAndAppend(second, doNormalize, $$new($NormalizerImpl$ReorderingBuffer, this->impl, first, var$0 + $nc(second)->length()));
	return first;
}

$String* Norm2AllModes$Normalizer2WithImpl::getDecomposition(int32_t c) {
	return $nc(this->impl)->getDecomposition(c);
}

int32_t Norm2AllModes$Normalizer2WithImpl::getCombiningClass(int32_t c) {
	return $nc(this->impl)->getCC($nc(this->impl)->getNorm16(c));
}

bool Norm2AllModes$Normalizer2WithImpl::isNormalized($CharSequence* s) {
	int32_t var$0 = $nc(s)->length();
	return var$0 == spanQuickCheckYes(s);
}

Norm2AllModes$Normalizer2WithImpl::Norm2AllModes$Normalizer2WithImpl() {
}

$Class* Norm2AllModes$Normalizer2WithImpl::load$($String* name, bool initialize) {
	$loadClass(Norm2AllModes$Normalizer2WithImpl, name, initialize, &_Norm2AllModes$Normalizer2WithImpl_ClassInfo_, allocate$Norm2AllModes$Normalizer2WithImpl);
	return class$;
}

$Class* Norm2AllModes$Normalizer2WithImpl::class$ = nullptr;

			} // impl
		} // icu
	} // internal
} // jdk