#include <GetCallerClassTest$Nested$NestedClassCaller.h>
#include <GetCallerClassTest$Nested.h>
#include <GetCallerClassTest.h>
#include <java/lang/StackWalker.h>
#include <jcpp.h>

using $GetCallerClassTest = ::GetCallerClassTest;
using $GetCallerClassTest$Nested = ::GetCallerClassTest$Nested;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void GetCallerClassTest$Nested$NestedClassCaller::init$($GetCallerClassTest$Nested* this$1) {
	$set(this, this$1, this$1);
}

void GetCallerClassTest$Nested$NestedClassCaller::run() {
	$GetCallerClassTest::staticGetCallerClass($nc(this->this$1->this$0)->walker, this->getClass(), $nc(this->this$1->this$0)->expectUOE);
	$GetCallerClassTest::reflectiveGetCallerClass(this->this$1->this$0->walker, this->getClass(), this->this$1->this$0->expectUOE);
	$GetCallerClassTest::methodHandleGetCallerClass(this->this$1->this$0->walker, this->getClass(), this->this$1->this$0->expectUOE);
}

GetCallerClassTest$Nested$NestedClassCaller::GetCallerClassTest$Nested$NestedClassCaller() {
}

$Class* GetCallerClassTest$Nested$NestedClassCaller::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$1", "LGetCallerClassTest$Nested;", nullptr, $FINAL | $SYNTHETIC, $field(GetCallerClassTest$Nested$NestedClassCaller, this$1)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LGetCallerClassTest$Nested;)V", nullptr, 0, $method(GetCallerClassTest$Nested$NestedClassCaller, init$, void, $GetCallerClassTest$Nested*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(GetCallerClassTest$Nested$NestedClassCaller, run, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"GetCallerClassTest$Nested", "GetCallerClassTest", "Nested", 0},
		{"GetCallerClassTest$Nested$NestedClassCaller", "GetCallerClassTest$Nested", "NestedClassCaller", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"GetCallerClassTest$Nested$NestedClassCaller",
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
	$loadClass(GetCallerClassTest$Nested$NestedClassCaller, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(GetCallerClassTest$Nested$NestedClassCaller);
	});
	return class$;
}

$Class* GetCallerClassTest$Nested$NestedClassCaller::class$ = nullptr;