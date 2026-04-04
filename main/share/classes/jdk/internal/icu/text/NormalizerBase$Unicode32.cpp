#include <jdk/internal/icu/text/NormalizerBase$Unicode32.h>
#include <jdk/internal/icu/text/NormalizerBase.h>
#include <jdk/internal/icu/text/UnicodeSet.h>
#include <jcpp.h>

#undef INSTANCE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnicodeSet = ::jdk::internal::icu::text::UnicodeSet;

namespace jdk {
	namespace internal {
		namespace icu {
			namespace text {

$UnicodeSet* NormalizerBase$Unicode32::INSTANCE = nullptr;

void NormalizerBase$Unicode32::init$() {
}

void NormalizerBase$Unicode32::clinit$($Class* clazz) {
	$assignStatic(NormalizerBase$Unicode32::INSTANCE, $$new($UnicodeSet, "[:age=3.2:]"_s)->freeze());
}

NormalizerBase$Unicode32::NormalizerBase$Unicode32() {
}

$Class* NormalizerBase$Unicode32::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"INSTANCE", "Ljdk/internal/icu/text/UnicodeSet;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(NormalizerBase$Unicode32, INSTANCE)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(NormalizerBase$Unicode32, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.icu.text.NormalizerBase$Unicode32", "jdk.internal.icu.text.NormalizerBase", "Unicode32", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"jdk.internal.icu.text.NormalizerBase$Unicode32",
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
		"jdk.internal.icu.text.NormalizerBase"
	};
	$loadClass(NormalizerBase$Unicode32, name, initialize, &classInfo$$, NormalizerBase$Unicode32::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(NormalizerBase$Unicode32);
	});
	return class$;
}

$Class* NormalizerBase$Unicode32::class$ = nullptr;

			} // text
		} // icu
	} // internal
} // jdk