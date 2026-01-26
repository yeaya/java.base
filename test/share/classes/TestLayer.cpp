#include <TestLayer.h>

#include <java/lang/ClassLoader.h>
#include <java/lang/Module.h>
#include <java/lang/ModuleLayer.h>
#include <java/lang/SecurityManager.h>
#include <java/lang/module/Configuration.h>
#include <java/lang/module/ModuleFinder.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/file/Path.h>
#include <java/nio/file/Paths.h>
#include <java/util/Collection.h>
#include <java/util/Optional.h>
#include <java/util/Set.h>
#include <jcpp.h>

#undef MODS_DIR

using $PathArray = $Array<::java::nio::file::Path>;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Module = ::java::lang::Module;
using $ModuleLayer = ::java::lang::ModuleLayer;
using $RuntimeException = ::java::lang::RuntimeException;
using $SecurityManager = ::java::lang::SecurityManager;
using $Configuration = ::java::lang::module::Configuration;
using $ModuleFinder = ::java::lang::module::ModuleFinder;
using $Method = ::java::lang::reflect::Method;
using $Path = ::java::nio::file::Path;
using $Paths = ::java::nio::file::Paths;
using $Collection = ::java::util::Collection;
using $Optional = ::java::util::Optional;
using $Set = ::java::util::Set;

$FieldInfo _TestLayer_FieldInfo_[] = {
	{"MODS_DIR", "Ljava/nio/file/Path;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(TestLayer, MODS_DIR)},
	{"modules", "Ljava/util/Set;", "Ljava/util/Set<Ljava/lang/String;>;", $PRIVATE | $STATIC | $FINAL, $staticField(TestLayer, modules)},
	{}
};

$MethodInfo _TestLayer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(TestLayer, init$, void)},
	{"findClass", "(Ljava/lang/Module;Ljava/lang/String;)Ljava/lang/Class;", "(Ljava/lang/Module;Ljava/lang/String;)Ljava/lang/Class<*>;", $STATIC, $staticMethod(TestLayer, findClass, $Class*, $Module*, $String*)},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(TestLayer, main, void, $StringArray*), "java.lang.Exception"},
	{}
};

$ClassInfo _TestLayer_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"TestLayer",
	"java.lang.Object",
	nullptr,
	_TestLayer_FieldInfo_,
	_TestLayer_MethodInfo_
};

$Object* allocate$TestLayer($Class* clazz) {
	return $of($alloc(TestLayer));
}

$Path* TestLayer::MODS_DIR = nullptr;
$Set* TestLayer::modules = nullptr;

void TestLayer::init$() {
}

void TestLayer::main($StringArray* args) {
	$init(TestLayer);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($SecurityManager, sm, $System::getSecurityManager());
	if (sm != nullptr) {
		$System::setSecurityManager(nullptr);
	}
	$var($ModuleFinder, finder, $ModuleFinder::of($$new($PathArray, {TestLayer::MODS_DIR})));
	$var($Configuration, parent, $nc($($ModuleLayer::boot()))->configuration());
	$var($Configuration, cf, $nc(parent)->resolveAndBind($($ModuleFinder::of($$new($PathArray, 0))), finder, static_cast<$Collection*>(TestLayer::modules)));
	$var($ClassLoader, scl, $ClassLoader::getSystemClassLoader());
	$var($ModuleLayer, layer, $nc($($ModuleLayer::boot()))->defineModulesWithManyLoaders(cf, scl));
	$var($Module, m1, $cast($Module, $nc($($nc(layer)->findModule("m1"_s)))->get()));
	$var($Module, m2, $cast($Module, $nc($(layer->findModule("m2"_s)))->get()));
	if (sm != nullptr) {
		$System::setSecurityManager(sm);
	}
	findClass(m1, "p1.A"_s);
	findClass(m1, "p1.internal.B"_s);
	findClass(m2, "p2.C"_s);
	$var($ClassLoader, ld, TestLayer::class$->getClassLoader());
	findClass($($nc(ld)->getUnnamedModule()), "TestDriver"_s);
	$Class* c = $Class::forName(m1, "p1.Initializer"_s);
	$var($Method, m, $nc(c)->getMethod("isInited"_s, $$new($ClassArray, 0)));
	$var($Boolean, isClinited, $cast($Boolean, $nc(m)->invoke(nullptr, $$new($ObjectArray, 0))));
	if ($nc(isClinited)->booleanValue()) {
		$throwNew($RuntimeException, "clinit should not be invoked"_s);
	}
}

$Class* TestLayer::findClass($Module* module, $String* cn) {
	$init(TestLayer);
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

void clinit$TestLayer($Class* class$) {
	$assignStatic(TestLayer::MODS_DIR, $Paths::get("mods"_s, $$new($StringArray, 0)));
	$assignStatic(TestLayer::modules, $Set::of("m1"_s, "m2"_s));
}

TestLayer::TestLayer() {
}

$Class* TestLayer::load$($String* name, bool initialize) {
	$loadClass(TestLayer, name, initialize, &_TestLayer_ClassInfo_, clinit$TestLayer, allocate$TestLayer);
	return class$;
}

$Class* TestLayer::class$ = nullptr;