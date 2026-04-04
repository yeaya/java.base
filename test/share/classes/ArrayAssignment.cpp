#include <ArrayAssignment.h>
#include <jcpp.h>

using $intArray2 = $Array<int32_t, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;

void ArrayAssignment::init$() {
}

void ArrayAssignment::main($StringArray* argv) {
	$useLocalObjectStack();
	$var($intArray2, from, $new($intArray2, 5, 5));
	$var($ObjectArray, to, from);
	$assign(to, $new($ObjectArray, 1));
	if (!to->getClass()->isAssignableFrom(from->getClass())) {
		$throwNew($Exception, "bad array assignment check in reflection"_s);
	}
}

ArrayAssignment::ArrayAssignment() {
}

$Class* ArrayAssignment::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ArrayAssignment, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(ArrayAssignment, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"ArrayAssignment",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(ArrayAssignment, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ArrayAssignment);
	});
	return class$;
}

$Class* ArrayAssignment::class$ = nullptr;