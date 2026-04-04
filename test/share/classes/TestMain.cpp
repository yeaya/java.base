#include <TestMain.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/Module.h>
#include <java/lang/ModuleLayer.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Optional.h>
#include <jcpp.h>

using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $MethodInfo = ::java::lang::MethodInfo;
using $Module = ::java::lang::Module;
using $ModuleLayer = ::java::lang::ModuleLayer;
using $RuntimeException = ::java::lang::RuntimeException;
using $Method = ::java::lang::reflect::Method;

void TestMain::init$() {
}

void TestMain::main($StringArray* args) {
	$useLocalObjectStack();
	$load(TestMain);
	$beforeCallerSensitive();
	$var($ModuleLayer, boot, $ModuleLayer::boot());
	$var($Module, m1, $cast($Module, $$nc($nc(boot)->findModule("m1"_s))->get()));
	$var($Module, m2, $cast($Module, $$nc(boot->findModule("m2"_s))->get()));
	findClass(m1, "p1.A"_s);
	findClass(m1, "p1.internal.B"_s);
	findClass(m2, "p2.C"_s);
	$var($ClassLoader, loader, TestMain::class$->getClassLoader());
	findClass($($nc(loader)->getUnnamedModule()), "TestDriver"_s);
	$Class* c = $Class::forName(m1, "p1.Initializer"_s);
	$var($Method, m, c->getMethod("isInited"_s, $$new($ClassArray, 0)));
	$var($Boolean, isClinited, $cast($Boolean, $nc(m)->invoke(nullptr, $$new($ObjectArray, 0))));
	if ($nc(isClinited)->booleanValue()) {
		$throwNew($RuntimeException, "clinit should not be invoked"_s);
	}
}

$Class* TestMain::findClass($Module* module, $String* cn) {
	$useLocalObjectStack();
	$load(TestMain);
	$beforeCallerSensitive();
	$Class* c = $Class::forName(module, cn);
	if (c == nullptr) {
		$throwNew($RuntimeException, $$str({cn, " not found in "_s, module}));
	}
	if (c->getModule() != module) {
		$throwNew($RuntimeException, $$str({$(c->getModule()), " != "_s, module}));
	}
	return c;
}

TestMain::TestMain() {
}

$Class* TestMain::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TestMain, init$, void)},
		{"findClass", "(Ljava/lang/Module;Ljava/lang/String;)Ljava/lang/Class;", "(Ljava/lang/Module;Ljava/lang/String;)Ljava/lang/Class<*>;", $STATIC, $staticMethod(TestMain, findClass, $Class*, $Module*, $String*)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(TestMain, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"TestMain",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(TestMain, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestMain);
	});
	return class$;
}

$Class* TestMain::class$ = nullptr;