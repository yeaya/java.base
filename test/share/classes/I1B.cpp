#include <I1B.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $I3B = ::I3B;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _I1B_MethodInfo_[] = {
	{"foo", "(Ljava/lang/Object;)Ljava/lang/Object;", "(TX2;)TX1;", $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _I1B_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"I1B",
	nullptr,
	"I3B",
	nullptr,
	_I1B_MethodInfo_,
	"<X1:Ljava/lang/Object;X2:Ljava/lang/Object;>Ljava/lang/Object;LI3B;"
};

$Object* allocate$I1B($Class* clazz) {
	return $of($alloc(I1B));
}

$Class* I1B::load$($String* name, bool initialize) {
	$loadClass(I1B, name, initialize, &_I1B_ClassInfo_, allocate$I1B);
	return class$;
}

$Class* I1B::class$ = nullptr;