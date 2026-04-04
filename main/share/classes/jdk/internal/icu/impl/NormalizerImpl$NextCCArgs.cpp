#include <jdk/internal/icu/impl/NormalizerImpl$NextCCArgs.h>
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

void NormalizerImpl$NextCCArgs::init$() {
}

NormalizerImpl$NextCCArgs::NormalizerImpl$NextCCArgs() {
}

$Class* NormalizerImpl$NextCCArgs::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"source", "[C", nullptr, 0, $field(NormalizerImpl$NextCCArgs, source)},
		{"next", "I", nullptr, 0, $field(NormalizerImpl$NextCCArgs, next)},
		{"limit", "I", nullptr, 0, $field(NormalizerImpl$NextCCArgs, limit)},
		{"c1", "C", nullptr, 0, $field(NormalizerImpl$NextCCArgs, c1)},
		{"c2", "C", nullptr, 0, $field(NormalizerImpl$NextCCArgs, c2)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(NormalizerImpl$NextCCArgs, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.icu.impl.NormalizerImpl$NextCCArgs", "jdk.internal.icu.impl.NormalizerImpl", "NextCCArgs", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"jdk.internal.icu.impl.NormalizerImpl$NextCCArgs",
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
	$loadClass(NormalizerImpl$NextCCArgs, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(NormalizerImpl$NextCCArgs);
	});
	return class$;
}

$Class* NormalizerImpl$NextCCArgs::class$ = nullptr;

			} // impl
		} // icu
	} // internal
} // jdk