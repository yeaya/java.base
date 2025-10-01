#include <Class1.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _Class1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Class1::*)()>(&Class1::init$))},
	{}
};

$ClassInfo _Class1_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Class1",
	"java.lang.Object",
	nullptr,
	nullptr,
	_Class1_MethodInfo_
};

$Object* allocate$Class1($Class* clazz) {
	return $of($alloc(Class1));
}

void Class1::init$() {
}

Class1::Class1() {
}

$Class* Class1::load$($String* name, bool initialize) {
	$loadClass(Class1, name, initialize, &_Class1_ClassInfo_, allocate$Class1);
	return class$;
}

$Class* Class1::class$ = nullptr;