#include <InitArg.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$FieldInfo _InitArg_FieldInfo_[] = {
	{"x123Initialized", "Z", nullptr, $PUBLIC | $STATIC, $staticField(InitArg, x123Initialized)},
	{}
};

$MethodInfo _InitArg_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(InitArg::*)()>(&InitArg::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&InitArg::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _InitArg_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"InitArg",
	"java.lang.Object",
	nullptr,
	_InitArg_FieldInfo_,
	_InitArg_MethodInfo_
};

$Object* allocate$InitArg($Class* clazz) {
	return $of($alloc(InitArg));
}

bool InitArg::x123Initialized = false;

void InitArg::init$() {
}

void InitArg::main($StringArray* args) {
	$init(InitArg);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$Class* c = $Class::forName("x123"_s, false, $(InitArg::class$->getClassLoader()));
	if (InitArg::x123Initialized) {
		$throwNew($Exception, "forName should not run initializer"_s);
	}
	$Class* d = $Class::forName("x123"_s, true, $(InitArg::class$->getClassLoader()));
	if (!InitArg::x123Initialized) {
		$throwNew($Exception, "forName not running initializer"_s);
	}
}

void clinit$InitArg($Class* class$) {
	InitArg::x123Initialized = false;
}

InitArg::InitArg() {
}

$Class* InitArg::load$($String* name, bool initialize) {
	$loadClass(InitArg, name, initialize, &_InitArg_ClassInfo_, clinit$InitArg, allocate$InitArg);
	return class$;
}

$Class* InitArg::class$ = nullptr;