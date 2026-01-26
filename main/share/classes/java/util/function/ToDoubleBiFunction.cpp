#include <java/util/function/ToDoubleBiFunction.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace util {
		namespace function {

$CompoundAttribute _ToDoubleBiFunction_Annotations_[] = {
	{"Ljava/lang/FunctionalInterface;", nullptr},
	{}
};

$MethodInfo _ToDoubleBiFunction_MethodInfo_[] = {
	{"applyAsDouble", "(Ljava/lang/Object;Ljava/lang/Object;)D", "(TT;TU;)D", $PUBLIC | $ABSTRACT, $virtualMethod(ToDoubleBiFunction, applyAsDouble, double, Object$*, Object$*)},
	{}
};

$ClassInfo _ToDoubleBiFunction_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.util.function.ToDoubleBiFunction",
	nullptr,
	nullptr,
	nullptr,
	_ToDoubleBiFunction_MethodInfo_,
	"<T:Ljava/lang/Object;U:Ljava/lang/Object;>Ljava/lang/Object;",
	nullptr,
	nullptr,
	_ToDoubleBiFunction_Annotations_
};

$Object* allocate$ToDoubleBiFunction($Class* clazz) {
	return $of($alloc(ToDoubleBiFunction));
}

$Class* ToDoubleBiFunction::load$($String* name, bool initialize) {
	$loadClass(ToDoubleBiFunction, name, initialize, &_ToDoubleBiFunction_ClassInfo_, allocate$ToDoubleBiFunction);
	return class$;
}

$Class* ToDoubleBiFunction::class$ = nullptr;

		} // function
	} // util
} // java