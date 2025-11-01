#include <TestASIF4.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _TestASIF4_MethodInfo_[] = {
	{"get4", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _TestASIF4_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"TestASIF4",
	nullptr,
	nullptr,
	nullptr,
	_TestASIF4_MethodInfo_
};

$Object* allocate$TestASIF4($Class* clazz) {
	return $of($alloc(TestASIF4));
}

$Class* TestASIF4::load$($String* name, bool initialize) {
	$loadClass(TestASIF4, name, initialize, &_TestASIF4_ClassInfo_, allocate$TestASIF4);
	return class$;
}

$Class* TestASIF4::class$ = nullptr;