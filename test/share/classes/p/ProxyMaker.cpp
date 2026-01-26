#include <p/ProxyMaker.h>

#include <java/lang/reflect/InvocationHandler.h>
#include <java/lang/reflect/Method.h>
#include <java/lang/reflect/Proxy.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $InvocationHandler = ::java::lang::reflect::InvocationHandler;
using $Method = ::java::lang::reflect::Method;
using $Proxy = ::java::lang::reflect::Proxy;

namespace p {

$MethodInfo _ProxyMaker_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(ProxyMaker, init$, void)},
	{"getInvocationHandler", "(Ljava/lang/Object;)Ljava/lang/reflect/InvocationHandler;", nullptr, $PUBLIC | $STATIC, $staticMethod(ProxyMaker, getInvocationHandler, $InvocationHandler*, Object$*)},
	{"invoke", "(Ljava/lang/Object;Ljava/lang/reflect/Method;[Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $STATIC | $TRANSIENT, $staticMethod(ProxyMaker, invoke, $Object*, Object$*, $Method*, $ObjectArray*), "java.lang.Throwable"},
	{}
};

$ClassInfo _ProxyMaker_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"p.ProxyMaker",
	"java.lang.Object",
	nullptr,
	nullptr,
	_ProxyMaker_MethodInfo_
};

$Object* allocate$ProxyMaker($Class* clazz) {
	return $of($alloc(ProxyMaker));
}

void ProxyMaker::init$() {
}

$Object* ProxyMaker::invoke(Object$* proxy, $Method* method, $ObjectArray* args) {
	$load(ProxyMaker);
	$beforeCallerSensitive();
	return $of($InvocationHandler::invokeDefault(proxy, method, args));
}

$InvocationHandler* ProxyMaker::getInvocationHandler(Object$* proxy) {
	$load(ProxyMaker);
	$beforeCallerSensitive();
	return $Proxy::getInvocationHandler(proxy);
}

ProxyMaker::ProxyMaker() {
}

$Class* ProxyMaker::load$($String* name, bool initialize) {
	$loadClass(ProxyMaker, name, initialize, &_ProxyMaker_ClassInfo_, allocate$ProxyMaker);
	return class$;
}

$Class* ProxyMaker::class$ = nullptr;

} // p