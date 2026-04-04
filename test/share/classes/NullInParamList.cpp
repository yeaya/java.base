#include <NullInParamList.h>
#include <A.h>
#include <java/lang/NoSuchMethodException.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $A = ::A;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NoSuchMethodException = ::java::lang::NoSuchMethodException;
using $RuntimeException = ::java::lang::RuntimeException;
using $Method = ::java::lang::reflect::Method;

void NullInParamList::init$() {
}

void NullInParamList::main($StringArray* args) {
	$useLocalObjectStack();
	$load(NullInParamList);
	$beforeCallerSensitive();
	try {
		$var($ClassArray, ca, $new($ClassArray, {nullptr}));
		$load($A);
		$var($Method, m, $A::class$->getMethod("m"_s, ca));
	} catch ($NoSuchMethodException& x) {
		return;
	}
	$throwNew($RuntimeException, "FAIL: expected NoSuchMethodException"_s);
}

NullInParamList::NullInParamList() {
}

$Class* NullInParamList::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(NullInParamList, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(NullInParamList, main, void, $StringArray*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"NullInParamList",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(NullInParamList, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(NullInParamList);
	});
	return class$;
}

$Class* NullInParamList::class$ = nullptr;