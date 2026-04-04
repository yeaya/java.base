#include <jdk/internal/icu/impl/NormalizerImpl$PrevArgs.h>
#include <jdk/internal/icu/impl/NormalizerImpl.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace jdk {
	namespace internal {
		namespace icu {
			namespace impl {

void NormalizerImpl$PrevArgs::init$() {
}

NormalizerImpl$PrevArgs::NormalizerImpl$PrevArgs() {
}

$Class* NormalizerImpl$PrevArgs::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"src", "[C", nullptr, 0, $field(NormalizerImpl$PrevArgs, src)},
		{"start", "I", nullptr, 0, $field(NormalizerImpl$PrevArgs, start)},
		{"current", "I", nullptr, 0, $field(NormalizerImpl$PrevArgs, current)},
		{"c1", "C", nullptr, 0, $field(NormalizerImpl$PrevArgs, c1)},
		{"c2", "C", nullptr, 0, $field(NormalizerImpl$PrevArgs, c2)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(NormalizerImpl$PrevArgs, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.icu.impl.NormalizerImpl$PrevArgs", "jdk.internal.icu.impl.NormalizerImpl", "PrevArgs", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"jdk.internal.icu.impl.NormalizerImpl$PrevArgs",
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
		"jdk.internal.icu.impl.NormalizerImpl"
	};
	$loadClass(NormalizerImpl$PrevArgs, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(NormalizerImpl$PrevArgs);
	});
	return class$;
}

$Class* NormalizerImpl$PrevArgs::class$ = nullptr;

			} // impl
		} // icu
	} // internal
} // jdk