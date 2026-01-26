#include <Identity$1.h>

#include <java/lang/ThreadLocal.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $ThreadLocal = ::java::lang::ThreadLocal;

$MethodInfo _Identity$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(Identity$1, init$, void)},
	{"initialValue", "()Ljava/lang/Integer;", nullptr, $PROTECTED, $virtualMethod(Identity$1, initialValue, $Object*)},
	{}
};

$EnclosingMethodInfo _Identity$1_EnclosingMethodInfo_ = {
	"Identity",
	nullptr,
	nullptr
};

$InnerClassInfo _Identity$1_InnerClassesInfo_[] = {
	{"Identity$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Identity$1_ClassInfo_ = {
	$ACC_SUPER,
	"Identity$1",
	"java.lang.ThreadLocal",
	nullptr,
	nullptr,
	_Identity$1_MethodInfo_,
	"Ljava/lang/ThreadLocal<Ljava/lang/Integer;>;",
	&_Identity$1_EnclosingMethodInfo_,
	_Identity$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Identity"
};

$Object* allocate$Identity$1($Class* clazz) {
	return $of($alloc(Identity$1));
}

void Identity$1::init$() {
	$ThreadLocal::init$();
}

$Object* Identity$1::initialValue() {
	return $of($Integer::valueOf(-1));
}

Identity$1::Identity$1() {
}

$Class* Identity$1::load$($String* name, bool initialize) {
	$loadClass(Identity$1, name, initialize, &_Identity$1_ClassInfo_, allocate$Identity$1);
	return class$;
}

$Class* Identity$1::class$ = nullptr;