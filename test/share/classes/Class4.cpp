#include <Class4.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _Class4_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Class4::*)()>(&Class4::init$))},
	{}
};

$ClassInfo _Class4_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Class4",
	"java.lang.Object",
	nullptr,
	nullptr,
	_Class4_MethodInfo_
};

$Object* allocate$Class4($Class* clazz) {
	return $of($alloc(Class4));
}

void Class4::init$() {
}

Class4::Class4() {
}

$Class* Class4::load$($String* name, bool initialize) {
	$loadClass(Class4, name, initialize, &_Class4_ClassInfo_, allocate$Class4);
	return class$;
}

$Class* Class4::class$ = nullptr;