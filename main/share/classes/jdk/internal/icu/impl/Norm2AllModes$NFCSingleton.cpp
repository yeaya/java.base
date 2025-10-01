#include <jdk/internal/icu/impl/Norm2AllModes$NFCSingleton.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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

$FieldInfo _Norm2AllModes$NFCSingleton_FieldInfo_[] = {
	{"INSTANCE", "Ljdk/internal/icu/impl/Norm2AllModes$Norm2AllModesSingleton;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Norm2AllModes$NFCSingleton, INSTANCE)},
	{}
};

$MethodInfo _Norm2AllModes$NFCSingleton_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(Norm2AllModes$NFCSingleton::*)()>(&Norm2AllModes$NFCSingleton::init$))},
	{}
};

$InnerClassInfo _Norm2AllModes$NFCSingleton_InnerClassesInfo_[] = {
	{"jdk.internal.icu.impl.Norm2AllModes$NFCSingleton", "jdk.internal.icu.impl.Norm2AllModes", "NFCSingleton", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _Norm2AllModes$NFCSingleton_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"jdk.internal.icu.impl.Norm2AllModes$NFCSingleton",
	"java.lang.Object",
	nullptr,
	_Norm2AllModes$NFCSingleton_FieldInfo_,
	_Norm2AllModes$NFCSingleton_MethodInfo_,
	nullptr,
	nullptr,
	_Norm2AllModes$NFCSingleton_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.icu.impl.Norm2AllModes"
};

$Object* allocate$Norm2AllModes$NFCSingleton($Class* clazz) {
	return $of($alloc(Norm2AllModes$NFCSingleton));
}

$Norm2AllModes$Norm2AllModesSingleton* Norm2AllModes$NFCSingleton::INSTANCE = nullptr;

void Norm2AllModes$NFCSingleton::init$() {
}

void clinit$Norm2AllModes$NFCSingleton($Class* class$) {
	$assignStatic(Norm2AllModes$NFCSingleton::INSTANCE, $new($Norm2AllModes$Norm2AllModesSingleton, "nfc"_s));
}

Norm2AllModes$NFCSingleton::Norm2AllModes$NFCSingleton() {
}

$Class* Norm2AllModes$NFCSingleton::load$($String* name, bool initialize) {
	$loadClass(Norm2AllModes$NFCSingleton, name, initialize, &_Norm2AllModes$NFCSingleton_ClassInfo_, clinit$Norm2AllModes$NFCSingleton, allocate$Norm2AllModes$NFCSingleton);
	return class$;
}

$Class* Norm2AllModes$NFCSingleton::class$ = nullptr;

			} // impl
		} // icu
	} // internal
} // jdk