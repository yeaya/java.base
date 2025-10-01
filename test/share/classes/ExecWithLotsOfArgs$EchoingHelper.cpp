#include <ExecWithLotsOfArgs$EchoingHelper.h>

#include <ExecWithLotsOfArgs.h>
#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ExecWithLotsOfArgs = ::ExecWithLotsOfArgs;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _ExecWithLotsOfArgs$EchoingHelper_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ExecWithLotsOfArgs$EchoingHelper::*)()>(&ExecWithLotsOfArgs$EchoingHelper::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&ExecWithLotsOfArgs$EchoingHelper::main))},
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
		$init($System);
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