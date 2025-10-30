#include <C3.h>

#include <jcpp.h>

using $D3 = ::D3;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _C3_MethodInfo_[] = {
	{"m", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _C3_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"C3",
	nullptr,
	"D3",
	nullptr,
	_C3_MethodInfo_
};

$Object* allocate$C3($Class* clazz) {
	return $of($alloc(C3));
}

$Class* C3::load$($String* name, bool initialize) {
	$loadClass(C3, name, initialize, &_C3_ClassInfo_, allocate$C3);
	return class$;
}

$Class* C3::class$ = nullptr;