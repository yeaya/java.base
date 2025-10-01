#include <c1/C1.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodHandles.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandles = ::java::lang::invoke::MethodHandles;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;

namespace c1 {

$MethodInfo _C1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(C1::*)()>(&C1::init$))},
	{"lookup", "()Ljava/lang/invoke/MethodHandles$Lookup;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$MethodHandles$Lookup*(*)()>(&C1::lookup))},
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