#include <ExecWithLotsOfArgs$EchoingHelper.h>

#include <ExecWithLotsOfArgs.h>
#include <jcpp.h>

using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _ExecWithLotsOfArgs$EchoingHelper_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(ExecWithLotsOfArgs$EchoingHelper, init$, void)},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(ExecWithLotsOfArgs$EchoingHelper, main, void, $StringArray*)},
	{}
};

$InnerClassInfo _ExecWithLotsOfArgs$EchoingHelper_InnerClassesInfo_[] = {
	{"ExecWithLotsOfArgs$EchoingHelper", "ExecWithLotsOfArgs", "EchoingHelper", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _ExecWithLotsOfArgs$EchoingHelper_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"ExecWithLotsOfArgs$EchoingHelper",
	"java.lang.Object",
	nullptr,
	nullptr,
	_ExecWithLotsOfArgs$EchoingHelper_MethodInfo_,
	nullptr,
	nullptr,
	_ExecWithLotsOfArgs$EchoingHelper_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"ExecWithLotsOfArgs"
};

$Object* allocate$ExecWithLotsOfArgs$EchoingHelper($Class* clazz) {
	return $of($alloc(ExecWithLotsOfArgs$EchoingHelper));
}

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
	$loadClass(ExecWithLotsOfArgs$EchoingHelper, name, initialize, &_ExecWithLotsOfArgs$EchoingHelper_ClassInfo_, allocate$ExecWithLotsOfArgs$EchoingHelper);
	return class$;
}

$Class* ExecWithLotsOfArgs$EchoingHelper::class$ = nullptr;