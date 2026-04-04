#include <ExceptionHidingLoader.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/ClassNotFoundException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;

void ExceptionHidingLoader::init$() {
	$ClassLoader::init$();
}

$Class* ExceptionHidingLoader::findClass($String* name) {
	return nullptr;
}

void ExceptionHidingLoader::main($StringArray* args) {
	$init(ExceptionHidingLoader);
	$beforeCallerSensitive();
	bool exception = false;
	try {
		$Class::forName("aha"_s, false, $$new(ExceptionHidingLoader));
	} catch ($ClassNotFoundException& e) {
		exception = true;
	}
	if (!exception) {
		$throwNew($Exception, "Bogus loader behavior not being corrected"_s);
	}
}

ExceptionHidingLoader::ExceptionHidingLoader() {
}

$Class* ExceptionHidingLoader::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ExceptionHidingLoader, init$, void)},
		{"findClass", "(Ljava/lang/String;)Ljava/lang/Class;", nullptr, $PROTECTED, $virtualMethod(ExceptionHidingLoader, findClass, $Class*, $String*), "java.lang.ClassNotFoundException"},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(ExceptionHidingLoader, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"ExceptionHidingLoader",
		"java.lang.ClassLoader",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(ExceptionHidingLoader, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ExceptionHidingLoader);
	});
	return class$;
}

$Class* ExceptionHidingLoader::class$ = nullptr;