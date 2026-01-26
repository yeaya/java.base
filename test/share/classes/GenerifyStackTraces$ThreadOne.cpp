#include <GenerifyStackTraces$ThreadOne.h>

#include <GenerifyStackTraces.h>
#include <java/lang/StackTraceElement.h>
#include <jcpp.h>

#undef A
#undef B
#undef C
#undef DONE_DEPTH

using $GenerifyStackTraces = ::GenerifyStackTraces;
using $StackTraceElementArray = $Array<::java::lang::StackTraceElement>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _GenerifyStackTraces$ThreadOne_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(GenerifyStackTraces$ThreadOne, init$, void)},
	{"A", "()V", nullptr, $PRIVATE, $method(GenerifyStackTraces$ThreadOne, A, void)},
	{"B", "()V", nullptr, $PRIVATE, $method(GenerifyStackTraces$ThreadOne, B, void)},
	{"C", "()V", nullptr, $PRIVATE, $method(GenerifyStackTraces$ThreadOne, C, void)},
	{"Done", "()V", nullptr, $PRIVATE, $method(GenerifyStackTraces$ThreadOne, Done, void)},
	{"run", "()V", nullptr, $PUBLIC, $virtualMethod(GenerifyStackTraces$ThreadOne, run, void)},
	{}
};

$InnerClassInfo _GenerifyStackTraces$ThreadOne_InnerClassesInfo_[] = {
	{"GenerifyStackTraces$ThreadOne", "GenerifyStackTraces", "ThreadOne", $STATIC},
	{}
};

$ClassInfo _GenerifyStackTraces$ThreadOne_ClassInfo_ = {
	$ACC_SUPER,
	"GenerifyStackTraces$ThreadOne",
	"java.lang.Thread",
	nullptr,
	nullptr,
	_GenerifyStackTraces$ThreadOne_MethodInfo_,
	nullptr,
	nullptr,
	_GenerifyStackTraces$ThreadOne_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"GenerifyStackTraces"
};

$Object* allocate$GenerifyStackTraces$ThreadOne($Class* clazz) {
	return $of($alloc(GenerifyStackTraces$ThreadOne));
}

void GenerifyStackTraces$ThreadOne::init$() {
	$Thread::init$();
}

void GenerifyStackTraces$ThreadOne::run() {
	A();
}

void GenerifyStackTraces$ThreadOne::A() {
	$GenerifyStackTraces::waitForDump();
	B();
}

void GenerifyStackTraces$ThreadOne::B() {
	$GenerifyStackTraces::waitForDump();
	C();
}

void GenerifyStackTraces$ThreadOne::C() {
	$GenerifyStackTraces::waitForDump();
	Done();
}

void GenerifyStackTraces$ThreadOne::Done() {
	$GenerifyStackTraces::waitForDump();
	$var($StackTraceElementArray, stack, getStackTrace());
	try {
		$GenerifyStackTraces::checkStack(this, stack, $GenerifyStackTraces::DONE_DEPTH);
	} catch ($Exception& e) {
		e->printStackTrace();
		$GenerifyStackTraces::testFailed = true;
	}
}

GenerifyStackTraces$ThreadOne::GenerifyStackTraces$ThreadOne() {
}

$Class* GenerifyStackTraces$ThreadOne::load$($String* name, bool initialize) {
	$loadClass(GenerifyStackTraces$ThreadOne, name, initialize, &_GenerifyStackTraces$ThreadOne_ClassInfo_, allocate$GenerifyStackTraces$ThreadOne);
	return class$;
}

$Class* GenerifyStackTraces$ThreadOne::class$ = nullptr;