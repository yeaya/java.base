#include <GetDefinedPackage$TestClassLoader.h>
#include <GetDefinedPackage.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/Package.h>
#include <java/net/URL.h>
#include <jcpp.h>

#undef PKG_NAME

using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Package = ::java::lang::Package;
using $URL = ::java::net::URL;

$String* GetDefinedPackage$TestClassLoader::PKG_NAME = nullptr;

void GetDefinedPackage$TestClassLoader::init$() {
	$ClassLoader::init$();
	definePackage(GetDefinedPackage$TestClassLoader::PKG_NAME);
}

$Package* GetDefinedPackage$TestClassLoader::definePackage($String* name) {
	return definePackage(name, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr);
}

GetDefinedPackage$TestClassLoader::GetDefinedPackage$TestClassLoader() {
}

void GetDefinedPackage$TestClassLoader::clinit$($Class* clazz) {
	$assignStatic(GetDefinedPackage$TestClassLoader::PKG_NAME, "foo"_s);
}

$Class* GetDefinedPackage$TestClassLoader::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"PKG_NAME", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(GetDefinedPackage$TestClassLoader, PKG_NAME)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(GetDefinedPackage$TestClassLoader, init$, void)},
		{"definePackage", "(Ljava/lang/String;)Ljava/lang/Package;", nullptr, $PUBLIC, $virtualMethod(GetDefinedPackage$TestClassLoader, definePackage, $Package*, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"GetDefinedPackage$TestClassLoader", "GetDefinedPackage", "TestClassLoader", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"GetDefinedPackage$TestClassLoader",
		"java.lang.ClassLoader",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"GetDefinedPackage"
	};
	$loadClass(GetDefinedPackage$TestClassLoader, name, initialize, &classInfo$$, GetDefinedPackage$TestClassLoader::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(GetDefinedPackage$TestClassLoader);
	});
	return class$;
}

$Class* GetDefinedPackage$TestClassLoader::class$ = nullptr;