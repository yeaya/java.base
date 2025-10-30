#include <AnnotationToStringTest$ArrayAnnotationHost.h>

#include <AnnotationToStringTest.h>
#include <java/lang/annotation/RetentionPolicy.h>
#include <jcpp.h>

using $AnnotationToStringTest = ::AnnotationToStringTest;
using $RetentionPolicyArray = $Array<::java::lang::annotation::RetentionPolicy>;
using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $RetentionPolicy = ::java::lang::annotation::RetentionPolicy;

$NamedAttribute AnnotationToStringTest$ArrayAnnotationHost_Attribute_var$0[] = {
	{"value", 's', "@BooleanArray({true, false, true})"},
	{}
};

$Attribute AnnotationToStringTest$ArrayAnnotationHost_Attribute_var$2[] = {
	{'Z', "true"},
	{'Z', "false"},
	{'Z', "true"},
	{'-'}
};

$NamedAttribute AnnotationToStringTest$ArrayAnnotationHost_Attribute_var$1[] = {
	{"value", '[', AnnotationToStringTest$ArrayAnnotationHost_Attribute_var$2},
	{}
};

$CompoundAttribute _AnnotationToStringTest$ArrayAnnotationHost_FieldAnnotations_f0[] = {
	{"LExpectedString;", AnnotationToStringTest$ArrayAnnotationHost_Attribute_var$0},
	{"LBooleanArray;", AnnotationToStringTest$ArrayAnnotationHost_Attribute_var$1},
	{}
};

$NamedAttribute AnnotationToStringTest$ArrayAnnotationHost_Attribute_var$3[] = {
	{"value", 's', "@FloatArray({3.0f, 4.0f, 0.0f/0.0f, -1.0f/0.0f, 1.0f/0.0f})"},
	{}
};

$Attribute AnnotationToStringTest$ArrayAnnotationHost_Attribute_var$5[] = {
	{'F', "3.0"},
	{'F', "4.0"},
	{'F', "NaN"},
	{'F', "-Infinity"},
	{'F', "Infinity"},
	{'-'}
};

$NamedAttribute AnnotationToStringTest$ArrayAnnotationHost_Attribute_var$4[] = {
	{"value", '[', AnnotationToStringTest$ArrayAnnotationHost_Attribute_var$5},
	{}
};

$CompoundAttribute _AnnotationToStringTest$ArrayAnnotationHost_FieldAnnotations_f1[] = {
	{"LExpectedString;", AnnotationToStringTest$ArrayAnnotationHost_Attribute_var$3},
	{"LFloatArray;", AnnotationToStringTest$ArrayAnnotationHost_Attribute_var$4},
	{}
};

$NamedAttribute AnnotationToStringTest$ArrayAnnotationHost_Attribute_var$6[] = {
	{"value", 's', "@DoubleArray({1.0, 2.0, 0.0/0.0, 1.0/0.0, -1.0/0.0})"},
	{}
};

$Attribute AnnotationToStringTest$ArrayAnnotationHost_Attribute_var$8[] = {
	{'D', "1.0"},
	{'D', "2.0"},
	{'D', "NaN"},
	{'D', "Infinity"},
	{'D', "-Infinity"},
	{'-'}
};

$NamedAttribute AnnotationToStringTest$ArrayAnnotationHost_Attribute_var$7[] = {
	{"value", '[', AnnotationToStringTest$ArrayAnnotationHost_Attribute_var$8},
	{}
};

$CompoundAttribute _AnnotationToStringTest$ArrayAnnotationHost_FieldAnnotations_f2[] = {
	{"LExpectedString;", AnnotationToStringTest$ArrayAnnotationHost_Attribute_var$6},
	{"LDoubleArray;", AnnotationToStringTest$ArrayAnnotationHost_Attribute_var$7},
	{}
};

$NamedAttribute AnnotationToStringTest$ArrayAnnotationHost_Attribute_var$9[] = {
	{"value", 's', "@ByteArray({(byte)0x0a, (byte)0x0b, (byte)0x0c})"},
	{}
};

$Attribute AnnotationToStringTest$ArrayAnnotationHost_Attribute_var$11[] = {
	{'B', "10"},
	{'B', "11"},
	{'B', "12"},
	{'-'}
};

