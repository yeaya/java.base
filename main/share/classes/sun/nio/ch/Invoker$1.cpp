#include <sun/nio/ch/Invoker$1.h>

#include <java/lang/ThreadLocal.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ThreadLocal = ::java::lang::ThreadLocal;

namespace sun {
	namespace nio {
		namespace ch {

$MethodInfo _Invoker$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(Invoker$1, init$, void)},
	{"initialValue", "()Lsun/nio/ch/Invoker$GroupAndInvokeCount;", nullptr, $PROTECTED, $virtualMethod(Invoker$1, initialValue, $Object*)},
	{}
};

$EnclosingMethodInfo _Invoker$1_EnclosingMethodInfo_ = {
	"sun.nio.ch.Invoker",
	nullptr,
	nullptr
};

$InnerClassInfo _Invoker$1_InnerClassesInfo_[] = {
	{"sun.nio.ch.Invoker$1", nullptr, nullptr, 0},
	{"sun.nio.ch.Invoker$GroupAndInvokeCount", "sun.nio.ch.Invoker", "GroupAndInvokeCount", $STATIC},
	{}
};

$ClassInfo _Invoker$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.ch.Invoker$1",
	"java.lang.ThreadLocal",
	nullptr,
	nullptr,
	_Invoker$1_MethodInfo_,
	"Ljava/lang/ThreadLocal<Lsun/nio/ch/Invoker$GroupAndInvokeCount;>;",
	&_Invoker$1_EnclosingMethodInfo_,
	_Invoker$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.ch.Invoker"
};

$Object* allocate$Invoker$1($Class* clazz) {
	return $of($alloc(Invoker$1));
}

void Invoker$1::init$() {
	$ThreadLocal::init$();
}

$Object* Invoker$1::initialValue() {
	return $of(nullptr);
}

Invoker$1::Invoker$1() {
}

$Class* Invoker$1::load$($String* name, bool initialize) {
	$loadClass(Invoker$1, name, initialize, &_Invoker$1_ClassInfo_, allocate$Invoker$1);
	return class$;
}

$Class* Invoker$1::class$ = nullptr;

		} // ch
	} // nio
} // sun