#include <RecursiveSystemLoader.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/IllegalStateException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

void RecursiveSystemLoader::main($StringArray* args) {
	$init(RecursiveSystemLoader);
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$var($ClassLoader, sys, $ClassLoader::getSystemClassLoader());
	if (!($instanceOf(RecursiveSystemLoader, sys))) {
		$throwNew($RuntimeException, $$str({"Unexpected system classloader: "_s, sys}));
	}
}

void RecursiveSystemLoader::init$($ClassLoader* classLoader) {
	$beforeCallerSensitive();
	$ClassLoader::init$("RecursiveSystemLoader"_s, classLoader);
	try {
		$ClassLoader::getSystemClassLoader();
	} catch ($IllegalStateException& ise) {
		$nc($System::err)->println("Caught expected exception:"_s);
		ise->printStackTrace();
		return;
	}
	$throwNew($RuntimeException, "Expected IllegalStateException was not thrown."_s);
}

$Class* RecursiveSystemLoader::loadClass($String* name) {
	return $ClassLoader::loadClass(name);
}

RecursiveSystemLoader::RecursiveSystemLoader() {
}

$Class* RecursiveSystemLoader::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/ClassLoader;)V", nullptr, $PUBLIC, $method(RecursiveSystemLoader, init$, void, $ClassLoader*)},
		{"loadClass", "(Ljava/lang/String;)Ljava/lang/Class;", "(Ljava/lang/String;)Ljava/lang/Class<*>;", $PUBLIC, $virtualMethod(RecursiveSystemLoader, loadClass, $Class*, $String*), "java.lang.ClassNotFoundException"},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(RecursiveSystemLoader, main, void, $StringArray*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"RecursiveSystemLoader",
		"java.lang.ClassLoader",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(RecursiveSystemLoader, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RecursiveSystemLoader);
	});
	return class$;
}

$Class* RecursiveSystemLoader::class$ = nullptr;