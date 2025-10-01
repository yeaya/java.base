#include <EnclosingMethodTests$1.h>

#include <EnclosingMethodTests.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $EnclosingMethodTests = ::EnclosingMethodTests;
using $ClassInfo = ::java::lang::ClassInfo;
using $Cloneable = ::java::lang::Cloneable;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _EnclosingMethodTests$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(EnclosingMethodTests$1::*)()>(&EnclosingMethodTests$1::init$))},
	{}
};

$EnclosingMethodInfo _EnclosingMethodTests$1_EnclosingMethodInfo_ = {
	"EnclosingMethodTests",
	nullptr,
	nullptr
};

$InnerClassInfo _EnclosingMethodTests$1_InnerClassesInfo_[] = {
	{"EnclosingMethodTests$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _EnclosingMethodTests$1_ClassInfo_ = {
	$ACC_SUPER,
	"EnclosingMethodTests$1",
	"java.lang.Object",
	"java.lang.Cloneable",
	nullptr,
	_EnclosingMethodTests$1_MethodInfo_,
	nullptr,
	&_EnclosingMethodTests$1_EnclosingMethodInfo_,
	_EnclosingMethodTests$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"EnclosingMethodTests"
};

$Object* allocate$EnclosingMethodTests$1($Class* clazz) {
	return $of($alloc(EnclosingMethodTests$1));
}

void EnclosingMethodTests$1::init$() {
}

EnclosingMethodTests$1::EnclosingMethodTests$1() {
}

$Class* EnclosingMethodTests$1::load$($String* name, bool initialize) {
	$loadClass(EnclosingMethodTests$1, name, initialize, &_EnclosingMethodTests$1_ClassInfo_, allocate$EnclosingMethodTests$1);
	return class$;
}

$Class* EnclosingMethodTests$1::class$ = nullptr;