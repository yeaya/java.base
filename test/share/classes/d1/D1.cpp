#include <d1/D1.h>

#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodHandles.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandles = ::java::lang::invoke::MethodHandles;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;

namespace d1 {

$MethodInfo _D1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(D1::*)()>(&D1::init$))},
	{"lookup", "()Ljava/lang/invoke/MethodHandles$Lookup;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$MethodHandles$Lookup*(*)()>(&D1::lookup))},
	{}
};

$ClassInfo _D1_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"d1.D1",
	"java.lang.Object",
	nullptr,
	nullptr,
	_D1_MethodInfo_
};

$Object* allocate$D1($Class* clazz) {
	return $of($alloc(D1));
}

void D1::init$() {
}

$MethodHandles$Lookup* D1::lookup() {
	$load(D1);
	$beforeCallerSensitive();
	return $MethodHandles::lookup();
}

D1::D1() {
}

$Class* D1::load$($String* name, bool initialize) {
	$loadClass(D1, name, initialize, &_D1_ClassInfo_, allocate$D1);
	return class$;
}

$Class* D1::class$ = nullptr;

} // d1