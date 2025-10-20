#include <GetDefinedPackage.h>

#include <GetDefinedPackage$TestClassLoader.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/Package.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef PKG_NAME

using $GetDefinedPackage$TestClassLoader = ::GetDefinedPackage$TestClassLoader;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Package = ::java::lang::Package;
using $RuntimeException = ::java::lang::RuntimeException;

$MethodInfo _GetDefinedPackage_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(GetDefinedPackage::*)()>(&GetDefinedPackage::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC | $TRANSIENT, $method(static_cast<void(*)($StringArray*)>(&GetDefinedPackage::main))},
	{}
};

$InnerClassInfo _GetDefinedPackage_InnerClassesInfo_[] = {
	{"GetDefinedPackage$TestClassLoader", "GetDefinedPackage", "TestClassLoader", $STATIC},
	{}
};

$ClassInfo _GetDefinedPackage_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"GetDefinedPackage",
	"java.lang.Object",
	nullptr,
	nullptr,
	_GetDefinedPackage_MethodInfo_,
	nullptr,
	nullptr,
	_GetDefinedPackage_InnerClassesInfo_,
	nullptr,
	nullptr,
	"GetDefinedPackage$TestClassLoader"
};

$Object* allocate$GetDefinedPackage($Class* clazz) {
	return $of($alloc(GetDefinedPackage));
}

void GetDefinedPackage::init$() {
}

void GetDefinedPackage::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($GetDefinedPackage$TestClassLoader, loader, $new($GetDefinedPackage$TestClassLoader));
	$init($GetDefinedPackage$TestClassLoader);
	$var($Package, pkg, loader->getDefinedPackage($GetDefinedPackage$TestClassLoader::PKG_NAME));
	if (pkg == nullptr) {
		$throwNew($RuntimeException, "package foo not found"_s);
	}
	try {
		loader->getDefinedPackage(nullptr);
		$throwNew($RuntimeException, "NullPointerException not thrown"_s);
	} catch ($NullPointerException&) {
		$catch();
	}
}

GetDefinedPackage::GetDefinedPackage() {
}

$Class* GetDefinedPackage::load$($String* name, bool initialize) {
	$loadClass(GetDefinedPackage, name, initialize, &_GetDefinedPackage_ClassInfo_, allocate$GetDefinedPackage);
	return class$;
}

$Class* GetDefinedPackage::class$ = nullptr;