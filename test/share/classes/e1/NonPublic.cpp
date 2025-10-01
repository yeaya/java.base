#include <e1/NonPublic.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace e1 {

$MethodInfo _NonPublic_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(NonPublic::*)()>(&NonPublic::init$))},
	{"publicStatic", "()V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)()>(&NonPublic::publicStatic))},
	{}
};

$ClassInfo _NonPublic_ClassInfo_ = {
	$ACC_SUPER,
	"e1.NonPublic",
	"java.lang.Object",
	nullptr,
	nullptr,
	_NonPublic_MethodInfo_
};

$Object* allocate$NonPublic($Class* clazz) {
	return $of($alloc(NonPublic));
}

void NonPublic::init$() {
}

void NonPublic::publicStatic() {
}

NonPublic::NonPublic() {
}

$Class* NonPublic::load$($String* name, bool initialize) {
	$loadClass(NonPublic, name, initialize, &_NonPublic_ClassInfo_, allocate$NonPublic);
	return class$;
}

$Class* NonPublic::class$ = nullptr;

} // e1