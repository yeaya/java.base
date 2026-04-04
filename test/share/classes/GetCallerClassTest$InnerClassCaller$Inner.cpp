#include <GetCallerClassTest$InnerClassCaller$Inner.h>
#include <GetCallerClassTest$InnerClassCaller.h>
#include <GetCallerClassTest.h>
#include <java/lang/StackWalker.h>
#include <jcpp.h>

using $GetCallerClassTest = ::GetCallerClassTest;
using $GetCallerClassTest$InnerClassCaller = ::GetCallerClassTest$InnerClassCaller;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void GetCallerClassTest$InnerClassCaller$Inner::init$($GetCallerClassTest$InnerClassCaller* this$1) {
	$set(this, this$1, this$1);
}

void GetCallerClassTest$InnerClassCaller$Inner::test() {
	$GetCallerClassTest::staticGetCallerClass($nc(this->this$1->this$0)->walker, this->getClass(), $nc(this->this$1->this$0)->expectUOE);
	$GetCallerClassTest::reflectiveGetCallerClass(this->this$1->this$0->walker, this->getClass(), this->this$1->this$0->expectUOE);
	$GetCallerClassTest::methodHandleGetCallerClass(this->this$1->this$0->walker, this->getClass(), this->this$1->this$0->expectUOE);
}

GetCallerClassTest$InnerClassCaller$Inner::GetCallerClassTest$InnerClassCaller$Inner() {
}

$Class* GetCallerClassTest$InnerClassCaller$Inner::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$1", "LGetCallerClassTest$InnerClassCaller;", nullptr, $FINAL | $SYNTHETIC, $field(GetCallerClassTest$InnerClassCaller$Inner, this$1)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LGetCallerClassTest$InnerClassCaller;)V", nullptr, 0, $method(GetCallerClassTest$InnerClassCaller$Inner, init$, void, $GetCallerClassTest$InnerClassCaller*)},
		{"test", "()V", nullptr, 0, $virtualMethod(GetCallerClassTest$InnerClassCaller$Inner, test, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"GetCallerClassTest$InnerClassCaller", "GetCallerClassTest", "InnerClassCaller", 0},
		{"GetCallerClassTest$InnerClassCaller$Inner", "GetCallerClassTest$InnerClassCaller", "Inner", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"GetCallerClassTest$InnerClassCaller$Inner",
		"java.lang.Object",
		nullptr,
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
	$loadClass(GetCallerClassTest$InnerClassCaller$Inner, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(GetCallerClassTest$InnerClassCaller$Inner);
	});
	return class$;
}

$Class* GetCallerClassTest$InnerClassCaller$Inner::class$ = nullptr;