#include <jdk/internal/icu/text/StringPrep$Values.h>
#include <jdk/internal/icu/text/StringPrep.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace jdk {
	namespace internal {
		namespace icu {
			namespace text {

void StringPrep$Values::init$() {
}

void StringPrep$Values::reset() {
	this->isIndex = false;
	this->value = 0;
	this->type = -1;
}

StringPrep$Values::StringPrep$Values() {
}

$Class* StringPrep$Values::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"isIndex", "Z", nullptr, 0, $field(StringPrep$Values, isIndex)},
		{"value", "I", nullptr, 0, $field(StringPrep$Values, value)},
		{"type", "I", nullptr, 0, $field(StringPrep$Values, type)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(StringPrep$Values, init$, void)},
		{"reset", "()V", nullptr, $PUBLIC, $method(StringPrep$Values, reset, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.icu.text.StringPrep$Values", "jdk.internal.icu.text.StringPrep", "Values", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"jdk.internal.icu.text.StringPrep$Values",
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
		"jdk.internal.icu.text.StringPrep"
	};
	$loadClass(StringPrep$Values, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(StringPrep$Values);
	});
	return class$;
}

$Class* StringPrep$Values::class$ = nullptr;

			} // text
		} // icu
	} // internal
} // jdk