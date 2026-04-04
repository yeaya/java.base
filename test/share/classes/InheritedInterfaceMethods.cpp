#include <InheritedInterfaceMethods.h>
#include <InheritedInterfaceMethodsC.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $InheritedInterfaceMethodsC = ::InheritedInterfaceMethodsC;
using $MethodArray = $Array<::java::lang::reflect::Method>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

void InheritedInterfaceMethods::init$() {
}

void InheritedInterfaceMethods::main($StringArray* args) {
	$useLocalObjectStack();
	$load(InheritedInterfaceMethods);
	$beforeCallerSensitive();
	$load($InheritedInterfaceMethodsC);
	$var($MethodArray, methods, $InheritedInterfaceMethodsC::class$->getMethods());
	for (int32_t i = 0; i < $nc(methods)->length; ++i) {
		if ($$nc($nc(methods->get(i))->getName())->equals("a"_s)) {
			return;
		}
	}
	$throwNew($RuntimeException, "TEST FAILED"_s);
}

InheritedInterfaceMethods::InheritedInterfaceMethods() {
}

$Class* InheritedInterfaceMethods::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(InheritedInterfaceMethods, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(InheritedInterfaceMethods, main, void, $StringArray*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"InheritedInterfaceMethods",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(InheritedInterfaceMethods, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(InheritedInterfaceMethods);
	});
	return class$;
}

$Class* InheritedInterfaceMethods::class$ = nullptr;