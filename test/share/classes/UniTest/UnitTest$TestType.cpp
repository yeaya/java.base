#include <UniTest/UnitTest$TestType.h>
#include <UniTest/UnitTest.h>
#include <java/lang/Enum.h>
#include <jcpp.h>

using $UnitTest$TestTypeArray = $Array<::UniTest::UnitTest$TestType>;
using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

namespace UniTest {

UnitTest$TestType* UnitTest$TestType::scalarTypesField = nullptr;
UnitTest$TestType* UnitTest$TestType::scalarTypesAcceptDefaultField = nullptr;
UnitTest$TestType* UnitTest$TestType::scalarTypesOverrideDefaultField = nullptr;
UnitTest$TestType* UnitTest$TestType::emptyArrayTypesField = nullptr;
UnitTest$TestType* UnitTest$TestType::singleElementArrayTypesField = nullptr;
UnitTest$TestType* UnitTest$TestType::twoElementArrayTypesField = nullptr;
UnitTest$TestType* UnitTest$TestType::arrayTypesAcceptDefaultField = nullptr;
UnitTest$TestType* UnitTest$TestType::arrayTypesOverrideDefaultField = nullptr;
UnitTest$TestType* UnitTest$TestType::marker = nullptr;
UnitTest$TestType* UnitTest$TestType::SingleMemberByte = nullptr;
UnitTest$TestType* UnitTest$TestType::SingleMemberShort = nullptr;
UnitTest$TestType* UnitTest$TestType::SingleMemberInt = nullptr;
UnitTest$TestType* UnitTest$TestType::SingleMemberLong = nullptr;
UnitTest$TestType* UnitTest$TestType::SingleMemberChar = nullptr;
UnitTest$TestType* UnitTest$TestType::SingleMemberFloat = nullptr;
UnitTest$TestType* UnitTest$TestType::SingleMemberDouble = nullptr;
UnitTest$TestType* UnitTest$TestType::SingleMemberBoolean = nullptr;
UnitTest$TestType* UnitTest$TestType::SingleMemberString = nullptr;
UnitTest$TestType* UnitTest$TestType::SingleMemberClass = nullptr;
UnitTest$TestType* UnitTest$TestType::SingleMemberEnum = nullptr;
UnitTest$TestType* UnitTest$TestType::SingleMemberByteOvrdDef = nullptr;
UnitTest$TestType* UnitTest$TestType::SingleMemberShortOvrdDef = nullptr;
UnitTest$TestType* UnitTest$TestType::SingleMemberIntOvrdDef = nullptr;
UnitTest$TestType* UnitTest$TestType::SingleMemberLongOvrdDef = nullptr;
UnitTest$TestType* UnitTest$TestType::SingleMemberCharOvrdDef = nullptr;
UnitTest$TestType* UnitTest$TestType::SingleMemberFloatOvrdDef = nullptr;
UnitTest$TestType* UnitTest$TestType::SingleMemberDoubleOvrdDef = nullptr;
UnitTest$TestType* UnitTest$TestType::SingleMemberBooleanOvrdDef = nullptr;
UnitTest$TestType* UnitTest$TestType::SingleMemberStringOvrdDef = nullptr;
UnitTest$TestType* UnitTest$TestType::SingleMemberClassOvrdDef = nullptr;
UnitTest$TestType* UnitTest$TestType::SingleMemberEnumOvrdDef = nullptr;
UnitTest$TestType* UnitTest$TestType::SingleMemberByteAcceptDef = nullptr;
UnitTest$TestType* UnitTest$TestType::SingleMemberShortAcceptDef = nullptr;
UnitTest$TestType* UnitTest$TestType::SingleMemberIntAcceptDef = nullptr;
UnitTest$TestType* UnitTest$TestType::SingleMemberLongAcceptDef = nullptr;
UnitTest$TestType* UnitTest$TestType::SingleMemberCharAcceptDef = nullptr;
UnitTest$TestType* UnitTest$TestType::SingleMemberFloatAcceptDef = nullptr;
UnitTest$TestType* UnitTest$TestType::SingleMemberDoubleAcceptDef = nullptr;
UnitTest$TestType* UnitTest$TestType::SingleMemberBooleanAcceptDef = nullptr;
UnitTest$TestType* UnitTest$TestType::SingleMemberStringAcceptDef = nullptr;
UnitTest$TestType* UnitTest$TestType::SingleMemberClassAcceptDef = nullptr;
UnitTest$TestType* UnitTest$TestType::SingleMemberEnumAcceptDef = nullptr;
UnitTest$TestType* UnitTest$TestType::SingleMemberByteArrEmpty = nullptr;
UnitTest$TestType* UnitTest$TestType::SingleMemberShortArrEmpty = nullptr;
UnitTest$TestType* UnitTest$TestType::SingleMemberIntArrEmpty = nullptr;
UnitTest$TestType* UnitTest$TestType::SingleMemberLongArrEmpty = nullptr;
UnitTest$TestType* UnitTest$TestType::SingleMemberCharArrEmpty = nullptr;
UnitTest$TestType* UnitTest$TestType::SingleMemberFloatArrEmpty = nullptr;
UnitTest$TestType* UnitTest$TestType::SingleMemberDoubleArrEmpty = nullptr;
UnitTest$TestType* UnitTest$TestType::SingleMemberBooleanArrEmpty = nullptr;
UnitTest$TestType* UnitTest$TestType::SingleMemberStringArrEmpty = nullptr;
UnitTest$TestType* UnitTest$TestType::SingleMemberClassArrEmpty = nullptr;
UnitTest$TestType* UnitTest$TestType::SingleMemberEnumArrEmpty = nullptr;
UnitTest$TestType* UnitTest$TestType::SingleMemberByteArrOne = nullptr;
UnitTest$TestType* UnitTest$TestType::SingleMemberShortArrOne = nullptr;
UnitTest$TestType* UnitTest$TestType::SingleMemberIntArrOne = nullptr;
UnitTest$TestType* UnitTest$TestType::SingleMemberLongArrOne = nullptr;
UnitTest$TestType* UnitTest$TestType::SingleMemberCharArrOne = nullptr;
UnitTest$TestType* UnitTest$TestType::SingleMemberFloatArrOne = nullptr;
UnitTest$TestType* UnitTest$TestType::SingleMemberDoubleArrOne = nullptr;
UnitTest$TestType* UnitTest$TestType::SingleMemberBooleanArrOne = nullptr;
UnitTest$TestType* UnitTest$TestType::SingleMemberStringArrOne = nullptr;
UnitTest$TestType* UnitTest$TestType::SingleMemberClassArrOne = nullptr;
UnitTest$TestType* UnitTest$TestType::SingleMemberEnumArrOne = nullptr;
UnitTest$TestType* UnitTest$TestType::SingleMemberByteArrTwo = nullptr;
UnitTest$TestType* UnitTest$TestType::SingleMemberShortArrTwo = nullptr;
UnitTest$TestType* UnitTest$TestType::SingleMemberIntArrTwo = nullptr;
UnitTest$TestType* UnitTest$TestType::SingleMemberLongArrTwo = nullptr;
UnitTest$TestType* UnitTest$TestType::SingleMemberCharArrTwo = nullptr;
UnitTest$TestType* UnitTest$TestType::SingleMemberFloatArrTwo = nullptr;
UnitTest$TestType* UnitTest$TestType::SingleMemberDoubleArrTwo = nullptr;
UnitTest$TestType* UnitTest$TestType::SingleMemberBooleanArrTwo = nullptr;
UnitTest$TestType* UnitTest$TestType::SingleMemberStringArrTwo = nullptr;
UnitTest$TestType* UnitTest$TestType::SingleMemberClassArrTwo = nullptr;
UnitTest$TestType* UnitTest$TestType::SingleMemberEnumArrTwo = nullptr;
UnitTest$TestType* UnitTest$TestType::SingleMemberByteArrOvrdDef = nullptr;
UnitTest$TestType* UnitTest$TestType::SingleMemberShortArrOvrdDef = nullptr;
UnitTest$TestType* UnitTest$TestType::SingleMemberIntArrOvrdDef = nullptr;
UnitTest$TestType* UnitTest$TestType::SingleMemberLongArrOvrdDef = nullptr;
UnitTest$TestType* UnitTest$TestType::SingleMemberCharArrOvrdDef = nullptr;
UnitTest$TestType* UnitTest$TestType::SingleMemberFloatArrOvrdDef = nullptr;
UnitTest$TestType* UnitTest$TestType::SingleMemberDoubleArrOvrdDef = nullptr;
UnitTest$TestType* UnitTest$TestType::SingleMemberBooleanArrOvrdDef = nullptr;
UnitTest$TestType* UnitTest$TestType::SingleMemberStringArrOvrdDef = nullptr;
UnitTest$TestType* UnitTest$TestType::SingleMemberClassArrOvrdDef = nullptr;
UnitTest$TestType* UnitTest$TestType::SingleMemberEnumArrOvrdDef = nullptr;
UnitTest$TestType* UnitTest$TestType::SingleMemberByteArrAcceptDef = nullptr;
UnitTest$TestType* UnitTest$TestType::SingleMemberShortArrAcceptDef = nullptr;
UnitTest$TestType* UnitTest$TestType::SingleMemberIntArrAcceptDef = nullptr;
UnitTest$TestType* UnitTest$TestType::SingleMemberLongArrAcceptDef = nullptr;
UnitTest$TestType* UnitTest$TestType::SingleMemberCharArrAcceptDef = nullptr;
UnitTest$TestType* UnitTest$TestType::SingleMemberFloatArrAcceptDef = nullptr;
UnitTest$TestType* UnitTest$TestType::SingleMemberDoubleArrAcceptDef = nullptr;
UnitTest$TestType* UnitTest$TestType::SingleMemberBooleanArrAcceptDef = nullptr;
UnitTest$TestType* UnitTest$TestType::SingleMemberStringArrAcceptDef = nullptr;
UnitTest$TestType* UnitTest$TestType::SingleMemberClassArrAcceptDef = nullptr;
UnitTest$TestType* UnitTest$TestType::SingleMemberEnumArrAcceptDef = nullptr;
$UnitTest$TestTypeArray* UnitTest$TestType::$VALUES = nullptr;

$UnitTest$TestTypeArray* UnitTest$TestType::$values() {
	$init(UnitTest$TestType);
	return $new($UnitTest$TestTypeArray, {
		UnitTest$TestType::scalarTypesField,
		UnitTest$TestType::scalarTypesAcceptDefaultField,
		UnitTest$TestType::scalarTypesOverrideDefaultField,
		UnitTest$TestType::emptyArrayTypesField,
		UnitTest$TestType::singleElementArrayTypesField,
		UnitTest$TestType::twoElementArrayTypesField,
		UnitTest$TestType::arrayTypesAcceptDefaultField,
		UnitTest$TestType::arrayTypesOverrideDefaultField,
		UnitTest$TestType::marker,
		UnitTest$TestType::SingleMemberByte,
		UnitTest$TestType::SingleMemberShort,
		UnitTest$TestType::SingleMemberInt,
		UnitTest$TestType::SingleMemberLong,
		UnitTest$TestType::SingleMemberChar,
		UnitTest$TestType::SingleMemberFloat,
		UnitTest$TestType::SingleMemberDouble,
		UnitTest$TestType::SingleMemberBoolean,
		UnitTest$TestType::SingleMemberString,
		UnitTest$TestType::SingleMemberClass,
		UnitTest$TestType::SingleMemberEnum,
		UnitTest$TestType::SingleMemberByteOvrdDef,
		UnitTest$TestType::SingleMemberShortOvrdDef,
		UnitTest$TestType::SingleMemberIntOvrdDef,
		UnitTest$TestType::SingleMemberLongOvrdDef,
		UnitTest$TestType::SingleMemberCharOvrdDef,
		UnitTest$TestType::SingleMemberFloatOvrdDef,
		UnitTest$TestType::SingleMemberDoubleOvrdDef,
		UnitTest$TestType::SingleMemberBooleanOvrdDef,
		UnitTest$TestType::SingleMemberStringOvrdDef,
		UnitTest$TestType::SingleMemberClassOvrdDef,
		UnitTest$TestType::SingleMemberEnumOvrdDef,
		UnitTest$TestType::SingleMemberByteAcceptDef,
		UnitTest$TestType::SingleMemberShortAcceptDef,
		UnitTest$TestType::SingleMemberIntAcceptDef,
		UnitTest$TestType::SingleMemberLongAcceptDef,
		UnitTest$TestType::SingleMemberCharAcceptDef,
		UnitTest$TestType::SingleMemberFloatAcceptDef,
		UnitTest$TestType::SingleMemberDoubleAcceptDef,
		UnitTest$TestType::SingleMemberBooleanAcceptDef,
		UnitTest$TestType::SingleMemberStringAcceptDef,
		UnitTest$TestType::SingleMemberClassAcceptDef,
		UnitTest$TestType::SingleMemberEnumAcceptDef,
		UnitTest$TestType::SingleMemberByteArrEmpty,
		UnitTest$TestType::SingleMemberShortArrEmpty,
		UnitTest$TestType::SingleMemberIntArrEmpty,
		UnitTest$TestType::SingleMemberLongArrEmpty,
		UnitTest$TestType::SingleMemberCharArrEmpty,
		UnitTest$TestType::SingleMemberFloatArrEmpty,
		UnitTest$TestType::SingleMemberDoubleArrEmpty,
		UnitTest$TestType::SingleMemberBooleanArrEmpty,
		UnitTest$TestType::SingleMemberStringArrEmpty,
		UnitTest$TestType::SingleMemberClassArrEmpty,
		UnitTest$TestType::SingleMemberEnumArrEmpty,
		UnitTest$TestType::SingleMemberByteArrOne,
		UnitTest$TestType::SingleMemberShortArrOne,
		UnitTest$TestType::SingleMemberIntArrOne,
		UnitTest$TestType::SingleMemberLongArrOne,
		UnitTest$TestType::SingleMemberCharArrOne,
		UnitTest$TestType::SingleMemberFloatArrOne,
		UnitTest$TestType::SingleMemberDoubleArrOne,
		UnitTest$TestType::SingleMemberBooleanArrOne,
		UnitTest$TestType::SingleMemberStringArrOne,
		UnitTest$TestType::SingleMemberClassArrOne,
		UnitTest$TestType::SingleMemberEnumArrOne,
		UnitTest$TestType::SingleMemberByteArrTwo,
		UnitTest$TestType::SingleMemberShortArrTwo,
		UnitTest$TestType::SingleMemberIntArrTwo,
		UnitTest$TestType::SingleMemberLongArrTwo,
		UnitTest$TestType::SingleMemberCharArrTwo,
		UnitTest$TestType::SingleMemberFloatArrTwo,
		UnitTest$TestType::SingleMemberDoubleArrTwo,
		UnitTest$TestType::SingleMemberBooleanArrTwo,
		UnitTest$TestType::SingleMemberStringArrTwo,
		UnitTest$TestType::SingleMemberClassArrTwo,
		UnitTest$TestType::SingleMemberEnumArrTwo,
		UnitTest$TestType::SingleMemberByteArrOvrdDef,
		UnitTest$TestType::SingleMemberShortArrOvrdDef,
		UnitTest$TestType::SingleMemberIntArrOvrdDef,
		UnitTest$TestType::SingleMemberLongArrOvrdDef,
		UnitTest$TestType::SingleMemberCharArrOvrdDef,
		UnitTest$TestType::SingleMemberFloatArrOvrdDef,
		UnitTest$TestType::SingleMemberDoubleArrOvrdDef,
		UnitTest$TestType::SingleMemberBooleanArrOvrdDef,
		UnitTest$TestType::SingleMemberStringArrOvrdDef,
		UnitTest$TestType::SingleMemberClassArrOvrdDef,
		UnitTest$TestType::SingleMemberEnumArrOvrdDef,
		UnitTest$TestType::SingleMemberByteArrAcceptDef,
		UnitTest$TestType::SingleMemberShortArrAcceptDef,
		UnitTest$TestType::SingleMemberIntArrAcceptDef,
		UnitTest$TestType::SingleMemberLongArrAcceptDef,
		UnitTest$TestType::SingleMemberCharArrAcceptDef,
		UnitTest$TestType::SingleMemberFloatArrAcceptDef,
		UnitTest$TestType::SingleMemberDoubleArrAcceptDef,
		UnitTest$TestType::SingleMemberBooleanArrAcceptDef,
		UnitTest$TestType::SingleMemberStringArrAcceptDef,
		UnitTest$TestType::SingleMemberClassArrAcceptDef,
		UnitTest$TestType::SingleMemberEnumArrAcceptDef
	});
}

$UnitTest$TestTypeArray* UnitTest$TestType::values() {
	$init(UnitTest$TestType);
	return $cast($UnitTest$TestTypeArray, UnitTest$TestType::$VALUES->clone());
}

UnitTest$TestType* UnitTest$TestType::valueOf($String* name) {
	$init(UnitTest$TestType);
	return $cast(UnitTest$TestType, $Enum::valueOf(UnitTest$TestType::class$, name));
}

void UnitTest$TestType::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void UnitTest$TestType::clinit$($Class* clazz) {
	$assignStatic(UnitTest$TestType::scalarTypesField, $new(UnitTest$TestType, "scalarTypesField"_s, 0));
	$assignStatic(UnitTest$TestType::scalarTypesAcceptDefaultField, $new(UnitTest$TestType, "scalarTypesAcceptDefaultField"_s, 1));
	$assignStatic(UnitTest$TestType::scalarTypesOverrideDefaultField, $new(UnitTest$TestType, "scalarTypesOverrideDefaultField"_s, 2));
	$assignStatic(UnitTest$TestType::emptyArrayTypesField, $new(UnitTest$TestType, "emptyArrayTypesField"_s, 3));
	$assignStatic(UnitTest$TestType::singleElementArrayTypesField, $new(UnitTest$TestType, "singleElementArrayTypesField"_s, 4));
	$assignStatic(UnitTest$TestType::twoElementArrayTypesField, $new(UnitTest$TestType, "twoElementArrayTypesField"_s, 5));
	$assignStatic(UnitTest$TestType::arrayTypesAcceptDefaultField, $new(UnitTest$TestType, "arrayTypesAcceptDefaultField"_s, 6));
	$assignStatic(UnitTest$TestType::arrayTypesOverrideDefaultField, $new(UnitTest$TestType, "arrayTypesOverrideDefaultField"_s, 7));
	$assignStatic(UnitTest$TestType::marker, $new(UnitTest$TestType, "marker"_s, 8));
	$assignStatic(UnitTest$TestType::SingleMemberByte, $new(UnitTest$TestType, "SingleMemberByte"_s, 9));
	$assignStatic(UnitTest$TestType::SingleMemberShort, $new(UnitTest$TestType, "SingleMemberShort"_s, 10));
	$assignStatic(UnitTest$TestType::SingleMemberInt, $new(UnitTest$TestType, "SingleMemberInt"_s, 11));
	$assignStatic(UnitTest$TestType::SingleMemberLong, $new(UnitTest$TestType, "SingleMemberLong"_s, 12));
	$assignStatic(UnitTest$TestType::SingleMemberChar, $new(UnitTest$TestType, "SingleMemberChar"_s, 13));
	$assignStatic(UnitTest$TestType::SingleMemberFloat, $new(UnitTest$TestType, "SingleMemberFloat"_s, 14));
	$assignStatic(UnitTest$TestType::SingleMemberDouble, $new(UnitTest$TestType, "SingleMemberDouble"_s, 15));
	$assignStatic(UnitTest$TestType::SingleMemberBoolean, $new(UnitTest$TestType, "SingleMemberBoolean"_s, 16));
	$assignStatic(UnitTest$TestType::SingleMemberString, $new(UnitTest$TestType, "SingleMemberString"_s, 17));
	$assignStatic(UnitTest$TestType::SingleMemberClass, $new(UnitTest$TestType, "SingleMemberClass"_s, 18));
	$assignStatic(UnitTest$TestType::SingleMemberEnum, $new(UnitTest$TestType, "SingleMemberEnum"_s, 19));
	$assignStatic(UnitTest$TestType::SingleMemberByteOvrdDef, $new(UnitTest$TestType, "SingleMemberByteOvrdDef"_s, 20));
	$assignStatic(UnitTest$TestType::SingleMemberShortOvrdDef, $new(UnitTest$TestType, "SingleMemberShortOvrdDef"_s, 21));
	$assignStatic(UnitTest$TestType::SingleMemberIntOvrdDef, $new(UnitTest$TestType, "SingleMemberIntOvrdDef"_s, 22));
	$assignStatic(UnitTest$TestType::SingleMemberLongOvrdDef, $new(UnitTest$TestType, "SingleMemberLongOvrdDef"_s, 23));
	$assignStatic(UnitTest$TestType::SingleMemberCharOvrdDef, $new(UnitTest$TestType, "SingleMemberCharOvrdDef"_s, 24));
	$assignStatic(UnitTest$TestType::SingleMemberFloatOvrdDef, $new(UnitTest$TestType, "SingleMemberFloatOvrdDef"_s, 25));
	$assignStatic(UnitTest$TestType::SingleMemberDoubleOvrdDef, $new(UnitTest$TestType, "SingleMemberDoubleOvrdDef"_s, 26));
	$assignStatic(UnitTest$TestType::SingleMemberBooleanOvrdDef, $new(UnitTest$TestType, "SingleMemberBooleanOvrdDef"_s, 27));
	$assignStatic(UnitTest$TestType::SingleMemberStringOvrdDef, $new(UnitTest$TestType, "SingleMemberStringOvrdDef"_s, 28));
	$assignStatic(UnitTest$TestType::SingleMemberClassOvrdDef, $new(UnitTest$TestType, "SingleMemberClassOvrdDef"_s, 29));
	$assignStatic(UnitTest$TestType::SingleMemberEnumOvrdDef, $new(UnitTest$TestType, "SingleMemberEnumOvrdDef"_s, 30));
	$assignStatic(UnitTest$TestType::SingleMemberByteAcceptDef, $new(UnitTest$TestType, "SingleMemberByteAcceptDef"_s, 31));
	$assignStatic(UnitTest$TestType::SingleMemberShortAcceptDef, $new(UnitTest$TestType, "SingleMemberShortAcceptDef"_s, 32));
	$assignStatic(UnitTest$TestType::SingleMemberIntAcceptDef, $new(UnitTest$TestType, "SingleMemberIntAcceptDef"_s, 33));
	$assignStatic(UnitTest$TestType::SingleMemberLongAcceptDef, $new(UnitTest$TestType, "SingleMemberLongAcceptDef"_s, 34));
	$assignStatic(UnitTest$TestType::SingleMemberCharAcceptDef, $new(UnitTest$TestType, "SingleMemberCharAcceptDef"_s, 35));
	$assignStatic(UnitTest$TestType::SingleMemberFloatAcceptDef, $new(UnitTest$TestType, "SingleMemberFloatAcceptDef"_s, 36));
	$assignStatic(UnitTest$TestType::SingleMemberDoubleAcceptDef, $new(UnitTest$TestType, "SingleMemberDoubleAcceptDef"_s, 37));
	$assignStatic(UnitTest$TestType::SingleMemberBooleanAcceptDef, $new(UnitTest$TestType, "SingleMemberBooleanAcceptDef"_s, 38));
	$assignStatic(UnitTest$TestType::SingleMemberStringAcceptDef, $new(UnitTest$TestType, "SingleMemberStringAcceptDef"_s, 39));
	$assignStatic(UnitTest$TestType::SingleMemberClassAcceptDef, $new(UnitTest$TestType, "SingleMemberClassAcceptDef"_s, 40));
	$assignStatic(UnitTest$TestType::SingleMemberEnumAcceptDef, $new(UnitTest$TestType, "SingleMemberEnumAcceptDef"_s, 41));
	$assignStatic(UnitTest$TestType::SingleMemberByteArrEmpty, $new(UnitTest$TestType, "SingleMemberByteArrEmpty"_s, 42));
	$assignStatic(UnitTest$TestType::SingleMemberShortArrEmpty, $new(UnitTest$TestType, "SingleMemberShortArrEmpty"_s, 43));
	$assignStatic(UnitTest$TestType::SingleMemberIntArrEmpty, $new(UnitTest$TestType, "SingleMemberIntArrEmpty"_s, 44));
	$assignStatic(UnitTest$TestType::SingleMemberLongArrEmpty, $new(UnitTest$TestType, "SingleMemberLongArrEmpty"_s, 45));
	$assignStatic(UnitTest$TestType::SingleMemberCharArrEmpty, $new(UnitTest$TestType, "SingleMemberCharArrEmpty"_s, 46));
	$assignStatic(UnitTest$TestType::SingleMemberFloatArrEmpty, $new(UnitTest$TestType, "SingleMemberFloatArrEmpty"_s, 47));
	$assignStatic(UnitTest$TestType::SingleMemberDoubleArrEmpty, $new(UnitTest$TestType, "SingleMemberDoubleArrEmpty"_s, 48));
	$assignStatic(UnitTest$TestType::SingleMemberBooleanArrEmpty, $new(UnitTest$TestType, "SingleMemberBooleanArrEmpty"_s, 49));
	$assignStatic(UnitTest$TestType::SingleMemberStringArrEmpty, $new(UnitTest$TestType, "SingleMemberStringArrEmpty"_s, 50));
	$assignStatic(UnitTest$TestType::SingleMemberClassArrEmpty, $new(UnitTest$TestType, "SingleMemberClassArrEmpty"_s, 51));
	$assignStatic(UnitTest$TestType::SingleMemberEnumArrEmpty, $new(UnitTest$TestType, "SingleMemberEnumArrEmpty"_s, 52));
	$assignStatic(UnitTest$TestType::SingleMemberByteArrOne, $new(UnitTest$TestType, "SingleMemberByteArrOne"_s, 53));
	$assignStatic(UnitTest$TestType::SingleMemberShortArrOne, $new(UnitTest$TestType, "SingleMemberShortArrOne"_s, 54));
	$assignStatic(UnitTest$TestType::SingleMemberIntArrOne, $new(UnitTest$TestType, "SingleMemberIntArrOne"_s, 55));
	$assignStatic(UnitTest$TestType::SingleMemberLongArrOne, $new(UnitTest$TestType, "SingleMemberLongArrOne"_s, 56));
	$assignStatic(UnitTest$TestType::SingleMemberCharArrOne, $new(UnitTest$TestType, "SingleMemberCharArrOne"_s, 57));
	$assignStatic(UnitTest$TestType::SingleMemberFloatArrOne, $new(UnitTest$TestType, "SingleMemberFloatArrOne"_s, 58));
	$assignStatic(UnitTest$TestType::SingleMemberDoubleArrOne, $new(UnitTest$TestType, "SingleMemberDoubleArrOne"_s, 59));
	$assignStatic(UnitTest$TestType::SingleMemberBooleanArrOne, $new(UnitTest$TestType, "SingleMemberBooleanArrOne"_s, 60));
	$assignStatic(UnitTest$TestType::SingleMemberStringArrOne, $new(UnitTest$TestType, "SingleMemberStringArrOne"_s, 61));
	$assignStatic(UnitTest$TestType::SingleMemberClassArrOne, $new(UnitTest$TestType, "SingleMemberClassArrOne"_s, 62));
	$assignStatic(UnitTest$TestType::SingleMemberEnumArrOne, $new(UnitTest$TestType, "SingleMemberEnumArrOne"_s, 63));
	$assignStatic(UnitTest$TestType::SingleMemberByteArrTwo, $new(UnitTest$TestType, "SingleMemberByteArrTwo"_s, 64));
	$assignStatic(UnitTest$TestType::SingleMemberShortArrTwo, $new(UnitTest$TestType, "SingleMemberShortArrTwo"_s, 65));
	$assignStatic(UnitTest$TestType::SingleMemberIntArrTwo, $new(UnitTest$TestType, "SingleMemberIntArrTwo"_s, 66));
	$assignStatic(UnitTest$TestType::SingleMemberLongArrTwo, $new(UnitTest$TestType, "SingleMemberLongArrTwo"_s, 67));
	$assignStatic(UnitTest$TestType::SingleMemberCharArrTwo, $new(UnitTest$TestType, "SingleMemberCharArrTwo"_s, 68));
	$assignStatic(UnitTest$TestType::SingleMemberFloatArrTwo, $new(UnitTest$TestType, "SingleMemberFloatArrTwo"_s, 69));
	$assignStatic(UnitTest$TestType::SingleMemberDoubleArrTwo, $new(UnitTest$TestType, "SingleMemberDoubleArrTwo"_s, 70));
	$assignStatic(UnitTest$TestType::SingleMemberBooleanArrTwo, $new(UnitTest$TestType, "SingleMemberBooleanArrTwo"_s, 71));
	$assignStatic(UnitTest$TestType::SingleMemberStringArrTwo, $new(UnitTest$TestType, "SingleMemberStringArrTwo"_s, 72));
	$assignStatic(UnitTest$TestType::SingleMemberClassArrTwo, $new(UnitTest$TestType, "SingleMemberClassArrTwo"_s, 73));
	$assignStatic(UnitTest$TestType::SingleMemberEnumArrTwo, $new(UnitTest$TestType, "SingleMemberEnumArrTwo"_s, 74));
	$assignStatic(UnitTest$TestType::SingleMemberByteArrOvrdDef, $new(UnitTest$TestType, "SingleMemberByteArrOvrdDef"_s, 75));
	$assignStatic(UnitTest$TestType::SingleMemberShortArrOvrdDef, $new(UnitTest$TestType, "SingleMemberShortArrOvrdDef"_s, 76));
	$assignStatic(UnitTest$TestType::SingleMemberIntArrOvrdDef, $new(UnitTest$TestType, "SingleMemberIntArrOvrdDef"_s, 77));
	$assignStatic(UnitTest$TestType::SingleMemberLongArrOvrdDef, $new(UnitTest$TestType, "SingleMemberLongArrOvrdDef"_s, 78));
	$assignStatic(UnitTest$TestType::SingleMemberCharArrOvrdDef, $new(UnitTest$TestType, "SingleMemberCharArrOvrdDef"_s, 79));
	$assignStatic(UnitTest$TestType::SingleMemberFloatArrOvrdDef, $new(UnitTest$TestType, "SingleMemberFloatArrOvrdDef"_s, 80));
	$assignStatic(UnitTest$TestType::SingleMemberDoubleArrOvrdDef, $new(UnitTest$TestType, "SingleMemberDoubleArrOvrdDef"_s, 81));
	$assignStatic(UnitTest$TestType::SingleMemberBooleanArrOvrdDef, $new(UnitTest$TestType, "SingleMemberBooleanArrOvrdDef"_s, 82));
	$assignStatic(UnitTest$TestType::SingleMemberStringArrOvrdDef, $new(UnitTest$TestType, "SingleMemberStringArrOvrdDef"_s, 83));
	$assignStatic(UnitTest$TestType::SingleMemberClassArrOvrdDef, $new(UnitTest$TestType, "SingleMemberClassArrOvrdDef"_s, 84));
	$assignStatic(UnitTest$TestType::SingleMemberEnumArrOvrdDef, $new(UnitTest$TestType, "SingleMemberEnumArrOvrdDef"_s, 85));
	$assignStatic(UnitTest$TestType::SingleMemberByteArrAcceptDef, $new(UnitTest$TestType, "SingleMemberByteArrAcceptDef"_s, 86));
	$assignStatic(UnitTest$TestType::SingleMemberShortArrAcceptDef, $new(UnitTest$TestType, "SingleMemberShortArrAcceptDef"_s, 87));
	$assignStatic(UnitTest$TestType::SingleMemberIntArrAcceptDef, $new(UnitTest$TestType, "SingleMemberIntArrAcceptDef"_s, 88));
	$assignStatic(UnitTest$TestType::SingleMemberLongArrAcceptDef, $new(UnitTest$TestType, "SingleMemberLongArrAcceptDef"_s, 89));
	$assignStatic(UnitTest$TestType::SingleMemberCharArrAcceptDef, $new(UnitTest$TestType, "SingleMemberCharArrAcceptDef"_s, 90));
	$assignStatic(UnitTest$TestType::SingleMemberFloatArrAcceptDef, $new(UnitTest$TestType, "SingleMemberFloatArrAcceptDef"_s, 91));
	$assignStatic(UnitTest$TestType::SingleMemberDoubleArrAcceptDef, $new(UnitTest$TestType, "SingleMemberDoubleArrAcceptDef"_s, 92));
	$assignStatic(UnitTest$TestType::SingleMemberBooleanArrAcceptDef, $new(UnitTest$TestType, "SingleMemberBooleanArrAcceptDef"_s, 93));
	$assignStatic(UnitTest$TestType::SingleMemberStringArrAcceptDef, $new(UnitTest$TestType, "SingleMemberStringArrAcceptDef"_s, 94));
	$assignStatic(UnitTest$TestType::SingleMemberClassArrAcceptDef, $new(UnitTest$TestType, "SingleMemberClassArrAcceptDef"_s, 95));
	$assignStatic(UnitTest$TestType::SingleMemberEnumArrAcceptDef, $new(UnitTest$TestType, "SingleMemberEnumArrAcceptDef"_s, 96));
	$assignStatic(UnitTest$TestType::$VALUES, UnitTest$TestType::$values());
}

UnitTest$TestType::UnitTest$TestType() {
}

$Class* UnitTest$TestType::load$($String* name, bool initialize) {
	$NamedAttribute scalarTypesFieldfieldAnnotations$$$namedAttribute$compoundAttribute$namedAttribute[] = {
		{"x", 'I', "1"},
		{"y", 'I', "2"},
		{}
	};
$CompoundAttribute scalarTypesFieldfieldAnnotations$$$namedAttribute$compoundAttribute = {
	"LUniTest/Point;", scalarTypesFieldfieldAnnotations$$$namedAttribute$compoundAttribute$namedAttribute
};
	$NamedAttribute scalarTypesFieldfieldAnnotations$$$namedAttribute[] = {
		{"b", 'B', "1"},
		{"s", 'S', "2"},
		{"i", 'I', "3"},
		{"l", 'J', "4"},
		{"c", 'C', "5"},
		{"f", 'F', "6.0"},
		{"d", 'D', "7.0"},
		{"bool", 'Z', "true"},
		{"str", 's', "custom"},
		{"cls", 'c', "Ljava/util/Map;"},
		{"e", 'e', "LUniTest/Stooge; MOE"},
		{"a", '@', &scalarTypesFieldfieldAnnotations$$$namedAttribute$compoundAttribute},
		{}
	};
	$CompoundAttribute scalarTypesFieldfieldAnnotations$$[] = {
		{"LUniTest/ScalarTypes;", scalarTypesFieldfieldAnnotations$$$namedAttribute},
		{}
	};
	$CompoundAttribute scalarTypesAcceptDefaultFieldfieldAnnotations$$[] = {
		{"LUniTest/ScalarTypesWithDefault;", nullptr},
		{}
	};
	$NamedAttribute scalarTypesOverrideDefaultFieldfieldAnnotations$$$namedAttribute[] = {
		{"b", 'B', "1"},
		{"s", 'S', "2"},
		{"i", 'I', "3"},
		{"l", 'J', "4"},
		{"c", 'C', "5"},
		{"f", 'F', "6.0"},
		{"d", 'D', "7.0"},
		{"bool", 'Z', "true"},
		{"str", 's', "custom"},
		{"cls", 'c', "Ljava/util/Map;"},
		{"e", 'e', "LUniTest/Stooge; MOE"},
		{}
	};
	$CompoundAttribute scalarTypesOverrideDefaultFieldfieldAnnotations$$[] = {
		{"LUniTest/ScalarTypesWithDefault;", scalarTypesOverrideDefaultFieldfieldAnnotations$$$namedAttribute},
		{}
	};
	$Attribute $attribute[] = {
		{'-'}
	};
	$Attribute $attribute$1[] = {
		{'-'}
	};
	$Attribute $attribute$2[] = {
		{'-'}
	};
	$Attribute $attribute$3[] = {
		{'-'}
	};
	$Attribute $attribute$4[] = {
		{'-'}
	};
	$Attribute $attribute$5[] = {
		{'-'}
	};
	$Attribute $attribute$6[] = {
		{'-'}
	};
	$Attribute $attribute$7[] = {
		{'-'}
	};
	$Attribute $attribute$8[] = {
		{'-'}
	};
	$Attribute $attribute$9[] = {
		{'-'}
	};
	$Attribute $attribute$10[] = {
		{'-'}
	};
	$Attribute $attribute$11[] = {
		{'-'}
	};
	$NamedAttribute emptyArrayTypesFieldfieldAnnotations$$$namedAttribute[] = {
		{"b", '[', $attribute},
		{"s", '[', $attribute$1},
		{"i", '[', $attribute$2},
		{"l", '[', $attribute$3},
		{"c", '[', $attribute$4},
		{"f", '[', $attribute$5},
		{"d", '[', $attribute$6},
		{"bool", '[', $attribute$7},
		{"str", '[', $attribute$8},
		{"cls", '[', $attribute$9},
		{"e", '[', $attribute$10},
		{"a", '[', $attribute$11},
		{}
	};
	$CompoundAttribute emptyArrayTypesFieldfieldAnnotations$$[] = {
		{"LUniTest/ArrayTypes;", emptyArrayTypesFieldfieldAnnotations$$$namedAttribute},
		{}
	};
	$Attribute $attribute$12[] = {
		{'B', "1"},
		{'-'}
	};
	$Attribute $attribute$13[] = {
		{'S', "2"},
		{'-'}
	};
	$Attribute $attribute$14[] = {
		{'I', "3"},
		{'-'}
	};
	$Attribute $attribute$15[] = {
		{'J', "4"},
		{'-'}
	};
	$Attribute $attribute$16[] = {
		{'C', "5"},
		{'-'}
	};
	$Attribute $attribute$17[] = {
		{'F', "6.0"},
		{'-'}
	};
	$Attribute $attribute$18[] = {
		{'D', "7.0"},
		{'-'}
	};
	$Attribute $attribute$19[] = {
		{'Z', "true"},
		{'-'}
	};
	$Attribute $attribute$20[] = {
		{'s', "custom"},
		{'-'}
	};
	$Attribute $attribute$21[] = {
		{'c', "Ljava/util/Map;"},
		{'-'}
	};
	$Attribute $attribute$22[] = {
		{'e', "LUniTest/Stooge; MOE"},
		{'-'}
	};
	$NamedAttribute singleElementArrayTypesFieldfieldAnnotations$$$namedAttribute$compoundAttribute$namedAttribute[] = {
		{"x", 'I', "1"},
		{"y", 'I', "2"},
		{}
	};
$CompoundAttribute singleElementArrayTypesFieldfieldAnnotations$$$namedAttribute$compoundAttribute = {
	"LUniTest/Point;", singleElementArrayTypesFieldfieldAnnotations$$$namedAttribute$compoundAttribute$namedAttribute
};
	$Attribute $attribute$23[] = {
		{'@', &singleElementArrayTypesFieldfieldAnnotations$$$namedAttribute$compoundAttribute},
		{'-'}
	};
	$NamedAttribute singleElementArrayTypesFieldfieldAnnotations$$$namedAttribute[] = {
		{"b", '[', $attribute$12},
		{"s", '[', $attribute$13},
		{"i", '[', $attribute$14},
		{"l", '[', $attribute$15},
		{"c", '[', $attribute$16},
		{"f", '[', $attribute$17},
		{"d", '[', $attribute$18},
		{"bool", '[', $attribute$19},
		{"str", '[', $attribute$20},
		{"cls", '[', $attribute$21},
		{"e", '[', $attribute$22},
		{"a", '[', $attribute$23},
		{}
	};
	$CompoundAttribute singleElementArrayTypesFieldfieldAnnotations$$[] = {
		{"LUniTest/ArrayTypes;", singleElementArrayTypesFieldfieldAnnotations$$$namedAttribute},
		{}
	};
	$Attribute $attribute$24[] = {
		{'B', "1"},
		{'B', "2"},
		{'-'}
	};
	$Attribute $attribute$25[] = {
		{'S', "2"},
		{'S', "3"},
		{'-'}
	};
	$Attribute $attribute$26[] = {
		{'I', "3"},
		{'I', "4"},
		{'-'}
	};
	$Attribute $attribute$27[] = {
		{'J', "4"},
		{'J', "5"},
		{'-'}
	};
	$Attribute $attribute$28[] = {
		{'C', "5"},
		{'C', "6"},
		{'-'}
	};
	$Attribute $attribute$29[] = {
		{'F', "6.0"},
		{'F', "7.0"},
		{'-'}
	};
	$Attribute $attribute$30[] = {
		{'D', "7.0"},
		{'D', "8.0"},
		{'-'}
	};
	$Attribute $attribute$31[] = {
		{'Z', "true"},
		{'Z', "false"},
		{'-'}
	};
	$Attribute $attribute$32[] = {
		{'s', "custom"},
		{'s', "paint"},
		{'-'}
	};
	$Attribute $attribute$33[] = {
		{'c', "Ljava/util/Map;"},
		{'c', "Ljava/util/Set;"},
		{'-'}
	};
	$Attribute $attribute$34[] = {
		{'e', "LUniTest/Stooge; MOE"},
		{'e', "LUniTest/Stooge; CURLY"},
		{'-'}
	};
	$NamedAttribute twoElementArrayTypesFieldfieldAnnotations$$$namedAttribute$compoundAttribute$namedAttribute[] = {
		{"x", 'I', "1"},
		{"y", 'I', "2"},
		{}
	};
$CompoundAttribute twoElementArrayTypesFieldfieldAnnotations$$$namedAttribute$compoundAttribute = {
	"LUniTest/Point;", twoElementArrayTypesFieldfieldAnnotations$$$namedAttribute$compoundAttribute$namedAttribute
};
	$NamedAttribute twoElementArrayTypesFieldfieldAnnotations$$$namedAttribute$compoundAttribute$namedAttribute$compoundAttribute$namedAttribute[] = {
		{"x", 'I', "3"},
		{"y", 'I', "4"},
		{}
	};
$CompoundAttribute twoElementArrayTypesFieldfieldAnnotations$$$namedAttribute$compoundAttribute$namedAttribute$compoundAttribute = {
	"LUniTest/Point;", twoElementArrayTypesFieldfieldAnnotations$$$namedAttribute$compoundAttribute$namedAttribute$compoundAttribute$namedAttribute
};
	$Attribute $attribute$35[] = {
		{'@', &twoElementArrayTypesFieldfieldAnnotations$$$namedAttribute$compoundAttribute},
		{'@', &twoElementArrayTypesFieldfieldAnnotations$$$namedAttribute$compoundAttribute$namedAttribute$compoundAttribute},
		{'-'}
	};
	$NamedAttribute twoElementArrayTypesFieldfieldAnnotations$$$namedAttribute[] = {
		{"b", '[', $attribute$24},
		{"s", '[', $attribute$25},
		{"i", '[', $attribute$26},
		{"l", '[', $attribute$27},
		{"c", '[', $attribute$28},
		{"f", '[', $attribute$29},
		{"d", '[', $attribute$30},
		{"bool", '[', $attribute$31},
		{"str", '[', $attribute$32},
		{"cls", '[', $attribute$33},
		{"e", '[', $attribute$34},
		{"a", '[', $attribute$35},
		{}
	};
	$CompoundAttribute twoElementArrayTypesFieldfieldAnnotations$$[] = {
		{"LUniTest/ArrayTypes;", twoElementArrayTypesFieldfieldAnnotations$$$namedAttribute},
		{}
	};
	$CompoundAttribute arrayTypesAcceptDefaultFieldfieldAnnotations$$[] = {
		{"LUniTest/ArrayTypesWithDefault;", nullptr},
		{}
	};
	$Attribute $attribute$36[] = {
		{'B', "1"},
		{'-'}
	};
	$Attribute $attribute$37[] = {
		{'S', "2"},
		{'-'}
	};
	$Attribute $attribute$38[] = {
		{'I', "3"},
		{'-'}
	};
	$Attribute $attribute$39[] = {
		{'J', "4"},
		{'-'}
	};
	$Attribute $attribute$40[] = {
		{'C', "5"},
		{'-'}
	};
	$Attribute $attribute$41[] = {
		{'F', "6.0"},
		{'-'}
	};
	$Attribute $attribute$42[] = {
		{'D', "7.0"},
		{'-'}
	};
	$Attribute $attribute$43[] = {
		{'Z', "true"},
		{'-'}
	};
	$Attribute $attribute$44[] = {
		{'s', "custom"},
		{'-'}
	};
	$Attribute $attribute$45[] = {
		{'c', "Ljava/util/Map;"},
		{'-'}
	};
	$Attribute $attribute$46[] = {
		{'e', "LUniTest/Stooge; MOE"},
		{'-'}
	};
	$NamedAttribute arrayTypesOverrideDefaultFieldfieldAnnotations$$$namedAttribute$compoundAttribute$namedAttribute[] = {
		{"x", 'I', "1"},
		{"y", 'I', "2"},
		{}
	};
$CompoundAttribute arrayTypesOverrideDefaultFieldfieldAnnotations$$$namedAttribute$compoundAttribute = {
	"LUniTest/Point;", arrayTypesOverrideDefaultFieldfieldAnnotations$$$namedAttribute$compoundAttribute$namedAttribute
};
	$Attribute $attribute$47[] = {
		{'@', &arrayTypesOverrideDefaultFieldfieldAnnotations$$$namedAttribute$compoundAttribute},
		{'-'}
	};
	$NamedAttribute arrayTypesOverrideDefaultFieldfieldAnnotations$$$namedAttribute[] = {
		{"b", '[', $attribute$36},
		{"s", '[', $attribute$37},
		{"i", '[', $attribute$38},
		{"l", '[', $attribute$39},
		{"c", '[', $attribute$40},
		{"f", '[', $attribute$41},
		{"d", '[', $attribute$42},
		{"bool", '[', $attribute$43},
		{"str", '[', $attribute$44},
		{"cls", '[', $attribute$45},
		{"e", '[', $attribute$46},
		{"a", '[', $attribute$47},
		{}
	};
	$CompoundAttribute arrayTypesOverrideDefaultFieldfieldAnnotations$$[] = {
		{"LUniTest/ArrayTypesWithDefault;", arrayTypesOverrideDefaultFieldfieldAnnotations$$$namedAttribute},
		{}
	};
	$CompoundAttribute markerfieldAnnotations$$[] = {
		{"LUniTest/Marker;", nullptr},
		{}
	};
	$NamedAttribute SingleMemberBytefieldAnnotations$$$namedAttribute[] = {
		{"value", 'B', "1"},
		{}
	};
	$CompoundAttribute SingleMemberBytefieldAnnotations$$[] = {
		{"LUniTest/SingleMemberByte;", SingleMemberBytefieldAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute SingleMemberShortfieldAnnotations$$$namedAttribute[] = {
		{"value", 'S', "2"},
		{}
	};
	$CompoundAttribute SingleMemberShortfieldAnnotations$$[] = {
		{"LUniTest/SingleMemberShort;", SingleMemberShortfieldAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute SingleMemberIntfieldAnnotations$$$namedAttribute[] = {
		{"value", 'I', "3"},
		{}
	};
	$CompoundAttribute SingleMemberIntfieldAnnotations$$[] = {
		{"LUniTest/SingleMemberInt;", SingleMemberIntfieldAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute SingleMemberLongfieldAnnotations$$$namedAttribute[] = {
		{"value", 'J', "4"},
		{}
	};
	$CompoundAttribute SingleMemberLongfieldAnnotations$$[] = {
		{"LUniTest/SingleMemberLong;", SingleMemberLongfieldAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute SingleMemberCharfieldAnnotations$$$namedAttribute[] = {
		{"value", 'C', "5"},
		{}
	};
	$CompoundAttribute SingleMemberCharfieldAnnotations$$[] = {
		{"LUniTest/SingleMemberChar;", SingleMemberCharfieldAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute SingleMemberFloatfieldAnnotations$$$namedAttribute[] = {
		{"value", 'F', "6.0"},
		{}
	};
	$CompoundAttribute SingleMemberFloatfieldAnnotations$$[] = {
		{"LUniTest/SingleMemberFloat;", SingleMemberFloatfieldAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute SingleMemberDoublefieldAnnotations$$$namedAttribute[] = {
		{"value", 'D', "7.0"},
		{}
	};
	$CompoundAttribute SingleMemberDoublefieldAnnotations$$[] = {
		{"LUniTest/SingleMemberDouble;", SingleMemberDoublefieldAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute SingleMemberBooleanfieldAnnotations$$$namedAttribute[] = {
		{"value", 'Z', "true"},
		{}
	};
	$CompoundAttribute SingleMemberBooleanfieldAnnotations$$[] = {
		{"LUniTest/SingleMemberBoolean;", SingleMemberBooleanfieldAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute SingleMemberStringfieldAnnotations$$$namedAttribute[] = {
		{"value", 's', "custom"},
		{}
	};
	$CompoundAttribute SingleMemberStringfieldAnnotations$$[] = {
		{"LUniTest/SingleMemberString;", SingleMemberStringfieldAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute SingleMemberClassfieldAnnotations$$$namedAttribute[] = {
		{"value", 'c', "Ljava/util/Map;"},
		{}
	};
	$CompoundAttribute SingleMemberClassfieldAnnotations$$[] = {
		{"LUniTest/SingleMemberClass;", SingleMemberClassfieldAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute SingleMemberEnumfieldAnnotations$$$namedAttribute[] = {
		{"value", 'e', "LUniTest/Stooge; MOE"},
		{}
	};
	$CompoundAttribute SingleMemberEnumfieldAnnotations$$[] = {
		{"LUniTest/SingleMemberEnum;", SingleMemberEnumfieldAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute SingleMemberByteOvrdDeffieldAnnotations$$$namedAttribute[] = {
		{"value", 'B', "1"},
		{}
	};
	$CompoundAttribute SingleMemberByteOvrdDeffieldAnnotations$$[] = {
		{"LUniTest/SingleMemberByteWithDef;", SingleMemberByteOvrdDeffieldAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute SingleMemberShortOvrdDeffieldAnnotations$$$namedAttribute[] = {
		{"value", 'S', "2"},
		{}
	};
	$CompoundAttribute SingleMemberShortOvrdDeffieldAnnotations$$[] = {
		{"LUniTest/SingleMemberShortWithDef;", SingleMemberShortOvrdDeffieldAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute SingleMemberIntOvrdDeffieldAnnotations$$$namedAttribute[] = {
		{"value", 'I', "3"},
		{}
	};
	$CompoundAttribute SingleMemberIntOvrdDeffieldAnnotations$$[] = {
		{"LUniTest/SingleMemberIntWithDef;", SingleMemberIntOvrdDeffieldAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute SingleMemberLongOvrdDeffieldAnnotations$$$namedAttribute[] = {
		{"value", 'J', "4"},
		{}
	};
	$CompoundAttribute SingleMemberLongOvrdDeffieldAnnotations$$[] = {
		{"LUniTest/SingleMemberLongWithDef;", SingleMemberLongOvrdDeffieldAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute SingleMemberCharOvrdDeffieldAnnotations$$$namedAttribute[] = {
		{"value", 'C', "5"},
		{}
	};
	$CompoundAttribute SingleMemberCharOvrdDeffieldAnnotations$$[] = {
		{"LUniTest/SingleMemberCharWithDef;", SingleMemberCharOvrdDeffieldAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute SingleMemberFloatOvrdDeffieldAnnotations$$$namedAttribute[] = {
		{"value", 'F', "6.0"},
		{}
	};
	$CompoundAttribute SingleMemberFloatOvrdDeffieldAnnotations$$[] = {
		{"LUniTest/SingleMemberFloatWithDef;", SingleMemberFloatOvrdDeffieldAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute SingleMemberDoubleOvrdDeffieldAnnotations$$$namedAttribute[] = {
		{"value", 'D', "7.0"},
		{}
	};
	$CompoundAttribute SingleMemberDoubleOvrdDeffieldAnnotations$$[] = {
		{"LUniTest/SingleMemberDoubleWithDef;", SingleMemberDoubleOvrdDeffieldAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute SingleMemberBooleanOvrdDeffieldAnnotations$$$namedAttribute[] = {
		{"value", 'Z', "true"},
		{}
	};
	$CompoundAttribute SingleMemberBooleanOvrdDeffieldAnnotations$$[] = {
		{"LUniTest/SingleMemberBooleanWithDef;", SingleMemberBooleanOvrdDeffieldAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute SingleMemberStringOvrdDeffieldAnnotations$$$namedAttribute[] = {
		{"value", 's', "custom"},
		{}
	};
	$CompoundAttribute SingleMemberStringOvrdDeffieldAnnotations$$[] = {
		{"LUniTest/SingleMemberStringWithDef;", SingleMemberStringOvrdDeffieldAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute SingleMemberClassOvrdDeffieldAnnotations$$$namedAttribute[] = {
		{"value", 'c', "Ljava/util/Map;"},
		{}
	};
	$CompoundAttribute SingleMemberClassOvrdDeffieldAnnotations$$[] = {
		{"LUniTest/SingleMemberClassWithDef;", SingleMemberClassOvrdDeffieldAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute SingleMemberEnumOvrdDeffieldAnnotations$$$namedAttribute[] = {
		{"value", 'e', "LUniTest/Stooge; MOE"},
		{}
	};
	$CompoundAttribute SingleMemberEnumOvrdDeffieldAnnotations$$[] = {
		{"LUniTest/SingleMemberEnumWithDef;", SingleMemberEnumOvrdDeffieldAnnotations$$$namedAttribute},
		{}
	};
	$CompoundAttribute SingleMemberByteAcceptDeffieldAnnotations$$[] = {
		{"LUniTest/SingleMemberByteWithDef;", nullptr},
		{}
	};
	$CompoundAttribute SingleMemberShortAcceptDeffieldAnnotations$$[] = {
		{"LUniTest/SingleMemberShortWithDef;", nullptr},
		{}
	};
	$CompoundAttribute SingleMemberIntAcceptDeffieldAnnotations$$[] = {
		{"LUniTest/SingleMemberIntWithDef;", nullptr},
		{}
	};
	$CompoundAttribute SingleMemberLongAcceptDeffieldAnnotations$$[] = {
		{"LUniTest/SingleMemberLongWithDef;", nullptr},
		{}
	};
	$CompoundAttribute SingleMemberCharAcceptDeffieldAnnotations$$[] = {
		{"LUniTest/SingleMemberCharWithDef;", nullptr},
		{}
	};
	$CompoundAttribute SingleMemberFloatAcceptDeffieldAnnotations$$[] = {
		{"LUniTest/SingleMemberFloatWithDef;", nullptr},
		{}
	};
	$CompoundAttribute SingleMemberDoubleAcceptDeffieldAnnotations$$[] = {
		{"LUniTest/SingleMemberDoubleWithDef;", nullptr},
		{}
	};
	$CompoundAttribute SingleMemberBooleanAcceptDeffieldAnnotations$$[] = {
		{"LUniTest/SingleMemberBooleanWithDef;", nullptr},
		{}
	};
	$CompoundAttribute SingleMemberStringAcceptDeffieldAnnotations$$[] = {
		{"LUniTest/SingleMemberStringWithDef;", nullptr},
		{}
	};
	$CompoundAttribute SingleMemberClassAcceptDeffieldAnnotations$$[] = {
		{"LUniTest/SingleMemberClassWithDef;", nullptr},
		{}
	};
	$CompoundAttribute SingleMemberEnumAcceptDeffieldAnnotations$$[] = {
		{"LUniTest/SingleMemberEnumWithDef;", nullptr},
		{}
	};
	$Attribute $attribute$48[] = {
		{'-'}
	};
	$NamedAttribute SingleMemberByteArrEmptyfieldAnnotations$$$namedAttribute[] = {
		{"value", '[', $attribute$48},
		{}
	};
	$CompoundAttribute SingleMemberByteArrEmptyfieldAnnotations$$[] = {
		{"LUniTest/SingleMemberByteArray;", SingleMemberByteArrEmptyfieldAnnotations$$$namedAttribute},
		{}
	};
	$Attribute $attribute$49[] = {
		{'-'}
	};
	$NamedAttribute SingleMemberShortArrEmptyfieldAnnotations$$$namedAttribute[] = {
		{"value", '[', $attribute$49},
		{}
	};
	$CompoundAttribute SingleMemberShortArrEmptyfieldAnnotations$$[] = {
		{"LUniTest/SingleMemberShortArray;", SingleMemberShortArrEmptyfieldAnnotations$$$namedAttribute},
		{}
	};
	$Attribute $attribute$50[] = {
		{'-'}
	};
	$NamedAttribute SingleMemberIntArrEmptyfieldAnnotations$$$namedAttribute[] = {
		{"value", '[', $attribute$50},
		{}
	};
	$CompoundAttribute SingleMemberIntArrEmptyfieldAnnotations$$[] = {
		{"LUniTest/SingleMemberIntArray;", SingleMemberIntArrEmptyfieldAnnotations$$$namedAttribute},
		{}
	};
	$Attribute $attribute$51[] = {
		{'-'}
	};
	$NamedAttribute SingleMemberLongArrEmptyfieldAnnotations$$$namedAttribute[] = {
		{"value", '[', $attribute$51},
		{}
	};
	$CompoundAttribute SingleMemberLongArrEmptyfieldAnnotations$$[] = {
		{"LUniTest/SingleMemberLongArray;", SingleMemberLongArrEmptyfieldAnnotations$$$namedAttribute},
		{}
	};
	$Attribute $attribute$52[] = {
		{'-'}
	};
	$NamedAttribute SingleMemberCharArrEmptyfieldAnnotations$$$namedAttribute[] = {
		{"value", '[', $attribute$52},
		{}
	};
	$CompoundAttribute SingleMemberCharArrEmptyfieldAnnotations$$[] = {
		{"LUniTest/SingleMemberCharArray;", SingleMemberCharArrEmptyfieldAnnotations$$$namedAttribute},
		{}
	};
	$Attribute $attribute$53[] = {
		{'-'}
	};
	$NamedAttribute SingleMemberFloatArrEmptyfieldAnnotations$$$namedAttribute[] = {
		{"value", '[', $attribute$53},
		{}
	};
	$CompoundAttribute SingleMemberFloatArrEmptyfieldAnnotations$$[] = {
		{"LUniTest/SingleMemberFloatArray;", SingleMemberFloatArrEmptyfieldAnnotations$$$namedAttribute},
		{}
	};
	$Attribute $attribute$54[] = {
		{'-'}
	};
	$NamedAttribute SingleMemberDoubleArrEmptyfieldAnnotations$$$namedAttribute[] = {
		{"value", '[', $attribute$54},
		{}
	};
	$CompoundAttribute SingleMemberDoubleArrEmptyfieldAnnotations$$[] = {
		{"LUniTest/SingleMemberDoubleArray;", SingleMemberDoubleArrEmptyfieldAnnotations$$$namedAttribute},
		{}
	};
	$Attribute $attribute$55[] = {
		{'-'}
	};
	$NamedAttribute SingleMemberBooleanArrEmptyfieldAnnotations$$$namedAttribute[] = {
		{"value", '[', $attribute$55},
		{}
	};
	$CompoundAttribute SingleMemberBooleanArrEmptyfieldAnnotations$$[] = {
		{"LUniTest/SingleMemberBooleanArray;", SingleMemberBooleanArrEmptyfieldAnnotations$$$namedAttribute},
		{}
	};
	$Attribute $attribute$56[] = {
		{'-'}
	};
	$NamedAttribute SingleMemberStringArrEmptyfieldAnnotations$$$namedAttribute[] = {
		{"value", '[', $attribute$56},
		{}
	};
	$CompoundAttribute SingleMemberStringArrEmptyfieldAnnotations$$[] = {
		{"LUniTest/SingleMemberStringArray;", SingleMemberStringArrEmptyfieldAnnotations$$$namedAttribute},
		{}
	};
	$Attribute $attribute$57[] = {
		{'-'}
	};
	$NamedAttribute SingleMemberClassArrEmptyfieldAnnotations$$$namedAttribute[] = {
		{"value", '[', $attribute$57},
		{}
	};
	$CompoundAttribute SingleMemberClassArrEmptyfieldAnnotations$$[] = {
		{"LUniTest/SingleMemberClassArray;", SingleMemberClassArrEmptyfieldAnnotations$$$namedAttribute},
		{}
	};
	$Attribute $attribute$58[] = {
		{'-'}
	};
	$NamedAttribute SingleMemberEnumArrEmptyfieldAnnotations$$$namedAttribute[] = {
		{"value", '[', $attribute$58},
		{}
	};
	$CompoundAttribute SingleMemberEnumArrEmptyfieldAnnotations$$[] = {
		{"LUniTest/SingleMemberEnumArray;", SingleMemberEnumArrEmptyfieldAnnotations$$$namedAttribute},
		{}
	};
	$Attribute $attribute$59[] = {
		{'B', "1"},
		{'-'}
	};
	$NamedAttribute SingleMemberByteArrOnefieldAnnotations$$$namedAttribute[] = {
		{"value", '[', $attribute$59},
		{}
	};
	$CompoundAttribute SingleMemberByteArrOnefieldAnnotations$$[] = {
		{"LUniTest/SingleMemberByteArray;", SingleMemberByteArrOnefieldAnnotations$$$namedAttribute},
		{}
	};
	$Attribute $attribute$60[] = {
		{'S', "2"},
		{'-'}
	};
	$NamedAttribute SingleMemberShortArrOnefieldAnnotations$$$namedAttribute[] = {
		{"value", '[', $attribute$60},
		{}
	};
	$CompoundAttribute SingleMemberShortArrOnefieldAnnotations$$[] = {
		{"LUniTest/SingleMemberShortArray;", SingleMemberShortArrOnefieldAnnotations$$$namedAttribute},
		{}
	};
	$Attribute $attribute$61[] = {
		{'I', "3"},
		{'-'}
	};
	$NamedAttribute SingleMemberIntArrOnefieldAnnotations$$$namedAttribute[] = {
		{"value", '[', $attribute$61},
		{}
	};
	$CompoundAttribute SingleMemberIntArrOnefieldAnnotations$$[] = {
		{"LUniTest/SingleMemberIntArray;", SingleMemberIntArrOnefieldAnnotations$$$namedAttribute},
		{}
	};
	$Attribute $attribute$62[] = {
		{'J', "4"},
		{'-'}
	};
	$NamedAttribute SingleMemberLongArrOnefieldAnnotations$$$namedAttribute[] = {
		{"value", '[', $attribute$62},
		{}
	};
	$CompoundAttribute SingleMemberLongArrOnefieldAnnotations$$[] = {
		{"LUniTest/SingleMemberLongArray;", SingleMemberLongArrOnefieldAnnotations$$$namedAttribute},
		{}
	};
	$Attribute $attribute$63[] = {
		{'C', "5"},
		{'-'}
	};
	$NamedAttribute SingleMemberCharArrOnefieldAnnotations$$$namedAttribute[] = {
		{"value", '[', $attribute$63},
		{}
	};
	$CompoundAttribute SingleMemberCharArrOnefieldAnnotations$$[] = {
		{"LUniTest/SingleMemberCharArray;", SingleMemberCharArrOnefieldAnnotations$$$namedAttribute},
		{}
	};
	$Attribute $attribute$64[] = {
		{'F', "6.0"},
		{'-'}
	};
	$NamedAttribute SingleMemberFloatArrOnefieldAnnotations$$$namedAttribute[] = {
		{"value", '[', $attribute$64},
		{}
	};
	$CompoundAttribute SingleMemberFloatArrOnefieldAnnotations$$[] = {
		{"LUniTest/SingleMemberFloatArray;", SingleMemberFloatArrOnefieldAnnotations$$$namedAttribute},
		{}
	};
	$Attribute $attribute$65[] = {
		{'D', "7.0"},
		{'-'}
	};
	$NamedAttribute SingleMemberDoubleArrOnefieldAnnotations$$$namedAttribute[] = {
		{"value", '[', $attribute$65},
		{}
	};
	$CompoundAttribute SingleMemberDoubleArrOnefieldAnnotations$$[] = {
		{"LUniTest/SingleMemberDoubleArray;", SingleMemberDoubleArrOnefieldAnnotations$$$namedAttribute},
		{}
	};
	$Attribute $attribute$66[] = {
		{'Z', "true"},
		{'-'}
	};
	$NamedAttribute SingleMemberBooleanArrOnefieldAnnotations$$$namedAttribute[] = {
		{"value", '[', $attribute$66},
		{}
	};
	$CompoundAttribute SingleMemberBooleanArrOnefieldAnnotations$$[] = {
		{"LUniTest/SingleMemberBooleanArray;", SingleMemberBooleanArrOnefieldAnnotations$$$namedAttribute},
		{}
	};
	$Attribute $attribute$67[] = {
		{'s', "custom"},
		{'-'}
	};
	$NamedAttribute SingleMemberStringArrOnefieldAnnotations$$$namedAttribute[] = {
		{"value", '[', $attribute$67},
		{}
	};
	$CompoundAttribute SingleMemberStringArrOnefieldAnnotations$$[] = {
		{"LUniTest/SingleMemberStringArray;", SingleMemberStringArrOnefieldAnnotations$$$namedAttribute},
		{}
	};
	$Attribute $attribute$68[] = {
		{'c', "Ljava/util/Map;"},
		{'-'}
	};
	$NamedAttribute SingleMemberClassArrOnefieldAnnotations$$$namedAttribute[] = {
		{"value", '[', $attribute$68},
		{}
	};
	$CompoundAttribute SingleMemberClassArrOnefieldAnnotations$$[] = {
		{"LUniTest/SingleMemberClassArray;", SingleMemberClassArrOnefieldAnnotations$$$namedAttribute},
		{}
	};
	$Attribute $attribute$69[] = {
		{'e', "LUniTest/Stooge; MOE"},
		{'-'}
	};
	$NamedAttribute SingleMemberEnumArrOnefieldAnnotations$$$namedAttribute[] = {
		{"value", '[', $attribute$69},
		{}
	};
	$CompoundAttribute SingleMemberEnumArrOnefieldAnnotations$$[] = {
		{"LUniTest/SingleMemberEnumArray;", SingleMemberEnumArrOnefieldAnnotations$$$namedAttribute},
		{}
	};
	$Attribute $attribute$70[] = {
		{'B', "1"},
		{'B', "2"},
		{'-'}
	};
	$NamedAttribute SingleMemberByteArrTwofieldAnnotations$$$namedAttribute[] = {
		{"value", '[', $attribute$70},
		{}
	};
	$CompoundAttribute SingleMemberByteArrTwofieldAnnotations$$[] = {
		{"LUniTest/SingleMemberByteArray;", SingleMemberByteArrTwofieldAnnotations$$$namedAttribute},
		{}
	};
	$Attribute $attribute$71[] = {
		{'S', "2"},
		{'S', "3"},
		{'-'}
	};
	$NamedAttribute SingleMemberShortArrTwofieldAnnotations$$$namedAttribute[] = {
		{"value", '[', $attribute$71},
		{}
	};
	$CompoundAttribute SingleMemberShortArrTwofieldAnnotations$$[] = {
		{"LUniTest/SingleMemberShortArray;", SingleMemberShortArrTwofieldAnnotations$$$namedAttribute},
		{}
	};
	$Attribute $attribute$72[] = {
		{'I', "3"},
		{'I', "4"},
		{'-'}
	};
	$NamedAttribute SingleMemberIntArrTwofieldAnnotations$$$namedAttribute[] = {
		{"value", '[', $attribute$72},
		{}
	};
	$CompoundAttribute SingleMemberIntArrTwofieldAnnotations$$[] = {
		{"LUniTest/SingleMemberIntArray;", SingleMemberIntArrTwofieldAnnotations$$$namedAttribute},
		{}
	};
	$Attribute $attribute$73[] = {
		{'J', "4"},
		{'J', "5"},
		{'-'}
	};
	$NamedAttribute SingleMemberLongArrTwofieldAnnotations$$$namedAttribute[] = {
		{"value", '[', $attribute$73},
		{}
	};
	$CompoundAttribute SingleMemberLongArrTwofieldAnnotations$$[] = {
		{"LUniTest/SingleMemberLongArray;", SingleMemberLongArrTwofieldAnnotations$$$namedAttribute},
		{}
	};
	$Attribute $attribute$74[] = {
		{'C', "5"},
		{'C', "6"},
		{'-'}
	};
	$NamedAttribute SingleMemberCharArrTwofieldAnnotations$$$namedAttribute[] = {
		{"value", '[', $attribute$74},
		{}
	};
	$CompoundAttribute SingleMemberCharArrTwofieldAnnotations$$[] = {
		{"LUniTest/SingleMemberCharArray;", SingleMemberCharArrTwofieldAnnotations$$$namedAttribute},
		{}
	};
	$Attribute $attribute$75[] = {
		{'F', "6.0"},
		{'F', "7.0"},
		{'-'}
	};
	$NamedAttribute SingleMemberFloatArrTwofieldAnnotations$$$namedAttribute[] = {
		{"value", '[', $attribute$75},
		{}
	};
	$CompoundAttribute SingleMemberFloatArrTwofieldAnnotations$$[] = {
		{"LUniTest/SingleMemberFloatArray;", SingleMemberFloatArrTwofieldAnnotations$$$namedAttribute},
		{}
	};
	$Attribute $attribute$76[] = {
		{'D', "7.0"},
		{'D', "8.0"},
		{'-'}
	};
	$NamedAttribute SingleMemberDoubleArrTwofieldAnnotations$$$namedAttribute[] = {
		{"value", '[', $attribute$76},
		{}
	};
	$CompoundAttribute SingleMemberDoubleArrTwofieldAnnotations$$[] = {
		{"LUniTest/SingleMemberDoubleArray;", SingleMemberDoubleArrTwofieldAnnotations$$$namedAttribute},
		{}
	};
	$Attribute $attribute$77[] = {
		{'Z', "true"},
		{'Z', "false"},
		{'-'}
	};
	$NamedAttribute SingleMemberBooleanArrTwofieldAnnotations$$$namedAttribute[] = {
		{"value", '[', $attribute$77},
		{}
	};
	$CompoundAttribute SingleMemberBooleanArrTwofieldAnnotations$$[] = {
		{"LUniTest/SingleMemberBooleanArray;", SingleMemberBooleanArrTwofieldAnnotations$$$namedAttribute},
		{}
	};
	$Attribute $attribute$78[] = {
		{'s', "custom"},
		{'s', "paint"},
		{'-'}
	};
	$NamedAttribute SingleMemberStringArrTwofieldAnnotations$$$namedAttribute[] = {
		{"value", '[', $attribute$78},
		{}
	};
	$CompoundAttribute SingleMemberStringArrTwofieldAnnotations$$[] = {
		{"LUniTest/SingleMemberStringArray;", SingleMemberStringArrTwofieldAnnotations$$$namedAttribute},
		{}
	};
	$Attribute $attribute$79[] = {
		{'c', "Ljava/util/Map;"},
		{'c', "Ljava/util/Set;"},
		{'-'}
	};
	$NamedAttribute SingleMemberClassArrTwofieldAnnotations$$$namedAttribute[] = {
		{"value", '[', $attribute$79},
		{}
	};
	$CompoundAttribute SingleMemberClassArrTwofieldAnnotations$$[] = {
		{"LUniTest/SingleMemberClassArray;", SingleMemberClassArrTwofieldAnnotations$$$namedAttribute},
		{}
	};
	$Attribute $attribute$80[] = {
		{'e', "LUniTest/Stooge; MOE"},
		{'e', "LUniTest/Stooge; CURLY"},
		{'-'}
	};
	$NamedAttribute SingleMemberEnumArrTwofieldAnnotations$$$namedAttribute[] = {
		{"value", '[', $attribute$80},
		{}
	};
	$CompoundAttribute SingleMemberEnumArrTwofieldAnnotations$$[] = {
		{"LUniTest/SingleMemberEnumArray;", SingleMemberEnumArrTwofieldAnnotations$$$namedAttribute},
		{}
	};
	$Attribute $attribute$81[] = {
		{'B', "1"},
		{'-'}
	};
	$NamedAttribute SingleMemberByteArrOvrdDeffieldAnnotations$$$namedAttribute[] = {
		{"value", '[', $attribute$81},
		{}
	};
	$CompoundAttribute SingleMemberByteArrOvrdDeffieldAnnotations$$[] = {
		{"LUniTest/SingleMemberByteArrayDef;", SingleMemberByteArrOvrdDeffieldAnnotations$$$namedAttribute},
		{}
	};
	$Attribute $attribute$82[] = {
		{'S', "2"},
		{'-'}
	};
	$NamedAttribute SingleMemberShortArrOvrdDeffieldAnnotations$$$namedAttribute[] = {
		{"value", '[', $attribute$82},
		{}
	};
	$CompoundAttribute SingleMemberShortArrOvrdDeffieldAnnotations$$[] = {
		{"LUniTest/SingleMemberShortArrayDef;", SingleMemberShortArrOvrdDeffieldAnnotations$$$namedAttribute},
		{}
	};
	$Attribute $attribute$83[] = {
		{'I', "3"},
		{'-'}
	};
	$NamedAttribute SingleMemberIntArrOvrdDeffieldAnnotations$$$namedAttribute[] = {
		{"value", '[', $attribute$83},
		{}
	};
	$CompoundAttribute SingleMemberIntArrOvrdDeffieldAnnotations$$[] = {
		{"LUniTest/SingleMemberIntArrayDef;", SingleMemberIntArrOvrdDeffieldAnnotations$$$namedAttribute},
		{}
	};
	$Attribute $attribute$84[] = {
		{'J', "4"},
		{'-'}
	};
	$NamedAttribute SingleMemberLongArrOvrdDeffieldAnnotations$$$namedAttribute[] = {
		{"value", '[', $attribute$84},
		{}
	};
	$CompoundAttribute SingleMemberLongArrOvrdDeffieldAnnotations$$[] = {
		{"LUniTest/SingleMemberLongArrayDef;", SingleMemberLongArrOvrdDeffieldAnnotations$$$namedAttribute},
		{}
	};
	$Attribute $attribute$85[] = {
		{'C', "5"},
		{'-'}
	};
	$NamedAttribute SingleMemberCharArrOvrdDeffieldAnnotations$$$namedAttribute[] = {
		{"value", '[', $attribute$85},
		{}
	};
	$CompoundAttribute SingleMemberCharArrOvrdDeffieldAnnotations$$[] = {
		{"LUniTest/SingleMemberCharArrayDef;", SingleMemberCharArrOvrdDeffieldAnnotations$$$namedAttribute},
		{}
	};
	$Attribute $attribute$86[] = {
		{'F', "6.0"},
		{'-'}
	};
	$NamedAttribute SingleMemberFloatArrOvrdDeffieldAnnotations$$$namedAttribute[] = {
		{"value", '[', $attribute$86},
		{}
	};
	$CompoundAttribute SingleMemberFloatArrOvrdDeffieldAnnotations$$[] = {
		{"LUniTest/SingleMemberFloatArrayDef;", SingleMemberFloatArrOvrdDeffieldAnnotations$$$namedAttribute},
		{}
	};
	$Attribute $attribute$87[] = {
		{'D', "7.0"},
		{'-'}
	};
	$NamedAttribute SingleMemberDoubleArrOvrdDeffieldAnnotations$$$namedAttribute[] = {
		{"value", '[', $attribute$87},
		{}
	};
	$CompoundAttribute SingleMemberDoubleArrOvrdDeffieldAnnotations$$[] = {
		{"LUniTest/SingleMemberDoubleArrayDef;", SingleMemberDoubleArrOvrdDeffieldAnnotations$$$namedAttribute},
		{}
	};
	$Attribute $attribute$88[] = {
		{'Z', "true"},
		{'-'}
	};
	$NamedAttribute SingleMemberBooleanArrOvrdDeffieldAnnotations$$$namedAttribute[] = {
		{"value", '[', $attribute$88},
		{}
	};
	$CompoundAttribute SingleMemberBooleanArrOvrdDeffieldAnnotations$$[] = {
		{"LUniTest/SingleMemberBooleanArrayDef;", SingleMemberBooleanArrOvrdDeffieldAnnotations$$$namedAttribute},
		{}
	};
	$Attribute $attribute$89[] = {
		{'s', "custom"},
		{'-'}
	};
	$NamedAttribute SingleMemberStringArrOvrdDeffieldAnnotations$$$namedAttribute[] = {
		{"value", '[', $attribute$89},
		{}
	};
	$CompoundAttribute SingleMemberStringArrOvrdDeffieldAnnotations$$[] = {
		{"LUniTest/SingleMemberStringArrayDef;", SingleMemberStringArrOvrdDeffieldAnnotations$$$namedAttribute},
		{}
	};
	$Attribute $attribute$90[] = {
		{'c', "Ljava/util/Map;"},
		{'-'}
	};
	$NamedAttribute SingleMemberClassArrOvrdDeffieldAnnotations$$$namedAttribute[] = {
		{"value", '[', $attribute$90},
		{}
	};
	$CompoundAttribute SingleMemberClassArrOvrdDeffieldAnnotations$$[] = {
		{"LUniTest/SingleMemberClassArrayDef;", SingleMemberClassArrOvrdDeffieldAnnotations$$$namedAttribute},
		{}
	};
	$Attribute $attribute$91[] = {
		{'e', "LUniTest/Stooge; MOE"},
		{'-'}
	};
	$NamedAttribute SingleMemberEnumArrOvrdDeffieldAnnotations$$$namedAttribute[] = {
		{"value", '[', $attribute$91},
		{}
	};
	$CompoundAttribute SingleMemberEnumArrOvrdDeffieldAnnotations$$[] = {
		{"LUniTest/SingleMemberEnumArrayDef;", SingleMemberEnumArrOvrdDeffieldAnnotations$$$namedAttribute},
		{}
	};
	$CompoundAttribute SingleMemberByteArrAcceptDeffieldAnnotations$$[] = {
		{"LUniTest/SingleMemberByteArrayDef;", nullptr},
		{}
	};
	$CompoundAttribute SingleMemberShortArrAcceptDeffieldAnnotations$$[] = {
		{"LUniTest/SingleMemberShortArrayDef;", nullptr},
		{}
	};
	$CompoundAttribute SingleMemberIntArrAcceptDeffieldAnnotations$$[] = {
		{"LUniTest/SingleMemberIntArrayDef;", nullptr},
		{}
	};
	$CompoundAttribute SingleMemberLongArrAcceptDeffieldAnnotations$$[] = {
		{"LUniTest/SingleMemberLongArrayDef;", nullptr},
		{}
	};
	$CompoundAttribute SingleMemberCharArrAcceptDeffieldAnnotations$$[] = {
		{"LUniTest/SingleMemberCharArrayDef;", nullptr},
		{}
	};
	$CompoundAttribute SingleMemberFloatArrAcceptDeffieldAnnotations$$[] = {
		{"LUniTest/SingleMemberFloatArrayDef;", nullptr},
		{}
	};
	$CompoundAttribute SingleMemberDoubleArrAcceptDeffieldAnnotations$$[] = {
		{"LUniTest/SingleMemberDoubleArrayDef;", nullptr},
		{}
	};
	$CompoundAttribute SingleMemberBooleanArrAcceptDeffieldAnnotations$$[] = {
		{"LUniTest/SingleMemberBooleanArrayDef;", nullptr},
		{}
	};
	$CompoundAttribute SingleMemberStringArrAcceptDeffieldAnnotations$$[] = {
		{"LUniTest/SingleMemberStringArrayDef;", nullptr},
		{}
	};
	$CompoundAttribute SingleMemberClassArrAcceptDeffieldAnnotations$$[] = {
		{"LUniTest/SingleMemberClassArrayDef;", nullptr},
		{}
	};
	$CompoundAttribute SingleMemberEnumArrAcceptDeffieldAnnotations$$[] = {
		{"LUniTest/SingleMemberEnumArrayDef;", nullptr},
		{}
	};
	$FieldInfo fieldInfos$$[] = {
		{"scalarTypesField", "LUniTest/UnitTest$TestType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnitTest$TestType, scalarTypesField), scalarTypesFieldfieldAnnotations$$},
		{"scalarTypesAcceptDefaultField", "LUniTest/UnitTest$TestType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnitTest$TestType, scalarTypesAcceptDefaultField), scalarTypesAcceptDefaultFieldfieldAnnotations$$},
		{"scalarTypesOverrideDefaultField", "LUniTest/UnitTest$TestType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnitTest$TestType, scalarTypesOverrideDefaultField), scalarTypesOverrideDefaultFieldfieldAnnotations$$},
		{"emptyArrayTypesField", "LUniTest/UnitTest$TestType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnitTest$TestType, emptyArrayTypesField), emptyArrayTypesFieldfieldAnnotations$$},
		{"singleElementArrayTypesField", "LUniTest/UnitTest$TestType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnitTest$TestType, singleElementArrayTypesField), singleElementArrayTypesFieldfieldAnnotations$$},
		{"twoElementArrayTypesField", "LUniTest/UnitTest$TestType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnitTest$TestType, twoElementArrayTypesField), twoElementArrayTypesFieldfieldAnnotations$$},
		{"arrayTypesAcceptDefaultField", "LUniTest/UnitTest$TestType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnitTest$TestType, arrayTypesAcceptDefaultField), arrayTypesAcceptDefaultFieldfieldAnnotations$$},
		{"arrayTypesOverrideDefaultField", "LUniTest/UnitTest$TestType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnitTest$TestType, arrayTypesOverrideDefaultField), arrayTypesOverrideDefaultFieldfieldAnnotations$$},
		{"marker", "LUniTest/UnitTest$TestType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnitTest$TestType, marker), markerfieldAnnotations$$},
		{"SingleMemberByte", "LUniTest/UnitTest$TestType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnitTest$TestType, SingleMemberByte), SingleMemberBytefieldAnnotations$$},
		{"SingleMemberShort", "LUniTest/UnitTest$TestType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnitTest$TestType, SingleMemberShort), SingleMemberShortfieldAnnotations$$},
		{"SingleMemberInt", "LUniTest/UnitTest$TestType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnitTest$TestType, SingleMemberInt), SingleMemberIntfieldAnnotations$$},
		{"SingleMemberLong", "LUniTest/UnitTest$TestType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnitTest$TestType, SingleMemberLong), SingleMemberLongfieldAnnotations$$},
		{"SingleMemberChar", "LUniTest/UnitTest$TestType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnitTest$TestType, SingleMemberChar), SingleMemberCharfieldAnnotations$$},
		{"SingleMemberFloat", "LUniTest/UnitTest$TestType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnitTest$TestType, SingleMemberFloat), SingleMemberFloatfieldAnnotations$$},
		{"SingleMemberDouble", "LUniTest/UnitTest$TestType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnitTest$TestType, SingleMemberDouble), SingleMemberDoublefieldAnnotations$$},
		{"SingleMemberBoolean", "LUniTest/UnitTest$TestType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnitTest$TestType, SingleMemberBoolean), SingleMemberBooleanfieldAnnotations$$},
		{"SingleMemberString", "LUniTest/UnitTest$TestType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnitTest$TestType, SingleMemberString), SingleMemberStringfieldAnnotations$$},
		{"SingleMemberClass", "LUniTest/UnitTest$TestType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnitTest$TestType, SingleMemberClass), SingleMemberClassfieldAnnotations$$},
		{"SingleMemberEnum", "LUniTest/UnitTest$TestType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnitTest$TestType, SingleMemberEnum), SingleMemberEnumfieldAnnotations$$},
		{"SingleMemberByteOvrdDef", "LUniTest/UnitTest$TestType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnitTest$TestType, SingleMemberByteOvrdDef), SingleMemberByteOvrdDeffieldAnnotations$$},
		{"SingleMemberShortOvrdDef", "LUniTest/UnitTest$TestType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnitTest$TestType, SingleMemberShortOvrdDef), SingleMemberShortOvrdDeffieldAnnotations$$},
		{"SingleMemberIntOvrdDef", "LUniTest/UnitTest$TestType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnitTest$TestType, SingleMemberIntOvrdDef), SingleMemberIntOvrdDeffieldAnnotations$$},
		{"SingleMemberLongOvrdDef", "LUniTest/UnitTest$TestType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnitTest$TestType, SingleMemberLongOvrdDef), SingleMemberLongOvrdDeffieldAnnotations$$},
		{"SingleMemberCharOvrdDef", "LUniTest/UnitTest$TestType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnitTest$TestType, SingleMemberCharOvrdDef), SingleMemberCharOvrdDeffieldAnnotations$$},
		{"SingleMemberFloatOvrdDef", "LUniTest/UnitTest$TestType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnitTest$TestType, SingleMemberFloatOvrdDef), SingleMemberFloatOvrdDeffieldAnnotations$$},
		{"SingleMemberDoubleOvrdDef", "LUniTest/UnitTest$TestType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnitTest$TestType, SingleMemberDoubleOvrdDef), SingleMemberDoubleOvrdDeffieldAnnotations$$},
		{"SingleMemberBooleanOvrdDef", "LUniTest/UnitTest$TestType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnitTest$TestType, SingleMemberBooleanOvrdDef), SingleMemberBooleanOvrdDeffieldAnnotations$$},
		{"SingleMemberStringOvrdDef", "LUniTest/UnitTest$TestType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnitTest$TestType, SingleMemberStringOvrdDef), SingleMemberStringOvrdDeffieldAnnotations$$},
		{"SingleMemberClassOvrdDef", "LUniTest/UnitTest$TestType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnitTest$TestType, SingleMemberClassOvrdDef), SingleMemberClassOvrdDeffieldAnnotations$$},
		{"SingleMemberEnumOvrdDef", "LUniTest/UnitTest$TestType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnitTest$TestType, SingleMemberEnumOvrdDef), SingleMemberEnumOvrdDeffieldAnnotations$$},
		{"SingleMemberByteAcceptDef", "LUniTest/UnitTest$TestType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnitTest$TestType, SingleMemberByteAcceptDef), SingleMemberByteAcceptDeffieldAnnotations$$},
		{"SingleMemberShortAcceptDef", "LUniTest/UnitTest$TestType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnitTest$TestType, SingleMemberShortAcceptDef), SingleMemberShortAcceptDeffieldAnnotations$$},
		{"SingleMemberIntAcceptDef", "LUniTest/UnitTest$TestType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnitTest$TestType, SingleMemberIntAcceptDef), SingleMemberIntAcceptDeffieldAnnotations$$},
		{"SingleMemberLongAcceptDef", "LUniTest/UnitTest$TestType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnitTest$TestType, SingleMemberLongAcceptDef), SingleMemberLongAcceptDeffieldAnnotations$$},
		{"SingleMemberCharAcceptDef", "LUniTest/UnitTest$TestType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnitTest$TestType, SingleMemberCharAcceptDef), SingleMemberCharAcceptDeffieldAnnotations$$},
		{"SingleMemberFloatAcceptDef", "LUniTest/UnitTest$TestType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnitTest$TestType, SingleMemberFloatAcceptDef), SingleMemberFloatAcceptDeffieldAnnotations$$},
		{"SingleMemberDoubleAcceptDef", "LUniTest/UnitTest$TestType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnitTest$TestType, SingleMemberDoubleAcceptDef), SingleMemberDoubleAcceptDeffieldAnnotations$$},
		{"SingleMemberBooleanAcceptDef", "LUniTest/UnitTest$TestType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnitTest$TestType, SingleMemberBooleanAcceptDef), SingleMemberBooleanAcceptDeffieldAnnotations$$},
		{"SingleMemberStringAcceptDef", "LUniTest/UnitTest$TestType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnitTest$TestType, SingleMemberStringAcceptDef), SingleMemberStringAcceptDeffieldAnnotations$$},
		{"SingleMemberClassAcceptDef", "LUniTest/UnitTest$TestType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnitTest$TestType, SingleMemberClassAcceptDef), SingleMemberClassAcceptDeffieldAnnotations$$},
		{"SingleMemberEnumAcceptDef", "LUniTest/UnitTest$TestType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnitTest$TestType, SingleMemberEnumAcceptDef), SingleMemberEnumAcceptDeffieldAnnotations$$},
		{"SingleMemberByteArrEmpty", "LUniTest/UnitTest$TestType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnitTest$TestType, SingleMemberByteArrEmpty), SingleMemberByteArrEmptyfieldAnnotations$$},
		{"SingleMemberShortArrEmpty", "LUniTest/UnitTest$TestType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnitTest$TestType, SingleMemberShortArrEmpty), SingleMemberShortArrEmptyfieldAnnotations$$},
		{"SingleMemberIntArrEmpty", "LUniTest/UnitTest$TestType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnitTest$TestType, SingleMemberIntArrEmpty), SingleMemberIntArrEmptyfieldAnnotations$$},
		{"SingleMemberLongArrEmpty", "LUniTest/UnitTest$TestType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnitTest$TestType, SingleMemberLongArrEmpty), SingleMemberLongArrEmptyfieldAnnotations$$},
		{"SingleMemberCharArrEmpty", "LUniTest/UnitTest$TestType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnitTest$TestType, SingleMemberCharArrEmpty), SingleMemberCharArrEmptyfieldAnnotations$$},
		{"SingleMemberFloatArrEmpty", "LUniTest/UnitTest$TestType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnitTest$TestType, SingleMemberFloatArrEmpty), SingleMemberFloatArrEmptyfieldAnnotations$$},
		{"SingleMemberDoubleArrEmpty", "LUniTest/UnitTest$TestType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnitTest$TestType, SingleMemberDoubleArrEmpty), SingleMemberDoubleArrEmptyfieldAnnotations$$},
		{"SingleMemberBooleanArrEmpty", "LUniTest/UnitTest$TestType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnitTest$TestType, SingleMemberBooleanArrEmpty), SingleMemberBooleanArrEmptyfieldAnnotations$$},
		{"SingleMemberStringArrEmpty", "LUniTest/UnitTest$TestType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnitTest$TestType, SingleMemberStringArrEmpty), SingleMemberStringArrEmptyfieldAnnotations$$},
		{"SingleMemberClassArrEmpty", "LUniTest/UnitTest$TestType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnitTest$TestType, SingleMemberClassArrEmpty), SingleMemberClassArrEmptyfieldAnnotations$$},
		{"SingleMemberEnumArrEmpty", "LUniTest/UnitTest$TestType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnitTest$TestType, SingleMemberEnumArrEmpty), SingleMemberEnumArrEmptyfieldAnnotations$$},
		{"SingleMemberByteArrOne", "LUniTest/UnitTest$TestType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnitTest$TestType, SingleMemberByteArrOne), SingleMemberByteArrOnefieldAnnotations$$},
		{"SingleMemberShortArrOne", "LUniTest/UnitTest$TestType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnitTest$TestType, SingleMemberShortArrOne), SingleMemberShortArrOnefieldAnnotations$$},
		{"SingleMemberIntArrOne", "LUniTest/UnitTest$TestType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnitTest$TestType, SingleMemberIntArrOne), SingleMemberIntArrOnefieldAnnotations$$},
		{"SingleMemberLongArrOne", "LUniTest/UnitTest$TestType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnitTest$TestType, SingleMemberLongArrOne), SingleMemberLongArrOnefieldAnnotations$$},
		{"SingleMemberCharArrOne", "LUniTest/UnitTest$TestType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnitTest$TestType, SingleMemberCharArrOne), SingleMemberCharArrOnefieldAnnotations$$},
		{"SingleMemberFloatArrOne", "LUniTest/UnitTest$TestType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnitTest$TestType, SingleMemberFloatArrOne), SingleMemberFloatArrOnefieldAnnotations$$},
		{"SingleMemberDoubleArrOne", "LUniTest/UnitTest$TestType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnitTest$TestType, SingleMemberDoubleArrOne), SingleMemberDoubleArrOnefieldAnnotations$$},
		{"SingleMemberBooleanArrOne", "LUniTest/UnitTest$TestType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnitTest$TestType, SingleMemberBooleanArrOne), SingleMemberBooleanArrOnefieldAnnotations$$},
		{"SingleMemberStringArrOne", "LUniTest/UnitTest$TestType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnitTest$TestType, SingleMemberStringArrOne), SingleMemberStringArrOnefieldAnnotations$$},
		{"SingleMemberClassArrOne", "LUniTest/UnitTest$TestType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnitTest$TestType, SingleMemberClassArrOne), SingleMemberClassArrOnefieldAnnotations$$},
		{"SingleMemberEnumArrOne", "LUniTest/UnitTest$TestType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnitTest$TestType, SingleMemberEnumArrOne), SingleMemberEnumArrOnefieldAnnotations$$},
		{"SingleMemberByteArrTwo", "LUniTest/UnitTest$TestType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnitTest$TestType, SingleMemberByteArrTwo), SingleMemberByteArrTwofieldAnnotations$$},
		{"SingleMemberShortArrTwo", "LUniTest/UnitTest$TestType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnitTest$TestType, SingleMemberShortArrTwo), SingleMemberShortArrTwofieldAnnotations$$},
		{"SingleMemberIntArrTwo", "LUniTest/UnitTest$TestType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnitTest$TestType, SingleMemberIntArrTwo), SingleMemberIntArrTwofieldAnnotations$$},
		{"SingleMemberLongArrTwo", "LUniTest/UnitTest$TestType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnitTest$TestType, SingleMemberLongArrTwo), SingleMemberLongArrTwofieldAnnotations$$},
		{"SingleMemberCharArrTwo", "LUniTest/UnitTest$TestType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnitTest$TestType, SingleMemberCharArrTwo), SingleMemberCharArrTwofieldAnnotations$$},
		{"SingleMemberFloatArrTwo", "LUniTest/UnitTest$TestType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnitTest$TestType, SingleMemberFloatArrTwo), SingleMemberFloatArrTwofieldAnnotations$$},
		{"SingleMemberDoubleArrTwo", "LUniTest/UnitTest$TestType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnitTest$TestType, SingleMemberDoubleArrTwo), SingleMemberDoubleArrTwofieldAnnotations$$},
		{"SingleMemberBooleanArrTwo", "LUniTest/UnitTest$TestType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnitTest$TestType, SingleMemberBooleanArrTwo), SingleMemberBooleanArrTwofieldAnnotations$$},
		{"SingleMemberStringArrTwo", "LUniTest/UnitTest$TestType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnitTest$TestType, SingleMemberStringArrTwo), SingleMemberStringArrTwofieldAnnotations$$},
		{"SingleMemberClassArrTwo", "LUniTest/UnitTest$TestType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnitTest$TestType, SingleMemberClassArrTwo), SingleMemberClassArrTwofieldAnnotations$$},
		{"SingleMemberEnumArrTwo", "LUniTest/UnitTest$TestType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnitTest$TestType, SingleMemberEnumArrTwo), SingleMemberEnumArrTwofieldAnnotations$$},
		{"SingleMemberByteArrOvrdDef", "LUniTest/UnitTest$TestType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnitTest$TestType, SingleMemberByteArrOvrdDef), SingleMemberByteArrOvrdDeffieldAnnotations$$},
		{"SingleMemberShortArrOvrdDef", "LUniTest/UnitTest$TestType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnitTest$TestType, SingleMemberShortArrOvrdDef), SingleMemberShortArrOvrdDeffieldAnnotations$$},
		{"SingleMemberIntArrOvrdDef", "LUniTest/UnitTest$TestType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnitTest$TestType, SingleMemberIntArrOvrdDef), SingleMemberIntArrOvrdDeffieldAnnotations$$},
		{"SingleMemberLongArrOvrdDef", "LUniTest/UnitTest$TestType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnitTest$TestType, SingleMemberLongArrOvrdDef), SingleMemberLongArrOvrdDeffieldAnnotations$$},
		{"SingleMemberCharArrOvrdDef", "LUniTest/UnitTest$TestType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnitTest$TestType, SingleMemberCharArrOvrdDef), SingleMemberCharArrOvrdDeffieldAnnotations$$},
		{"SingleMemberFloatArrOvrdDef", "LUniTest/UnitTest$TestType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnitTest$TestType, SingleMemberFloatArrOvrdDef), SingleMemberFloatArrOvrdDeffieldAnnotations$$},
		{"SingleMemberDoubleArrOvrdDef", "LUniTest/UnitTest$TestType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnitTest$TestType, SingleMemberDoubleArrOvrdDef), SingleMemberDoubleArrOvrdDeffieldAnnotations$$},
		{"SingleMemberBooleanArrOvrdDef", "LUniTest/UnitTest$TestType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnitTest$TestType, SingleMemberBooleanArrOvrdDef), SingleMemberBooleanArrOvrdDeffieldAnnotations$$},
		{"SingleMemberStringArrOvrdDef", "LUniTest/UnitTest$TestType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnitTest$TestType, SingleMemberStringArrOvrdDef), SingleMemberStringArrOvrdDeffieldAnnotations$$},
		{"SingleMemberClassArrOvrdDef", "LUniTest/UnitTest$TestType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnitTest$TestType, SingleMemberClassArrOvrdDef), SingleMemberClassArrOvrdDeffieldAnnotations$$},
		{"SingleMemberEnumArrOvrdDef", "LUniTest/UnitTest$TestType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnitTest$TestType, SingleMemberEnumArrOvrdDef), SingleMemberEnumArrOvrdDeffieldAnnotations$$},
		{"SingleMemberByteArrAcceptDef", "LUniTest/UnitTest$TestType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnitTest$TestType, SingleMemberByteArrAcceptDef), SingleMemberByteArrAcceptDeffieldAnnotations$$},
		{"SingleMemberShortArrAcceptDef", "LUniTest/UnitTest$TestType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnitTest$TestType, SingleMemberShortArrAcceptDef), SingleMemberShortArrAcceptDeffieldAnnotations$$},
		{"SingleMemberIntArrAcceptDef", "LUniTest/UnitTest$TestType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnitTest$TestType, SingleMemberIntArrAcceptDef), SingleMemberIntArrAcceptDeffieldAnnotations$$},
		{"SingleMemberLongArrAcceptDef", "LUniTest/UnitTest$TestType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnitTest$TestType, SingleMemberLongArrAcceptDef), SingleMemberLongArrAcceptDeffieldAnnotations$$},
		{"SingleMemberCharArrAcceptDef", "LUniTest/UnitTest$TestType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnitTest$TestType, SingleMemberCharArrAcceptDef), SingleMemberCharArrAcceptDeffieldAnnotations$$},
		{"SingleMemberFloatArrAcceptDef", "LUniTest/UnitTest$TestType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnitTest$TestType, SingleMemberFloatArrAcceptDef), SingleMemberFloatArrAcceptDeffieldAnnotations$$},
		{"SingleMemberDoubleArrAcceptDef", "LUniTest/UnitTest$TestType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnitTest$TestType, SingleMemberDoubleArrAcceptDef), SingleMemberDoubleArrAcceptDeffieldAnnotations$$},
		{"SingleMemberBooleanArrAcceptDef", "LUniTest/UnitTest$TestType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnitTest$TestType, SingleMemberBooleanArrAcceptDef), SingleMemberBooleanArrAcceptDeffieldAnnotations$$},
		{"SingleMemberStringArrAcceptDef", "LUniTest/UnitTest$TestType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnitTest$TestType, SingleMemberStringArrAcceptDef), SingleMemberStringArrAcceptDeffieldAnnotations$$},
		{"SingleMemberClassArrAcceptDef", "LUniTest/UnitTest$TestType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnitTest$TestType, SingleMemberClassArrAcceptDef), SingleMemberClassArrAcceptDeffieldAnnotations$$},
		{"SingleMemberEnumArrAcceptDef", "LUniTest/UnitTest$TestType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnitTest$TestType, SingleMemberEnumArrAcceptDef), SingleMemberEnumArrAcceptDeffieldAnnotations$$},
		{"$VALUES", "[LUniTest/UnitTest$TestType;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(UnitTest$TestType, $VALUES)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"$values", "()[LUniTest/UnitTest$TestType;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(UnitTest$TestType, $values, $UnitTest$TestTypeArray*)},
		{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(UnitTest$TestType, init$, void, $String*, int32_t)},
		{"valueOf", "(Ljava/lang/String;)LUniTest/UnitTest$TestType;", nullptr, $PUBLIC | $STATIC, $staticMethod(UnitTest$TestType, valueOf, UnitTest$TestType*, $String*)},
		{"values", "()[LUniTest/UnitTest$TestType;", nullptr, $PUBLIC | $STATIC, $staticMethod(UnitTest$TestType, values, $UnitTest$TestTypeArray*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"UniTest.UnitTest$TestType", "UniTest.UnitTest", "TestType", $STATIC | $FINAL | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER | $ENUM,
		"UniTest.UnitTest$TestType",
		"java.lang.Enum",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Enum<LUniTest/UnitTest$TestType;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"UniTest.UnitTest"
	};
	$loadClass(UnitTest$TestType, name, initialize, &classInfo$$, UnitTest$TestType::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(UnitTest$TestType));
	});
	return class$;
}

$Class* UnitTest$TestType::class$ = nullptr;

} // UniTest