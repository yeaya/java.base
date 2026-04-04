#include <Test$Inner2.h>
#include <Test.h>
#include <java/util/List.h>
#include <jcpp.h>

using $Test = ::Test;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;

void Test$Inner2::init$($Test* this$0) {
	$set(this, this$0, this$0);
}

$List* Test$Inner2::foo2($List* t) {
	return nullptr;
}

Test$Inner2::Test$Inner2() {
}

$Class* Test$Inner2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "LTest;", nullptr, $FINAL | $SYNTHETIC, $field(Test$Inner2, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LTest;)V", nullptr, 0, $method(Test$Inner2, init$, void, $Test*)},
		{"foo2", "(Ljava/util/List;)Ljava/util/List;", "(Ljava/util/List<+TV;>;)Ljava/util/List<*>;", 0, $virtualMethod(Test$Inner2, foo2, $List*, $List*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"Test$Inner2", "Test", "Inner2", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"Test$Inner2",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"<V:Ljava/lang/Object;>Ljava/lang/Object;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"Test"
	};
	$loadClass(Test$Inner2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Test$Inner2);
	});
	return class$;
}

$Class* Test$Inner2::class$ = nullptr;