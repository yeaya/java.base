#include <d2/D3.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace d2 {

$MethodInfo _D3_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(D3::*)()>(&D3::init$))},
	{}
};

$ClassInfo _D3_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"d2.D3",
	"java.lang.Object",
	nullptr,
	nullptr,
	_D3_MethodInfo_
};

$Object* allocate$D3($Class* clazz) {
	return $of($alloc(D3));
}

void D3::init$() {
}

D3::D3() {
}

$Class* D3::load$($String* name, bool initialize) {
	$loadClass(D3, name, initialize, &_D3_ClassInfo_, allocate$D3);
	return class$;
}

$Class* D3::class$ = nullptr;

} // d2