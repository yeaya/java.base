#include <jdk/internal/icu/impl/Norm2AllModes.h>

#include <jdk/internal/icu/impl/Norm2AllModes$ComposeNormalizer2.h>
#include <jdk/internal/icu/impl/Norm2AllModes$DecomposeNormalizer2.h>
#include <jdk/internal/icu/impl/Norm2AllModes$NFCSingleton.h>
#include <jdk/internal/icu/impl/Norm2AllModes$NFKCSingleton.h>
#include <jdk/internal/icu/impl/Norm2AllModes$NoopNormalizer2.h>
#include <jdk/internal/icu/impl/Norm2AllModes$Norm2AllModesSingleton.h>
#include <jdk/internal/icu/impl/NormalizerImpl.h>
#include <jcpp.h>

#undef INSTANCE
#undef NOOP_NORMALIZER2

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Norm2AllModes$ComposeNormalizer2 = ::jdk::internal::icu::impl::Norm2AllModes$ComposeNormalizer2;
using $Norm2AllModes$DecomposeNormalizer2 = ::jdk::internal::icu::impl::Norm2AllModes$DecomposeNormalizer2;
using $Norm2AllModes$NFCSingleton = ::jdk::internal::icu::impl::Norm2AllModes$NFCSingleton;
using $Norm2AllModes$NFKCSingleton = ::jdk::internal::icu::impl::Norm2AllModes$NFKCSingleton;
using $Norm2AllModes$NoopNormalizer2 = ::jdk::internal::icu::impl::Norm2AllModes$NoopNormalizer2;
using $Norm2AllModes$Norm2AllModesSingleton = ::jdk::internal::icu::impl::Norm2AllModes$Norm2AllModesSingleton;
using $NormalizerImpl = ::jdk::internal::icu::impl::NormalizerImpl;

