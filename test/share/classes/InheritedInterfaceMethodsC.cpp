#include <InheritedInterfaceMethodsC.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _InheritedInterfaceMethodsC_MethodInfo_[] = {
	{"c", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(InheritedInterfaceMethodsC, c, void)},
	{}
};

$ClassInfo _InheritedInterfaceMethodsC_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"InheritedInterfaceMethodsC",
	nullptr,
	"InheritedInterfaceMethodsB",
	nullptr,
	_InheritedInterfaceMethodsC_MethodInfo_
};

$Object* allocate$InheritedInterfaceMethodsC($Class* clazz) {
	return $of($alloc(InheritedInterfaceMethodsC));
}

$Class* InheritedInterfaceMethodsC::load$($String* name, bool initialize) {
	$loadClass(InheritedInterfaceMethodsC, name, initialize, &_InheritedInterfaceMethodsC_ClassInfo_, allocate$InheritedInterfaceMethodsC);
	return class$;
}

$Class* InheritedInterfaceMethodsC::class$ = nullptr;