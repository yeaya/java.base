#include <LambdaClassFinal$I.h>

#include <LambdaClassFinal.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $LambdaClassFinal = ::LambdaClassFinal;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _LambdaClassFinal$I_MethodInfo_[] = {
	{"m", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _LambdaClassFinal$I_InnerClassesInfo_[] = {
	{"LambdaClassFinal$I", "LambdaClassFinal", "I", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _LambdaClassFinal$I_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"LambdaClassFinal$I",
	nullptr,
	nullptr,
	nullptr,
	_LambdaClassFinal$I_MethodInfo_,
	nullptr,
	nullptr,
	_LambdaClassFinal$I_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"LambdaClassFinal"
};

$Object* allocate$LambdaClassFinal$I($Class* clazz) {
	return $of($alloc(LambdaClassFinal$I));
}

$Class* LambdaClassFinal$I::load$($String* name, bool initialize) {
	$loadClass(LambdaClassFinal$I, name, initialize, &_LambdaClassFinal$I_ClassInfo_, allocate$LambdaClassFinal$I);
	return class$;
}

$Class* LambdaClassFinal$I::class$ = nullptr;