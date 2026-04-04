#include <ClassAttributesTest$NestedClass.h>
#include <ClassAttributesTest.h>
#include <jcpp.h>

using $ClassAttributesTest = ::ClassAttributesTest;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void ClassAttributesTest$NestedClass::init$($ClassAttributesTest* this$0) {
	$set(this, this$0, this$0);
}

ClassAttributesTest$NestedClass::ClassAttributesTest$NestedClass() {
}

$Class* ClassAttributesTest$NestedClass::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "LClassAttributesTest;", nullptr, $FINAL | $SYNTHETIC, $field(ClassAttributesTest$NestedClass, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LClassAttributesTest;)V", nullptr, 0, $method(ClassAttributesTest$NestedClass, init$, void, $ClassAttributesTest*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"ClassAttributesTest$NestedClass", "ClassAttributesTest", "NestedClass", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"ClassAttributesTest$NestedClass",
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
		"ClassAttributesTest"
	};
	$loadClass(ClassAttributesTest$NestedClass, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ClassAttributesTest$NestedClass);
	});
	return class$;
}

$Class* ClassAttributesTest$NestedClass::class$ = nullptr;