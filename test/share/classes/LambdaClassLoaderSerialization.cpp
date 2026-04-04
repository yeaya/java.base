#include <LambdaClassLoaderSerialization.h>
#include <LambdaClassLoaderSerialization$MyClassLoader.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/Runnable.h>
#include <jcpp.h>

using $LambdaClassLoaderSerialization$MyClassLoader = ::LambdaClassLoaderSerialization$MyClassLoader;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;

void LambdaClassLoaderSerialization::init$() {
}

void LambdaClassLoaderSerialization::main($StringArray* args) {
	$useLocalObjectStack();
	$load(LambdaClassLoaderSerialization);
	$beforeCallerSensitive();
	$var($ClassLoader, myCl, $new($LambdaClassLoaderSerialization$MyClassLoader, $(LambdaClassLoaderSerialization::class$->getClassLoader())));
	$Class* myCodeClass = $Class::forName($$str({$(LambdaClassLoaderSerialization::class$->getName()), "$MyCode"_s}), true, myCl);
	$var($Runnable, myCode, $cast($Runnable, myCodeClass->newInstance()));
	$nc(myCode)->run();
}

LambdaClassLoaderSerialization::LambdaClassLoaderSerialization() {
}

$Class* LambdaClassLoaderSerialization::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(LambdaClassLoaderSerialization, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(LambdaClassLoaderSerialization, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"LambdaClassLoaderSerialization$MyClassLoader", "LambdaClassLoaderSerialization", "MyClassLoader", $STATIC},
		{"LambdaClassLoaderSerialization$MyCode", "LambdaClassLoaderSerialization", "MyCode", $PUBLIC | $STATIC},
		{"LambdaClassLoaderSerialization$SerializableRunnable", "LambdaClassLoaderSerialization", "SerializableRunnable", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"LambdaClassLoaderSerialization",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"LambdaClassLoaderSerialization$MyClassLoader,LambdaClassLoaderSerialization$MyCode,LambdaClassLoaderSerialization$SerializableRunnable"
	};
	$loadClass(LambdaClassLoaderSerialization, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LambdaClassLoaderSerialization);
	});
	return class$;
}

$Class* LambdaClassLoaderSerialization::class$ = nullptr;