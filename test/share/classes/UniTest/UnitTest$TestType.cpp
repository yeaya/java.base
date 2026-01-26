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

$NamedAttribute UnitTest$TestType_Attribute_var$2[] = {
	{"x", 'I', "1"},
	{"y", 'I', "2"},
	{}
};

$CompoundAttribute UnitTest$TestType_CompoundAttribute_var$1 = {
"LUniTest/Point;", UnitTest$TestType_Attribute_var$2
};

$NamedAttribute UnitTest$TestType_Attribute_var$0[] = {
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
	{"a", '@', &UnitTest$TestType_CompoundAttribute_var$1},
	{}
};

$CompoundAttribute _UnitTest$TestType_FieldAnnotations_scalarTypesField[] = {
	{"LUniTest/ScalarTypes;", UnitTest$TestType_Attribute_var$0},
	{}
};

$CompoundAttribute _UnitTest$TestType_FieldAnnotations_scalarTypesAcceptDefaultField[] = {
	{"LUniTest/ScalarTypesWithDefault;", nullptr},
	{}
};

$NamedAttribute UnitTest$TestType_Attribute_var$3[] = {
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

$CompoundAttribute _UnitTest$TestType_FieldAnnotations_scalarTypesOverrideDefaultField[] = {
	{"LUniTest/ScalarTypesWithDefault;", UnitTest$TestType_Attribute_var$3},
	{}
};

$Attribute UnitTest$TestType_Attribute_var$5[] = {
	{'-'}
};

$Attribute UnitTest$TestType_Attribute_var$6[] = {
	{'-'}
};

$Attribute UnitTest$TestType_Attribute_var$7[] = {
	{'-'}
};

$Attribute UnitTest$TestType_Attribute_var$8[] = {
	{'-'}
};

$Attribute UnitTest$TestType_Attribute_var$9[] = {
	{'-'}
};

$Attribute UnitTest$TestType_Attribute_var$10[] = {
	{'-'}
};

$Attribute UnitTest$TestType_Attribute_var$11[] = {
	{'-'}
};

$Attribute UnitTest$TestType_Attribute_var$12[] = {
	{'-'}
};

$Attribute UnitTest$TestType_Attribute_var$13[] = {
	{'-'}
};

$Attribute UnitTest$TestType_Attribute_var$14[] = {
	{'-'}
};

$Attribute UnitTest$TestType_Attribute_var$15[] = {
	{'-'}
};

$Attribute UnitTest$TestType_Attribute_var$16[] = {
	{'-'}
};

$NamedAttribute UnitTest$TestType_Attribute_var$4[] = {
	{"b", '[', UnitTest$TestType_Attribute_var$5},
	{"s", '[', UnitTest$TestType_Attribute_var$6},
	{"i", '[', UnitTest$TestType_Attribute_var$7},
	{"l", '[', UnitTest$TestType_Attribute_var$8},
	{"c", '[', UnitTest$TestType_Attribute_var$9},
	{"f", '[', UnitTest$TestType_Attribute_var$10},
	{"d", '[', UnitTest$TestType_Attribute_var$11},
	{"bool", '[', UnitTest$TestType_Attribute_var$12},
	{"str", '[', UnitTest$TestType_Attribute_var$13},
	{"cls", '[', UnitTest$TestType_Attribute_var$14},
	{"e", '[', UnitTest$TestType_Attribute_var$15},
	{"a", '[', UnitTest$TestType_Attribute_var$16},
	{}
};

$CompoundAttribute _UnitTest$TestType_FieldAnnotations_emptyArrayTypesField[] = {
	{"LUniTest/ArrayTypes;", UnitTest$TestType_Attribute_var$4},
	{}
};

$Attribute UnitTest$TestType_Attribute_var$18[] = {
	{'B', "1"},
	{'-'}
};

$Attribute UnitTest$TestType_Attribute_var$19[] = {
	{'S', "2"},
	{'-'}
};

$Attribute UnitTest$TestType_Attribute_var$20[] = {
	{'I', "3"},
	{'-'}
};

$Attribute UnitTest$TestType_Attribute_var$21[] = {
	{'J', "4"},
	{'-'}
};

$Attribute UnitTest$TestType_Attribute_var$22[] = {
	{'C', "5"},
	{'-'}
};

$Attribute UnitTest$TestType_Attribute_var$23[] = {
	{'F', "6.0"},
	{'-'}
};

$Attribute UnitTest$TestType_Attribute_var$24[] = {
	{'D', "7.0"},
	{'-'}
};

$Attribute UnitTest$TestType_Attribute_var$25[] = {
	{'Z', "true"},
	{'-'}
};

$Attribute UnitTest$TestType_Attribute_var$26[] = {
	{'s', "custom"},
	{'-'}
};

$Attribute UnitTest$TestType_Attribute_var$27[] = {
	{'c', "Ljava/util/Map;"},
	{'-'}
};

$Attribute UnitTest$TestType_Attribute_var$28[] = {
	{'e', "LUniTest/Stooge; MOE"},
	{'-'}
};

$NamedAttribute UnitTest$TestType_Attribute_var$31[] = {
	{"x", 'I', "1"},
	{"y", 'I', "2"},
	{}
};

$CompoundAttribute UnitTest$TestType_CompoundAttribute_var$30 = {
"LUniTest/Point;", UnitTest$TestType_Attribute_var$31
};

$Attribute UnitTest$TestType_Attribute_var$29[] = {
	{'@', &UnitTest$TestType_CompoundAttribute_var$30},
	{'-'}
};

$NamedAttribute UnitTest$TestType_Attribute_var$17[] = {
	{"b", '[', UnitTest$TestType_Attribute_var$18},
	{"s", '[', UnitTest$TestType_Attribute_var$19},
	{"i", '[', UnitTest$TestType_Attribute_var$20},
	{"l", '[', UnitTest$TestType_Attribute_var$21},
	{"c", '[', UnitTest$TestType_Attribute_var$22},
	{"f", '[', UnitTest$TestType_Attribute_var$23},
	{"d", '[', UnitTest$TestType_Attribute_var$24},
	{"bool", '[', UnitTest$TestType_Attribute_var$25},
	{"str", '[', UnitTest$TestType_Attribute_var$26},
	{"cls", '[', UnitTest$TestType_Attribute_var$27},
	{"e", '[', UnitTest$TestType_Attribute_var$28},
	{"a", '[', UnitTest$TestType_Attribute_var$29},
	{}
};

$CompoundAttribute _UnitTest$TestType_FieldAnnotations_singleElementArrayTypesField[] = {
	{"LUniTest/ArrayTypes;", UnitTest$TestType_Attribute_var$17},
	{}
};

$Attribute UnitTest$TestType_Attribute_var$33[] = {
	{'B', "1"},
	{'B', "2"},
	{'-'}
};

$Attribute UnitTest$TestType_Attribute_var$34[] = {
	{'S', "2"},
	{'S', "3"},
	{'-'}
};

$Attribute UnitTest$TestType_Attribute_var$35[] = {
	{'I', "3"},
	{'I', "4"},
	{'-'}
};

$Attribute UnitTest$TestType_Attribute_var$36[] = {
	{'J', "4"},
	{'J', "5"},
	{'-'}
};

$Attribute UnitTest$TestType_Attribute_var$37[] = {
	{'C', "5"},
	{'C', "6"},
	{'-'}
};

$Attribute UnitTest$TestType_Attribute_var$38[] = {
	{'F', "6.0"},
	{'F', "7.0"},
	{'-'}
};

$Attribute UnitTest$TestType_Attribute_var$39[] = {
	{'D', "7.0"},
	{'D', "8.0"},
	{'-'}
};

$Attribute UnitTest$TestType_Attribute_var$40[] = {
	{'Z', "true"},
	{'Z', "false"},
	{'-'}
};

$Attribute UnitTest$TestType_Attribute_var$41[] = {
	{'s', "custom"},
	{'s', "paint"},
	{'-'}
};

$Attribute UnitTest$TestType_Attribute_var$42[] = {
	{'c', "Ljava/util/Map;"},
	{'c', "Ljava/util/Set;"},
	{'-'}
};

$Attribute UnitTest$TestType_Attribute_var$43[] = {
	{'e', "LUniTest/Stooge; MOE"},
	{'e', "LUniTest/Stooge; CURLY"},
	{'-'}
};

$NamedAttribute UnitTest$TestType_Attribute_var$46[] = {
	{"x", 'I', "1"},
	{"y", 'I', "2"},
	{}
};

$CompoundAttribute UnitTest$TestType_CompoundAttribute_var$45 = {
"LUniTest/Point;", UnitTest$TestType_Attribute_var$46
};

$NamedAttribute UnitTest$TestType_Attribute_var$48[] = {
	{"x", 'I', "3"},
	{"y", 'I', "4"},
	{}
};

$CompoundAttribute UnitTest$TestType_CompoundAttribute_var$47 = {
"LUniTest/Point;", UnitTest$TestType_Attribute_var$48
};

$Attribute UnitTest$TestType_Attribute_var$44[] = {
	{'@', &UnitTest$TestType_CompoundAttribute_var$45},
	{'@', &UnitTest$TestType_CompoundAttribute_var$47},
	{'-'}
};

$NamedAttribute UnitTest$TestType_Attribute_var$32[] = {
	{"b", '[', UnitTest$TestType_Attribute_var$33},
	{"s", '[', UnitTest$TestType_Attribute_var$34},
	{"i", '[', UnitTest$TestType_Attribute_var$35},
	{"l", '[', UnitTest$TestType_Attribute_var$36},
	{"c", '[', UnitTest$TestType_Attribute_var$37},
	{"f", '[', UnitTest$TestType_Attribute_var$38},
	{"d", '[', UnitTest$TestType_Attribute_var$39},
	{"bool", '[', UnitTest$TestType_Attribute_var$40},
	{"str", '[', UnitTest$TestType_Attribute_var$41},
	{"cls", '[', UnitTest$TestType_Attribute_var$42},
	{"e", '[', UnitTest$TestType_Attribute_var$43},
	{"a", '[', UnitTest$TestType_Attribute_var$44},
	{}
};

$CompoundAttribute _UnitTest$TestType_FieldAnnotations_twoElementArrayTypesField[] = {
	{"LUniTest/ArrayTypes;", UnitTest$TestType_Attribute_var$32},
	{}
};

$CompoundAttribute _UnitTest$TestType_FieldAnnotations_arrayTypesAcceptDefaultField[] = {
	{"LUniTest/ArrayTypesWithDefault;", nullptr},
	{}
};

$Attribute UnitTest$TestType_Attribute_var$50[] = {
	{'B', "1"},
	{'-'}
};

$Attribute UnitTest$TestType_Attribute_var$51[] = {
	{'S', "2"},
	{'-'}
};

$Attribute UnitTest$TestType_Attribute_var$52[] = {
	{'I', "3"},
	{'-'}
};

$Attribute UnitTest$TestType_Attribute_var$53[] = {
	{'J', "4"},
	{'-'}
};

$Attribute UnitTest$TestType_Attribute_var$54[] = {
	{'C', "5"},
	{'-'}
};

$Attribute UnitTest$TestType_Attribute_var$55[] = {
	{'F', "6.0"},
	{'-'}
};

$Attribute UnitTest$TestType_Attribute_var$56[] = {
	{'D', "7.0"},
	{'-'}
};

$Attribute UnitTest$TestType_Attribute_var$57[] = {
	{'Z', "true"},
	{'-'}
};

$Attribute UnitTest$TestType_Attribute_var$58[] = {
	{'s', "custom"},
	{'-'}
};

$Attribute UnitTest$TestType_Attribute_var$59[] = {
	{'c', "Ljava/util/Map;"},
	{'-'}
};

$Attribute UnitTest$TestType_Attribute_var$60[] = {
	{'e', "LUniTest/Stooge; MOE"},
	{'-'}
};

$NamedAttribute UnitTest$TestType_Attribute_var$63[] = {
	{"x", 'I', "1"},
	{"y", 'I', "2"},
	{}
};

$CompoundAttribute UnitTest$TestType_CompoundAttribute_var$62 = {
"LUniTest/Point;", UnitTest$TestType_Attribute_var$63
};

$Attribute UnitTest$TestType_Attribute_var$61[] = {
	{'@', &UnitTest$TestType_CompoundAttribute_var$62},
	{'-'}
};

$NamedAttribute UnitTest$TestType_Attribute_var$49[] = {
	{"b", '[', UnitTest$TestType_Attribute_var$50},
	{"s", '[', UnitTest$TestType_Attribute_var$51},
	{"i", '[', UnitTest$TestType_Attribute_var$52},
	{"l", '[', UnitTest$TestType_Attribute_var$53},
	{"c", '[', UnitTest$TestType_Attribute_var$54},
	{"f", '[', UnitTest$TestType_Attribute_var$55},
	{"d", '[', UnitTest$TestType_Attribute_var$56},
	{"bool", '[', UnitTest$TestType_Attribute_var$57},
	{"str", '[', UnitTest$TestType_Attribute_var$58},
	{"cls", '[', UnitTest$TestType_Attribute_var$59},
	{"e", '[', UnitTest$TestType_Attribute_var$60},
	{"a", '[', UnitTest$TestType_Attribute_var$61},
	{}
};

$CompoundAttribute _UnitTest$TestType_FieldAnnotations_arrayTypesOverrideDefaultField[] = {
	{"LUniTest/ArrayTypesWithDefault;", UnitTest$TestType_Attribute_var$49},
	{}
};

$CompoundAttribute _UnitTest$TestType_FieldAnnotations_marker[] = {
	{"LUniTest/Marker;", nullptr},
	{}
};

$NamedAttribute UnitTest$TestType_Attribute_var$64[] = {
	{"value", 'B', "1"},
	{}
};

$CompoundAttribute _UnitTest$TestType_FieldAnnotations_SingleMemberByte[] = {
	{"LUniTest/SingleMemberByte;", UnitTest$TestType_Attribute_var$64},
	{}
};

$NamedAttribute UnitTest$TestType_Attribute_var$65[] = {
	{"value", 'S', "2"},
	{}
};

$CompoundAttribute _UnitTest$TestType_FieldAnnotations_SingleMemberShort[] = {
	{"LUniTest/SingleMemberShort;", UnitTest$TestType_Attribute_var$65},
	{}
};

$NamedAttribute UnitTest$TestType_Attribute_var$66[] = {
	{"value", 'I', "3"},
	{}
};

$CompoundAttribute _UnitTest$TestType_FieldAnnotations_SingleMemberInt[] = {
	{"LUniTest/SingleMemberInt;", UnitTest$TestType_Attribute_var$66},
	{}
};

$NamedAttribute UnitTest$TestType_Attribute_var$67[] = {
	{"value", 'J', "4"},
	{}
};

$CompoundAttribute _UnitTest$TestType_FieldAnnotations_SingleMemberLong[] = {
	{"LUniTest/SingleMemberLong;", UnitTest$TestType_Attribute_var$67},
	{}
};

$NamedAttribute UnitTest$TestType_Attribute_var$68[] = {
	{"value", 'C', "5"},
	{}
};

$CompoundAttribute _UnitTest$TestType_FieldAnnotations_SingleMemberChar[] = {
	{"LUniTest/SingleMemberChar;", UnitTest$TestType_Attribute_var$68},
	{}
};

$NamedAttribute UnitTest$TestType_Attribute_var$69[] = {
	{"value", 'F', "6.0"},
	{}
};

$CompoundAttribute _UnitTest$TestType_FieldAnnotations_SingleMemberFloat[] = {
	{"LUniTest/SingleMemberFloat;", UnitTest$TestType_Attribute_var$69},
	{}
};

$NamedAttribute UnitTest$TestType_Attribute_var$70[] = {
	{"value", 'D', "7.0"},
	{}
};

$CompoundAttribute _UnitTest$TestType_FieldAnnotations_SingleMemberDouble[] = {
	{"LUniTest/SingleMemberDouble;", UnitTest$TestType_Attribute_var$70},
	{}
};

$NamedAttribute UnitTest$TestType_Attribute_var$71[] = {
	{"value", 'Z', "true"},
	{}
};

$CompoundAttribute _UnitTest$TestType_FieldAnnotations_SingleMemberBoolean[] = {
	{"LUniTest/SingleMemberBoolean;", UnitTest$TestType_Attribute_var$71},
	{}
};

$NamedAttribute UnitTest$TestType_Attribute_var$72[] = {
	{"value", 's', "custom"},
	{}
};

$CompoundAttribute _UnitTest$TestType_FieldAnnotations_SingleMemberString[] = {
	{"LUniTest/SingleMemberString;", UnitTest$TestType_Attribute_var$72},
	{}
};

$NamedAttribute UnitTest$TestType_Attribute_var$73[] = {
	{"value", 'c', "Ljava/util/Map;"},
	{}
};

$CompoundAttribute _UnitTest$TestType_FieldAnnotations_SingleMemberClass[] = {
	{"LUniTest/SingleMemberClass;", UnitTest$TestType_Attribute_var$73},
	{}
};

$NamedAttribute UnitTest$TestType_Attribute_var$74[] = {
	{"value", 'e', "LUniTest/Stooge; MOE"},
	{}
};

$CompoundAttribute _UnitTest$TestType_FieldAnnotations_SingleMemberEnum[] = {
	{"LUniTest/SingleMemberEnum;", UnitTest$TestType_Attribute_var$74},
	{}
};

$NamedAttribute UnitTest$TestType_Attribute_var$75[] = {
	{"value", 'B', "1"},
	{}
};

$CompoundAttribute _UnitTest$TestType_FieldAnnotations_SingleMemberByteOvrdDef[] = {
	{"LUniTest/SingleMemberByteWithDef;", UnitTest$TestType_Attribute_var$75},
	{}
};

$NamedAttribute UnitTest$TestType_Attribute_var$76[] = {
	{"value", 'S', "2"},
	{}
};

$CompoundAttribute _UnitTest$TestType_FieldAnnotations_SingleMemberShortOvrdDef[] = {
	{"LUniTest/SingleMemberShortWithDef;", UnitTest$TestType_Attribute_var$76},
	{}
};

$NamedAttribute UnitTest$TestType_Attribute_var$77[] = {
	{"value", 'I', "3"},
	{}
};

$CompoundAttribute _UnitTest$TestType_FieldAnnotations_SingleMemberIntOvrdDef[] = {
	{"LUniTest/SingleMemberIntWithDef;", UnitTest$TestType_Attribute_var$77},
	{}
};

$NamedAttribute UnitTest$TestType_Attribute_var$78[] = {
	{"value", 'J', "4"},
	{}
};

$CompoundAttribute _UnitTest$TestType_FieldAnnotations_SingleMemberLongOvrdDef[] = {
	{"LUniTest/SingleMemberLongWithDef;", UnitTest$TestType_Attribute_var$78},
	{}
};

$NamedAttribute UnitTest$TestType_Attribute_var$79[] = {
	{"value", 'C', "5"},
	{}
};

$CompoundAttribute _UnitTest$TestType_FieldAnnotations_SingleMemberCharOvrdDef[] = {
	{"LUniTest/SingleMemberCharWithDef;", UnitTest$TestType_Attribute_var$79},
	{}
};

$NamedAttribute UnitTest$TestType_Attribute_var$80[] = {
	{"value", 'F', "6.0"},
	{}
};

$CompoundAttribute _UnitTest$TestType_FieldAnnotations_SingleMemberFloatOvrdDef[] = {
	{"LUniTest/SingleMemberFloatWithDef;", UnitTest$TestType_Attribute_var$80},
	{}
};

$NamedAttribute UnitTest$TestType_Attribute_var$81[] = {
	{"value", 'D', "7.0"},
	{}
};

$CompoundAttribute _UnitTest$TestType_FieldAnnotations_SingleMemberDoubleOvrdDef[] = {
	{"LUniTest/SingleMemberDoubleWithDef;", UnitTest$TestType_Attribute_var$81},
	{}
};

$NamedAttribute UnitTest$TestType_Attribute_var$82[] = {
	{"value", 'Z', "true"},
	{}
};

$CompoundAttribute _UnitTest$TestType_FieldAnnotations_SingleMemberBooleanOvrdDef[] = {
	{"LUniTest/SingleMemberBooleanWithDef;", UnitTest$TestType_Attribute_var$82},
	{}
};

$NamedAttribute UnitTest$TestType_Attribute_var$83[] = {
	{"value", 's', "custom"},
	{}
};

$CompoundAttribute _UnitTest$TestType_FieldAnnotations_SingleMemberStringOvrdDef[] = {
	{"LUniTest/SingleMemberStringWithDef;", UnitTest$TestType_Attribute_var$83},
	{}
};

$NamedAttribute UnitTest$TestType_Attribute_var$84[] = {
	{"value", 'c', "Ljava/util/Map;"},
	{}
};

$CompoundAttribute _UnitTest$TestType_FieldAnnotations_SingleMemberClassOvrdDef[] = {
	{"LUniTest/SingleMemberClassWithDef;", UnitTest$TestType_Attribute_var$84},
	{}
};

$NamedAttribute UnitTest$TestType_Attribute_var$85[] = {
	{"value", 'e', "LUniTest/Stooge; MOE"},
	{}
};

$CompoundAttribute _UnitTest$TestType_FieldAnnotations_SingleMemberEnumOvrdDef[] = {
	{"LUniTest/SingleMemberEnumWithDef;", UnitTest$TestType_Attribute_var$85},
	{}
};

$CompoundAttribute _UnitTest$TestType_FieldAnnotations_SingleMemberByteAcceptDef[] = {
	{"LUniTest/SingleMemberByteWithDef;", nullptr},
	{}
};

$CompoundAttribute _UnitTest$TestType_FieldAnnotations_SingleMemberShortAcceptDef[] = {
	{"LUniTest/SingleMemberShortWithDef;", nullptr},
	{}
};

$CompoundAttribute _UnitTest$TestType_FieldAnnotations_SingleMemberIntAcceptDef[] = {
	{"LUniTest/SingleMemberIntWithDef;", nullptr},
	{}
};

$CompoundAttribute _UnitTest$TestType_FieldAnnotations_SingleMemberLongAcceptDef[] = {
	{"LUniTest/SingleMemberLongWithDef;", nullptr},
	{}
};

$CompoundAttribute _UnitTest$TestType_FieldAnnotations_SingleMemberCharAcceptDef[] = {
	{"LUniTest/SingleMemberCharWithDef;", nullptr},
	{}
};

$CompoundAttribute _UnitTest$TestType_FieldAnnotations_SingleMemberFloatAcceptDef[] = {
	{"LUniTest/SingleMemberFloatWithDef;", nullptr},
	{}
};

$CompoundAttribute _UnitTest$TestType_FieldAnnotations_SingleMemberDoubleAcceptDef[] = {
	{"LUniTest/SingleMemberDoubleWithDef;", nullptr},
	{}
};

$CompoundAttribute _UnitTest$TestType_FieldAnnotations_SingleMemberBooleanAcceptDef[] = {
	{"LUniTest/SingleMemberBooleanWithDef;", nullptr},
	{}
};

$CompoundAttribute _UnitTest$TestType_FieldAnnotations_SingleMemberStringAcceptDef[] = {
	{"LUniTest/SingleMemberStringWithDef;", nullptr},
	{}
};

$CompoundAttribute _UnitTest$TestType_FieldAnnotations_SingleMemberClassAcceptDef[] = {
	{"LUniTest/SingleMemberClassWithDef;", nullptr},
	{}
};

$CompoundAttribute _UnitTest$TestType_FieldAnnotations_SingleMemberEnumAcceptDef[] = {
	{"LUniTest/SingleMemberEnumWithDef;", nullptr},
	{}
};

$Attribute UnitTest$TestType_Attribute_var$87[] = {
	{'-'}
};

$NamedAttribute UnitTest$TestType_Attribute_var$86[] = {
	{"value", '[', UnitTest$TestType_Attribute_var$87},
	{}
};

$CompoundAttribute _UnitTest$TestType_FieldAnnotations_SingleMemberByteArrEmpty[] = {
	{"LUniTest/SingleMemberByteArray;", UnitTest$TestType_Attribute_var$86},
	{}
};

$Attribute UnitTest$TestType_Attribute_var$89[] = {
	{'-'}
};

$NamedAttribute UnitTest$TestType_Attribute_var$88[] = {
	{"value", '[', UnitTest$TestType_Attribute_var$89},
	{}
};

$CompoundAttribute _UnitTest$TestType_FieldAnnotations_SingleMemberShortArrEmpty[] = {
	{"LUniTest/SingleMemberShortArray;", UnitTest$TestType_Attribute_var$88},
	{}
};

$Attribute UnitTest$TestType_Attribute_var$91[] = {
	{'-'}
};

$NamedAttribute UnitTest$TestType_Attribute_var$90[] = {
	{"value", '[', UnitTest$TestType_Attribute_var$91},
	{}
};

$CompoundAttribute _UnitTest$TestType_FieldAnnotations_SingleMemberIntArrEmpty[] = {
	{"LUniTest/SingleMemberIntArray;", UnitTest$TestType_Attribute_var$90},
	{}
};

$Attribute UnitTest$TestType_Attribute_var$93[] = {
	{'-'}
};

$NamedAttribute UnitTest$TestType_Attribute_var$92[] = {
	{"value", '[', UnitTest$TestType_Attribute_var$93},
	{}
};

$CompoundAttribute _UnitTest$TestType_FieldAnnotations_SingleMemberLongArrEmpty[] = {
	{"LUniTest/SingleMemberLongArray;", UnitTest$TestType_Attribute_var$92},
	{}
};

$Attribute UnitTest$TestType_Attribute_var$95[] = {
	{'-'}
};

$NamedAttribute UnitTest$TestType_Attribute_var$94[] = {
	{"value", '[', UnitTest$TestType_Attribute_var$95},
	{}
};

$CompoundAttribute _UnitTest$TestType_FieldAnnotations_SingleMemberCharArrEmpty[] = {
	{"LUniTest/SingleMemberCharArray;", UnitTest$TestType_Attribute_var$94},
	{}
};

$Attribute UnitTest$TestType_Attribute_var$97[] = {
	{'-'}
};

$NamedAttribute UnitTest$TestType_Attribute_var$96[] = {
	{"value", '[', UnitTest$TestType_Attribute_var$97},
	{}
};

$CompoundAttribute _UnitTest$TestType_FieldAnnotations_SingleMemberFloatArrEmpty[] = {
	{"LUniTest/SingleMemberFloatArray;", UnitTest$TestType_Attribute_var$96},
	{}
};

$Attribute UnitTest$TestType_Attribute_var$99[] = {
	{'-'}
};

$NamedAttribute UnitTest$TestType_Attribute_var$98[] = {
	{"value", '[', UnitTest$TestType_Attribute_var$99},
	{}
};

$CompoundAttribute _UnitTest$TestType_FieldAnnotations_SingleMemberDoubleArrEmpty[] = {
	{"LUniTest/SingleMemberDoubleArray;", UnitTest$TestType_Attribute_var$98},
	{}
};

$Attribute UnitTest$TestType_Attribute_var$101[] = {
	{'-'}
};

$NamedAttribute UnitTest$TestType_Attribute_var$100[] = {
	{"value", '[', UnitTest$TestType_Attribute_var$101},
	{}
};

$CompoundAttribute _UnitTest$TestType_FieldAnnotations_SingleMemberBooleanArrEmpty[] = {
	{"LUniTest/SingleMemberBooleanArray;", UnitTest$TestType_Attribute_var$100},
	{}
};

$Attribute UnitTest$TestType_Attribute_var$103[] = {
	{'-'}
};

$NamedAttribute UnitTest$TestType_Attribute_var$102[] = {
	{"value", '[', UnitTest$TestType_Attribute_var$103},
	{}
};

$CompoundAttribute _UnitTest$TestType_FieldAnnotations_SingleMemberStringArrEmpty[] = {
	{"LUniTest/SingleMemberStringArray;", UnitTest$TestType_Attribute_var$102},
	{}
};

$Attribute UnitTest$TestType_Attribute_var$105[] = {
	{'-'}
};

$NamedAttribute UnitTest$TestType_Attribute_var$104[] = {
	{"value", '[', UnitTest$TestType_Attribute_var$105},
	{}
};

$CompoundAttribute _UnitTest$TestType_FieldAnnotations_SingleMemberClassArrEmpty[] = {
	{"LUniTest/SingleMemberClassArray;", UnitTest$TestType_Attribute_var$104},
	{}
};

$Attribute UnitTest$TestType_Attribute_var$107[] = {
	{'-'}
};

$NamedAttribute UnitTest$TestType_Attribute_var$106[] = {
	{"value", '[', UnitTest$TestType_Attribute_var$107},
	{}
};

$CompoundAttribute _UnitTest$TestType_FieldAnnotations_SingleMemberEnumArrEmpty[] = {
	{"LUniTest/SingleMemberEnumArray;", UnitTest$TestType_Attribute_var$106},
	{}
};

$Attribute UnitTest$TestType_Attribute_var$109[] = {
	{'B', "1"},
	{'-'}
};

$NamedAttribute UnitTest$TestType_Attribute_var$108[] = {
	{"value", '[', UnitTest$TestType_Attribute_var$109},
	{}
};

$CompoundAttribute _UnitTest$TestType_FieldAnnotations_SingleMemberByteArrOne[] = {
	{"LUniTest/SingleMemberByteArray;", UnitTest$TestType_Attribute_var$108},
	{}
};

$Attribute UnitTest$TestType_Attribute_var$111[] = {
	{'S', "2"},
	{'-'}
};

$NamedAttribute UnitTest$TestType_Attribute_var$110[] = {
	{"value", '[', UnitTest$TestType_Attribute_var$111},
	{}
};

$CompoundAttribute _UnitTest$TestType_FieldAnnotations_SingleMemberShortArrOne[] = {
	{"LUniTest/SingleMemberShortArray;", UnitTest$TestType_Attribute_var$110},
	{}
};

$Attribute UnitTest$TestType_Attribute_var$113[] = {
	{'I', "3"},
	{'-'}
};

$NamedAttribute UnitTest$TestType_Attribute_var$112[] = {
	{"value", '[', UnitTest$TestType_Attribute_var$113},
	{}
};

$CompoundAttribute _UnitTest$TestType_FieldAnnotations_SingleMemberIntArrOne[] = {
	{"LUniTest/SingleMemberIntArray;", UnitTest$TestType_Attribute_var$112},
	{}
};

$Attribute UnitTest$TestType_Attribute_var$115[] = {
	{'J', "4"},
	{'-'}
};

$NamedAttribute UnitTest$TestType_Attribute_var$114[] = {
	{"value", '[', UnitTest$TestType_Attribute_var$115},
	{}
};

$CompoundAttribute _UnitTest$TestType_FieldAnnotations_SingleMemberLongArrOne[] = {
	{"LUniTest/SingleMemberLongArray;", UnitTest$TestType_Attribute_var$114},
	{}
};

$Attribute UnitTest$TestType_Attribute_var$117[] = {
	{'C', "5"},
	{'-'}
};

$NamedAttribute UnitTest$TestType_Attribute_var$116[] = {
	{"value", '[', UnitTest$TestType_Attribute_var$117},
	{}
};

$CompoundAttribute _UnitTest$TestType_FieldAnnotations_SingleMemberCharArrOne[] = {
	{"LUniTest/SingleMemberCharArray;", UnitTest$TestType_Attribute_var$116},
	{}
};

$Attribute UnitTest$TestType_Attribute_var$119[] = {
	{'F', "6.0"},
	{'-'}
};

$NamedAttribute UnitTest$TestType_Attribute_var$118[] = {
	{"value", '[', UnitTest$TestType_Attribute_var$119},
	{}
};

$CompoundAttribute _UnitTest$TestType_FieldAnnotations_SingleMemberFloatArrOne[] = {
	{"LUniTest/SingleMemberFloatArray;", UnitTest$TestType_Attribute_var$118},
	{}
};

$Attribute UnitTest$TestType_Attribute_var$121[] = {
	{'D', "7.0"},
	{'-'}
};

$NamedAttribute UnitTest$TestType_Attribute_var$120[] = {
	{"value", '[', UnitTest$TestType_Attribute_var$121},
	{}
};

$CompoundAttribute _UnitTest$TestType_FieldAnnotations_SingleMemberDoubleArrOne[] = {
	{"LUniTest/SingleMemberDoubleArray;", UnitTest$TestType_Attribute_var$120},
	{}
};

$Attribute UnitTest$TestType_Attribute_var$123[] = {
	{'Z', "true"},
	{'-'}
};

$NamedAttribute UnitTest$TestType_Attribute_var$122[] = {
	{"value", '[', UnitTest$TestType_Attribute_var$123},
	{}
};

$CompoundAttribute _UnitTest$TestType_FieldAnnotations_SingleMemberBooleanArrOne[] = {
	{"LUniTest/SingleMemberBooleanArray;", UnitTest$TestType_Attribute_var$122},
	{}
};

$Attribute UnitTest$TestType_Attribute_var$125[] = {
	{'s', "custom"},
	{'-'}
};

$NamedAttribute UnitTest$TestType_Attribute_var$124[] = {
	{"value", '[', UnitTest$TestType_Attribute_var$125},
	{}
};

$CompoundAttribute _UnitTest$TestType_FieldAnnotations_SingleMemberStringArrOne[] = {
	{"LUniTest/SingleMemberStringArray;", UnitTest$TestType_Attribute_var$124},
	{}
};

$Attribute UnitTest$TestType_Attribute_var$127[] = {
	{'c', "Ljava/util/Map;"},
	{'-'}
};

$NamedAttribute UnitTest$TestType_Attribute_var$126[] = {
	{"value", '[', UnitTest$TestType_Attribute_var$127},
	{}
};

$CompoundAttribute _UnitTest$TestType_FieldAnnotations_SingleMemberClassArrOne[] = {
	{"LUniTest/SingleMemberClassArray;", UnitTest$TestType_Attribute_var$126},
	{}
};

$Attribute UnitTest$TestType_Attribute_var$129[] = {
	{'e', "LUniTest/Stooge; MOE"},
	{'-'}
};

$NamedAttribute UnitTest$TestType_Attribute_var$128[] = {
	{"value", '[', UnitTest$TestType_Attribute_var$129},
	{}
};

$CompoundAttribute _UnitTest$TestType_FieldAnnotations_SingleMemberEnumArrOne[] = {
	{"LUniTest/SingleMemberEnumArray;", UnitTest$TestType_Attribute_var$128},
	{}
};

$Attribute UnitTest$TestType_Attribute_var$131[] = {
	{'B', "1"},
	{'B', "2"},
	{'-'}
};

$NamedAttribute UnitTest$TestType_Attribute_var$130[] = {
	{"value", '[', UnitTest$TestType_Attribute_var$131},
	{}
};

$CompoundAttribute _UnitTest$TestType_FieldAnnotations_SingleMemberByteArrTwo[] = {
	{"LUniTest/SingleMemberByteArray;", UnitTest$TestType_Attribute_var$130},
	{}
};

$Attribute UnitTest$TestType_Attribute_var$133[] = {
	{'S', "2"},
	{'S', "3"},
	{'-'}
};

$NamedAttribute UnitTest$TestType_Attribute_var$132[] = {
	{"value", '[', UnitTest$TestType_Attribute_var$133},
	{}
};

$CompoundAttribute _UnitTest$TestType_FieldAnnotations_SingleMemberShortArrTwo[] = {
	{"LUniTest/SingleMemberShortArray;", UnitTest$TestType_Attribute_var$132},
	{}
};

$Attribute UnitTest$TestType_Attribute_var$135[] = {
	{'I', "3"},
	{'I', "4"},
	{'-'}
};

$NamedAttribute UnitTest$TestType_Attribute_var$134[] = {
	{"value", '[', UnitTest$TestType_Attribute_var$135},
	{}
};

$CompoundAttribute _UnitTest$TestType_FieldAnnotations_SingleMemberIntArrTwo[] = {
	{"LUniTest/SingleMemberIntArray;", UnitTest$TestType_Attribute_var$134},
	{}
};

$Attribute UnitTest$TestType_Attribute_var$137[] = {
	{'J', "4"},
	{'J', "5"},
	{'-'}
};

$NamedAttribute UnitTest$TestType_Attribute_var$136[] = {
	{"value", '[', UnitTest$TestType_Attribute_var$137},
	{}
};

$CompoundAttribute _UnitTest$TestType_FieldAnnotations_SingleMemberLongArrTwo[] = {
	{"LUniTest/SingleMemberLongArray;", UnitTest$TestType_Attribute_var$136},
	{}
};

$Attribute UnitTest$TestType_Attribute_var$139[] = {
	{'C', "5"},
	{'C', "6"},
	{'-'}
};

$NamedAttribute UnitTest$TestType_Attribute_var$138[] = {
	{"value", '[', UnitTest$TestType_Attribute_var$139},
	{}
};

$CompoundAttribute _UnitTest$TestType_FieldAnnotations_SingleMemberCharArrTwo[] = {
	{"LUniTest/SingleMemberCharArray;", UnitTest$TestType_Attribute_var$138},
	{}
};

$Attribute UnitTest$TestType_Attribute_var$141[] = {
	{'F', "6.0"},
	{'F', "7.0"},
	{'-'}
};

$NamedAttribute UnitTest$TestType_Attribute_var$140[] = {
	{"value", '[', UnitTest$TestType_Attribute_var$141},
	{}
};

$CompoundAttribute _UnitTest$TestType_FieldAnnotations_SingleMemberFloatArrTwo[] = {
	{"LUniTest/SingleMemberFloatArray;", UnitTest$TestType_Attribute_var$140},
	{}
};

$Attribute UnitTest$TestType_Attribute_var$143[] = {
	{'D', "7.0"},
	{'D', "8.0"},
	{'-'}
};

$NamedAttribute UnitTest$TestType_Attribute_var$142[] = {
	{"value", '[', UnitTest$TestType_Attribute_var$143},
	{}
};

$CompoundAttribute _UnitTest$TestType_FieldAnnotations_SingleMemberDoubleArrTwo[] = {
	{"LUniTest/SingleMemberDoubleArray;", UnitTest$TestType_Attribute_var$142},
	{}
};

$Attribute UnitTest$TestType_Attribute_var$145[] = {
	{'Z', "true"},
	{'Z', "false"},
	{'-'}
};

$NamedAttribute UnitTest$TestType_Attribute_var$144[] = {
	{"value", '[', UnitTest$TestType_Attribute_var$145},
	{}
};

$CompoundAttribute _UnitTest$TestType_FieldAnnotations_SingleMemberBooleanArrTwo[] = {
	{"LUniTest/SingleMemberBooleanArray;", UnitTest$TestType_Attribute_var$144},
	{}
};

$Attribute UnitTest$TestType_Attribute_var$147[] = {
	{'s', "custom"},
	{'s', "paint"},
	{'-'}
};

$NamedAttribute UnitTest$TestType_Attribute_var$146[] = {
	{"value", '[', UnitTest$TestType_Attribute_var$147},
	{}
};

$CompoundAttribute _UnitTest$TestType_FieldAnnotations_SingleMemberStringArrTwo[] = {
	{"LUniTest/SingleMemberStringArray;", UnitTest$TestType_Attribute_var$146},
	{}
};

$Attribute UnitTest$TestType_Attribute_var$149[] = {
	{'c', "Ljava/util/Map;"},
	{'c', "Ljava/util/Set;"},
	{'-'}
};

$NamedAttribute UnitTest$TestType_Attribute_var$148[] = {
	{"value", '[', UnitTest$TestType_Attribute_var$149},
	{}
};

$CompoundAttribute _UnitTest$TestType_FieldAnnotations_SingleMemberClassArrTwo[] = {
	{"LUniTest/SingleMemberClassArray;", UnitTest$TestType_Attribute_var$148},
	{}
};

$Attribute UnitTest$TestType_Attribute_var$151[] = {
	{'e', "LUniTest/Stooge; MOE"},
	{'e', "LUniTest/Stooge; CURLY"},
	{'-'}
};

$NamedAttribute UnitTest$TestType_Attribute_var$150[] = {
	{"value", '[', UnitTest$TestType_Attribute_var$151},
	{}
};

$CompoundAttribute _UnitTest$TestType_FieldAnnotations_SingleMemberEnumArrTwo[] = {
	{"LUniTest/SingleMemberEnumArray;", UnitTest$TestType_Attribute_var$150},
	{}
};

$Attribute UnitTest$TestType_Attribute_var$153[] = {
	{'B', "1"},
	{'-'}
};

$NamedAttribute UnitTest$TestType_Attribute_var$152[] = {
	{"value", '[', UnitTest$TestType_Attribute_var$153},
	{}
};

$CompoundAttribute _UnitTest$TestType_FieldAnnotations_SingleMemberByteArrOvrdDef[] = {
	{"LUniTest/SingleMemberByteArrayDef;", UnitTest$TestType_Attribute_var$152},
	{}
};

$Attribute UnitTest$TestType_Attribute_var$155[] = {
	{'S', "2"},
	{'-'}
};

$NamedAttribute UnitTest$TestType_Attribute_var$154[] = {
	{"value", '[', UnitTest$TestType_Attribute_var$155},
	{}
};

$CompoundAttribute _UnitTest$TestType_FieldAnnotations_SingleMemberShortArrOvrdDef[] = {
	{"LUniTest/SingleMemberShortArrayDef;", UnitTest$TestType_Attribute_var$154},
	{}
};

$Attribute UnitTest$TestType_Attribute_var$157[] = {
	{'I', "3"},
	{'-'}
};

$NamedAttribute UnitTest$TestType_Attribute_var$156[] = {
	{"value", '[', UnitTest$TestType_Attribute_var$157},
	{}
};

$CompoundAttribute _UnitTest$TestType_FieldAnnotations_SingleMemberIntArrOvrdDef[] = {
	{"LUniTest/SingleMemberIntArrayDef;", UnitTest$TestType_Attribute_var$156},
	{}
};

$Attribute UnitTest$TestType_Attribute_var$159[] = {
	{'J', "4"},
	{'-'}
};

$NamedAttribute UnitTest$TestType_Attribute_var$158[] = {
	{"value", '[', UnitTest$TestType_Attribute_var$159},
	{}
};

$CompoundAttribute _UnitTest$TestType_FieldAnnotations_SingleMemberLongArrOvrdDef[] = {
	{"LUniTest/SingleMemberLongArrayDef;", UnitTest$TestType_Attribute_var$158},
	{}
};

$Attribute UnitTest$TestType_Attribute_var$161[] = {
	{'C', "5"},
	{'-'}
};

$NamedAttribute UnitTest$TestType_Attribute_var$160[] = {
	{"value", '[', UnitTest$TestType_Attribute_var$161},
	{}
};

$CompoundAttribute _UnitTest$TestType_FieldAnnotations_SingleMemberCharArrOvrdDef[] = {
	{"LUniTest/SingleMemberCharArrayDef;", UnitTest$TestType_Attribute_var$160},
	{}
};

$Attribute UnitTest$TestType_Attribute_var$163[] = {
	{'F', "6.0"},
	{'-'}
};

$NamedAttribute UnitTest$TestType_Attribute_var$162[] = {
	{"value", '[', UnitTest$TestType_Attribute_var$163},
	{}
};

$CompoundAttribute _UnitTest$TestType_FieldAnnotations_SingleMemberFloatArrOvrdDef[] = {
	{"LUniTest/SingleMemberFloatArrayDef;", UnitTest$TestType_Attribute_var$162},
	{}
};

$Attribute UnitTest$TestType_Attribute_var$165[] = {
	{'D', "7.0"},
	{'-'}
};

$NamedAttribute UnitTest$TestType_Attribute_var$164[] = {
	{"value", '[', UnitTest$TestType_Attribute_var$165},
	{}
};

$CompoundAttribute _UnitTest$TestType_FieldAnnotations_SingleMemberDoubleArrOvrdDef[] = {
	{"LUniTest/SingleMemberDoubleArrayDef;", UnitTest$TestType_Attribute_var$164},
	{}
};

$Attribute UnitTest$TestType_Attribute_var$167[] = {
	{'Z', "true"},
	{'-'}
};

$NamedAttribute UnitTest$TestType_Attribute_var$166[] = {
	{"value", '[', UnitTest$TestType_Attribute_var$167},
	{}
};

$CompoundAttribute _UnitTest$TestType_FieldAnnotations_SingleMemberBooleanArrOvrdDef[] = {
	{"LUniTest/SingleMemberBooleanArrayDef;", UnitTest$TestType_Attribute_var$166},
	{}
};

$Attribute UnitTest$TestType_Attribute_var$169[] = {
	{'s', "custom"},
	{'-'}
};

$NamedAttribute UnitTest$TestType_Attribute_var$168[] = {
	{"value", '[', UnitTest$TestType_Attribute_var$169},
	{}
};

$CompoundAttribute _UnitTest$TestType_FieldAnnotations_SingleMemberStringArrOvrdDef[] = {
	{"LUniTest/SingleMemberStringArrayDef;", UnitTest$TestType_Attribute_var$168},
	{}
};

$Attribute UnitTest$TestType_Attribute_var$171[] = {
	{'c', "Ljava/util/Map;"},
	{'-'}
};

$NamedAttribute UnitTest$TestType_Attribute_var$170[] = {
	{"value", '[', UnitTest$TestType_Attribute_var$171},
	{}
};

$CompoundAttribute _UnitTest$TestType_FieldAnnotations_SingleMemberClassArrOvrdDef[] = {
	{"LUniTest/SingleMemberClassArrayDef;", UnitTest$TestType_Attribute_var$170},
	{}
};

$Attribute UnitTest$TestType_Attribute_var$173[] = {
	{'e', "LUniTest/Stooge; MOE"},
	{'-'}
};

$NamedAttribute UnitTest$TestType_Attribute_var$172[] = {
	{"value", '[', UnitTest$TestType_Attribute_var$173},
	{}
};

$CompoundAttribute _UnitTest$TestType_FieldAnnotations_SingleMemberEnumArrOvrdDef[] = {
	{"LUniTest/SingleMemberEnumArrayDef;", UnitTest$TestType_Attribute_var$172},
	{}
};

$CompoundAttribute _UnitTest$TestType_FieldAnnotations_SingleMemberByteArrAcceptDef[] = {
	{"LUniTest/SingleMemberByteArrayDef;", nullptr},
	{}
};

$CompoundAttribute _UnitTest$TestType_FieldAnnotations_SingleMemberShortArrAcceptDef[] = {
	{"LUniTest/SingleMemberShortArrayDef;", nullptr},
	{}
};

$CompoundAttribute _UnitTest$TestType_FieldAnnotations_SingleMemberIntArrAcceptDef[] = {
	{"LUniTest/SingleMemberIntArrayDef;", nullptr},
	{}
};

$CompoundAttribute _UnitTest$TestType_FieldAnnotations_SingleMemberLongArrAcceptDef[] = {
	{"LUniTest/SingleMemberLongArrayDef;", nullptr},
	{}
};

$CompoundAttribute _UnitTest$TestType_FieldAnnotations_SingleMemberCharArrAcceptDef[] = {
	{"LUniTest/SingleMemberCharArrayDef;", nullptr},
	{}
};

$CompoundAttribute _UnitTest$TestType_FieldAnnotations_SingleMemberFloatArrAcceptDef[] = {
	{"LUniTest/SingleMemberFloatArrayDef;", nullptr},
	{}
};

$CompoundAttribute _UnitTest$TestType_FieldAnnotations_SingleMemberDoubleArrAcceptDef[] = {
	{"LUniTest/SingleMemberDoubleArrayDef;", nullptr},
	{}
};

$CompoundAttribute _UnitTest$TestType_FieldAnnotations_SingleMemberBooleanArrAcceptDef[] = {
	{"LUniTest/SingleMemberBooleanArrayDef;", nullptr},
	{}
};

$CompoundAttribute _UnitTest$TestType_FieldAnnotations_SingleMemberStringArrAcceptDef[] = {
	{"LUniTest/SingleMemberStringArrayDef;", nullptr},
	{}
};

$CompoundAttribute _UnitTest$TestType_FieldAnnotations_SingleMemberClassArrAcceptDef[] = {
	{"LUniTest/SingleMemberClassArrayDef;", nullptr},
	{}
};

$CompoundAttribute _UnitTest$TestType_FieldAnnotations_SingleMemberEnumArrAcceptDef[] = {
	{"LUniTest/SingleMemberEnumArrayDef;", nullptr},
	{}
};

$FieldInfo _UnitTest$TestType_FieldInfo_[] = {
	{"scalarTypesField", "LUniTest/UnitTest$TestType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnitTest$TestType, scalarTypesField), _UnitTest$TestType_FieldAnnotations_scalarTypesField},
	{"scalarTypesAcceptDefaultField", "LUniTest/UnitTest$TestType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnitTest$TestType, scalarTypesAcceptDefaultField), _UnitTest$TestType_FieldAnnotations_scalarTypesAcceptDefaultField},
	{"scalarTypesOverrideDefaultField", "LUniTest/UnitTest$TestType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnitTest$TestType, scalarTypesOverrideDefaultField), _UnitTest$TestType_FieldAnnotations_scalarTypesOverrideDefaultField},
	{"emptyArrayTypesField", "LUniTest/UnitTest$TestType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnitTest$TestType, emptyArrayTypesField), _UnitTest$TestType_FieldAnnotations_emptyArrayTypesField},
	{"singleElementArrayTypesField", "LUniTest/UnitTest$TestType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnitTest$TestType, singleElementArrayTypesField), _UnitTest$TestType_FieldAnnotations_singleElementArrayTypesField},
	{"twoElementArrayTypesField", "LUniTest/UnitTest$TestType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnitTest$TestType, twoElementArrayTypesField), _UnitTest$TestType_FieldAnnotations_twoElementArrayTypesField},
	{"arrayTypesAcceptDefaultField", "LUniTest/UnitTest$TestType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnitTest$TestType, arrayTypesAcceptDefaultField), _UnitTest$TestType_FieldAnnotations_arrayTypesAcceptDefaultField},
	{"arrayTypesOverrideDefaultField", "LUniTest/UnitTest$TestType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnitTest$TestType, arrayTypesOverrideDefaultField), _UnitTest$TestType_FieldAnnotations_arrayTypesOverrideDefaultField},
	{"marker", "LUniTest/UnitTest$TestType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnitTest$TestType, marker), _UnitTest$TestType_FieldAnnotations_marker},
	{"SingleMemberByte", "LUniTest/UnitTest$TestType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnitTest$TestType, SingleMemberByte), _UnitTest$TestType_FieldAnnotations_SingleMemberByte},
	{"SingleMemberShort", "LUniTest/UnitTest$TestType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnitTest$TestType, SingleMemberShort), _UnitTest$TestType_FieldAnnotations_SingleMemberShort},
	{"SingleMemberInt", "LUniTest/UnitTest$TestType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnitTest$TestType, SingleMemberInt), _UnitTest$TestType_FieldAnnotations_SingleMemberInt},
	{"SingleMemberLong", "LUniTest/UnitTest$TestType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnitTest$TestType, SingleMemberLong), _UnitTest$TestType_FieldAnnotations_SingleMemberLong},
	{"SingleMemberChar", "LUniTest/UnitTest$TestType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnitTest$TestType, SingleMemberChar), _UnitTest$TestType_FieldAnnotations_SingleMemberChar},
	{"SingleMemberFloat", "LUniTest/UnitTest$TestType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnitTest$TestType, SingleMemberFloat), _UnitTest$TestType_FieldAnnotations_SingleMemberFloat},
	{"SingleMemberDouble", "LUniTest/UnitTest$TestType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnitTest$TestType, SingleMemberDouble), _UnitTest$TestType_FieldAnnotations_SingleMemberDouble},
	{"SingleMemberBoolean", "LUniTest/UnitTest$TestType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnitTest$TestType, SingleMemberBoolean), _UnitTest$TestType_FieldAnnotations_SingleMemberBoolean},
	{"SingleMemberString", "LUniTest/UnitTest$TestType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnitTest$TestType, SingleMemberString), _UnitTest$TestType_FieldAnnotations_SingleMemberString},
	{"SingleMemberClass", "LUniTest/UnitTest$TestType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnitTest$TestType, SingleMemberClass), _UnitTest$TestType_FieldAnnotations_SingleMemberClass},
	{"SingleMemberEnum", "LUniTest/UnitTest$TestType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnitTest$TestType, SingleMemberEnum), _UnitTest$TestType_FieldAnnotations_SingleMemberEnum},
	{"SingleMemberByteOvrdDef", "LUniTest/UnitTest$TestType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnitTest$TestType, SingleMemberByteOvrdDef), _UnitTest$TestType_FieldAnnotations_SingleMemberByteOvrdDef},
	{"SingleMemberShortOvrdDef", "LUniTest/UnitTest$TestType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnitTest$TestType, SingleMemberShortOvrdDef), _UnitTest$TestType_FieldAnnotations_SingleMemberShortOvrdDef},
	{"SingleMemberIntOvrdDef", "LUniTest/UnitTest$TestType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnitTest$TestType, SingleMemberIntOvrdDef), _UnitTest$TestType_FieldAnnotations_SingleMemberIntOvrdDef},
	{"SingleMemberLongOvrdDef", "LUniTest/UnitTest$TestType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnitTest$TestType, SingleMemberLongOvrdDef), _UnitTest$TestType_FieldAnnotations_SingleMemberLongOvrdDef},
	{"SingleMemberCharOvrdDef", "LUniTest/UnitTest$TestType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnitTest$TestType, SingleMemberCharOvrdDef), _UnitTest$TestType_FieldAnnotations_SingleMemberCharOvrdDef},
	{"SingleMemberFloatOvrdDef", "LUniTest/UnitTest$TestType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnitTest$TestType, SingleMemberFloatOvrdDef), _UnitTest$TestType_FieldAnnotations_SingleMemberFloatOvrdDef},
	{"SingleMemberDoubleOvrdDef", "LUniTest/UnitTest$TestType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnitTest$TestType, SingleMemberDoubleOvrdDef), _UnitTest$TestType_FieldAnnotations_SingleMemberDoubleOvrdDef},
	{"SingleMemberBooleanOvrdDef", "LUniTest/UnitTest$TestType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnitTest$TestType, SingleMemberBooleanOvrdDef), _UnitTest$TestType_FieldAnnotations_SingleMemberBooleanOvrdDef},
	{"SingleMemberStringOvrdDef", "LUniTest/UnitTest$TestType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnitTest$TestType, SingleMemberStringOvrdDef), _UnitTest$TestType_FieldAnnotations_SingleMemberStringOvrdDef},
	{"SingleMemberClassOvrdDef", "LUniTest/UnitTest$TestType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnitTest$TestType, SingleMemberClassOvrdDef), _UnitTest$TestType_FieldAnnotations_SingleMemberClassOvrdDef},
	{"SingleMemberEnumOvrdDef", "LUniTest/UnitTest$TestType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnitTest$TestType, SingleMemberEnumOvrdDef), _UnitTest$TestType_FieldAnnotations_SingleMemberEnumOvrdDef},
	{"SingleMemberByteAcceptDef", "LUniTest/UnitTest$TestType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnitTest$TestType, SingleMemberByteAcceptDef), _UnitTest$TestType_FieldAnnotations_SingleMemberByteAcceptDef},
	{"SingleMemberShortAcceptDef", "LUniTest/UnitTest$TestType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnitTest$TestType, SingleMemberShortAcceptDef), _UnitTest$TestType_FieldAnnotations_SingleMemberShortAcceptDef},
	{"SingleMemberIntAcceptDef", "LUniTest/UnitTest$TestType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnitTest$TestType, SingleMemberIntAcceptDef), _UnitTest$TestType_FieldAnnotations_SingleMemberIntAcceptDef},
	{"SingleMemberLongAcceptDef", "LUniTest/UnitTest$TestType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnitTest$TestType, SingleMemberLongAcceptDef), _UnitTest$TestType_FieldAnnotations_SingleMemberLongAcceptDef},
	{"SingleMemberCharAcceptDef", "LUniTest/UnitTest$TestType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnitTest$TestType, SingleMemberCharAcceptDef), _UnitTest$TestType_FieldAnnotations_SingleMemberCharAcceptDef},
	{"SingleMemberFloatAcceptDef", "LUniTest/UnitTest$TestType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnitTest$TestType, SingleMemberFloatAcceptDef), _UnitTest$TestType_FieldAnnotations_SingleMemberFloatAcceptDef},
	{"SingleMemberDoubleAcceptDef", "LUniTest/UnitTest$TestType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnitTest$TestType, SingleMemberDoubleAcceptDef), _UnitTest$TestType_FieldAnnotations_SingleMemberDoubleAcceptDef},
	{"SingleMemberBooleanAcceptDef", "LUniTest/UnitTest$TestType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnitTest$TestType, SingleMemberBooleanAcceptDef), _UnitTest$TestType_FieldAnnotations_SingleMemberBooleanAcceptDef},
	{"SingleMemberStringAcceptDef", "LUniTest/UnitTest$TestType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnitTest$TestType, SingleMemberStringAcceptDef), _UnitTest$TestType_FieldAnnotations_SingleMemberStringAcceptDef},
	{"SingleMemberClassAcceptDef", "LUniTest/UnitTest$TestType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnitTest$TestType, SingleMemberClassAcceptDef), _UnitTest$TestType_FieldAnnotations_SingleMemberClassAcceptDef},
	{"SingleMemberEnumAcceptDef", "LUniTest/UnitTest$TestType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnitTest$TestType, SingleMemberEnumAcceptDef), _UnitTest$TestType_FieldAnnotations_SingleMemberEnumAcceptDef},
	{"SingleMemberByteArrEmpty", "LUniTest/UnitTest$TestType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnitTest$TestType, SingleMemberByteArrEmpty), _UnitTest$TestType_FieldAnnotations_SingleMemberByteArrEmpty},
	{"SingleMemberShortArrEmpty", "LUniTest/UnitTest$TestType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnitTest$TestType, SingleMemberShortArrEmpty), _UnitTest$TestType_FieldAnnotations_SingleMemberShortArrEmpty},
	{"SingleMemberIntArrEmpty", "LUniTest/UnitTest$TestType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnitTest$TestType, SingleMemberIntArrEmpty), _UnitTest$TestType_FieldAnnotations_SingleMemberIntArrEmpty},
	{"SingleMemberLongArrEmpty", "LUniTest/UnitTest$TestType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnitTest$TestType, SingleMemberLongArrEmpty), _UnitTest$TestType_FieldAnnotations_SingleMemberLongArrEmpty},
	{"SingleMemberCharArrEmpty", "LUniTest/UnitTest$TestType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnitTest$TestType, SingleMemberCharArrEmpty), _UnitTest$TestType_FieldAnnotations_SingleMemberCharArrEmpty},
	{"SingleMemberFloatArrEmpty", "LUniTest/UnitTest$TestType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnitTest$TestType, SingleMemberFloatArrEmpty), _UnitTest$TestType_FieldAnnotations_SingleMemberFloatArrEmpty},
	{"SingleMemberDoubleArrEmpty", "LUniTest/UnitTest$TestType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnitTest$TestType, SingleMemberDoubleArrEmpty), _UnitTest$TestType_FieldAnnotations_SingleMemberDoubleArrEmpty},
	{"SingleMemberBooleanArrEmpty", "LUniTest/UnitTest$TestType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnitTest$TestType, SingleMemberBooleanArrEmpty), _UnitTest$TestType_FieldAnnotations_SingleMemberBooleanArrEmpty},
	{"SingleMemberStringArrEmpty", "LUniTest/UnitTest$TestType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnitTest$TestType, SingleMemberStringArrEmpty), _UnitTest$TestType_FieldAnnotations_SingleMemberStringArrEmpty},
	{"SingleMemberClassArrEmpty", "LUniTest/UnitTest$TestType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnitTest$TestType, SingleMemberClassArrEmpty), _UnitTest$TestType_FieldAnnotations_SingleMemberClassArrEmpty},
	{"SingleMemberEnumArrEmpty", "LUniTest/UnitTest$TestType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnitTest$TestType, SingleMemberEnumArrEmpty), _UnitTest$TestType_FieldAnnotations_SingleMemberEnumArrEmpty},
	{"SingleMemberByteArrOne", "LUniTest/UnitTest$TestType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnitTest$TestType, SingleMemberByteArrOne), _UnitTest$TestType_FieldAnnotations_SingleMemberByteArrOne},
	{"SingleMemberShortArrOne", "LUniTest/UnitTest$TestType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnitTest$TestType, SingleMemberShortArrOne), _UnitTest$TestType_FieldAnnotations_SingleMemberShortArrOne},
	{"SingleMemberIntArrOne", "LUniTest/UnitTest$TestType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnitTest$TestType, SingleMemberIntArrOne), _UnitTest$TestType_FieldAnnotations_SingleMemberIntArrOne},
	{"SingleMemberLongArrOne", "LUniTest/UnitTest$TestType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnitTest$TestType, SingleMemberLongArrOne), _UnitTest$TestType_FieldAnnotations_SingleMemberLongArrOne},
	{"SingleMemberCharArrOne", "LUniTest/UnitTest$TestType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnitTest$TestType, SingleMemberCharArrOne), _UnitTest$TestType_FieldAnnotations_SingleMemberCharArrOne},
	{"SingleMemberFloatArrOne", "LUniTest/UnitTest$TestType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnitTest$TestType, SingleMemberFloatArrOne), _UnitTest$TestType_FieldAnnotations_SingleMemberFloatArrOne},
	{"SingleMemberDoubleArrOne", "LUniTest/UnitTest$TestType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnitTest$TestType, SingleMemberDoubleArrOne), _UnitTest$TestType_FieldAnnotations_SingleMemberDoubleArrOne},
	{"SingleMemberBooleanArrOne", "LUniTest/UnitTest$TestType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnitTest$TestType, SingleMemberBooleanArrOne), _UnitTest$TestType_FieldAnnotations_SingleMemberBooleanArrOne},
	{"SingleMemberStringArrOne", "LUniTest/UnitTest$TestType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnitTest$TestType, SingleMemberStringArrOne), _UnitTest$TestType_FieldAnnotations_SingleMemberStringArrOne},
	{"SingleMemberClassArrOne", "LUniTest/UnitTest$TestType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnitTest$TestType, SingleMemberClassArrOne), _UnitTest$TestType_FieldAnnotations_SingleMemberClassArrOne},
	{"SingleMemberEnumArrOne", "LUniTest/UnitTest$TestType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnitTest$TestType, SingleMemberEnumArrOne), _UnitTest$TestType_FieldAnnotations_SingleMemberEnumArrOne},
	{"SingleMemberByteArrTwo", "LUniTest/UnitTest$TestType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnitTest$TestType, SingleMemberByteArrTwo), _UnitTest$TestType_FieldAnnotations_SingleMemberByteArrTwo},
	{"SingleMemberShortArrTwo", "LUniTest/UnitTest$TestType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnitTest$TestType, SingleMemberShortArrTwo), _UnitTest$TestType_FieldAnnotations_SingleMemberShortArrTwo},
	{"SingleMemberIntArrTwo", "LUniTest/UnitTest$TestType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnitTest$TestType, SingleMemberIntArrTwo), _UnitTest$TestType_FieldAnnotations_SingleMemberIntArrTwo},
	{"SingleMemberLongArrTwo", "LUniTest/UnitTest$TestType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnitTest$TestType, SingleMemberLongArrTwo), _UnitTest$TestType_FieldAnnotations_SingleMemberLongArrTwo},
	{"SingleMemberCharArrTwo", "LUniTest/UnitTest$TestType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnitTest$TestType, SingleMemberCharArrTwo), _UnitTest$TestType_FieldAnnotations_SingleMemberCharArrTwo},
	{"SingleMemberFloatArrTwo", "LUniTest/UnitTest$TestType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnitTest$TestType, SingleMemberFloatArrTwo), _UnitTest$TestType_FieldAnnotations_SingleMemberFloatArrTwo},
	{"SingleMemberDoubleArrTwo", "LUniTest/UnitTest$TestType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnitTest$TestType, SingleMemberDoubleArrTwo), _UnitTest$TestType_FieldAnnotations_SingleMemberDoubleArrTwo},
	{"SingleMemberBooleanArrTwo", "LUniTest/UnitTest$TestType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnitTest$TestType, SingleMemberBooleanArrTwo), _UnitTest$TestType_FieldAnnotations_SingleMemberBooleanArrTwo},
	{"SingleMemberStringArrTwo", "LUniTest/UnitTest$TestType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnitTest$TestType, SingleMemberStringArrTwo), _UnitTest$TestType_FieldAnnotations_SingleMemberStringArrTwo},
	{"SingleMemberClassArrTwo", "LUniTest/UnitTest$TestType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnitTest$TestType, SingleMemberClassArrTwo), _UnitTest$TestType_FieldAnnotations_SingleMemberClassArrTwo},
	{"SingleMemberEnumArrTwo", "LUniTest/UnitTest$TestType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnitTest$TestType, SingleMemberEnumArrTwo), _UnitTest$TestType_FieldAnnotations_SingleMemberEnumArrTwo},
	{"SingleMemberByteArrOvrdDef", "LUniTest/UnitTest$TestType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnitTest$TestType, SingleMemberByteArrOvrdDef), _UnitTest$TestType_FieldAnnotations_SingleMemberByteArrOvrdDef},
	{"SingleMemberShortArrOvrdDef", "LUniTest/UnitTest$TestType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnitTest$TestType, SingleMemberShortArrOvrdDef), _UnitTest$TestType_FieldAnnotations_SingleMemberShortArrOvrdDef},
	{"SingleMemberIntArrOvrdDef", "LUniTest/UnitTest$TestType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnitTest$TestType, SingleMemberIntArrOvrdDef), _UnitTest$TestType_FieldAnnotations_SingleMemberIntArrOvrdDef},
	{"SingleMemberLongArrOvrdDef", "LUniTest/UnitTest$TestType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnitTest$TestType, SingleMemberLongArrOvrdDef), _UnitTest$TestType_FieldAnnotations_SingleMemberLongArrOvrdDef},
	{"SingleMemberCharArrOvrdDef", "LUniTest/UnitTest$TestType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnitTest$TestType, SingleMemberCharArrOvrdDef), _UnitTest$TestType_FieldAnnotations_SingleMemberCharArrOvrdDef},
	{"SingleMemberFloatArrOvrdDef", "LUniTest/UnitTest$TestType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnitTest$TestType, SingleMemberFloatArrOvrdDef), _UnitTest$TestType_FieldAnnotations_SingleMemberFloatArrOvrdDef},
	{"SingleMemberDoubleArrOvrdDef", "LUniTest/UnitTest$TestType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnitTest$TestType, SingleMemberDoubleArrOvrdDef), _UnitTest$TestType_FieldAnnotations_SingleMemberDoubleArrOvrdDef},
	{"SingleMemberBooleanArrOvrdDef", "LUniTest/UnitTest$TestType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnitTest$TestType, SingleMemberBooleanArrOvrdDef), _UnitTest$TestType_FieldAnnotations_SingleMemberBooleanArrOvrdDef},
	{"SingleMemberStringArrOvrdDef", "LUniTest/UnitTest$TestType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnitTest$TestType, SingleMemberStringArrOvrdDef), _UnitTest$TestType_FieldAnnotations_SingleMemberStringArrOvrdDef},
	{"SingleMemberClassArrOvrdDef", "LUniTest/UnitTest$TestType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnitTest$TestType, SingleMemberClassArrOvrdDef), _UnitTest$TestType_FieldAnnotations_SingleMemberClassArrOvrdDef},
	{"SingleMemberEnumArrOvrdDef", "LUniTest/UnitTest$TestType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnitTest$TestType, SingleMemberEnumArrOvrdDef), _UnitTest$TestType_FieldAnnotations_SingleMemberEnumArrOvrdDef},
	{"SingleMemberByteArrAcceptDef", "LUniTest/UnitTest$TestType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnitTest$TestType, SingleMemberByteArrAcceptDef), _UnitTest$TestType_FieldAnnotations_SingleMemberByteArrAcceptDef},
	{"SingleMemberShortArrAcceptDef", "LUniTest/UnitTest$TestType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnitTest$TestType, SingleMemberShortArrAcceptDef), _UnitTest$TestType_FieldAnnotations_SingleMemberShortArrAcceptDef},
	{"SingleMemberIntArrAcceptDef", "LUniTest/UnitTest$TestType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnitTest$TestType, SingleMemberIntArrAcceptDef), _UnitTest$TestType_FieldAnnotations_SingleMemberIntArrAcceptDef},
	{"SingleMemberLongArrAcceptDef", "LUniTest/UnitTest$TestType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnitTest$TestType, SingleMemberLongArrAcceptDef), _UnitTest$TestType_FieldAnnotations_SingleMemberLongArrAcceptDef},
	{"SingleMemberCharArrAcceptDef", "LUniTest/UnitTest$TestType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnitTest$TestType, SingleMemberCharArrAcceptDef), _UnitTest$TestType_FieldAnnotations_SingleMemberCharArrAcceptDef},
	{"SingleMemberFloatArrAcceptDef", "LUniTest/UnitTest$TestType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnitTest$TestType, SingleMemberFloatArrAcceptDef), _UnitTest$TestType_FieldAnnotations_SingleMemberFloatArrAcceptDef},
	{"SingleMemberDoubleArrAcceptDef", "LUniTest/UnitTest$TestType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnitTest$TestType, SingleMemberDoubleArrAcceptDef), _UnitTest$TestType_FieldAnnotations_SingleMemberDoubleArrAcceptDef},
	{"SingleMemberBooleanArrAcceptDef", "LUniTest/UnitTest$TestType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnitTest$TestType, SingleMemberBooleanArrAcceptDef), _UnitTest$TestType_FieldAnnotations_SingleMemberBooleanArrAcceptDef},
	{"SingleMemberStringArrAcceptDef", "LUniTest/UnitTest$TestType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnitTest$TestType, SingleMemberStringArrAcceptDef), _UnitTest$TestType_FieldAnnotations_SingleMemberStringArrAcceptDef},
	{"SingleMemberClassArrAcceptDef", "LUniTest/UnitTest$TestType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnitTest$TestType, SingleMemberClassArrAcceptDef), _UnitTest$TestType_FieldAnnotations_SingleMemberClassArrAcceptDef},
	{"SingleMemberEnumArrAcceptDef", "LUniTest/UnitTest$TestType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(UnitTest$TestType, SingleMemberEnumArrAcceptDef), _UnitTest$TestType_FieldAnnotations_SingleMemberEnumArrAcceptDef},
	{"$VALUES", "[LUniTest/UnitTest$TestType;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(UnitTest$TestType, $VALUES)},
	{}
};

$MethodInfo _UnitTest$TestType_MethodInfo_[] = {
	{"$values", "()[LUniTest/UnitTest$TestType;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(UnitTest$TestType, $values, $UnitTest$TestTypeArray*)},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(UnitTest$TestType, init$, void, $String*, int32_t)},
	{"valueOf", "(Ljava/lang/String;)LUniTest/UnitTest$TestType;", nullptr, $PUBLIC | $STATIC, $staticMethod(UnitTest$TestType, valueOf, UnitTest$TestType*, $String*)},
	{"values", "()[LUniTest/UnitTest$TestType;", nullptr, $PUBLIC | $STATIC, $staticMethod(UnitTest$TestType, values, $UnitTest$TestTypeArray*)},
	{}
};

$InnerClassInfo _UnitTest$TestType_InnerClassesInfo_[] = {
	{"UniTest.UnitTest$TestType", "UniTest.UnitTest", "TestType", $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _UnitTest$TestType_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"UniTest.UnitTest$TestType",
	"java.lang.Enum",
	nullptr,
	_UnitTest$TestType_FieldInfo_,
	_UnitTest$TestType_MethodInfo_,
	"Ljava/lang/Enum<LUniTest/UnitTest$TestType;>;",
	nullptr,
	_UnitTest$TestType_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"UniTest.UnitTest"
};

$Object* allocate$UnitTest$TestType($Class* clazz) {
	return $of($alloc(UnitTest$TestType));
}

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

void clinit$UnitTest$TestType($Class* class$) {
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
	$loadClass(UnitTest$TestType, name, initialize, &_UnitTest$TestType_ClassInfo_, clinit$UnitTest$TestType, allocate$UnitTest$TestType);
	return class$;
}

$Class* UnitTest$TestType::class$ = nullptr;

} // UniTest