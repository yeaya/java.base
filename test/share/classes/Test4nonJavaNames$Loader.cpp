#include <Test4nonJavaNames$Loader.h>
#include <Test4nonJavaNames.h>
#include <java/lang/ClassLoader.h>
#include <jcpp.h>

#undef CLASS_FILE

using $Test4nonJavaNames = ::Test4nonJavaNames;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void Test4nonJavaNames$Loader::init$() {
	$ClassLoader::init$();
}

$Class* Test4nonJavaNames$Loader::findClass($String* name) {
	if ($nc(name)->equals("Test+Interface"_s)) {
		$init($Test4nonJavaNames);
		return defineClass(name, $Test4nonJavaNames::CLASS_FILE, 0, $nc($Test4nonJavaNames::CLASS_FILE)->length);
	} else {
		return $ClassLoader::findClass(name);
	}
}

Test4nonJavaNames$Loader::Test4nonJavaNames$Loader() {
}

$Class* Test4nonJavaNames$Loader::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(Test4nonJavaNames$Loader, init$, void)},
		{"findClass", "(Ljava/lang/String;)Ljava/lang/Class;", nullptr, $PROTECTED, $virtualMethod(Test4nonJavaNames$Loader, findClass, $Class*, $String*), "java.lang.ClassNotFoundException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"Test4nonJavaNames$Loader", "Test4nonJavaNames", "Loader", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"Test4nonJavaNames$Loader",
		"java.lang.ClassLoader",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"Test4nonJavaNames"
	};
	$loadClass(Test4nonJavaNames$Loader, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Test4nonJavaNames$Loader);
	});
	return class$;
}

$Class* Test4nonJavaNames$Loader::class$ = nullptr;