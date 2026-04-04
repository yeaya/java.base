#include <T4992170.h>
#include <A_0.h>
#include <java/lang/Error.h>
#include <java/lang/reflect/Field.h>
#include <java/lang/reflect/Type.h>
#include <java/lang/reflect/TypeVariable.h>
#include <jcpp.h>

using $A_0 = ::A_0;
using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $MethodInfo = ::java::lang::MethodInfo;
using $Type = ::java::lang::reflect::Type;
using $TypeVariable = ::java::lang::reflect::TypeVariable;

void T4992170::init$() {
}

void T4992170::main($StringArray* args) {
	$useLocalObjectStack();
	$load(T4992170);
	$beforeCallerSensitive();
	$var($Type, t, $$nc($nc($$new($A_0)->o)->getClass()->getField("t"_s))->getGenericType());
	if (!($instanceOf($TypeVariable, t))) {
		$throwNew($Error, $$str({""_s, t}));
	}
}

T4992170::T4992170() {
}

$Class* T4992170::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(T4992170, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(T4992170, main, void, $StringArray*), "java.lang.NoSuchFieldException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"T4992170",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(T4992170, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(T4992170);
	});
	return class$;
}

$Class* T4992170::class$ = nullptr;