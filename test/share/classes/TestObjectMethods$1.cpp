#include <TestObjectMethods$1.h>
#include <TestObjectMethods$Relation.h>
#include <TestObjectMethods.h>
#include <java/lang/NoSuchFieldError.h>
#include <jcpp.h>

#undef ARRAY
#undef EQUAL
#undef OTHER
#undef POSTFIX
#undef STRIPPED

using $TestObjectMethods$Relation = ::TestObjectMethods$Relation;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;

$ints* TestObjectMethods$1::$SwitchMap$TestObjectMethods$Relation = nullptr;

void TestObjectMethods$1::clinit$($Class* clazz) {
	$assignStatic(TestObjectMethods$1::$SwitchMap$TestObjectMethods$Relation, $new($ints, $($TestObjectMethods$Relation::values())->length));
	{
		try {
			TestObjectMethods$1::$SwitchMap$TestObjectMethods$Relation->set($TestObjectMethods$Relation::EQUAL->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			TestObjectMethods$1::$SwitchMap$TestObjectMethods$Relation->set($TestObjectMethods$Relation::POSTFIX->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			TestObjectMethods$1::$SwitchMap$TestObjectMethods$Relation->set($TestObjectMethods$Relation::STRIPPED->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			TestObjectMethods$1::$SwitchMap$TestObjectMethods$Relation->set($TestObjectMethods$Relation::ARRAY->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			TestObjectMethods$1::$SwitchMap$TestObjectMethods$Relation->set($TestObjectMethods$Relation::OTHER->ordinal(), 5);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

TestObjectMethods$1::TestObjectMethods$1() {
}

$Class* TestObjectMethods$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$SwitchMap$TestObjectMethods$Relation", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(TestObjectMethods$1, $SwitchMap$TestObjectMethods$Relation)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"TestObjectMethods",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"TestObjectMethods$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $SYNTHETIC,
		"TestObjectMethods$1",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		nullptr,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"TestObjectMethods"
	};
	$loadClass(TestObjectMethods$1, name, initialize, &classInfo$$, TestObjectMethods$1::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(TestObjectMethods$1);
	});
	return class$;
}

$Class* TestObjectMethods$1::class$ = nullptr;