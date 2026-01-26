#include <ClassForName.h>

#include <java/lang/ClassLoader.h>
#include <java/net/URLClassLoader.h>
#include <java/util/List.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $URLClassLoader = ::java::net::URLClassLoader;
using $List = ::java::util::List;

$MethodInfo _ClassForName_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(ClassForName, init$, void)},
	{"run", "()V", nullptr, $PUBLIC, $virtualMethod(ClassForName, run, void)},
	{}
};

$ClassInfo _ClassForName_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"ClassForName",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_ClassForName_MethodInfo_
};

$Object* allocate$ClassForName($Class* clazz) {
	return $of($alloc(ClassForName));
}

void ClassForName::init$() {
}

void ClassForName::run() {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	try {
		$load($List);
		$var($String, var$0, $List::class$->getName());
		$Class::forName(var$0, false, $($ClassLoader::getSystemClassLoader()));
	} catch ($Throwable& e) {
		e->printStackTrace();
	}
}

void clinit$ClassForName($Class* class$) {
	$beforeCallerSensitive();
	{
		if (!($instanceOf($URLClassLoader, $(ClassForName::class$->getClassLoader())))) {
			$throwNew($RuntimeException, "Supposed to be loaded by URLClassLoader"_s);
		}
	}
}

ClassForName::ClassForName() {
}

$Class* ClassForName::load$($String* name, bool initialize) {
	$loadClass(ClassForName, name, initialize, &_ClassForName_ClassInfo_, clinit$ClassForName, allocate$ClassForName);
	return class$;
}

$Class* ClassForName::class$ = nullptr;