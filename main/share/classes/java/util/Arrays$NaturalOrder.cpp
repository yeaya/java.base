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

$FieldInfo _Arrays$NaturalOrder_FieldInfo_[] = {
	{"INSTANCE", "Ljava/util/Arrays$NaturalOrder;", nullptr, $STATIC | $FINAL, $staticField(Arrays$NaturalOrder, INSTANCE)},
	{}
};

$MethodInfo _Arrays$NaturalOrder_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Arrays$NaturalOrder::*)()>(&Arrays$NaturalOrder::init$))},
	{"compare", "(Ljava/lang/Object;Ljava/lang/Object;)I", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Arrays$NaturalOrder_InnerClassesInfo_[] = {
	{"java.util.Arrays$NaturalOrder", "java.util.Arrays", "NaturalOrder", $STATIC | $FINAL},
	{}
};

$ClassInfo _Arrays$NaturalOrder_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.Arrays$NaturalOrder",
	"java.lang.Object",
	"java.util.Comparator",
	_Arrays$NaturalOrder_FieldInfo_,
	_Arrays$NaturalOrder_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Comparator<Ljava/lang/Object;>;",
	nullptr,
	_Arrays$NaturalOrder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.Arrays"
};

$Object* allocate$Arrays$NaturalOrder($Class* clazz) {
	return $of($alloc(Arrays$NaturalOrder));
}

Arrays$NaturalOrder* Arrays$NaturalOrder::INSTANCE = nullptr;

void Arrays$NaturalOrder::init$() {
}

int32_t Arrays$NaturalOrder::compare(Object$* first, Object$* second) {
	return $nc(($cast($Comparable, first)))->compareTo(second);
}

void clinit$Arrays$NaturalOrder($Class* class$) {
	$assignStatic(Arrays$NaturalOrder::INSTANCE, $new(Arrays$NaturalOrder));
}

Arrays$NaturalOrder::Arrays$NaturalOrder() {
}

$Class* Arrays$NaturalOrder::load$($String* name, bool initialize) {
	$loadClass(Arrays$NaturalOrder, name, initialize, &_Arrays$NaturalOrder_ClassInfo_, clinit$Arrays$NaturalOrder, allocate$Arrays$NaturalOrder);
	return class$;
}

$Class* Arrays$NaturalOrder::class$ = nullptr;

	} // util
} // java