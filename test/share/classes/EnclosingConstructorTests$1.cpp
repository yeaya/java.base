#include <EnclosingConstructorTests$1.h>

#include <EnclosingConstructorTests.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $EnclosingConstructorTests = ::EnclosingConstructorTests;
using $ClassInfo = ::java::lang::ClassInfo;
using $Cloneable = ::java::lang::Cloneable;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _EnclosingConstructorTests$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(EnclosingConstructorTests$1::*)()>(&EnclosingConstructorTests$1::init$))},
	{}
};

$EnclosingMethodInfo _EnclosingConstructorTests$1_EnclosingMethodInfo_ = {
	"EnclosingConstructorTests",
	nullptr,
	nullptr
};

$InnerClassInfo _EnclosingConstructorTests$1_InnerClassesInfo_[] = {
	{"EnclosingConstructorTests$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _EnclosingConstructorTests$1_ClassInfo_ = {
	$ACC_SUPER,
	"EnclosingConstructorTests$1",
	"java.lang.Object",
	"java.lang.Cloneable",
	nullptr,
	_EnclosingConstructorTests$1_MethodInfo_,
	nullptr,
	&_EnclosingConstructorTests$1_EnclosingMethodInfo_,
	_EnclosingConstructorTests$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"EnclosingConstructorTests"
};

$Object* allocate$EnclosingConstructorTests$1($Class* clazz) {
	return $of($alloc(EnclosingConstructorTests$1));
}

void EnclosingConstructorTests$1::init$() {
}

EnclosingConstructorTests$1::EnclosingConstructorTests$1() {
}

$Class* EnclosingConstructorTests$1::load$($String* name, bool initialize) {
	$loadClass(EnclosingConstructorTests$1, name, initialize, &_EnclosingConstructorTests$1_ClassInfo_, allocate$EnclosingConstructorTests$1);
	return class$;
}

$Class* EnclosingConstructorTests$1::class$ = nullptr;