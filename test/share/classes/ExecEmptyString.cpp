#include <ExecEmptyString.h>

#include <java/lang/Process.h>
#include <java/lang/Runtime.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Process = ::java::lang::Process;
using $Runtime = ::java::lang::Runtime;

$MethodInfo _ExecEmptyString_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ExecEmptyString::*)()>(&ExecEmptyString::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&ExecEmptyString::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _ExecEmptyString_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"ExecEmptyString",
	"java.lang.Object",
	nullptr,
	nullptr,
	_ExecEmptyString_MethodInfo_
};

$Object* allocate$ExecEmptyString($Class* clazz) {
	return $of($alloc(ExecEmptyString));
}

void ExecEmptyString::init$() {
}

void ExecEmptyString::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	try {
		$nc($($Runtime::getRuntime()))->exec(""_s);
		$throwNew($Exception, "Expected IllegalArgumentException not thrown"_s);
	} catch ($IllegalArgumentException& e) {
	}
	try {
		$nc($($Runtime::getRuntime()))->exec($$new($String));
		$throwNew($Exception, "Expected IllegalArgumentException not thrown"_s);
	} catch ($IllegalArgumentException& e) {
	}
}

ExecEmptyString::ExecEmptyString() {
}

$Class* ExecEmptyString::load$($String* name, bool initialize) {
	$loadClass(ExecEmptyString, name, initialize, &_ExecEmptyString_ClassInfo_, allocate$ExecEmptyString);
	return class$;
}

$Class* ExecEmptyString::class$ = nullptr;