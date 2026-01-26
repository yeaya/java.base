#include <c1/C1.h>

#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodHandles.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandles = ::java::lang::invoke::MethodHandles;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;

namespace c1 {

$MethodInfo _C1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(C1, init$, void)},
	{"lookup", "()Ljava/lang/invoke/MethodHandles$Lookup;", nullptr, $PUBLIC | $STATIC, $staticMethod(C1, lookup, $MethodHandles$Lookup*)},
	{}
};

$ClassInfo _C1_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"c1.C1",
	"java.lang.Object",
	nullptr,
	nullptr,
	_C1_MethodInfo_
};

$Object* allocate$C1($Class* clazz) {
	return $of($alloc(C1));
}

void C1::init$() {
}

$MethodHandles$Lookup* C1::lookup() {
	$load(C1);
	$beforeCallerSensitive();
	return $MethodHandles::lookup();
}

C1::C1() {
}

$Class* C1::load$($String* name, bool initialize) {
	$loadClass(C1, name, initialize, &_C1_ClassInfo_, allocate$C1);
	return class$;
}

$Class* C1::class$ = nullptr;

} // c1