#include <Class3.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _Class3_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Class3::*)()>(&Class3::init$))},
	{}
};

$ClassInfo _Class3_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Class3",
	"java.lang.Object",
	nullptr,
	nullptr,
	_Class3_MethodInfo_
};

$Object* allocate$Class3($Class* clazz) {
	return $of($alloc(Class3));
}

void Class3::init$() {
}

Class3::Class3() {
}

$Class* Class3::load$($String* name, bool initialize) {
	$loadClass(Class3, name, initialize, &_Class3_ClassInfo_, allocate$Class3);
	return class$;
}

$Class* Class3::class$ = nullptr;