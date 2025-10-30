#include <p1/B.h>

#include <jcpp.h>

#undef B
#undef INSTANCE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace p1 {

$FieldInfo _B_FieldInfo_[] = {
	{"INSTANCE", "Lp1/B;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(B, INSTANCE)},
	{}
};

$MethodInfo _B_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(B::*)()>(&B::init$))},
	{}
};

$ClassInfo _B_ClassInfo_ = {
	$ACC_SUPER,
	"p1.B",
	"java.lang.Object",
	nullptr,
	_B_FieldInfo_,
	_B_MethodInfo_
};

$Object* allocate$B($Class* clazz) {
	return $of($alloc(B));
}

B* B::INSTANCE = nullptr;

void B::init$() {
}

void clinit$B($Class* class$) {
	$assignStatic(B::INSTANCE, $new(B));
}

B::B() {
}

$Class* B::load$($String* name, bool initialize) {
	$loadClass(B, name, initialize, &_B_ClassInfo_, clinit$B, allocate$B);
	return class$;
}

$Class* B::class$ = nullptr;

} // p1