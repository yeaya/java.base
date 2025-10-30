#include <p2/Type2.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace p2 {

$MethodInfo _Type2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Type2::*)()>(&Type2::init$))},
	{}
};

$ClassInfo _Type2_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"p2.Type2",
	"java.lang.Object",
	nullptr,
	nullptr,
	_Type2_MethodInfo_
};

$Object* allocate$Type2($Class* clazz) {
	return $of($alloc(Type2));
}

void Type2::init$() {
}

Type2::Type2() {
}

$Class* Type2::load$($String* name, bool initialize) {
	$loadClass(Type2, name, initialize, &_Type2_ClassInfo_, allocate$Type2);
	return class$;
}

$Class* Type2::class$ = nullptr;

} // p2