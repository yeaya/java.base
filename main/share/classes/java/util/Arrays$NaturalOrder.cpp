#include <java/util/Arrays$NaturalOrder.h>
#include <java/lang/Comparable.h>
#include <java/util/Arrays.h>
#include <jcpp.h>

#undef INSTANCE

using $ClassInfo = ::java::lang::ClassInfo;
using $Comparable = ::java::lang::Comparable;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace util {

Arrays$NaturalOrder* Arrays$NaturalOrder::INSTANCE = nullptr;

void Arrays$NaturalOrder::init$() {
}

int32_t Arrays$NaturalOrder::compare(Object$* first, Object$* second) {
	return $nc($cast($Comparable, first))->compareTo(second);
}

void Arrays$NaturalOrder::clinit$($Class* clazz) {
	$assignStatic(Arrays$NaturalOrder::INSTANCE, $new(Arrays$NaturalOrder));
}

Arrays$NaturalOrder::Arrays$NaturalOrder() {
}

$Class* Arrays$NaturalOrder::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"INSTANCE", "Ljava/util/Arrays$NaturalOrder;", nullptr, $STATIC | $FINAL, $staticField(Arrays$NaturalOrder, INSTANCE)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(Arrays$NaturalOrder, init$, void)},
		{"compare", "(Ljava/lang/Object;Ljava/lang/Object;)I", nullptr, $PUBLIC, $virtualMethod(Arrays$NaturalOrder, compare, int32_t, Object$*, Object$*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.Arrays$NaturalOrder", "java.util.Arrays", "NaturalOrder", $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.util.Arrays$NaturalOrder",
		"java.lang.Object",
		"java.util.Comparator",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/Comparator<Ljava/lang/Object;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.Arrays"
	};
	$loadClass(Arrays$NaturalOrder, name, initialize, &classInfo$$, Arrays$NaturalOrder::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Arrays$NaturalOrder);
	});
	return class$;
}

$Class* Arrays$NaturalOrder::class$ = nullptr;

	} // util
} // java