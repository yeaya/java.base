#include <I2B.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _I2B_MethodInfo_[] = {
	{"bar", "(Ljava/lang/Object;)Ljava/lang/Object;", "(TE3;)TE1;^TE2;", $PUBLIC | $ABSTRACT, nullptr, "java.lang.Throwable"},
	{}
};

$ClassInfo _I2B_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"I2B",
	nullptr,
	nullptr,
	nullptr,
	_I2B_MethodInfo_,
	"<E1:Ljava/lang/Object;E2:Ljava/lang/Throwable;E3:Ljava/lang/Object;>Ljava/lang/Object;"
};

$Object* allocate$I2B($Class* clazz) {
	return $of($alloc(I2B));
}

$Class* I2B::load$($String* name, bool initialize) {
	$loadClass(I2B, name, initialize, &_I2B_ClassInfo_, allocate$I2B);
	return class$;
}

$Class* I2B::class$ = nullptr;