#include <OldenCompilingWithDefaults.h>

#include <java/lang/Package.h>
#include <java/lang/SuppressWarnings.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Field.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Package = ::java::lang::Package;
using $SuppressWarnings = ::java::lang::SuppressWarnings;
using $Constructor = ::java::lang::reflect::Constructor;
using $Field = ::java::lang::reflect::Field;
using $Method = ::java::lang::reflect::Method;

$FieldInfo _OldenCompilingWithDefaults_FieldInfo_[] = {
	{"f", "Ljava/lang/Object;", nullptr, $STATIC, $staticField(OldenCompilingWithDefaults, f)},
	{}
};

$MethodInfo _OldenCompilingWithDefaults_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(OldenCompilingWithDefaults::*)()>(&OldenCompilingWithDefaults::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC | $TRANSIENT, $method(static_cast<void(*)($StringArray*)>(&OldenCompilingWithDefaults::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _OldenCompilingWithDefaults_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"OldenCompilingWithDefaults",
	"java.lang.Object",
	nullptr,
	_OldenCompilingWithDefaults_FieldInfo_,
	_OldenCompilingWithDefaults_MethodInfo_
};

$Object* allocate$OldenCompilingWithDefaults($Class* clazz) {
	return $of($alloc(OldenCompilingWithDefaults));
}

$Object* OldenCompilingWithDefaults::f = nullptr;

void OldenCompilingWithDefaults::init$() {
}

void OldenCompilingWithDefaults::main($StringArray* args) {
	$load(OldenCompilingWithDefaults);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$Class* clazz = OldenCompilingWithDefaults::class$;
	$var($Package, pkg, $nc(clazz)->getPackage());
	$var($Constructor, ctor, clazz->getConstructor($$new($ClassArray, 0)));
	$load($StringArray);
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
	$loadClass(OldenCompilingWithDefaults, name, initialize, &_OldenCompilingWithDefaults_ClassInfo_, allocate$OldenCompilingWithDefaults);
	return class$;
}

$Class* OldenCompilingWithDefaults::class$ = nullptr;