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

$FieldInfo _GetDefinedPackage$TestClassLoader_FieldInfo_[] = {
	{"PKG_NAME", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(GetDefinedPackage$TestClassLoader, PKG_NAME)},
	{}
};

$MethodInfo _GetDefinedPackage$TestClassLoader_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(GetDefinedPackage$TestClassLoader::*)()>(&GetDefinedPackage$TestClassLoader::init$))},
	{"definePackage", "(Ljava/lang/String;)Ljava/lang/Package;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _GetDefinedPackage$TestClassLoader_InnerClassesInfo_[] = {
	{"GetDefinedPackage$TestClassLoader", "GetDefinedPackage", "TestClassLoader", $STATIC},
	{}
};

$ClassInfo _GetDefinedPackage$TestClassLoader_ClassInfo_ = {
	$ACC_SUPER,
	"GetDefinedPackage$TestClassLoader",
	"java.lang.ClassLoader",
	nullptr,
	_GetDefinedPackage$TestClassLoader_FieldInfo_,
	_GetDefinedPackage$TestClassLoader_MethodInfo_,
	nullptr,
	nullptr,
	_GetDefinedPackage$TestClassLoader_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"GetDefinedPackage"
};

$Object* allocate$GetDefinedPackage$TestClassLoader($Class* clazz) {
	return $of($alloc(GetDefinedPackage$TestClassLoader));
}

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

void clinit$GetDefinedPackage$TestClassLoader($Class* class$) {
	$assignStatic(GetDefinedPackage$TestClassLoader::PKG_NAME, "foo"_s);
}

$Class* GetDefinedPackage$TestClassLoader::load$($String* name, bool initialize) {
	$loadClass(GetDefinedPackage$TestClassLoader, name, initialize, &_GetDefinedPackage$TestClassLoader_ClassInfo_, clinit$GetDefinedPackage$TestClassLoader, allocate$GetDefinedPackage$TestClassLoader);
	return class$;
}

$Class* GetDefinedPackage$TestClassLoader::class$ = nullptr;