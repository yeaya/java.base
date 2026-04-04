#include <jdk/internal/icu/impl/Norm2AllModes$NFCSingleton.h>
#include <jdk/internal/icu/impl/Norm2AllModes$Norm2AllModesSingleton.h>
#include <jdk/internal/icu/impl/Norm2AllModes.h>
#include <jcpp.h>

#undef INSTANCE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Norm2AllModes$Norm2AllModesSingleton = ::jdk::internal::icu::impl::Norm2AllModes$Norm2AllModesSingleton;

namespace jdk {
	namespace internal {
		namespace icu {
			namespace impl {

$Norm2AllModes$Norm2AllModesSingleton* Norm2AllModes$NFCSingleton::INSTANCE = nullptr;

void Norm2AllModes$NFCSingleton::init$() {
}

void Norm2AllModes$NFCSingleton::clinit$($Class* clazz) {
	$assignStatic(Norm2AllModes$NFCSingleton::INSTANCE, $new($Norm2AllModes$Norm2AllModesSingleton, "nfc"_s));
}

Norm2AllModes$NFCSingleton::Norm2AllModes$NFCSingleton() {
}

$Class* Norm2AllModes$NFCSingleton::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"INSTANCE", "Ljdk/internal/icu/impl/Norm2AllModes$Norm2AllModesSingleton;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Norm2AllModes$NFCSingleton, INSTANCE)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(Norm2AllModes$NFCSingleton, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.icu.impl.Norm2AllModes$NFCSingleton", "jdk.internal.icu.impl.Norm2AllModes", "NFCSingleton", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"jdk.internal.icu.impl.Norm2AllModes$NFCSingleton",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.icu.impl.Norm2AllModes"
	};
	$loadClass(Norm2AllModes$NFCSingleton, name, initialize, &classInfo$$, Norm2AllModes$NFCSingleton::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Norm2AllModes$NFCSingleton);
	});
	return class$;
}

$Class* Norm2AllModes$NFCSingleton::class$ = nullptr;

			} // impl
		} // icu
	} // internal
} // jdk