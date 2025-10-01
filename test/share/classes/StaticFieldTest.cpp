#include <StaticFieldTest.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Field.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $Field = ::java::lang::reflect::Field;

$FieldInfo _StaticFieldTest_FieldInfo_[] = {
	{"byteField", "B", nullptr, $PRIVATE | $STATIC, $staticField(StaticFieldTest, byteField)},
	{"shortField", "S", nullptr, $PRIVATE | $STATIC, $staticField(StaticFieldTest, shortField)},
	{"charField", "C", nullptr, $PRIVATE | $STATIC, $staticField(StaticFieldTest, charField)},
	{"intField", "I", nullptr, $PRIVATE | $STATIC, $staticField(StaticFieldTest, intField)},
	{"longField", "J", nullptr, $PRIVATE | $STATIC, $staticField(StaticFieldTest, longField)},
	{"floatField", "F", nullptr, $PRIVATE | $STATIC, $staticField(StaticFieldTest, floatField)},
	{"doubleField", "D", nullptr, $PRIVATE | $STATIC, $staticField(StaticFieldTest, doubleField)},
	{"stringField", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticField(StaticFieldTest, stringField)},
	{}
};

$MethodInfo _StaticFieldTest_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(StaticFieldTest::*)()>(&StaticFieldTest::init$))},
	{"getAccessibleField", "(Ljava/lang/String;)Ljava/lang/reflect/Field;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$Field*(*)($String*)>(&StaticFieldTest::getAccessibleField)), "java.lang.NoSuchFieldException"},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&StaticFieldTest::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _StaticFieldTest_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"StaticFieldTest",
	"java.lang.Object",
	nullptr,
	_StaticFieldTest_FieldInfo_,
	_StaticFieldTest_MethodInfo_
};

$Object* allocate$StaticFieldTest($Class* clazz) {
	return $of($alloc(StaticFieldTest));
}

int8_t StaticFieldTest::byteField = 0;
int16_t StaticFieldTest::shortField = 0;
char16_t StaticFieldTest::charField = 0;
int32_t StaticFieldTest::intField = 0;
int64_t StaticFieldTest::longField = 0;
float StaticFieldTest::floatField = 0.0;
double StaticFieldTest::doubleField = 0.0;
$String* StaticFieldTest::stringField = nullptr;

void StaticFieldTest::init$() {
}

$Field* StaticFieldTest::getAccessibleField($String* name) {
	$load(StaticFieldTest);
	$beforeCallerSensitive();
	$var($Field, f, StaticFieldTest::class$->getDeclaredField(name));
	$nc(f)->setAccessible(true);
	return f;
}

void StaticFieldTest::main($StringArray* args) {
	$load(StaticFieldTest);
	$beforeCallerSensitive();
	$var($Field, byteField, getAccessibleField("byteField"_s));
	$var($Field, shortField, getAccessibleField("shortField"_s));
	$var($Field, charField, getAccessibleField("charField"_s));
	$var($Field, intField, getAccessibleField("intField"_s));
	$var($Field, longField, getAccessibleField("longField"_s));
	$var($Field, floatField, getAccessibleField("floatField"_s));
	$var($Field, doubleField, getAccessibleField("doubleField"_s));
	$var($Field, stringField, getAccessibleField("stringField"_s));
	$nc(byteField)->setByte(nullptr, (int8_t)77);
	$nc(shortField)->setShort(nullptr, (int16_t)77);
	$nc(charField)->setChar(nullptr, (char16_t)77);
	$nc(intField)->setInt(nullptr, 77);
	$nc(longField)->setLong(nullptr, (int64_t)77);
	$nc(floatField)->setFloat(nullptr, (float)77);
	$nc(doubleField)->setDouble(nullptr, (double)77);
	$var($String, myString, "Hello, world"_s);
	$nc(stringField)->set(nullptr, myString);
	if (byteField->getByte(nullptr) != 77) {
		$throwNew($RuntimeException, "Test failed"_s);
	}
	if (shortField->getShort(nullptr) != 77) {
		$throwNew($RuntimeException, "Test failed"_s);
	}
	if (charField->getChar(nullptr) != 77) {
		$throwNew($RuntimeException, "Test failed"_s);
	}
	if (intField->getInt(nullptr) != 77) {
		$throwNew($RuntimeException, "Test failed"_s);
	}
	if (longField->getLong(nullptr) != 77) {
		$throwNew($RuntimeException, "Test failed"_s);
	}
	if (floatField->getFloat(nullptr) != 77) {
		$throwNew($RuntimeException, "Test failed"_s);
	}
	if (doubleField->getDouble(nullptr) != 77) {
		$throwNew($RuntimeException, "Test failed"_s);
	}
	if (!$equals(stringField->get(nullptr), myString)) {
		$throwNew($RuntimeException, "Test failed"_s);
	}
}

StaticFieldTest::StaticFieldTest() {
}

$Class* StaticFieldTest::load$($String* name, bool initialize) {
	$loadClass(StaticFieldTest, name, initialize, &_StaticFieldTest_ClassInfo_, allocate$StaticFieldTest);
	return class$;
}

$Class* StaticFieldTest::class$ = nullptr;