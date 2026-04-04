#include <Test8009222.h>
#include <Intf.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodHandles.h>
#include <java/util/Objects.h>
#include <jcpp.h>

#undef TYPE

using $Intf = ::Intf;
using $ClassInfo = ::java::lang::ClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandles = ::java::lang::invoke::MethodHandles;
using $Objects = ::java::util::Objects;

void Test8009222::init$() {
}

void Test8009222::main($StringArray* args) {
	$useLocalObjectStack();
	$load(Test8009222);
	$beforeCallerSensitive();
	$load($Intf);
	$Objects::requireNonNull($($$nc($MethodHandles::lookup())->findStaticGetter($Intf::class$, "i"_s, $Integer::TYPE)));
	$nc($System::out)->println("TEST PASSED"_s);
}

Test8009222::Test8009222() {
}

$Class* Test8009222::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Test8009222, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Test8009222, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"Test8009222",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(Test8009222, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Test8009222);
	});
	return class$;
}

$Class* Test8009222::class$ = nullptr;