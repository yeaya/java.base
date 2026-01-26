#include <D3.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _D3_MethodInfo_[] = {
	{"m", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(D3, m, void)},
	{}
};

$ClassInfo _D3_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"D3",
	nullptr,
	nullptr,
	nullptr,
	_D3_MethodInfo_
};

$Object* allocate$D3($Class* clazz) {
	return $of($alloc(D3));
}

$Class* D3::load$($String* name, bool initialize) {
	$loadClass(D3, name, initialize, &_D3_ClassInfo_, allocate$D3);
	return class$;
}

$Class* D3::class$ = nullptr;