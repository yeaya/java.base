#include <EnclosingMethodTests$1StaticLocal.h>

#include <EnclosingMethodTests.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _EnclosingMethodTests$1StaticLocal_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(EnclosingMethodTests$1StaticLocal::*)()>(&EnclosingMethodTests$1StaticLocal::init$))},
	{}
};

$EnclosingMethodInfo _EnclosingMethodTests$1StaticLocal_EnclosingMethodInfo_ = {
	"EnclosingMethodTests",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _EnclosingMethodTests$1StaticLocal_InnerClassesInfo_[] = {
	{"EnclosingMethodTests$1StaticLocal", nullptr, "StaticLocal", 0},
	{}
};

$ClassInfo _EnclosingMethodTests$1StaticLocal_ClassInfo_ = {
	$ACC_SUPER,
	"EnclosingMethodTests$1StaticLocal",
	"java.lang.Object",
	nullptr,
	nullptr,
	_EnclosingMethodTests$1StaticLocal_MethodInfo_,
	nullptr,
	&_EnclosingMethodTests$1StaticLocal_EnclosingMethodInfo_,
	_EnclosingMethodTests$1StaticLocal_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"EnclosingMethodTests"
};

$Object* allocate$EnclosingMethodTests$1StaticLocal($Class* clazz) {
	return $of($alloc(EnclosingMethodTests$1StaticLocal));
}

void EnclosingMethodTests$1StaticLocal::init$() {
}

EnclosingMethodTests$1StaticLocal::EnclosingMethodTests$1StaticLocal() {
}

$Class* EnclosingMethodTests$1StaticLocal::load$($String* name, bool initialize) {
	$loadClass(EnclosingMethodTests$1StaticLocal, name, initialize, &_EnclosingMethodTests$1StaticLocal_ClassInfo_, allocate$EnclosingMethodTests$1StaticLocal);
	return class$;
}

$Class* EnclosingMethodTests$1StaticLocal::class$ = nullptr;