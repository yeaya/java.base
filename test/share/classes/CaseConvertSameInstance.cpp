#include <CaseConvertSameInstance.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;

void CaseConvertSameInstance::init$() {
}

void CaseConvertSameInstance::main($StringArray* args) {
	$useLocalObjectStack();
	if ("foobar"_s->toLowerCase() != "foobar"_s) {
		$throwNew($Exception, "toLowerCase returned different object"_s);
	}
	if ("FOOBAR"_s->toUpperCase() != "FOOBAR"_s) {
		$throwNew($Exception, "toUpperCase returned different object"_s);
	}
	if (!($("FooBar"_s->toLowerCase())->equals("foobar"_s))) {
		$throwNew($Exception, "toLowerCase broken"_s);
	}
	if (!($("fooBar"_s->toLowerCase())->equals("foobar"_s))) {
		$throwNew($Exception, "toLowerCase broken"_s);
	}
	if (!($("foobaR"_s->toLowerCase())->equals("foobar"_s))) {
		$throwNew($Exception, "toLowerCase broken"_s);
	}
	if (!($("FOOBAR"_s->toLowerCase())->equals("foobar"_s))) {
		$throwNew($Exception, "toLowerCase broken"_s);
	}
	if (!($("FooBar"_s->toUpperCase())->equals("FOOBAR"_s))) {
		$throwNew($Exception, "toUpperCase broken"_s);
	}
	if (!($("fooBar"_s->toUpperCase())->equals("FOOBAR"_s))) {
		$throwNew($Exception, "toUpperCase broken"_s);
	}
	if (!($("foobaR"_s->toUpperCase())->equals("FOOBAR"_s))) {
		$throwNew($Exception, "toUpperCase broken"_s);
	}
	if (!($("foobar"_s->toUpperCase())->equals("FOOBAR"_s))) {
		$throwNew($Exception, "toUpperCase broken"_s);
	}
}

CaseConvertSameInstance::CaseConvertSameInstance() {
}

$Class* CaseConvertSameInstance::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(CaseConvertSameInstance, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(CaseConvertSameInstance, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"CaseConvertSameInstance",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(CaseConvertSameInstance, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CaseConvertSameInstance);
	});
	return class$;
}

$Class* CaseConvertSameInstance::class$ = nullptr;