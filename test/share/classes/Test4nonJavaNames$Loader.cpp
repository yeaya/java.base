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

$MethodInfo _Test4nonJavaNames$Loader_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Test4nonJavaNames$Loader::*)()>(&Test4nonJavaNames$Loader::init$))},
	{"findClass", "(Ljava/lang/String;)Ljava/lang/Class;", nullptr, $PROTECTED, nullptr, "java.lang.ClassNotFoundException"},
	{}
};

$InnerClassInfo _Test4nonJavaNames$Loader_InnerClassesInfo_[] = {
	{"Test4nonJavaNames$Loader", "Test4nonJavaNames", "Loader", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _Test4nonJavaNames$Loader_ClassInfo_ = {
	$ACC_SUPER,
	"Test4nonJavaNames$Loader",
	"java.lang.ClassLoader",
	nullptr,
	nullptr,
	_Test4nonJavaNames$Loader_MethodInfo_,
	nullptr,
	nullptr,
	_Test4nonJavaNames$Loader_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Test4nonJavaNames"
};

$Object* allocate$Test4nonJavaNames$Loader($Class* clazz) {
	return $of($alloc(Test4nonJavaNames$Loader));
}

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
	$loadClass(Test4nonJavaNames$Loader, name, initialize, &_Test4nonJavaNames$Loader_ClassInfo_, allocate$Test4nonJavaNames$Loader);
	return class$;
}

$Class* Test4nonJavaNames$Loader::class$ = nullptr;