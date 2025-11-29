#include <B3.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _B3_MethodInfo_[] = {
	{"m", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _B3_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"B3",
	nullptr,
	"D3",
	nullptr,
	_B3_MethodInfo_
};

$Object* allocate$B3($Class* clazz) {
	return $of($alloc(B3));
}

$Class* B3::load$($String* name, bool initialize) {
	$loadClass(B3, name, initialize, &_B3_ClassInfo_, allocate$B3);
	return class$;
}

$Class* B3::class$ = nullptr;