$NamedAttribute AnnotationToStringTest$ArrayAnnotationHost_Attribute_var$10[] = {
	{"value", '[', AnnotationToStringTest$ArrayAnnotationHost_Attribute_var$11},
	{}
};

$CompoundAttribute _AnnotationToStringTest$ArrayAnnotationHost_FieldAnnotations_f3[] = {
	{"LExpectedString;", AnnotationToStringTest$ArrayAnnotationHost_Attribute_var$9},
	{"LByteArray;", AnnotationToStringTest$ArrayAnnotationHost_Attribute_var$10},
	{}
};

$NamedAttribute AnnotationToStringTest$ArrayAnnotationHost_Attribute_var$12[] = {
	{"value", 's', "@ShortArray({0, 4, 5})"},
	{}
};

$Attribute AnnotationToStringTest$ArrayAnnotationHost_Attribute_var$14[] = {
	{'S', "0"},
	{'S', "4"},
	{'S', "5"},
	{'-'}
};

$NamedAttribute AnnotationToStringTest$ArrayAnnotationHost_Attribute_var$13[] = {
	{"value", '[', AnnotationToStringTest$ArrayAnnotationHost_Attribute_var$14},
	{}
};

$CompoundAttribute _AnnotationToStringTest$ArrayAnnotationHost_FieldAnnotations_f4[] = {
	{"LExpectedString;", AnnotationToStringTest$ArrayAnnotationHost_Attribute_var$12},
	{"LShortArray;", AnnotationToStringTest$ArrayAnnotationHost_Attribute_var$13},
	{}
};

$NamedAttribute AnnotationToStringTest$ArrayAnnotationHost_Attribute_var$15[] = {
	{"value", 's', "@CharArray({\'a\', \'b\', \'c\', \'\\\'\'})"},
	{}
};

$Attribute AnnotationToStringTest$ArrayAnnotationHost_Attribute_var$17[] = {
	{'C', "a"},
	{'C', "b"},
	{'C', "c"},
	{'C', "\'"},
	{'-'}
};

$NamedAttribute AnnotationToStringTest$ArrayAnnotationHost_Attribute_var$16[] = {
	{"value", '[', AnnotationToStringTest$ArrayAnnotationHost_Attribute_var$17},
	{}
};

$CompoundAttribute _AnnotationToStringTest$ArrayAnnotationHost_FieldAnnotations_f5[] = {
	{"LExpectedString;", AnnotationToStringTest$ArrayAnnotationHost_Attribute_var$15},
	{"LCharArray;", AnnotationToStringTest$ArrayAnnotationHost_Attribute_var$16},
	{}
};

$NamedAttribute AnnotationToStringTest$ArrayAnnotationHost_Attribute_var$18[] = {
	{"value", 's', "@IntArray({1})"},
	{}
};

$Attribute AnnotationToStringTest$ArrayAnnotationHost_Attribute_var$20[] = {
	{'I', "1"},
	{'-'}
};

$NamedAttribute AnnotationToStringTest$ArrayAnnotationHost_Attribute_var$19[] = {
	{"value", '[', AnnotationToStringTest$ArrayAnnotationHost_Attribute_var$20},
	{}
};

$CompoundAttribute _AnnotationToStringTest$ArrayAnnotationHost_FieldAnnotations_f6[] = {
	{"LExpectedString;", AnnotationToStringTest$ArrayAnnotationHost_Attribute_var$18},
	{"LIntArray;", AnnotationToStringTest$ArrayAnnotationHost_Attribute_var$19},
	{}
};

$NamedAttribute AnnotationToStringTest$ArrayAnnotationHost_Attribute_var$21[] = {
	{"value", 's', "@LongArray({-9223372036854775808L, -2147483649L, -2147483648L, -2147483647L, 2147483648L, 9223372036854775807L})"},
	{}
};

$Attribute AnnotationToStringTest$ArrayAnnotationHost_Attribute_var$23[] = {
	{'J', "-9223372036854775808"},
	{'J', "-2147483649"},
	{'J', "-2147483648"},
	{'J', "-2147483647"},
	{'J', "2147483648"},
	{'J', "9223372036854775807"},
	{'-'}
};

