#include <InitialValue.h>
#include <InitialValue$MyLocal.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/ThreadLocal.h>
#include <jcpp.h>

using $InitialValue$MyLocal = ::InitialValue$MyLocal;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $ThreadLocal = ::java::lang::ThreadLocal;

$ThreadLocal* InitialValue::other = nullptr;
bool InitialValue::passed = false;

void InitialValue::init$() {
}

void InitialValue::run() {
	$useLocalObjectStack();
	$var($InitialValue$MyLocal, l, $new($InitialValue$MyLocal, this));
	$var($String, s1, $cast($String, l->get()));
	$var($String, s2, $cast($String, $nc(InitialValue::other)->get()));
	if ((s2 != nullptr) && s2->equals("Other"_s)) {
		InitialValue::passed = true;
	}
}

void InitialValue::main($StringArray* args) {
	$init(InitialValue);
	$useLocalObjectStack();
	$var($Thread, t, $new($Thread, $$new(InitialValue)));
	t->start();
	try {
		t->join();
	} catch ($InterruptedException& e) {
		$throwNew($RuntimeException, "Test Interrupted: failed"_s);
	}
	if (!InitialValue::passed) {
		$throwNew($RuntimeException, "Test Failed"_s);
	}
}

InitialValue::InitialValue() {
}

$Class* InitialValue::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"other", "Ljava/lang/ThreadLocal;", "Ljava/lang/ThreadLocal<Ljava/lang/String;>;", $STATIC, $staticField(InitialValue, other)},
		{"passed", "Z", nullptr, $STATIC, $staticField(InitialValue, passed)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(InitialValue, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(InitialValue, main, void, $StringArray*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(InitialValue, run, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"InitialValue$MyLocal", "InitialValue", "MyLocal", $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"InitialValue",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"InitialValue$MyLocal"
	};
	$loadClass(InitialValue, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(InitialValue);
	});
	return class$;
}

$Class* InitialValue::class$ = nullptr;