#include <AnnotationToStringTest$ArrayAnnotationHost.h>
#include <AnnotationToStringTest.h>
#include <java/lang/annotation/RetentionPolicy.h>
#include <jcpp.h>

using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

void AnnotationToStringTest$ArrayAnnotationHost::init$() {
}

AnnotationToStringTest$ArrayAnnotationHost::AnnotationToStringTest$ArrayAnnotationHost() {
}

$Class* AnnotationToStringTest$ArrayAnnotationHost::load$($String* name, bool initialize) {
	$NamedAttribute f0fieldAnnotations$$$namedAttribute[] = {
		{"value", 's', "@BooleanArray({true, false, true})"},
		{}
	};
	$Attribute $attribute[] = {
		{'Z', "true"},
		{'Z', "false"},
		{'Z', "true"},
		{'-'}
	};
	$NamedAttribute f0fieldAnnotations$$$namedAttribute$1[] = {
		{"value", '[', $attribute},
		{}
	};
	$CompoundAttribute f0fieldAnnotations$$[] = {
		{"LExpectedString;", f0fieldAnnotations$$$namedAttribute},
		{"LBooleanArray;", f0fieldAnnotations$$$namedAttribute$1},
		{}
	};
	$NamedAttribute f1fieldAnnotations$$$namedAttribute[] = {
		{"value", 's', "@FloatArray({3.0f, 4.0f, 0.0f/0.0f, -1.0f/0.0f, 1.0f/0.0f})"},
		{}
	};
	$Attribute $attribute$1[] = {
		{'F', "3.0"},
		{'F', "4.0"},
		{'F', "NaN"},
		{'F', "-Infinity"},
		{'F', "Infinity"},
		{'-'}
	};
	$NamedAttribute f1fieldAnnotations$$$namedAttribute$1[] = {
		{"value", '[', $attribute$1},
		{}
	};
	$CompoundAttribute f1fieldAnnotations$$[] = {
		{"LExpectedString;", f1fieldAnnotations$$$namedAttribute},
		{"LFloatArray;", f1fieldAnnotations$$$namedAttribute$1},
		{}
	};
	$NamedAttribute f2fieldAnnotations$$$namedAttribute[] = {
		{"value", 's', "@DoubleArray({1.0, 2.0, 0.0/0.0, 1.0/0.0, -1.0/0.0})"},
		{}
	};
	$Attribute $attribute$2[] = {
		{'D', "1.0"},
		{'D', "2.0"},
		{'D', "NaN"},
		{'D', "Infinity"},
		{'D', "-Infinity"},
		{'-'}
	};
	$NamedAttribute f2fieldAnnotations$$$namedAttribute$1[] = {
		{"value", '[', $attribute$2},
		{}
	};
	$CompoundAttribute f2fieldAnnotations$$[] = {
		{"LExpectedString;", f2fieldAnnotations$$$namedAttribute},
		{"LDoubleArray;", f2fieldAnnotations$$$namedAttribute$1},
		{}
	};
	$NamedAttribute f3fieldAnnotations$$$namedAttribute[] = {
		{"value", 's', "@ByteArray({(byte)0x0a, (byte)0x0b, (byte)0x0c})"},
		{}
	};
	$Attribute $attribute$3[] = {
		{'B', "10"},
		{'B', "11"},
		{'B', "12"},
		{'-'}
	};
	$NamedAttribute f3fieldAnnotations$$$namedAttribute$1[] = {
		{"value", '[', $attribute$3},
		{}
	};
	$CompoundAttribute f3fieldAnnotations$$[] = {
		{"LExpectedString;", f3fieldAnnotations$$$namedAttribute},
		{"LByteArray;", f3fieldAnnotations$$$namedAttribute$1},
		{}
	};
	$NamedAttribute f4fieldAnnotations$$$namedAttribute[] = {
		{"value", 's', "@ShortArray({0, 4, 5})"},
		{}
	};
	$Attribute $attribute$4[] = {
		{'S', "0"},
		{'S', "4"},
		{'S', "5"},
		{'-'}
	};
	$NamedAttribute f4fieldAnnotations$$$namedAttribute$1[] = {
		{"value", '[', $attribute$4},
		{}
	};
	$CompoundAttribute f4fieldAnnotations$$[] = {
		{"LExpectedString;", f4fieldAnnotations$$$namedAttribute},
		{"LShortArray;", f4fieldAnnotations$$$namedAttribute$1},
		{}
	};
	$NamedAttribute f5fieldAnnotations$$$namedAttribute[] = {
		{"value", 's', "@CharArray({\'a\', \'b\', \'c\', \'\\\'\'})"},
		{}
	};
	$Attribute $attribute$5[] = {
		{'C', "a"},
		{'C', "b"},
		{'C', "c"},
		{'C', "\'"},
		{'-'}
	};
	$NamedAttribute f5fieldAnnotations$$$namedAttribute$1[] = {
		{"value", '[', $attribute$5},
		{}
	};
	$CompoundAttribute f5fieldAnnotations$$[] = {
		{"LExpectedString;", f5fieldAnnotations$$$namedAttribute},
		{"LCharArray;", f5fieldAnnotations$$$namedAttribute$1},
		{}
	};
	$NamedAttribute f6fieldAnnotations$$$namedAttribute[] = {
		{"value", 's', "@IntArray({1})"},
		{}
	};
	$Attribute $attribute$6[] = {
		{'I', "1"},
		{'-'}
	};
	$NamedAttribute f6fieldAnnotations$$$namedAttribute$1[] = {
		{"value", '[', $attribute$6},
		{}
	};
	$CompoundAttribute f6fieldAnnotations$$[] = {
		{"LExpectedString;", f6fieldAnnotations$$$namedAttribute},
		{"LIntArray;", f6fieldAnnotations$$$namedAttribute$1},
		{}
	};
	$NamedAttribute f7fieldAnnotations$$$namedAttribute[] = {
		{"value", 's', "@LongArray({-9223372036854775808L, -2147483649L, -2147483648L, -2147483647L, 2147483648L, 9223372036854775807L})"},
		{}
	};
	$Attribute $attribute$7[] = {
		{'J', "-9223372036854775808"},
		{'J', "-2147483649"},
		{'J', "-2147483648"},
		{'J', "-2147483647"},
		{'J', "2147483648"},
		{'J', "9223372036854775807"},
		{'-'}
	};
	$NamedAttribute f7fieldAnnotations$$$namedAttribute$1[] = {
		{"value", '[', $attribute$7},
		{}
	};
	$CompoundAttribute f7fieldAnnotations$$[] = {
		{"LExpectedString;", f7fieldAnnotations$$$namedAttribute},
		{"LLongArray;", f7fieldAnnotations$$$namedAttribute$1},
		{}
	};
	$NamedAttribute f8fieldAnnotations$$$namedAttribute[] = {
		{"value", 's', "@StringArray({\"A\", \"B\", \"C\", \"\\\"Quote\\\"\"})"},
		{}
	};
	$Attribute $attribute$8[] = {
		{'s', "A"},
		{'s', "B"},
		{'s', "C"},
		{'s', "\"Quote\""},
		{'-'}
	};
	$NamedAttribute f8fieldAnnotations$$$namedAttribute$1[] = {
		{"value", '[', $attribute$8},
		{}
	};
	$CompoundAttribute f8fieldAnnotations$$[] = {
		{"LExpectedString;", f8fieldAnnotations$$$namedAttribute},
		{"LStringArray;", f8fieldAnnotations$$$namedAttribute$1},
		{}
	};
	$NamedAttribute f9fieldAnnotations$$$namedAttribute[] = {
		{"value", 's', "@ClassArray({int.class, Obj[].class})"},
		{}
	};
	$Attribute $attribute$9[] = {
		{'c', "I"},
		{'c', "[LObj;"},
		{'-'}
	};
	$NamedAttribute f9fieldAnnotations$$$namedAttribute$1[] = {
		{"value", '[', $attribute$9},
		{}
	};
	$CompoundAttribute f9fieldAnnotations$$[] = {
		{"LExpectedString;", f9fieldAnnotations$$$namedAttribute},
		{"LClassArray;", f9fieldAnnotations$$$namedAttribute$1},
		{}
	};
	$NamedAttribute f10fieldAnnotations$$$namedAttribute[] = {
		{"value", 's', "@EnumArray({SOURCE})"},
		{}
	};
	$Attribute $attribute$10[] = {
		{'e', "Ljava/lang/annotation/RetentionPolicy; SOURCE"},
		{'-'}
	};
	$NamedAttribute f10fieldAnnotations$$$namedAttribute$1[] = {
		{"value", '[', $attribute$10},
		{}
	};
	$CompoundAttribute f10fieldAnnotations$$[] = {
		{"LExpectedString;", f10fieldAnnotations$$$namedAttribute},
		{"LEnumArray;", f10fieldAnnotations$$$namedAttribute$1},
		{}
	};
	$FieldInfo fieldInfos$$[] = {
		{"f0", "[Z", nullptr, $PUBLIC, $field(AnnotationToStringTest$ArrayAnnotationHost, f0), f0fieldAnnotations$$},
		{"f1", "[F", nullptr, $PUBLIC, $field(AnnotationToStringTest$ArrayAnnotationHost, f1), f1fieldAnnotations$$},
		{"f2", "[D", nullptr, $PUBLIC, $field(AnnotationToStringTest$ArrayAnnotationHost, f2), f2fieldAnnotations$$},
		{"f3", "[B", nullptr, $PUBLIC, $field(AnnotationToStringTest$ArrayAnnotationHost, f3), f3fieldAnnotations$$},
		{"f4", "[S", nullptr, $PUBLIC, $field(AnnotationToStringTest$ArrayAnnotationHost, f4), f4fieldAnnotations$$},
		{"f5", "[C", nullptr, $PUBLIC, $field(AnnotationToStringTest$ArrayAnnotationHost, f5), f5fieldAnnotations$$},
		{"f6", "[I", nullptr, $PUBLIC, $field(AnnotationToStringTest$ArrayAnnotationHost, f6), f6fieldAnnotations$$},
		{"f7", "[J", nullptr, $PUBLIC, $field(AnnotationToStringTest$ArrayAnnotationHost, f7), f7fieldAnnotations$$},
		{"f8", "[Ljava/lang/String;", nullptr, $PUBLIC, $field(AnnotationToStringTest$ArrayAnnotationHost, f8), f8fieldAnnotations$$},
		{"f9", "[Ljava/lang/Class;", "[Ljava/lang/Class<*>;", $PUBLIC, $field(AnnotationToStringTest$ArrayAnnotationHost, f9), f9fieldAnnotations$$},
		{"f10", "[Ljava/lang/annotation/RetentionPolicy;", nullptr, $PUBLIC, $field(AnnotationToStringTest$ArrayAnnotationHost, f10), f10fieldAnnotations$$},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(AnnotationToStringTest$ArrayAnnotationHost, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"AnnotationToStringTest$ArrayAnnotationHost", "AnnotationToStringTest", "ArrayAnnotationHost", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"AnnotationToStringTest$ArrayAnnotationHost",
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
		"AnnotationToStringTest"
	};
	$loadClass(AnnotationToStringTest$ArrayAnnotationHost, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AnnotationToStringTest$ArrayAnnotationHost);
	});
	return class$;
}

$Class* AnnotationToStringTest$ArrayAnnotationHost::class$ = nullptr;