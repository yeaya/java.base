#include <ExceptionHidingLoader.h>

#include <java/lang/ClassLoader.h>
#include <java/lang/ClassNotFoundException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _ExceptionHidingLoader_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ExceptionHidingLoader::*)()>(&ExceptionHidingLoader::init$))},
	{"findClass", "(Ljava/lang/String;)Ljava/lang/Class;", nullptr, $PROTECTED, nullptr, "java.lang.ClassNotFoundException"},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&ExceptionHidingLoader::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _ExceptionHidingLoader_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"ExceptionHidingLoader",
	"java.lang.ClassLoader",
	nullptr,
	nullptr,
	_ExceptionHidingLoader_MethodInfo_
};

$Object* allocate$ExceptionHidingLoader($Class* clazz) {
	return $of($alloc(ExceptionHidingLoader));
}

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
	$loadClass(ExceptionHidingLoader, name, initialize, &_ExceptionHidingLoader_ClassInfo_, allocate$ExceptionHidingLoader);
	return class$;
}

$Class* ExceptionHidingLoader::class$ = nullptr;