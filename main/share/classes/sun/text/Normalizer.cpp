#include <sun/text/Normalizer.h>

#include <java/lang/CharSequence.h>
#include <java/text/Normalizer$Form.h>
#include <jdk/internal/icu/lang/UCharacter.h>
#include <jdk/internal/icu/text/NormalizerBase.h>
#include <jcpp.h>

#undef UNICODE_3_2

using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Normalizer$Form = ::java::text::Normalizer$Form;
using $UCharacter = ::jdk::internal::icu::lang::UCharacter;
using $NormalizerBase = ::jdk::internal::icu::text::NormalizerBase;

namespace sun {
	namespace text {

$FieldInfo _Normalizer_FieldInfo_[] = {
	{"UNICODE_3_2", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Normalizer, UNICODE_3_2)},
	{}
};

$MethodInfo _Normalizer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(Normalizer::*)()>(&Normalizer::init$))},
	{"getCombiningClass", "(I)I", nullptr, $PUBLIC | $STATIC | $FINAL, $method(static_cast<int32_t(*)(int32_t)>(&Normalizer::getCombiningClass))},
	{"isNormalized", "(Ljava/lang/CharSequence;Ljava/text/Normalizer$Form;I)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($CharSequence*,$Normalizer$Form*,int32_t)>(&Normalizer::isNormalized))},
	{"normalize", "(Ljava/lang/CharSequence;Ljava/text/Normalizer$Form;I)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)($CharSequence*,$Normalizer$Form*,int32_t)>(&Normalizer::normalize))},
	{}
};

$ClassInfo _Normalizer_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.text.Normalizer",
	"java.lang.Object",
	nullptr,
	_Normalizer_FieldInfo_,
	_Normalizer_MethodInfo_
};

$Object* allocate$Normalizer($Class* clazz) {
	return $of($alloc(Normalizer));
}

void Normalizer::init$() {
}

$String* Normalizer::normalize($CharSequence* src, $Normalizer$Form* form, int32_t option) {
	return $NormalizerBase::normalize($($nc(src)->toString()), form, option);
}

bool Normalizer::isNormalized($CharSequence* src, $Normalizer$Form* form, int32_t option) {
	return $NormalizerBase::isNormalized($($nc(src)->toString()), form, option);
}

int32_t Normalizer::getCombiningClass(int32_t ch) {
	return $UCharacter::getCombiningClass(ch);
}

Normalizer::Normalizer() {
}

$Class* Normalizer::load$($String* name, bool initialize) {
	$loadClass(Normalizer, name, initialize, &_Normalizer_ClassInfo_, allocate$Normalizer);
	return class$;
}

$Class* Normalizer::class$ = nullptr;

	} // text
} // sun