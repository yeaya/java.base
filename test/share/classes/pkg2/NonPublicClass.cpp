#include <pkg2/NonPublicClass.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace pkg2 {

$MethodInfo _NonPublicClass_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(NonPublicClass::*)()>(&NonPublicClass::init$))},
	{}
};

$ClassInfo _NonPublicClass_ClassInfo_ = {
	$ACC_SUPER,
	"pkg2.NonPublicClass",
	"java.lang.Object",
	nullptr,
	nullptr,
	_NonPublicClass_MethodInfo_
};

$Object* allocate$NonPublicClass($Class* clazz) {
	return $of($alloc(NonPublicClass));
}

void NonPublicClass::init$() {
}

NonPublicClass::NonPublicClass() {
}

$Class* NonPublicClass::load$($String* name, bool initialize) {
	$loadClass(NonPublicClass, name, initialize, &_NonPublicClass_ClassInfo_, allocate$NonPublicClass);
	return class$;
}

$Class* NonPublicClass::class$ = nullptr;

} // pkg2