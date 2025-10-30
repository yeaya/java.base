#include <Class2.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _Class2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Class2::*)()>(&Class2::init$))},
	{}
};

$ClassInfo _Class2_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Class2",
	"java.lang.Object",
	nullptr,
	nullptr,
	_Class2_MethodInfo_
};

$Object* allocate$Class2($Class* clazz) {
	return $of($alloc(Class2));
}

void Class2::init$() {
}

Class2::Class2() {
}

$Class* Class2::load$($String* name, bool initialize) {
	$loadClass(Class2, name, initialize, &_Class2_ClassInfo_, allocate$Class2);
	return class$;
}

$Class* Class2::class$ = nullptr;