#include <TestObjectMethods$1.h>

#include <TestObjectMethods$Relation.h>
#include <TestObjectMethods.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/NoSuchFieldError.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef OTHER
#undef STRIPPED
#undef ARRAY
#undef EQUAL
#undef POSTFIX

using $TestObjectMethods = ::TestObjectMethods;
using $TestObjectMethods$Relation = ::TestObjectMethods$Relation;
using $TestObjectMethods$RelationArray = $Array<TestObjectMethods$Relation>;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;

$FieldInfo _TestObjectMethods$1_FieldInfo_[] = {
	{"$SwitchMap$TestObjectMethods$Relation", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(TestObjectMethods$1, $SwitchMap$TestObjectMethods$Relation)},
	{}
};

$EnclosingMethodInfo _TestObjectMethods$1_EnclosingMethodInfo_ = {
	"TestObjectMethods",
	nullptr,
	nullptr
};

$InnerClassInfo _TestObjectMethods$1_InnerClassesInfo_[] = {
	{"TestObjectMethods$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _TestObjectMethods$1_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"TestObjectMethods$1",
	"java.lang.Object",
	nullptr,
	_TestObjectMethods$1_FieldInfo_,
	nullptr,
	nullptr,
	&_TestObjectMethods$1_EnclosingMethodInfo_,
	_TestObjectMethods$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"TestObjectMethods"
};

$Object* allocate$TestObjectMethods$1($Class* clazz) {
	return $of($alloc(TestObjectMethods$1));
}

$ints* TestObjectMethods$1::$SwitchMap$TestObjectMethods$Relation = nullptr;

void clinit$TestObjectMethods$1($Class* class$) {
	$assignStatic(TestObjectMethods$1::$SwitchMap$TestObjectMethods$Relation, $new($ints, $($TestObjectMethods$Relation::values())->length));
	{
		try {
			$nc(TestObjectMethods$1::$SwitchMap$TestObjectMethods$Relation)->set($TestObjectMethods$Relation::EQUAL->ordinal(), 1);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(TestObjectMethods$1::$SwitchMap$TestObjectMethods$Relation)->set($TestObjectMethods$Relation::POSTFIX->ordinal(), 2);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(TestObjectMethods$1::$SwitchMap$TestObjectMethods$Relation)->set($TestObjectMethods$Relation::STRIPPED->ordinal(), 3);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(TestObjectMethods$1::$SwitchMap$TestObjectMethods$Relation)->set($TestObjectMethods$Relation::ARRAY->ordinal(), 4);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(TestObjectMethods$1::$SwitchMap$TestObjectMethods$Relation)->set($TestObjectMethods$Relation::OTHER->ordinal(), 5);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
	}
}

TestObjectMethods$1::TestObjectMethods$1() {
}

$Class* TestObjectMethods$1::load$($String* name, bool initialize) {
	$loadClass(TestObjectMethods$1, name, initialize, &_TestObjectMethods$1_ClassInfo_, clinit$TestObjectMethods$1, allocate$TestObjectMethods$1);
	return class$;
}

$Class* TestObjectMethods$1::class$ = nullptr;