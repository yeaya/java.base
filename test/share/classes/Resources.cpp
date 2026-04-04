#include <Resources.h>
#include <java/lang/Runtime.h>
#include <jcpp.h>

using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runtime = ::java::lang::Runtime;

$PrintStream* Resources::out = nullptr;

void Resources::init$() {
}

void Resources::main($StringArray* args) {
	$init(Resources);
	$useLocalObjectStack();
	$var($Runtime, rt, $Runtime::getRuntime());
	$nc(Resources::out)->println($$str({$$str($nc(rt)->freeMemory()), " bytes free"_s}));
	Resources::out->println($$str({$$str(rt->totalMemory()), "  bytes in use"_s}));
	Resources::out->println($$str({$$str(rt->maxMemory()), " bytes max"_s}));
	Resources::out->println($$str({$$str(rt->availableProcessors()), " processors"_s}));
}

void Resources::clinit$($Class* clazz) {
	$assignStatic(Resources::out, $System::err);
}

Resources::Resources() {
}

$Class* Resources::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"out", "Ljava/io/PrintStream;", nullptr, $STATIC, $staticField(Resources, out)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Resources, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Resources, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"Resources",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Resources, name, initialize, &classInfo$$, Resources::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Resources);
	});
	return class$;
}

$Class* Resources::class$ = nullptr;