namespace jdk {
	namespace internal {
		namespace icu {
			namespace impl {

$FieldInfo _Norm2AllModes_FieldInfo_[] = {
	{"impl", "Ljdk/internal/icu/impl/NormalizerImpl;", nullptr, $PUBLIC | $FINAL, $field(Norm2AllModes, impl)},
	{"comp", "Ljdk/internal/icu/impl/Norm2AllModes$ComposeNormalizer2;", nullptr, $PUBLIC | $FINAL, $field(Norm2AllModes, comp)},
	{"decomp", "Ljdk/internal/icu/impl/Norm2AllModes$DecomposeNormalizer2;", nullptr, $PUBLIC | $FINAL, $field(Norm2AllModes, decomp)},
	{"NOOP_NORMALIZER2", "Ljdk/internal/icu/impl/Norm2AllModes$NoopNormalizer2;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Norm2AllModes, NOOP_NORMALIZER2)},
	{}
};

$MethodInfo _Norm2AllModes_MethodInfo_[] = {
	{"<init>", "(Ljdk/internal/icu/impl/NormalizerImpl;)V", nullptr, $PRIVATE, $method(static_cast<void(Norm2AllModes::*)($NormalizerImpl*)>(&Norm2AllModes::init$))},
	{"getInstanceFromSingleton", "(Ljdk/internal/icu/impl/Norm2AllModes$Norm2AllModesSingleton;)Ljdk/internal/icu/impl/Norm2AllModes;", nullptr, $PRIVATE | $STATIC, $method(static_cast<Norm2AllModes*(*)($Norm2AllModes$Norm2AllModesSingleton*)>(&Norm2AllModes::getInstanceFromSingleton))},
	{"getNFCInstance", "()Ljdk/internal/icu/impl/Norm2AllModes;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Norm2AllModes*(*)()>(&Norm2AllModes::getNFCInstance))},
	{"getNFKCInstance", "()Ljdk/internal/icu/impl/Norm2AllModes;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Norm2AllModes*(*)()>(&Norm2AllModes::getNFKCInstance))},
	{}
};

$InnerClassInfo _Norm2AllModes_InnerClassesInfo_[] = {
	{"jdk.internal.icu.impl.Norm2AllModes$NFKCSingleton", "jdk.internal.icu.impl.Norm2AllModes", "NFKCSingleton", $PRIVATE | $STATIC | $FINAL},
	{"jdk.internal.icu.impl.Norm2AllModes$NFCSingleton", "jdk.internal.icu.impl.Norm2AllModes", "NFCSingleton", $PRIVATE | $STATIC | $FINAL},
	{"jdk.internal.icu.impl.Norm2AllModes$Norm2AllModesSingleton", "jdk.internal.icu.impl.Norm2AllModes", "Norm2AllModesSingleton", $PRIVATE | $STATIC | $FINAL},
	{"jdk.internal.icu.impl.Norm2AllModes$ComposeNormalizer2", "jdk.internal.icu.impl.Norm2AllModes", "ComposeNormalizer2", $PUBLIC | $STATIC | $FINAL},
	{"jdk.internal.icu.impl.Norm2AllModes$DecomposeNormalizer2", "jdk.internal.icu.impl.Norm2AllModes", "DecomposeNormalizer2", $PUBLIC | $STATIC | $FINAL},
	{"jdk.internal.icu.impl.Norm2AllModes$Normalizer2WithImpl", "jdk.internal.icu.impl.Norm2AllModes", "Normalizer2WithImpl", $PUBLIC | $STATIC | $ABSTRACT},
	{"jdk.internal.icu.impl.Norm2AllModes$NoopNormalizer2", "jdk.internal.icu.impl.Norm2AllModes", "NoopNormalizer2", $PUBLIC | $STATIC | $FINAL},
	{}
};

$ClassInfo _Norm2AllModes_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"jdk.internal.icu.impl.Norm2AllModes",
	"java.lang.Object",
	nullptr,
	_Norm2AllModes_FieldInfo_,
	_Norm2AllModes_MethodInfo_,
	nullptr,
	nullptr,
	_Norm2AllModes_InnerClassesInfo_,
	nullptr,
	nullptr,
	"jdk.internal.icu.impl.Norm2AllModes$NFKCSingleton,jdk.internal.icu.impl.Norm2AllModes$NFCSingleton,jdk.internal.icu.impl.Norm2AllModes$Norm2AllModesSingleton,jdk.internal.icu.impl.Norm2AllModes$ComposeNormalizer2,jdk.internal.icu.impl.Norm2AllModes$DecomposeNormalizer2,jdk.internal.icu.impl.Norm2AllModes$Normalizer2WithImpl,jdk.internal.icu.impl.Norm2AllModes$NoopNormalizer2"
};

$Object* allocate$Norm2AllModes($Class* clazz) {
	return $of($alloc(Norm2AllModes));
}

$Norm2AllModes$NoopNormalizer2* Norm2AllModes::NOOP_NORMALIZER2 = nullptr;

void Norm2AllModes::init$($NormalizerImpl* ni) {
	$set(this, impl, ni);
	$set(this, comp, $new($Norm2AllModes$ComposeNormalizer2, ni, false));
	$set(this, decomp, $new($Norm2AllModes$DecomposeNormalizer2, ni));
}

Norm2AllModes* Norm2AllModes::getInstanceFromSingleton($Norm2AllModes$Norm2AllModesSingleton* singleton) {
	$init(Norm2AllModes);
	if ($nc(singleton)->exception != nullptr) {
		$throw(singleton->exception);
	}
	return $nc(singleton)->allModes;
}

Norm2AllModes* Norm2AllModes::getNFCInstance() {
	$init(Norm2AllModes);
	$init($Norm2AllModes$NFCSingleton);
	return getInstanceFromSingleton($Norm2AllModes$NFCSingleton::INSTANCE);
}

Norm2AllModes* Norm2AllModes::getNFKCInstance() {
	$init(Norm2AllModes);
	$init($Norm2AllModes$NFKCSingleton);
	return getInstanceFromSingleton($Norm2AllModes$NFKCSingleton::INSTANCE);
}

void clinit$Norm2AllModes($Class* class$) {
	$assignStatic(Norm2AllModes::NOOP_NORMALIZER2, $new($Norm2AllModes$NoopNormalizer2));
}

Norm2AllModes::Norm2AllModes() {
}

$Class* Norm2AllModes::load$($String* name, bool initialize) {
	$loadClass(Norm2AllModes, name, initialize, &_Norm2AllModes_ClassInfo_, clinit$Norm2AllModes, allocate$Norm2AllModes);
	return class$;
}

$Class* Norm2AllModes::class$ = nullptr;

			} // impl
		} // icu
	} // internal
} // jdk