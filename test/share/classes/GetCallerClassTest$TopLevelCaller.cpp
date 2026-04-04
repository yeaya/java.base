#include <GetCallerClassTest$TopLevelCaller.h>
#include <GetCallerClassTest.h>
#include <java/lang/StackWalker.h>
#include <jcpp.h>

using $GetCallerClassTest = ::GetCallerClassTest;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void GetCallerClassTest$TopLevelCaller::init$($GetCallerClassTest* this$0) {
	$set(this, this$0, this$0);
}

void GetCallerClassTest$TopLevelCaller::run() {
	$GetCallerClassTest::staticGetCallerClass(this->this$0->walker, this->getClass(), this->this$0->expectUOE);
	$GetCallerClassTest::reflectiveGetCallerClass(this->this$0->walker, this->getClass(), this->this$0->expectUOE);
	$GetCallerClassTest::methodHandleGetCallerClass(this->this$0->walker, this->getClass(), this->this$0->expectUOE);
}

GetCallerClassTest$TopLevelCaller::GetCallerClassTest$TopLevelCaller() {
}

$Class* GetCallerClassTest$TopLevelCaller::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "LGetCallerClassTest;", nullptr, $FINAL | $SYNTHETIC, $field(GetCallerClassTest$TopLevelCaller, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LGetCallerClassTest;)V", nullptr, 0, $method(GetCallerClassTest$TopLevelCaller, init$, void, $GetCallerClassTest*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(GetCallerClassTest$TopLevelCaller, run, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"GetCallerClassTest$TopLevelCaller", "GetCallerClassTest", "TopLevelCaller", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"GetCallerClassTest$TopLevelCaller",
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
	$loadClass(GetCallerClassTest$TopLevelCaller, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(GetCallerClassTest$TopLevelCaller);
	});
	return class$;
}

$Class* GetCallerClassTest$TopLevelCaller::class$ = nullptr;