#include <TestObjectMethods$Relation.h>

#include <TestObjectMethods.h>
#include <java/lang/Enum.h>
#include <jcpp.h>

#undef ARRAY
#undef EQUAL
#undef OTHER
#undef POSTFIX
#undef STRIPPED

using $TestObjectMethods = ::TestObjectMethods;
using $TestObjectMethods$RelationArray = $Array<TestObjectMethods$Relation>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$FieldInfo _TestObjectMethods$Relation_FieldInfo_[] = {
	{"EQUAL", "LTestObjectMethods$Relation;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TestObjectMethods$Relation, EQUAL)},
	{"POSTFIX", "LTestObjectMethods$Relation;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TestObjectMethods$Relation, POSTFIX)},
	{"STRIPPED", "LTestObjectMethods$Relation;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TestObjectMethods$Relation, STRIPPED)},
	{"ARRAY", "LTestObjectMethods$Relation;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TestObjectMethods$Relation, ARRAY)},
	{"OTHER", "LTestObjectMethods$Relation;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(TestObjectMethods$Relation, OTHER)},
	{"$VALUES", "[LTestObjectMethods$Relation;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(TestObjectMethods$Relation, $VALUES)},
	{}
};

$MethodInfo _TestObjectMethods$Relation_MethodInfo_[] = {
	{"$values", "()[LTestObjectMethods$Relation;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$TestObjectMethods$RelationArray*(*)()>(&TestObjectMethods$Relation::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(TestObjectMethods$Relation::*)($String*,int32_t)>(&TestObjectMethods$Relation::init$))},
	{"valueOf", "(Ljava/lang/String;)LTestObjectMethods$Relation;", nullptr, $PUBLIC | $STATIC, $method(static_cast<TestObjectMethods$Relation*(*)($String*)>(&TestObjectMethods$Relation::valueOf))},
	{"values", "()[LTestObjectMethods$Relation;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$TestObjectMethods$RelationArray*(*)()>(&TestObjectMethods$Relation::values))},
	{}
};

$InnerClassInfo _TestObjectMethods$Relation_InnerClassesInfo_[] = {
	{"TestObjectMethods$Relation", "TestObjectMethods", "Relation", $PRIVATE | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _TestObjectMethods$Relation_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"TestObjectMethods$Relation",
	"java.lang.Enum",
	nullptr,
	_TestObjectMethods$Relation_FieldInfo_,
	_TestObjectMethods$Relation_MethodInfo_,
	"Ljava/lang/Enum<LTestObjectMethods$Relation;>;",
	nullptr,
	_TestObjectMethods$Relation_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"TestObjectMethods"
};

$Object* allocate$TestObjectMethods$Relation($Class* clazz) {
	return $of($alloc(TestObjectMethods$Relation));
}

TestObjectMethods$Relation* TestObjectMethods$Relation::EQUAL = nullptr;
TestObjectMethods$Relation* TestObjectMethods$Relation::POSTFIX = nullptr;
TestObjectMethods$Relation* TestObjectMethods$Relation::STRIPPED = nullptr;
TestObjectMethods$Relation* TestObjectMethods$Relation::ARRAY = nullptr;
TestObjectMethods$Relation* TestObjectMethods$Relation::OTHER = nullptr;
$TestObjectMethods$RelationArray* TestObjectMethods$Relation::$VALUES = nullptr;

$TestObjectMethods$RelationArray* TestObjectMethods$Relation::$values() {
	$init(TestObjectMethods$Relation);
	return $new($TestObjectMethods$RelationArray, {
		TestObjectMethods$Relation::EQUAL,
		TestObjectMethods$Relation::POSTFIX,
		TestObjectMethods$Relation::STRIPPED,
		TestObjectMethods$Relation::ARRAY,
		TestObjectMethods$Relation::OTHER
	});
}

$TestObjectMethods$RelationArray* TestObjectMethods$Relation::values() {
	$init(TestObjectMethods$Relation);
	return $cast($TestObjectMethods$RelationArray, TestObjectMethods$Relation::$VALUES->clone());
}

TestObjectMethods$Relation* TestObjectMethods$Relation::valueOf($String* name) {
	$init(TestObjectMethods$Relation);
	return $cast(TestObjectMethods$Relation, $Enum::valueOf(TestObjectMethods$Relation::class$, name));
}

void TestObjectMethods$Relation::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void clinit$TestObjectMethods$Relation($Class* class$) {
	$assignStatic(TestObjectMethods$Relation::EQUAL, $new(TestObjectMethods$Relation, "EQUAL"_s, 0));
	$assignStatic(TestObjectMethods$Relation::POSTFIX, $new(TestObjectMethods$Relation, "POSTFIX"_s, 1));
	$assignStatic(TestObjectMethods$Relation::STRIPPED, $new(TestObjectMethods$Relation, "STRIPPED"_s, 2));
	$assignStatic(TestObjectMethods$Relation::ARRAY, $new(TestObjectMethods$Relation, "ARRAY"_s, 3));
	$assignStatic(TestObjectMethods$Relation::OTHER, $new(TestObjectMethods$Relation, "OTHER"_s, 4));
	$assignStatic(TestObjectMethods$Relation::$VALUES, TestObjectMethods$Relation::$values());
}

TestObjectMethods$Relation::TestObjectMethods$Relation() {
}

$Class* TestObjectMethods$Relation::load$($String* name, bool initialize) {
	$loadClass(TestObjectMethods$Relation, name, initialize, &_TestObjectMethods$Relation_ClassInfo_, clinit$TestObjectMethods$Relation, allocate$TestObjectMethods$Relation);
	return class$;
}

$Class* TestObjectMethods$Relation::class$ = nullptr;