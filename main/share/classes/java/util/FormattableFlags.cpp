#include <java/util/FormattableFlags.h>
#include <jcpp.h>

#undef ALTERNATE
#undef LEFT_JUSTIFY
#undef UPPERCASE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace util {

void FormattableFlags::init$() {
}

FormattableFlags::FormattableFlags() {
}

$Class* FormattableFlags::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"LEFT_JUSTIFY", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(FormattableFlags, LEFT_JUSTIFY)},
		{"UPPERCASE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(FormattableFlags, UPPERCASE)},
		{"ALTERNATE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(FormattableFlags, ALTERNATE)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(FormattableFlags, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.util.FormattableFlags",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(FormattableFlags, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FormattableFlags);
	});
	return class$;
}

$Class* FormattableFlags::class$ = nullptr;

	} // util
} // java