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
using $PrintStream = ::java::io::PrintStream;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $StackWalker = ::java::lang::StackWalker;
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
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<GetCallerClassTest$LambdaTest$$Lambda$lambda$run$0>());
	}
	GetCallerClassTest$LambdaTest* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo GetCallerClassTest$LambdaTest$$Lambda$lambda$run$0::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(GetCallerClassTest$LambdaTest$$Lambda$lambda$run$0, inst$)},
	{}
};
$MethodInfo GetCallerClassTest$LambdaTest$$Lambda$lambda$run$0::methodInfos[3] = {
	{"<init>", "(LGetCallerClassTest$LambdaTest;)V", nullptr, $PUBLIC, $method(static_cast<void(GetCallerClassTest$LambdaTest$$Lambda$lambda$run$0::*)(GetCallerClassTest$LambdaTest*)>(&GetCallerClassTest$LambdaTest$$Lambda$lambda$run$0::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo GetCallerClassTest$LambdaTest$$Lambda$lambda$run$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"GetCallerClassTest$LambdaTest$$Lambda$lambda$run$0",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* GetCallerClassTest$LambdaTest$$Lambda$lambda$run$0::load$($String* name, bool initialize) {
	$loadClass(GetCallerClassTest$LambdaTest$$Lambda$lambda$run$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* GetCallerClassTest$LambdaTest$$Lambda$lambda$run$0::class$ = nullptr;

$FieldInfo _GetCallerClassTest$LambdaTest_FieldInfo_[] = {
	{"this$0", "LGetCallerClassTest;", nullptr, $FINAL | $SYNTHETIC, $field(GetCallerClassTest$LambdaTest, this$0)},
	{}
};

$MethodInfo _GetCallerClassTest$LambdaTest_MethodInfo_[] = {
	{"<init>", "(LGetCallerClassTest;)V", nullptr, 0, $method(static_cast<void(GetCallerClassTest$LambdaTest::*)($GetCallerClassTest*)>(&GetCallerClassTest$LambdaTest::init$))},
	{"lambda$run$0", "()V", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<void(GetCallerClassTest$LambdaTest::*)()>(&GetCallerClassTest$LambdaTest::lambda$run$0))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _GetCallerClassTest$LambdaTest_InnerClassesInfo_[] = {
	{"GetCallerClassTest$LambdaTest", "GetCallerClassTest", "LambdaTest", 0},
	{}
};

$ClassInfo _GetCallerClassTest$LambdaTest_ClassInfo_ = {
	$ACC_SUPER,
	"GetCallerClassTest$LambdaTest",
	"java.lang.Object",
	"java.lang.Runnable",
	_GetCallerClassTest$LambdaTest_FieldInfo_,
	_GetCallerClassTest$LambdaTest_MethodInfo_,
	nullptr,
	nullptr,
	_GetCallerClassTest$LambdaTest_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"GetCallerClassTest"
};

$Object* allocate$GetCallerClassTest$LambdaTest($Class* clazz) {
	return $of($alloc(GetCallerClassTest$LambdaTest));
}

void GetCallerClassTest$LambdaTest::init$($GetCallerClassTest* this$0) {
	$set(this, this$0, this$0);
}

void GetCallerClassTest$LambdaTest::run() {
	$var($Runnable, lambdaRunnable, static_cast<$Runnable*>($new(GetCallerClassTest$LambdaTest$$Lambda$lambda$run$0, this)));
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
		if (name->equals(GetCallerClassTest$LambdaTest$$Lambda$lambda$run$0::classInfo$.name)) {
			return GetCallerClassTest$LambdaTest$$Lambda$lambda$run$0::load$(name, initialize);
		}
	}
	$loadClass(GetCallerClassTest$LambdaTest, name, initialize, &_GetCallerClassTest$LambdaTest_ClassInfo_, allocate$GetCallerClassTest$LambdaTest);
	return class$;
}

$Class* GetCallerClassTest$LambdaTest::class$ = nullptr;