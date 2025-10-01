#include <TestMain.h>

#include <java/lang/Array.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Module.h>
#include <java/lang/ModuleLayer.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
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
using $Optional = ::java::util::Optional;

$MethodInfo _TestMain_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TestMain::*)()>(&TestMain::init$))},
	{"findClass", "(Ljava/lang/Module;Ljava/lang/String;)Ljava/lang/Class;", "(Ljava/lang/Module;Ljava/lang/String;)Ljava/lang/Class<*>;", $STATIC, $method(static_cast<$Class*(*)($Module*,$String*)>(&TestMain::findClass))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&TestMain::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _TestMain_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"TestMain",
	"java.lang.Object",
	nullptr,
	nullptr,
	_TestMain_MethodInfo_
};

$Object* allocate$TestMain($Class* clazz) {
	return $of($alloc(TestMain));
}

void TestMain::init$() {
}

void TestMain::main($StringArray* args) {
	$load(TestMain);
	$beforeCallerSensitive();
	$var($ModuleLayer, boot, $ModuleLayer::boot());
	$var($Module, m1, $cast($Module, $nc($($nc(boot)->findModule("m1"_s)))->get()));
	$var($Module, m2, $cast($Module, $nc($(boot->findModule("m2"_s)))->get()));
	findClass(m1, "p1.A"_s);
	findClass(m1, "p1.internal.B"_s);
	findClass(m2, "p2.C"_s);
	$var($ClassLoader, loader, TestMain::class$->getClassLoader());
	findClass($($nc(loader)->getUnnamedModule()), "TestDriver"_s);
	$Class* c = $Class::forName(m1, "p1.Initializer"_s);
	$var($Method, m, $nc(c)->getMethod("isInited"_s, $$new($ClassArray, 0)));
	$var($Boolean, isClinited, $cast($Boolean, $nc(m)->invoke(nullptr, $$new($ObjectArray, 0))));
	if ($nc(isClinited)->booleanValue()) {
		$throwNew($RuntimeException, "clinit should not be invoked"_s);
	}
}

$Class* TestMain::findClass($Module* module, $String* cn) {
	$load(TestMain);
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

TestMain::TestMain() {
}

$Class* TestMain::load$($String* name, bool initialize) {
	$loadClass(TestMain, name, initialize, &_TestMain_ClassInfo_, allocate$TestMain);
	return class$;
}

$Class* TestMain::class$ = nullptr;