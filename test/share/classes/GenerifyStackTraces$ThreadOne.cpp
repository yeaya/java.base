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
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(GenerifyStackTraces$ThreadOne, init$, void)},
		{"A", "()V", nullptr, $PRIVATE, $method(GenerifyStackTraces$ThreadOne, A, void)},
		{"B", "()V", nullptr, $PRIVATE, $method(GenerifyStackTraces$ThreadOne, B, void)},
		{"C", "()V", nullptr, $PRIVATE, $method(GenerifyStackTraces$ThreadOne, C, void)},
		{"Done", "()V", nullptr, $PRIVATE, $method(GenerifyStackTraces$ThreadOne, Done, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(GenerifyStackTraces$ThreadOne, run, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"GenerifyStackTraces$ThreadOne", "GenerifyStackTraces", "ThreadOne", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"GenerifyStackTraces$ThreadOne",
		"java.lang.Thread",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"GenerifyStackTraces"
	};
	$loadClass(GenerifyStackTraces$ThreadOne, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(GenerifyStackTraces$ThreadOne);
	});
	return class$;
}

$Class* GenerifyStackTraces$ThreadOne::class$ = nullptr;