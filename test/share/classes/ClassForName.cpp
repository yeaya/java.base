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

void ClassForName::init$() {
}

void ClassForName::run() {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	try {
		$load($List);
		$var($String, var$0, $List::class$->getName());
		$Class::forName(var$0, false, $($ClassLoader::getSystemClassLoader()));
	} catch ($Throwable& e) {
		e->printStackTrace();
	}
}

void ClassForName::clinit$($Class* clazz) {
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
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ClassForName, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(ClassForName, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"ClassForName",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$
	};
	$loadClass(ClassForName, name, initialize, &classInfo$$, ClassForName::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(ClassForName);
	});
	return class$;
}

$Class* ClassForName::class$ = nullptr;