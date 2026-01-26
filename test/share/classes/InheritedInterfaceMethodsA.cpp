#include <InheritedInterfaceMethodsA.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _InheritedInterfaceMethodsA_MethodInfo_[] = {
	{"a", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(InheritedInterfaceMethodsA, a, void)},
	{}
};

$ClassInfo _InheritedInterfaceMethodsA_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"InheritedInterfaceMethodsA",
	nullptr,
	nullptr,
	nullptr,
	_InheritedInterfaceMethodsA_MethodInfo_
};

$Object* allocate$InheritedInterfaceMethodsA($Class* clazz) {
	return $of($alloc(InheritedInterfaceMethodsA));
}

$Class* InheritedInterfaceMethodsA::load$($String* name, bool initialize) {
	$loadClass(InheritedInterfaceMethodsA, name, initialize, &_InheritedInterfaceMethodsA_ClassInfo_, allocate$InheritedInterfaceMethodsA);
	return class$;
}

$Class* InheritedInterfaceMethodsA::class$ = nullptr;