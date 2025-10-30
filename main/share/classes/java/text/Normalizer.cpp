#include <java/text/Normalizer.h>

#include <java/lang/CharSequence.h>
#include <java/text/Normalizer$Form.h>
#include <jdk/internal/icu/text/NormalizerBase.h>
#include <jcpp.h>

using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Normalizer$Form = ::java::text::Normalizer$Form;
using $NormalizerBase = ::jdk::internal::icu::text::NormalizerBase;

namespace java {
	namespace text {

$MethodInfo _Normalizer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(Normalizer::*)()>(&Normalizer::init$))},
	{"isNormalized", "(Ljava/lang/CharSequence;Ljava/text/Normalizer$Form;)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($CharSequence*,$Normalizer$Form*)>(&Normalizer::isNormalized))},
	{"normalize", "(Ljava/lang/CharSequence;Ljava/text/Normalizer$Form;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)($CharSequence*,$Normalizer$Form*)>(&Normalizer::normalize))},
	{}
};

$InnerClassInfo _Normalizer_InnerClassesInfo_[] = {
	{"java.text.Normalizer$Form", "java.text.Normalizer", "Form", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _Normalizer_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"java.text.Normalizer",
	"java.lang.Object",
	nullptr,
	nullptr,
	_Normalizer_MethodInfo_,
	nullptr,
	nullptr,
	_Normalizer_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.text.Normalizer$Form"
};

$Object* allocate$Normalizer($Class* clazz) {
	return $of($alloc(Normalizer));
}

void Normalizer::init$() {
}

$String* Normalizer::normalize($CharSequence* src, $Normalizer$Form* form) {
	return $NormalizerBase::normalize($($nc(src)->toString()), form);
}

bool Normalizer::isNormalized($CharSequence* src, $Normalizer$Form* form) {
	return $NormalizerBase::isNormalized($($nc(src)->toString()), form);
}

Normalizer::Normalizer() {
}

$Class* Normalizer::load$($String* name, bool initialize) {
	$loadClass(Normalizer, name, initialize, &_Normalizer_ClassInfo_, allocate$Normalizer);
	return class$;
}

$Class* Normalizer::class$ = nullptr;

	} // text
} // java