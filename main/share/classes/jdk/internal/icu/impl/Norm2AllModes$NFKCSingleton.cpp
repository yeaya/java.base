#include <jdk/internal/icu/impl/Norm2AllModes$NFKCSingleton.h>
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

$Norm2AllModes$Norm2AllModesSingleton* Norm2AllModes$NFKCSingleton::INSTANCE = nullptr;

void Norm2AllModes$NFKCSingleton::init$() {
}

void Norm2AllModes$NFKCSingleton::clinit$($Class* clazz) {
	$assignStatic(Norm2AllModes$NFKCSingleton::INSTANCE, $new($Norm2AllModes$Norm2AllModesSingleton, "nfkc"_s));
}

Norm2AllModes$NFKCSingleton::Norm2AllModes$NFKCSingleton() {
}

$Class* Norm2AllModes$NFKCSingleton::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"INSTANCE", "Ljdk/internal/icu/impl/Norm2AllModes$Norm2AllModesSingleton;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Norm2AllModes$NFKCSingleton, INSTANCE)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(Norm2AllModes$NFKCSingleton, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.icu.impl.Norm2AllModes$NFKCSingleton", "jdk.internal.icu.impl.Norm2AllModes", "NFKCSingleton", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"jdk.internal.icu.impl.Norm2AllModes$NFKCSingleton",
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
	$loadClass(Norm2AllModes$NFKCSingleton, name, initialize, &classInfo$$, Norm2AllModes$NFKCSingleton::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Norm2AllModes$NFKCSingleton);
	});
	return class$;
}

$Class* Norm2AllModes$NFKCSingleton::class$ = nullptr;

			} // impl
		} // icu
	} // internal
} // jdk