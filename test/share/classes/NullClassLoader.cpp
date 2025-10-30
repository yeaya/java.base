#include <NullClassLoader.h>

#include <java/lang/ClassLoader.h>
#include <java/lang/Runnable.h>
#include <java/lang/reflect/Proxy.h>
#include <java/util/Observer.h>
#include <jcpp.h>

using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $Proxy = ::java::lang::reflect::Proxy;
using $Observer = ::java::util::Observer;

$MethodInfo _NullClassLoader_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(NullClassLoader::*)()>(&NullClassLoader::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&NullClassLoader::main))},
	{}
};

$ClassInfo _NullClassLoader_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"NullClassLoader",
	"java.lang.Object",
	nullptr,
	nullptr,
	_NullClassLoader_MethodInfo_
};

$Object* allocate$NullClassLoader($Class* clazz) {
	return $of($alloc(NullClassLoader));
}

void NullClassLoader::init$() {
}

void NullClassLoader::main($StringArray* args) {
	$load(NullClassLoader);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$nc($System::err)->println("\nTest creating proxy class with the null class loader.\n"_s);
	try {
		$var($ClassLoader, ld, nullptr);
		$load($Observer);
		$Class* p = $Proxy::getProxyClass(ld, $$new($ClassArray, {
			$Runnable::class$,
			$Observer::class$
		}));
		$nc($System::err)->println($$str({"proxy class: "_s, p}));
		$var($ClassLoader, loader, $nc(p)->getClassLoader());
		$nc($System::err)->println($$str({"proxy class\'s class loader: "_s, loader}));
		if (loader != nullptr) {
			$throwNew($RuntimeException, "proxy class not defined in the null class loader"_s);
		}
		$nc($System::err)->println("\nTEST PASSED"_s);
	} catch ($Throwable& e) {
		$nc($System::err)->println("\nTEST FAILED:"_s);
		e->printStackTrace();
		$throwNew($RuntimeException, $$str({"TEST FAILED: "_s, $(e->toString())}));
	}
}

NullClassLoader::NullClassLoader() {
}

$Class* NullClassLoader::load$($String* name, bool initialize) {
	$loadClass(NullClassLoader, name, initialize, &_NullClassLoader_ClassInfo_, allocate$NullClassLoader);
	return class$;
}

$Class* NullClassLoader::class$ = nullptr;