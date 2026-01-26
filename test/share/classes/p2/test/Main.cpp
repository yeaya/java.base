#include <p2/test/Main.h>

#include <java/lang/ClassLoader.h>
#include <java/lang/IllegalAccessException.h>
#include <java/lang/Module.h>
#include <java/lang/ModuleLayer.h>
#include <java/util/Optional.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $IllegalAccessException = ::java::lang::IllegalAccessException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Module = ::java::lang::Module;
using $ModuleLayer = ::java::lang::ModuleLayer;
using $RuntimeException = ::java::lang::RuntimeException;
using $Optional = ::java::util::Optional;

namespace p2 {
	namespace test {

$MethodInfo _Main_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(Main, init$, void)},
	{"findClass", "(Ljava/lang/Module;Ljava/lang/String;)Ljava/lang/Class;", "(Ljava/lang/Module;Ljava/lang/String;)Ljava/lang/Class<*>;", $STATIC, $staticMethod(Main, findClass, $Class*, $Module*, $String*)},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC | $TRANSIENT, $staticMethod(Main, main, void, $StringArray*), "java.lang.Exception"},
	{}
};

$ClassInfo _Main_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"p2.test.Main",
	"java.lang.Object",
	nullptr,
	nullptr,
	_Main_MethodInfo_
};

$Object* allocate$Main($Class* clazz) {
	return $of($alloc(Main));
}

void Main::init$() {
}

void Main::main($StringArray* args) {
	$load(Main);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($ModuleLayer, boot, $ModuleLayer::boot());
	$var($Module, m1, $cast($Module, $nc($($nc(boot)->findModule("m1"_s)))->get()));
	$var($Module, m2, Main::class$->getModule());
	findClass(m1, "p1.A"_s);
	findClass(m1, "p1.internal.B"_s);
	findClass(m2, "p2.C"_s);
	$var($ClassLoader, loader, $nc(m2)->getClassLoader());
	findClass($($nc(loader)->getUnnamedModule()), "TestDriver"_s);
	try {
		$Class* c = findClass(m1, "p1.internal.B"_s);
		$nc(c)->newInstance();
		$throwNew($RuntimeException, $$str({$(c->getName()), " should not be exported to m2"_s}));
	} catch ($IllegalAccessException& e) {
	}
}

$Class* Main::findClass($Module* module, $String* cn) {
	$load(Main);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$Class* c = $Class::forName(module, cn);
	if (c == nullptr) {
		$throwNew($RuntimeException, $$str({cn, " not found in "_s, module}));
	}
	if ($nc(c)->getModule() != module) {
		$throwNew($RuntimeException, $$str({$(c->getModule()), " != "_s, module}));
	}
	return c;
}

Main::Main() {
}

$Class* Main::load$($String* name, bool initialize) {
	$loadClass(Main, name, initialize, &_Main_ClassInfo_, allocate$Main);
	return class$;
}

$Class* Main::class$ = nullptr;

	} // test
} // p2