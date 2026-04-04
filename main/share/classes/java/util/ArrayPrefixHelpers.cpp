#include <java/util/ArrayPrefixHelpers.h>
#include <jcpp.h>

#undef CUMULATE
#undef FINISHED
#undef MIN_PARTITION
#undef SUMMED

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace util {

void ArrayPrefixHelpers::init$() {
}

ArrayPrefixHelpers::ArrayPrefixHelpers() {
}

$Class* ArrayPrefixHelpers::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"CUMULATE", "I", nullptr, $STATIC | $FINAL, $constField(ArrayPrefixHelpers, CUMULATE)},
		{"SUMMED", "I", nullptr, $STATIC | $FINAL, $constField(ArrayPrefixHelpers, SUMMED)},
		{"FINISHED", "I", nullptr, $STATIC | $FINAL, $constField(ArrayPrefixHelpers, FINISHED)},
		{"MIN_PARTITION", "I", nullptr, $STATIC | $FINAL, $constField(ArrayPrefixHelpers, MIN_PARTITION)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(ArrayPrefixHelpers, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.ArrayPrefixHelpers$IntCumulateTask", "java.util.ArrayPrefixHelpers", "IntCumulateTask", $STATIC | $FINAL},
		{"java.util.ArrayPrefixHelpers$DoubleCumulateTask", "java.util.ArrayPrefixHelpers", "DoubleCumulateTask", $STATIC | $FINAL},
		{"java.util.ArrayPrefixHelpers$LongCumulateTask", "java.util.ArrayPrefixHelpers", "LongCumulateTask", $STATIC | $FINAL},
		{"java.util.ArrayPrefixHelpers$CumulateTask", "java.util.ArrayPrefixHelpers", "CumulateTask", $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.util.ArrayPrefixHelpers",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"java.util.ArrayPrefixHelpers$IntCumulateTask,java.util.ArrayPrefixHelpers$DoubleCumulateTask,java.util.ArrayPrefixHelpers$LongCumulateTask,java.util.ArrayPrefixHelpers$CumulateTask"
	};
	$loadClass(ArrayPrefixHelpers, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ArrayPrefixHelpers);
	});
	return class$;
}

$Class* ArrayPrefixHelpers::class$ = nullptr;

	} // util
} // java