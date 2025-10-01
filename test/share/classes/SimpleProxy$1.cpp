#include <SimpleProxy$1.h>

#include <SimpleProxy.h>
#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Arrays.h>
#include <jcpp.h>

using $SimpleProxy = ::SimpleProxy;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $InvocationHandler = ::java::lang::reflect::InvocationHandler;
using $Method = ::java::lang::reflect::Method;
using $Arrays = ::java::util::Arrays;

$MethodInfo _SimpleProxy$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(SimpleProxy$1::*)()>(&SimpleProxy$1::init$))},
	{"invoke", "(Ljava/lang/Object;Ljava/lang/reflect/Method;[Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, nullptr, "java.lang.Throwable"},
	{}
};

$EnclosingMethodInfo _SimpleProxy$1_EnclosingMethodInfo_ = {
	"SimpleProxy",
	"makeProxy",
	"(Ljava/lang/ClassLoader;Ljava/lang/Class;)V"
};

$InnerClassInfo _SimpleProxy$1_InnerClassesInfo_[] = {
	{"SimpleProxy$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _SimpleProxy$1_ClassInfo_ = {
	$ACC_SUPER,
	"SimpleProxy$1",
	"java.lang.Object",
	"java.lang.reflect.InvocationHandler",
	nullptr,
	_SimpleProxy$1_MethodInfo_,
	nullptr,
	&_SimpleProxy$1_EnclosingMethodInfo_,
	_SimpleProxy$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"SimpleProxy"
};

$Object* allocate$SimpleProxy$1($Class* clazz) {
	return $of($alloc(SimpleProxy$1));
}

void SimpleProxy$1::init$() {
}

$Object* SimpleProxy$1::invoke(Object$* proxy, $Method* method, $ObjectArray* args) {
	$var($ClassArray, intfs, $nc($of(proxy))->getClass()->getInterfaces());
	$init($System);
	$var($String, var$1, $$str({"Proxy for "_s, $($Arrays::toString(intfs)), " "_s}));
	$var($String, var$0, $$concat(var$1, $($nc(method)->getName())));
	$nc($System::out)->println($$concat(var$0, " is being invoked"));
	return $of(nullptr);
}

SimpleProxy$1::SimpleProxy$1() {
}

$Class* SimpleProxy$1::load$($String* name, bool initialize) {
	$loadClass(SimpleProxy$1, name, initialize, &_SimpleProxy$1_ClassInfo_, allocate$SimpleProxy$1);
	return class$;
}

$Class* SimpleProxy$1::class$ = nullptr;