$NamedAttribute AnnotationToStringTest$ArrayAnnotationHost_Attribute_var$22[] = {
	{"value", '[', AnnotationToStringTest$ArrayAnnotationHost_Attribute_var$23},
	{}
};

$CompoundAttribute _AnnotationToStringTest$ArrayAnnotationHost_FieldAnnotations_f7[] = {
	{"LExpectedString;", AnnotationToStringTest$ArrayAnnotationHost_Attribute_var$21},
	{"LLongArray;", AnnotationToStringTest$ArrayAnnotationHost_Attribute_var$22},
	{}
};

$NamedAttribute AnnotationToStringTest$ArrayAnnotationHost_Attribute_var$24[] = {
	{"value", 's', "@StringArray({\"A\", \"B\", \"C\", \"\\\"Quote\\\"\"})"},
	{}
};

$Attribute AnnotationToStringTest$ArrayAnnotationHost_Attribute_var$26[] = {
	{'s', "A"},
	{'s', "B"},
	{'s', "C"},
	{'s', "\"Quote\""},
	{'-'}
};

$NamedAttribute AnnotationToStringTest$ArrayAnnotationHost_Attribute_var$25[] = {
	{"value", '[', AnnotationToStringTest$ArrayAnnotationHost_Attribute_var$26},
	{}
};

$CompoundAttribute _AnnotationToStringTest$ArrayAnnotationHost_FieldAnnotations_f8[] = {
	{"LExpectedString;", AnnotationToStringTest$ArrayAnnotationHost_Attribute_var$24},
	{"LStringArray;", AnnotationToStringTest$ArrayAnnotationHost_Attribute_var$25},
	{}
};

$NamedAttribute AnnotationToStringTest$ArrayAnnotationHost_Attribute_var$27[] = {
	{"value", 's', "@ClassArray({int.class, Obj[].class})"},
	{}
};

$Attribute AnnotationToStringTest$ArrayAnnotationHost_Attribute_var$29[] = {
	{'c', "I"},
	{'c', "[LObj;"},
	{'-'}
};

$NamedAttribute AnnotationToStringTest$ArrayAnnotationHost_Attribute_var$28[] = {
	{"value", '[', AnnotationToStringTest$ArrayAnnotationHost_Attribute_var$29},
	{}
};

$CompoundAttribute _AnnotationToStringTest$ArrayAnnotationHost_FieldAnnotations_f9[] = {
	{"LExpectedString;", AnnotationToStringTest$ArrayAnnotationHost_Attribute_var$27},
	{"LClassArray;", AnnotationToStringTest$ArrayAnnotationHost_Attribute_var$28},
	{}
};

$NamedAttribute AnnotationToStringTest$ArrayAnnotationHost_Attribute_var$30[] = {
	{"value", 's', "@EnumArray({SOURCE})"},
	{}
};

$Attribute AnnotationToStringTest$ArrayAnnotationHost_Attribute_var$32[] = {
	{'e', "Ljava/lang/annotation/RetentionPolicy; SOURCE"},
	{'-'}
};

$NamedAttribute AnnotationToStringTest$ArrayAnnotationHost_Attribute_var$31[] = {
	{"value", '[', AnnotationToStringTest$ArrayAnnotationHost_Attribute_var$32},
	{}
};

$CompoundAttribute _AnnotationToStringTest$ArrayAnnotationHost_FieldAnnotations_f10[] = {
	{"LExpectedString;", AnnotationToStringTest$ArrayAnnotationHost_Attribute_var$30},
	{"LEnumArray;", AnnotationToStringTest$ArrayAnnotationHost_Attribute_var$31},
	{}
};

