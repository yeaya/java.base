#include <jdk/internal/icu/impl/Norm2AllModes$NFKCSingleton.h>

#include <jdk/internal/icu/impl/Norm2AllModes$Norm2AllModesSingleton.h>
#include <jdk/internal/icu/impl/Norm2AllModes.h>
#include <jcpp.h>

#undef INSTANCE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Norm2AllModes = ::jdk::internal::icu::impl::Norm2AllModes;
using $Norm2AllModes$Norm2AllModesSingleton = ::jdk::internal::icu::impl::Norm2AllModes$Norm2AllModesSingleton;

namespace jdk {
	namespace internal {
		namespace icu {
			namespace impl {

$FieldInfo _Norm2AllModes$NFKCSingleton_FieldInfo_[] = {
	{"INSTANCE", "Ljdk/internal/icu/impl/Norm2AllModes$Norm2AllModesSingleton;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Norm2AllModes$NFKCSingleton, INSTANCE)},
	{}
};

$MethodInfo _Norm2AllModes$NFKCSingleton_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(Norm2AllModes$NFKCSingleton::*)()>(&Norm2AllModes$NFKCSingleton::init$))},
	{}
};

$InnerClassInfo _Norm2AllModes$NFKCSingleton_InnerClassesInfo_[] = {
	{"jdk.internal.icu.impl.Norm2AllModes$NFKCSingleton", "jdk.internal.icu.impl.Norm2AllModes", "NFKCSingleton", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _Norm2AllModes$NFKCSingleton_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"jdk.internal.icu.impl.Norm2AllModes$NFKCSingleton",
	"java.lang.Object",
	nullptr,
	_Norm2AllModes$NFKCSingleton_FieldInfo_,
	_Norm2AllModes$NFKCSingleton_MethodInfo_,
	nullptr,
	nullptr,
	_Norm2AllModes$NFKCSingleton_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.icu.impl.Norm2AllModes"
};

$Object* allocate$Norm2AllModes$NFKCSingleton($Class* clazz) {
	return $of($alloc(Norm2AllModes$NFKCSingleton));
}

$Norm2AllModes$Norm2AllModesSingleton* Norm2AllModes$NFKCSingleton::INSTANCE = nullptr;

void Norm2AllModes$NFKCSingleton::init$() {
}

void clinit$Norm2AllModes$NFKCSingleton($Class* class$) {
	$assignStatic(Norm2AllModes$NFKCSingleton::INSTANCE, $new($Norm2AllModes$Norm2AllModesSingleton, "nfkc"_s));
}

Norm2AllModes$NFKCSingleton::Norm2AllModes$NFKCSingleton() {
}

$Class* Norm2AllModes$NFKCSingleton::load$($String* name, bool initialize) {
	$loadClass(Norm2AllModes$NFKCSingleton, name, initialize, &_Norm2AllModes$NFKCSingleton_ClassInfo_, clinit$Norm2AllModes$NFKCSingleton, allocate$Norm2AllModes$NFKCSingleton);
	return class$;
}

$Class* Norm2AllModes$NFKCSingleton::class$ = nullptr;

			} // impl
		} // icu
	} // internal
} // jdk