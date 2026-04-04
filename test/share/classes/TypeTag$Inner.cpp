#include <TypeTag$Inner.h>
#include <TypeTag.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void TypeTag$Inner::init$() {
}

TypeTag$Inner::TypeTag$Inner() {
}

$Class* TypeTag$Inner::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(TypeTag$Inner, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"TypeTag$Inner", "TypeTag", "Inner", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"TypeTag$Inner",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"TypeTag"
	};
	$loadClass(TypeTag$Inner, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TypeTag$Inner);
	});
	return class$;
}

$Class* TypeTag$Inner::class$ = nullptr;