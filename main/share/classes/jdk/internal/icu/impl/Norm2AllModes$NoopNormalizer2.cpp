#include <jdk/internal/icu/impl/Norm2AllModes$NoopNormalizer2.h>

#include <java/io/IOException.h>
#include <java/lang/Appendable.h>
#include <java/lang/CharSequence.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/InternalError.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/StringBuilder.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jdk/internal/icu/impl/Norm2AllModes.h>
#include <jdk/internal/icu/text/Normalizer2.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $AbstractStringBuilder = ::java::lang::AbstractStringBuilder;
using $Appendable = ::java::lang::Appendable;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;
using $Norm2AllModes = ::jdk::internal::icu::impl::Norm2AllModes;
using $Normalizer2 = ::jdk::internal::icu::text::Normalizer2;

namespace jdk {
	namespace internal {
		namespace icu {
			namespace impl {

$MethodInfo _Norm2AllModes$NoopNormalizer2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Norm2AllModes$NoopNormalizer2::*)()>(&Norm2AllModes$NoopNormalizer2::init$))},
	{"append", "(Ljava/lang/StringBuilder;Ljava/lang/CharSequence;)Ljava/lang/StringBuilder;", nullptr, $PUBLIC},
	{"getDecomposition", "(I)Ljava/lang/String;", nullptr, $PUBLIC},
	{"hasBoundaryBefore", "(I)Z", nullptr, $PUBLIC},
	{"isNormalized", "(Ljava/lang/CharSequence;)Z", nullptr, $PUBLIC},
	{"normalize", "(Ljava/lang/CharSequence;Ljava/lang/StringBuilder;)Ljava/lang/StringBuilder;", nullptr, $PUBLIC},
	{"normalize", "(Ljava/lang/CharSequence;Ljava/lang/Appendable;)Ljava/lang/Appendable;", nullptr, $PUBLIC},
	{"normalizeSecondAndAppend", "(Ljava/lang/StringBuilder;Ljava/lang/CharSequence;)Ljava/lang/StringBuilder;", nullptr, $PUBLIC},
	{"spanQuickCheckYes", "(Ljava/lang/CharSequence;)I", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Norm2AllModes$NoopNormalizer2_InnerClassesInfo_[] = {
	{"jdk.internal.icu.impl.Norm2AllModes$NoopNormalizer2", "jdk.internal.icu.impl.Norm2AllModes", "NoopNormalizer2", $PUBLIC | $STATIC | $FINAL},
	{}
};

$ClassInfo _Norm2AllModes$NoopNormalizer2_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"jdk.internal.icu.impl.Norm2AllModes$NoopNormalizer2",
	"jdk.internal.icu.text.Normalizer2",
	nullptr,
	nullptr,
	_Norm2AllModes$NoopNormalizer2_MethodInfo_,
	nullptr,
	nullptr,
	_Norm2AllModes$NoopNormalizer2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.icu.impl.Norm2AllModes"
};

$Object* allocate$Norm2AllModes$NoopNormalizer2($Class* clazz) {
	return $of($alloc(Norm2AllModes$NoopNormalizer2));
}

void Norm2AllModes$NoopNormalizer2::init$() {
	$Normalizer2::init$();
}

$StringBuilder* Norm2AllModes$NoopNormalizer2::normalize($CharSequence* src, $StringBuilder* dest) {
	if (!$equals(dest, src)) {
		$nc(dest)->setLength(0);
		return dest->append(src);
	} else {
		$throwNew($IllegalArgumentException);
	}
}

$Appendable* Norm2AllModes$NoopNormalizer2::normalize($CharSequence* src, $Appendable* dest) {
	if (!$equals(dest, src)) {
		try {
			return $nc(dest)->append(src);
		} catch ($IOException&) {
			$var($IOException, e, $catch());
			$throwNew($InternalError, $(e->toString()), e);
		}
	} else {
		$throwNew($IllegalArgumentException);
	}
	$shouldNotReachHere();
}

$StringBuilder* Norm2AllModes$NoopNormalizer2::normalizeSecondAndAppend($StringBuilder* first, $CharSequence* second) {
	if (!$equals(first, second)) {
		return $nc(first)->append(second);
	} else {
		$throwNew($IllegalArgumentException);
	}
}

$StringBuilder* Norm2AllModes$NoopNormalizer2::append($StringBuilder* first, $CharSequence* second) {
	if (!$equals(first, second)) {
		return $nc(first)->append(second);
	} else {
		$throwNew($IllegalArgumentException);
	}
}

$String* Norm2AllModes$NoopNormalizer2::getDecomposition(int32_t c) {
	return nullptr;
}

bool Norm2AllModes$NoopNormalizer2::isNormalized($CharSequence* s) {
	return true;
}

int32_t Norm2AllModes$NoopNormalizer2::spanQuickCheckYes($CharSequence* s) {
	return $nc(s)->length();
}

bool Norm2AllModes$NoopNormalizer2::hasBoundaryBefore(int32_t c) {
	return true;
}

Norm2AllModes$NoopNormalizer2::Norm2AllModes$NoopNormalizer2() {
}

$Class* Norm2AllModes$NoopNormalizer2::load$($String* name, bool initialize) {
	$loadClass(Norm2AllModes$NoopNormalizer2, name, initialize, &_Norm2AllModes$NoopNormalizer2_ClassInfo_, allocate$Norm2AllModes$NoopNormalizer2);
	return class$;
}

$Class* Norm2AllModes$NoopNormalizer2::class$ = nullptr;

			} // impl
		} // icu
	} // internal
} // jdk