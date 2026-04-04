#include <ExecWithLotsOfArgs$EchoingHelper.h>
#include <ExecWithLotsOfArgs.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void ExecWithLotsOfArgs$EchoingHelper::init$() {
}

void ExecWithLotsOfArgs$EchoingHelper::main($StringArray* args) {
	for (int32_t i = 0; i < $nc(args)->length; ++i) {
		$nc($System::out)->println(args->get(i));
	}
}

ExecWithLotsOfArgs$EchoingHelper::ExecWithLotsOfArgs$EchoingHelper() {
}

$Class* ExecWithLotsOfArgs$EchoingHelper::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ExecWithLotsOfArgs$EchoingHelper, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(ExecWithLotsOfArgs$EchoingHelper, main, void, $StringArray*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"ExecWithLotsOfArgs$EchoingHelper", "ExecWithLotsOfArgs", "EchoingHelper", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"ExecWithLotsOfArgs$EchoingHelper",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"ExecWithLotsOfArgs"
	};
	$loadClass(ExecWithLotsOfArgs$EchoingHelper, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ExecWithLotsOfArgs$EchoingHelper);
	});
	return class$;
}

$Class* ExecWithLotsOfArgs$EchoingHelper::class$ = nullptr;