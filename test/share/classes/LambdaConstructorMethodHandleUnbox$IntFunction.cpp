#include <LambdaConstructorMethodHandleUnbox$IntFunction.h>

#include <LambdaConstructorMethodHandleUnbox.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _LambdaConstructorMethodHandleUnbox$IntFunction_MethodInfo_[] = {
	{"m", "(Ljava/lang/Object;)I", "(TX;)I", $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _LambdaConstructorMethodHandleUnbox$IntFunction_InnerClassesInfo_[] = {
	{"LambdaConstructorMethodHandleUnbox$IntFunction", "LambdaConstructorMethodHandleUnbox", "IntFunction", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _LambdaConstructorMethodHandleUnbox$IntFunction_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"LambdaConstructorMethodHandleUnbox$IntFunction",
	nullptr,
	nullptr,
	nullptr,
	_LambdaConstructorMethodHandleUnbox$IntFunction_MethodInfo_,
	"<X:Ljava/lang/Object;>Ljava/lang/Object;",
	nullptr,
	_LambdaConstructorMethodHandleUnbox$IntFunction_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"LambdaConstructorMethodHandleUnbox"
};

$Object* allocate$LambdaConstructorMethodHandleUnbox$IntFunction($Class* clazz) {
	return $of($alloc(LambdaConstructorMethodHandleUnbox$IntFunction));
}

$Class* LambdaConstructorMethodHandleUnbox$IntFunction::load$($String* name, bool initialize) {
	$loadClass(LambdaConstructorMethodHandleUnbox$IntFunction, name, initialize, &_LambdaConstructorMethodHandleUnbox$IntFunction_ClassInfo_, allocate$LambdaConstructorMethodHandleUnbox$IntFunction);
	return class$;
}

$Class* LambdaConstructorMethodHandleUnbox$IntFunction::class$ = nullptr;