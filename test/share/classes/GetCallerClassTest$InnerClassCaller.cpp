#include <GetCallerClassTest$InnerClassCaller.h>
#include <GetCallerClassTest$InnerClassCaller$Inner.h>
#include <GetCallerClassTest.h>
#include <jcpp.h>

using $GetCallerClassTest = ::GetCallerClassTest;
using $GetCallerClassTest$InnerClassCaller$Inner = ::GetCallerClassTest$InnerClassCaller$Inner;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void GetCallerClassTest$InnerClassCaller::init$($GetCallerClassTest* this$0) {
	$set(this, this$0, this$0);
}

void GetCallerClassTest$InnerClassCaller::run() {
	$$new($GetCallerClassTest$InnerClassCaller$Inner, this)->test();
}

GetCallerClassTest$InnerClassCaller::GetCallerClassTest$InnerClassCaller() {
}

$Class* GetCallerClassTest$InnerClassCaller::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "LGetCallerClassTest;", nullptr, $FINAL | $SYNTHETIC, $field(GetCallerClassTest$InnerClassCaller, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LGetCallerClassTest;)V", nullptr, 0, $method(GetCallerClassTest$InnerClassCaller, init$, void, $GetCallerClassTest*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(GetCallerClassTest$InnerClassCaller, run, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"GetCallerClassTest$InnerClassCaller", "GetCallerClassTest", "InnerClassCaller", 0},
		{"GetCallerClassTest$InnerClassCaller$Inner", "GetCallerClassTest$InnerClassCaller", "Inner", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"GetCallerClassTest$InnerClassCaller",
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
	$loadClass(GetCallerClassTest$InnerClassCaller, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(GetCallerClassTest$InnerClassCaller);
	});
	return class$;
}

$Class* GetCallerClassTest$InnerClassCaller::class$ = nullptr;