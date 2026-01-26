#include <pkg2/PublicClass.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace pkg2 {

$MethodInfo _PublicClass_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(PublicClass, init$, void)},
	{}
};

$ClassInfo _PublicClass_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"pkg2.PublicClass",
	"java.lang.Object",
	nullptr,
	nullptr,
	_PublicClass_MethodInfo_
};

$Object* allocate$PublicClass($Class* clazz) {
	return $of($alloc(PublicClass));
}

void PublicClass::init$() {
}

PublicClass::PublicClass() {
}

$Class* PublicClass::load$($String* name, bool initialize) {
	$loadClass(PublicClass, name, initialize, &_PublicClass_ClassInfo_, allocate$PublicClass);
	return class$;
}

$Class* PublicClass::class$ = nullptr;

} // pkg2