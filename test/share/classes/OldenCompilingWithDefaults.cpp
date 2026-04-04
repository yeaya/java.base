#include <OldenCompilingWithDefaults.h>
#include <java/lang/Package.h>
#include <java/lang/SuppressWarnings.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Field.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Package = ::java::lang::Package;
using $SuppressWarnings = ::java::lang::SuppressWarnings;
using $Constructor = ::java::lang::reflect::Constructor;
using $Field = ::java::lang::reflect::Field;
using $Method = ::java::lang::reflect::Method;

$Object* OldenCompilingWithDefaults::f = nullptr;

void OldenCompilingWithDefaults::init$() {
}

void OldenCompilingWithDefaults::main($StringArray* args) {
	$useLocalObjectStack();
	$load(OldenCompilingWithDefaults);
	$beforeCallerSensitive();
	$Class* clazz = OldenCompilingWithDefaults::class$;
	$var($Package, pkg, clazz->getPackage());
	$var($Constructor, ctor, clazz->getConstructor($$new($ClassArray, 0)));
	$var($Method, m, clazz->getMethod("main"_s, $$new($ClassArray, {$getClass($StringArray)})));
	$var($Field, f, clazz->getField("f"_s));
	$load($SuppressWarnings);
	bool var$3 = clazz->isAnnotationPresent($SuppressWarnings::class$);
	bool var$2 = var$3 || $nc(pkg)->isAnnotationPresent($SuppressWarnings::class$);
	bool var$1 = var$2 || $nc(ctor)->isAnnotationPresent($SuppressWarnings::class$);
	bool var$0 = var$1 || $nc(m)->isAnnotationPresent($SuppressWarnings::class$);
	if (var$0 || $nc(f)->isAnnotationPresent($SuppressWarnings::class$)) {
		$nc($System::out)->println("An annotation is present."_s);
	}
}

OldenCompilingWithDefaults::OldenCompilingWithDefaults() {
}

$Class* OldenCompilingWithDefaults::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"f", "Ljava/lang/Object;", nullptr, $STATIC, $staticField(OldenCompilingWithDefaults, f)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(OldenCompilingWithDefaults, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC | $TRANSIENT, $staticMethod(OldenCompilingWithDefaults, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"OldenCompilingWithDefaults",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(OldenCompilingWithDefaults, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(OldenCompilingWithDefaults);
	});
	return class$;
}

$Class* OldenCompilingWithDefaults::class$ = nullptr;