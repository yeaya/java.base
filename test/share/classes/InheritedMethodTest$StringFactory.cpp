#include <InheritedMethodTest$StringFactory.h>

#include <InheritedMethodTest.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _InheritedMethodTest$StringFactory_MethodInfo_[] = {
	{"get", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(InheritedMethodTest$StringFactory, get, $String*)},
	{}
};

$InnerClassInfo _InheritedMethodTest$StringFactory_InnerClassesInfo_[] = {
	{"InheritedMethodTest$StringFactory", "InheritedMethodTest", "StringFactory", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _InheritedMethodTest$StringFactory_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"InheritedMethodTest$StringFactory",
	nullptr,
	nullptr,
	nullptr,
	_InheritedMethodTest$StringFactory_MethodInfo_,
	nullptr,
	nullptr,
	_InheritedMethodTest$StringFactory_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"InheritedMethodTest"
};

$Object* allocate$InheritedMethodTest$StringFactory($Class* clazz) {
	return $of($alloc(InheritedMethodTest$StringFactory));
}

$Class* InheritedMethodTest$StringFactory::load$($String* name, bool initialize) {
	$loadClass(InheritedMethodTest$StringFactory, name, initialize, &_InheritedMethodTest$StringFactory_ClassInfo_, allocate$InheritedMethodTest$StringFactory);
	return class$;
}

$Class* InheritedMethodTest$StringFactory::class$ = nullptr;