#include <ResolveProxyClass.h>
#include <ResolveProxyClass$TestObjectInputStream.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/Runnable.h>
#include <jcpp.h>

using $ResolveProxyClass$TestObjectInputStream = ::ResolveProxyClass$TestObjectInputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;

void ResolveProxyClass::init$() {
}

void ResolveProxyClass::main($StringArray* args) {
	$useLocalObjectStack();
	$load(ResolveProxyClass);
	$beforeCallerSensitive();
	$nc($System::err)->println("\nRegression test for bug 4258644\n"_s);
	try {
		$($Thread::currentThread())->setContextClassLoader(nullptr);
		$var($ClassLoader, expectedLoader, ResolveProxyClass::class$->getClassLoader());
		$var($ResolveProxyClass$TestObjectInputStream, in, $new($ResolveProxyClass$TestObjectInputStream));
		$Class* proxyClass = in->resolveProxyClass($$new($StringArray, {$($Runnable::class$->getName())}));
		$var($ClassLoader, proxyLoader, $nc(proxyClass)->getClassLoader());
		$System::err->println($$str({"proxy class \""_s, proxyClass, "\" defined in loader: "_s, proxyLoader}));
		if (proxyLoader != expectedLoader) {
			$throwNew($RuntimeException, $$str({"proxy class defined in loader: "_s, proxyLoader}));
		}
		$System::err->println("\nTEST PASSED"_s);
	} catch ($Throwable& e) {
		$System::err->println("\nTEST FAILED:"_s);
		e->printStackTrace();
		$throwNew($RuntimeException, $$str({"TEST FAILED: "_s, $(e->toString())}));
	}
}

ResolveProxyClass::ResolveProxyClass() {
}

$Class* ResolveProxyClass::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ResolveProxyClass, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(ResolveProxyClass, main, void, $StringArray*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"ResolveProxyClass$TestObjectInputStream", "ResolveProxyClass", "TestObjectInputStream", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"ResolveProxyClass",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"ResolveProxyClass$TestObjectInputStream"
	};
	$loadClass(ResolveProxyClass, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ResolveProxyClass);
	});
	return class$;
}

$Class* ResolveProxyClass::class$ = nullptr;