#include <jdk/internal/icu/text/NormalizerBase$Mode.h>

#include <jdk/internal/icu/text/Normalizer2.h>
#include <jdk/internal/icu/text/NormalizerBase.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Normalizer2 = ::jdk::internal::icu::text::Normalizer2;
using $NormalizerBase = ::jdk::internal::icu::text::NormalizerBase;

namespace jdk {
	namespace internal {
		namespace icu {
			namespace text {

$CompoundAttribute _NormalizerBase$Mode_MethodAnnotations_init$0[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _NormalizerBase$Mode_MethodAnnotations_getNormalizer21[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$MethodInfo _NormalizerBase$Mode_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED | $DEPRECATED, $method(static_cast<void(NormalizerBase$Mode::*)()>(&NormalizerBase$Mode::init$)), nullptr, nullptr, _NormalizerBase$Mode_MethodAnnotations_init$0},
	{"getNormalizer2", "(I)Ljdk/internal/icu/text/Normalizer2;", nullptr, $PROTECTED | $ABSTRACT | $DEPRECATED, nullptr, nullptr, nullptr, _NormalizerBase$Mode_MethodAnnotations_getNormalizer21},
	{}
};

$InnerClassInfo _NormalizerBase$Mode_InnerClassesInfo_[] = {
	{"jdk.internal.icu.text.NormalizerBase$Mode", "jdk.internal.icu.text.NormalizerBase", "Mode", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _NormalizerBase$Mode_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"jdk.internal.icu.text.NormalizerBase$Mode",
	"java.lang.Object",
	nullptr,
	nullptr,
	_NormalizerBase$Mode_MethodInfo_,
	nullptr,
	nullptr,
	_NormalizerBase$Mode_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.icu.text.NormalizerBase"
};

$Object* allocate$NormalizerBase$Mode($Class* clazz) {
	return $of($alloc(NormalizerBase$Mode));
}

void NormalizerBase$Mode::init$() {
}

NormalizerBase$Mode::NormalizerBase$Mode() {
}

$Class* NormalizerBase$Mode::load$($String* name, bool initialize) {
	$loadClass(NormalizerBase$Mode, name, initialize, &_NormalizerBase$Mode_ClassInfo_, allocate$NormalizerBase$Mode);
	return class$;
}

$Class* NormalizerBase$Mode::class$ = nullptr;

			} // text
		} // icu
	} // internal
} // jdk