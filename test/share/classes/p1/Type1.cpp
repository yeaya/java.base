#include <p1/Type1.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace p1 {

$MethodInfo _Type1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Type1::*)()>(&Type1::init$))},
	{}
};

$ClassInfo _Type1_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"p1.Type1",
	"java.lang.Object",
	nullptr,
	nullptr,
	_Type1_MethodInfo_
};

$Object* allocate$Type1($Class* clazz) {
	return $of($alloc(Type1));
}

void Type1::init$() {
}

Type1::Type1() {
}

$Class* Type1::load$($String* name, bool initialize) {
	$loadClass(Type1, name, initialize, &_Type1_ClassInfo_, allocate$Type1);
	return class$;
}

$Class* Type1::class$ = nullptr;

} // p1