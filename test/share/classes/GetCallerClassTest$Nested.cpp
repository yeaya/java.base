#include <GetCallerClassTest$Nested.h>
#include <GetCallerClassTest$Nested$NestedClassCaller.h>
#include <GetCallerClassTest.h>
#include <jcpp.h>

using $GetCallerClassTest = ::GetCallerClassTest;
using $GetCallerClassTest$Nested$NestedClassCaller = ::GetCallerClassTest$Nested$NestedClassCaller;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void GetCallerClassTest$Nested::init$($GetCallerClassTest* this$0) {
	$set(this, this$0, this$0);
}

$GetCallerClassTest$Nested$NestedClassCaller* GetCallerClassTest$Nested::createNestedCaller() {
	return $new($GetCallerClassTest$Nested$NestedClassCaller, this);
}

GetCallerClassTest$Nested::GetCallerClassTest$Nested() {
}

$Class* GetCallerClassTest$Nested::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "LGetCallerClassTest;", nullptr, $FINAL | $SYNTHETIC, $field(GetCallerClassTest$Nested, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LGetCallerClassTest;)V", nullptr, 0, $method(GetCallerClassTest$Nested, init$, void, $GetCallerClassTest*)},
		{"createNestedCaller", "()LGetCallerClassTest$Nested$NestedClassCaller;", nullptr, 0, $virtualMethod(GetCallerClassTest$Nested, createNestedCaller, $GetCallerClassTest$Nested$NestedClassCaller*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"GetCallerClassTest$Nested", "GetCallerClassTest", "Nested", 0},
		{"GetCallerClassTest$Nested$NestedClassCaller", "GetCallerClassTest$Nested", "NestedClassCaller", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"GetCallerClassTest$Nested",
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
	$loadClass(GetCallerClassTest$Nested, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(GetCallerClassTest$Nested);
	});
	return class$;
}

$Class* GetCallerClassTest$Nested::class$ = nullptr;