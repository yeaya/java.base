#include <java/lang/invoke/MethodHandleImpl$BindCaller$1.h>

#include <java/lang/ClassValue.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandleImpl$BindCaller.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $ClassValue = ::java::lang::ClassValue;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandleImpl$BindCaller = ::java::lang::invoke::MethodHandleImpl$BindCaller;

namespace java {
	namespace lang {
		namespace invoke {

$MethodInfo _MethodHandleImpl$BindCaller$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(MethodHandleImpl$BindCaller$1, init$, void)},
	{"computeValue", "(Ljava/lang/Class;)Ljava/lang/invoke/MethodHandle;", "(Ljava/lang/Class<*>;)Ljava/lang/invoke/MethodHandle;", $PROTECTED, $virtualMethod(MethodHandleImpl$BindCaller$1, computeValue, $Object*, $Class*)},
	{}
};

$EnclosingMethodInfo _MethodHandleImpl$BindCaller$1_EnclosingMethodInfo_ = {
	"java.lang.invoke.MethodHandleImpl$BindCaller",
	nullptr,
	nullptr
};

$InnerClassInfo _MethodHandleImpl$BindCaller$1_InnerClassesInfo_[] = {
	{"java.lang.invoke.MethodHandleImpl$BindCaller", "java.lang.invoke.MethodHandleImpl", "BindCaller", $PRIVATE | $STATIC},
	{"java.lang.invoke.MethodHandleImpl$BindCaller$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _MethodHandleImpl$BindCaller$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.lang.invoke.MethodHandleImpl$BindCaller$1",
	"java.lang.ClassValue",
	nullptr,
	nullptr,
	_MethodHandleImpl$BindCaller$1_MethodInfo_,
	"Ljava/lang/ClassValue<Ljava/lang/invoke/MethodHandle;>;",
	&_MethodHandleImpl$BindCaller$1_EnclosingMethodInfo_,
	_MethodHandleImpl$BindCaller$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.invoke.MethodHandleImpl"
};

$Object* allocate$MethodHandleImpl$BindCaller$1($Class* clazz) {
	return $of($alloc(MethodHandleImpl$BindCaller$1));
}

void MethodHandleImpl$BindCaller$1::init$() {
	$ClassValue::init$();
}

$Object* MethodHandleImpl$BindCaller$1::computeValue($Class* hostClass) {
	return $of($MethodHandleImpl$BindCaller::makeInjectedInvoker(hostClass));
}

MethodHandleImpl$BindCaller$1::MethodHandleImpl$BindCaller$1() {
}

$Class* MethodHandleImpl$BindCaller$1::load$($String* name, bool initialize) {
	$loadClass(MethodHandleImpl$BindCaller$1, name, initialize, &_MethodHandleImpl$BindCaller$1_ClassInfo_, allocate$MethodHandleImpl$BindCaller$1);
	return class$;
}

$Class* MethodHandleImpl$BindCaller$1::class$ = nullptr;

		} // invoke
	} // lang
} // java