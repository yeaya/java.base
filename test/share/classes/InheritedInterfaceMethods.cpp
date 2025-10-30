#include <InheritedInterfaceMethods.h>

#include <InheritedInterfaceMethodsC.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $InheritedInterfaceMethodsC = ::InheritedInterfaceMethodsC;
using $MethodArray = $Array<::java::lang::reflect::Method>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $Method = ::java::lang::reflect::Method;

$MethodInfo _InheritedInterfaceMethods_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(InheritedInterfaceMethods::*)()>(&InheritedInterfaceMethods::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&InheritedInterfaceMethods::main))},
	{}
};

$ClassInfo _InheritedInterfaceMethods_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"InheritedInterfaceMethods",
	"java.lang.Object",
	nullptr,
	nullptr,
	_InheritedInterfaceMethods_MethodInfo_
};

$Object* allocate$InheritedInterfaceMethods($Class* clazz) {
	return $of($alloc(InheritedInterfaceMethods));
}

void InheritedInterfaceMethods::init$() {
}

void InheritedInterfaceMethods::main($StringArray* args) {
	$load(InheritedInterfaceMethods);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$load($InheritedInterfaceMethodsC);
	$var($MethodArray, methods, $InheritedInterfaceMethodsC::class$->getMethods());
	for (int32_t i = 0; i < $nc(methods)->length; ++i) {
		if ($nc($($nc(methods->get(i))->getName()))->equals("a"_s)) {
			return;
		}
	}
	$throwNew($RuntimeException, "TEST FAILED"_s);
}

InheritedInterfaceMethods::InheritedInterfaceMethods() {
}

$Class* InheritedInterfaceMethods::load$($String* name, bool initialize) {
	$loadClass(InheritedInterfaceMethods, name, initialize, &_InheritedInterfaceMethods_ClassInfo_, allocate$InheritedInterfaceMethods);
	return class$;
}

$Class* InheritedInterfaceMethods::class$ = nullptr;