$FieldInfo _AnnotationToStringTest$ArrayAnnotationHost_FieldInfo_[] = {
	{"f0", "[Z", nullptr, $PUBLIC, $field(AnnotationToStringTest$ArrayAnnotationHost, f0), _AnnotationToStringTest$ArrayAnnotationHost_FieldAnnotations_f0},
	{"f1", "[F", nullptr, $PUBLIC, $field(AnnotationToStringTest$ArrayAnnotationHost, f1), _AnnotationToStringTest$ArrayAnnotationHost_FieldAnnotations_f1},
	{"f2", "[D", nullptr, $PUBLIC, $field(AnnotationToStringTest$ArrayAnnotationHost, f2), _AnnotationToStringTest$ArrayAnnotationHost_FieldAnnotations_f2},
	{"f3", "[B", nullptr, $PUBLIC, $field(AnnotationToStringTest$ArrayAnnotationHost, f3), _AnnotationToStringTest$ArrayAnnotationHost_FieldAnnotations_f3},
	{"f4", "[S", nullptr, $PUBLIC, $field(AnnotationToStringTest$ArrayAnnotationHost, f4), _AnnotationToStringTest$ArrayAnnotationHost_FieldAnnotations_f4},
	{"f5", "[C", nullptr, $PUBLIC, $field(AnnotationToStringTest$ArrayAnnotationHost, f5), _AnnotationToStringTest$ArrayAnnotationHost_FieldAnnotations_f5},
	{"f6", "[I", nullptr, $PUBLIC, $field(AnnotationToStringTest$ArrayAnnotationHost, f6), _AnnotationToStringTest$ArrayAnnotationHost_FieldAnnotations_f6},
	{"f7", "[J", nullptr, $PUBLIC, $field(AnnotationToStringTest$ArrayAnnotationHost, f7), _AnnotationToStringTest$ArrayAnnotationHost_FieldAnnotations_f7},
	{"f8", "[Ljava/lang/String;", nullptr, $PUBLIC, $field(AnnotationToStringTest$ArrayAnnotationHost, f8), _AnnotationToStringTest$ArrayAnnotationHost_FieldAnnotations_f8},
	{"f9", "[Ljava/lang/Class;", "[Ljava/lang/Class<*>;", $PUBLIC, $field(AnnotationToStringTest$ArrayAnnotationHost, f9), _AnnotationToStringTest$ArrayAnnotationHost_FieldAnnotations_f9},
	{"f10", "[Ljava/lang/annotation/RetentionPolicy;", nullptr, $PUBLIC, $field(AnnotationToStringTest$ArrayAnnotationHost, f10), _AnnotationToStringTest$ArrayAnnotationHost_FieldAnnotations_f10},
	{}
};

$MethodInfo _AnnotationToStringTest$ArrayAnnotationHost_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(AnnotationToStringTest$ArrayAnnotationHost::*)()>(&AnnotationToStringTest$ArrayAnnotationHost::init$))},
	{}
};

$InnerClassInfo _AnnotationToStringTest$ArrayAnnotationHost_InnerClassesInfo_[] = {
	{"AnnotationToStringTest$ArrayAnnotationHost", "AnnotationToStringTest", "ArrayAnnotationHost", $STATIC},
	{}
};

$ClassInfo _AnnotationToStringTest$ArrayAnnotationHost_ClassInfo_ = {
	$ACC_SUPER,
	"AnnotationToStringTest$ArrayAnnotationHost",
	"java.lang.Object",
	nullptr,
	_AnnotationToStringTest$ArrayAnnotationHost_FieldInfo_,
	_AnnotationToStringTest$ArrayAnnotationHost_MethodInfo_,
	nullptr,
	nullptr,
	_AnnotationToStringTest$ArrayAnnotationHost_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"AnnotationToStringTest"
};

$Object* allocate$AnnotationToStringTest$ArrayAnnotationHost($Class* clazz) {
	return $of($alloc(AnnotationToStringTest$ArrayAnnotationHost));
}

void AnnotationToStringTest$ArrayAnnotationHost::init$() {
}

AnnotationToStringTest$ArrayAnnotationHost::AnnotationToStringTest$ArrayAnnotationHost() {
}

$Class* AnnotationToStringTest$ArrayAnnotationHost::load$($String* name, bool initialize) {
	$loadClass(AnnotationToStringTest$ArrayAnnotationHost, name, initialize, &_AnnotationToStringTest$ArrayAnnotationHost_ClassInfo_, allocate$AnnotationToStringTest$ArrayAnnotationHost);
	return class$;
}

$Class* AnnotationToStringTest$ArrayAnnotationHost::class$ = nullptr;