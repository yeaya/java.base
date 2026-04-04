#include <GetCallerClassTest$LambdaTest.h>
#include <GetCallerClassTest.h>
#include <java/io/Serializable.h>
#include <java/lang/Runnable.h>
#include <java/lang/StackWalker.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <jcpp.h>

using $GetCallerClassTest = ::GetCallerClassTest;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;

class GetCallerClassTest$LambdaTest$$Lambda$lambda$run$0 : public $Runnable {
	$class(GetCallerClassTest$LambdaTest$$Lambda$lambda$run$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$(GetCallerClassTest$LambdaTest* inst) {
		$set(this, inst$, inst);
	}
	virtual void run() override {
		$nc(inst$)->lambda$run$0();
	}
	GetCallerClassTest$LambdaTest* inst$ = nullptr;
};
$Class* GetCallerClassTest$LambdaTest$$Lambda$lambda$run$0::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(GetCallerClassTest$LambdaTest$$Lambda$lambda$run$0, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LGetCallerClassTest$LambdaTest;)V", nullptr, $PUBLIC, $method(GetCallerClassTest$LambdaTest$$Lambda$lambda$run$0, init$, void, GetCallerClassTest$LambdaTest*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(GetCallerClassTest$LambdaTest$$Lambda$lambda$run$0, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"GetCallerClassTest$LambdaTest$$Lambda$lambda$run$0",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(GetCallerClassTest$LambdaTest$$Lambda$lambda$run$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(GetCallerClassTest$LambdaTest$$Lambda$lambda$run$0);
	});
	return class$;
}
$Class* GetCallerClassTest$LambdaTest$$Lambda$lambda$run$0::class$ = nullptr;

void GetCallerClassTest$LambdaTest::init$($GetCallerClassTest* this$0) {
	$set(this, this$0, this$0);
}

void GetCallerClassTest$LambdaTest::run() {
	$var($Runnable, lambdaRunnable, $new(GetCallerClassTest$LambdaTest$$Lambda$lambda$run$0, this));
	$nc(lambdaRunnable)->run();
}

void GetCallerClassTest$LambdaTest::lambda$run$0() {
	$beforeCallerSensitive();
	try {
		$Class* c = $nc(this->this$0->walker)->getCallerClass();
		$GetCallerClassTest::assertEquals(c, GetCallerClassTest$LambdaTest::class$);
		if (this->this$0->expectUOE) {
			$throwNew($RuntimeException, "Didn\'t get expected exception"_s);
		}
	} catch ($Throwable& e) {
		if (this->this$0->expectUOE && $GetCallerClassTest::causeIsUOE(e)) {
			return;
		}
		$nc($System::err)->println("Unexpected exception:"_s);
		$throwNew($RuntimeException, e);
	}
}

GetCallerClassTest$LambdaTest::GetCallerClassTest$LambdaTest() {
}

$Class* GetCallerClassTest$LambdaTest::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("GetCallerClassTest$LambdaTest$$Lambda$lambda$run$0")) {
			return GetCallerClassTest$LambdaTest$$Lambda$lambda$run$0::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "LGetCallerClassTest;", nullptr, $FINAL | $SYNTHETIC, $field(GetCallerClassTest$LambdaTest, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LGetCallerClassTest;)V", nullptr, 0, $method(GetCallerClassTest$LambdaTest, init$, void, $GetCallerClassTest*)},
		{"lambda$run$0", "()V", nullptr, $PRIVATE | $SYNTHETIC, $method(GetCallerClassTest$LambdaTest, lambda$run$0, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(GetCallerClassTest$LambdaTest, run, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"GetCallerClassTest$LambdaTest", "GetCallerClassTest", "LambdaTest", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"GetCallerClassTest$LambdaTest",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"GetCallerClassTest"
	};
	$loadClass(GetCallerClassTest$LambdaTest, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(GetCallerClassTest$LambdaTest);
	});
	return class$;
}

$Class* GetCallerClassTest$LambdaTest::class$ = nullptr;