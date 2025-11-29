#include <EnclosingConstructorTests$1StaticLocal.h>

#include <EnclosingConstructorTests.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _EnclosingConstructorTests$1StaticLocal_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(EnclosingConstructorTests$1StaticLocal::*)()>(&EnclosingConstructorTests$1StaticLocal::init$))},
	{}
};

$EnclosingMethodInfo _EnclosingConstructorTests$1StaticLocal_EnclosingMethodInfo_ = {
	"EnclosingConstructorTests",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _EnclosingConstructorTests$1StaticLocal_InnerClassesInfo_[] = {
	{"EnclosingConstructorTests$1StaticLocal", nullptr, "StaticLocal", 0},
	{}
};

$ClassInfo _EnclosingConstructorTests$1StaticLocal_ClassInfo_ = {
	$ACC_SUPER,
	"EnclosingConstructorTests$1StaticLocal",
	"java.lang.Object",
	nullptr,
	nullptr,
	_EnclosingConstructorTests$1StaticLocal_MethodInfo_,
	nullptr,
	&_EnclosingConstructorTests$1StaticLocal_EnclosingMethodInfo_,
	_EnclosingConstructorTests$1StaticLocal_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"EnclosingConstructorTests"
};

$Object* allocate$EnclosingConstructorTests$1StaticLocal($Class* clazz) {
	return $of($alloc(EnclosingConstructorTests$1StaticLocal));
}

void EnclosingConstructorTests$1StaticLocal::init$() {
}

EnclosingConstructorTests$1StaticLocal::EnclosingConstructorTests$1StaticLocal() {
}

$Class* EnclosingConstructorTests$1StaticLocal::load$($String* name, bool initialize) {
	$loadClass(EnclosingConstructorTests$1StaticLocal, name, initialize, &_EnclosingConstructorTests$1StaticLocal_ClassInfo_, allocate$EnclosingConstructorTests$1StaticLocal);
	return class$;
}

$Class* EnclosingConstructorTests$1StaticLocal::class$ = nullptr;