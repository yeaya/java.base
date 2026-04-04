#include <java/lang/invoke/InvokeDynamic.h>
#include <java/lang/InternalError.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace lang {
		namespace invoke {

void InvokeDynamic::init$() {
	$throwNew($InternalError);
}

InvokeDynamic::InvokeDynamic() {
}

$Class* InvokeDynamic::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(InvokeDynamic, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.lang.invoke.InvokeDynamic",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(InvokeDynamic, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(InvokeDynamic);
	});
	return class$;
}

$Class* InvokeDynamic::class$ = nullptr;

		} // invoke
	} // lang
} // java