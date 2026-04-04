#include <InitArg.h>
#include <java/lang/ClassLoader.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

bool InitArg::x123Initialized = false;

void InitArg::init$() {
}

void InitArg::main($StringArray* args) {
	$init(InitArg);
	$useLocalObjectStack();
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

void InitArg::clinit$($Class* clazz) {
	InitArg::x123Initialized = false;
}

InitArg::InitArg() {
}

$Class* InitArg::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"x123Initialized", "Z", nullptr, $PUBLIC | $STATIC, $staticField(InitArg, x123Initialized)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(InitArg, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(InitArg, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"InitArg",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(InitArg, name, initialize, &classInfo$$, InitArg::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(InitArg);
	});
	return class$;
}

$Class* InitArg::class$ = nullptr;