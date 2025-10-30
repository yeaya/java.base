#include <LambdaReturn$I.h>

#include <LambdaReturn.h>
#include <jcpp.h>

using $LambdaReturn = ::LambdaReturn;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _LambdaReturn$I_MethodInfo_[] = {
	{"m", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _LambdaReturn$I_InnerClassesInfo_[] = {
	{"LambdaReturn$I", "LambdaReturn", "I", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _LambdaReturn$I_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"LambdaReturn$I",
	nullptr,
	nullptr,
	nullptr,
	_LambdaReturn$I_MethodInfo_,
	nullptr,
	nullptr,
	_LambdaReturn$I_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"LambdaReturn"
};

$Object* allocate$LambdaReturn$I($Class* clazz) {
	return $of($alloc(LambdaReturn$I));
}

$Class* LambdaReturn$I::load$($String* name, bool initialize) {
	$loadClass(LambdaReturn$I, name, initialize, &_LambdaReturn$I_ClassInfo_, allocate$LambdaReturn$I);
	return class$;
}

$Class* LambdaReturn$I::class$ = nullptr;