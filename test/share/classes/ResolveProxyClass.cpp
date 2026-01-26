#include <ResolveProxyClass.h>

#include <ResolveProxyClass$TestObjectInputStream.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/Runnable.h>
#include <jcpp.h>

using $ResolveProxyClass$TestObjectInputStream = ::ResolveProxyClass$TestObjectInputStream;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;

$MethodInfo _ResolveProxyClass_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(ResolveProxyClass, init$, void)},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(ResolveProxyClass, main, void, $StringArray*)},
	{}
};

$InnerClassInfo _ResolveProxyClass_InnerClassesInfo_[] = {
	{"ResolveProxyClass$TestObjectInputStream", "ResolveProxyClass", "TestObjectInputStream", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _ResolveProxyClass_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"ResolveProxyClass",
	"java.lang.Object",
	nullptr,
	nullptr,
	_ResolveProxyClass_MethodInfo_,
	nullptr,
	nullptr,
	_ResolveProxyClass_InnerClassesInfo_,
	nullptr,
	nullptr,
	"ResolveProxyClass$TestObjectInputStream"
};

$Object* allocate$ResolveProxyClass($Class* clazz) {
	return $of($alloc(ResolveProxyClass));
}

void ResolveProxyClass::init$() {
}

void ResolveProxyClass::main($StringArray* args) {
	$load(ResolveProxyClass);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$nc($System::err)->println("\nRegression test for bug 4258644\n"_s);
	try {
		$($Thread::currentThread())->setContextClassLoader(nullptr);
		$var($ClassLoader, expectedLoader, ResolveProxyClass::class$->getClassLoader());
		$var($ResolveProxyClass$TestObjectInputStream, in, $new($ResolveProxyClass$TestObjectInputStream));
		$Class* proxyClass = in->resolveProxyClass($$new($StringArray, {$($Runnable::class$->getName())}));
		$var($ClassLoader, proxyLoader, $nc(proxyClass)->getClassLoader());
		$nc($System::err)->println($$str({"proxy class \""_s, proxyClass, "\" defined in loader: "_s, proxyLoader}));
		if (proxyLoader != expectedLoader) {
			$throwNew($RuntimeException, $$str({"proxy class defined in loader: "_s, proxyLoader}));
		}
		$nc($System::err)->println("\nTEST PASSED"_s);
	} catch ($Throwable& e) {
		$nc($System::err)->println("\nTEST FAILED:"_s);
		e->printStackTrace();
		$throwNew($RuntimeException, $$str({"TEST FAILED: "_s, $(e->toString())}));
	}
}

ResolveProxyClass::ResolveProxyClass() {
}

$Class* ResolveProxyClass::load$($String* name, bool initialize) {
	$loadClass(ResolveProxyClass, name, initialize, &_ResolveProxyClass_ClassInfo_, allocate$ResolveProxyClass);
	return class$;
}

$Class* ResolveProxyClass::class$ = nullptr;