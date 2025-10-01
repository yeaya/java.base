#include <D1.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _D1_MethodInfo_[] = {
	{"m", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _D1_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"D1",
	nullptr,
	nullptr,
	nullptr,
	_D1_MethodInfo_
};

$Object* allocate$D1($Class* clazz) {
	return $of($alloc(D1));
}

$Class* D1::load$($String* name, bool initialize) {
	$loadClass(D1, name, initialize, &_D1_ClassInfo_, allocate$D1);
	return class$;
}

$Class* D1::class$ = nullptr;