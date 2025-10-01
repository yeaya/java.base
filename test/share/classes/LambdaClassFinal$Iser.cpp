#include <LambdaClassFinal$Iser.h>

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
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _LambdaClassFinal$Iser_MethodInfo_[] = {
	{"m", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _LambdaClassFinal$Iser_InnerClassesInfo_[] = {
	{"LambdaClassFinal$Iser", "LambdaClassFinal", "Iser", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _LambdaClassFinal$Iser_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"LambdaClassFinal$Iser",
	nullptr,
	"java.io.Serializable",
	nullptr,
	_LambdaClassFinal$Iser_MethodInfo_,
	nullptr,
	nullptr,
	_LambdaClassFinal$Iser_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"LambdaClassFinal"
};

$Object* allocate$LambdaClassFinal$Iser($Class* clazz) {
	return $of($alloc(LambdaClassFinal$Iser));
}

$Class* LambdaClassFinal$Iser::load$($String* name, bool initialize) {
	$loadClass(LambdaClassFinal$Iser, name, initialize, &_LambdaClassFinal$Iser_ClassInfo_, allocate$LambdaClassFinal$Iser);
	return class$;
}

$Class* LambdaClassFinal$Iser::class$ = nullptr;