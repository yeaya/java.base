#include <UniTest/UnitTest.h>
#include <UniTest/ArrayTypes.h>
#include <UniTest/ArrayTypesWithDefault.h>
#include <UniTest/Bar.h>
#include <UniTest/Dad.h>
#include <UniTest/Foo.h>
#include <UniTest/Grandpa.h>
#include <UniTest/Marker.h>
#include <UniTest/Point.h>
#include <UniTest/ScalarTypes.h>
#include <UniTest/ScalarTypesWithDefault.h>
#include <UniTest/SingleMemberBoolean.h>
#include <UniTest/SingleMemberBooleanAcceptDefClass.h>
#include <UniTest/SingleMemberBooleanArrAcceptDefClass.h>
#include <UniTest/SingleMemberBooleanArrEmptyClass.h>
#include <UniTest/SingleMemberBooleanArrOneClass.h>
#include <UniTest/SingleMemberBooleanArrOvrdDefClass.h>
#include <UniTest/SingleMemberBooleanArrTwoClass.h>
#include <UniTest/SingleMemberBooleanArray.h>
#include <UniTest/SingleMemberBooleanArrayDef.h>
#include <UniTest/SingleMemberBooleanClass.h>
#include <UniTest/SingleMemberBooleanOvrdDefClass.h>
#include <UniTest/SingleMemberBooleanWithDef.h>
#include <UniTest/SingleMemberByte.h>
#include <UniTest/SingleMemberByteAcceptDefClass.h>
#include <UniTest/SingleMemberByteArrAcceptDefClass.h>
#include <UniTest/SingleMemberByteArrEmptyClass.h>
#include <UniTest/SingleMemberByteArrOneClass.h>
#include <UniTest/SingleMemberByteArrOvrdDefClass.h>
#include <UniTest/SingleMemberByteArrTwoClass.h>
#include <UniTest/SingleMemberByteArray.h>
#include <UniTest/SingleMemberByteArrayDef.h>
#include <UniTest/SingleMemberByteClass.h>
#include <UniTest/SingleMemberByteOvrdDefClass.h>
#include <UniTest/SingleMemberByteWithDef.h>
#include <UniTest/SingleMemberChar.h>
#include <UniTest/SingleMemberCharAcceptDefClass.h>
#include <UniTest/SingleMemberCharArrAcceptDefClass.h>
#include <UniTest/SingleMemberCharArrEmptyClass.h>
#include <UniTest/SingleMemberCharArrOneClass.h>
#include <UniTest/SingleMemberCharArrOvrdDefClass.h>
#include <UniTest/SingleMemberCharArrTwoClass.h>
#include <UniTest/SingleMemberCharArray.h>
#include <UniTest/SingleMemberCharArrayDef.h>
#include <UniTest/SingleMemberCharClass.h>
#include <UniTest/SingleMemberCharOvrdDefClass.h>
#include <UniTest/SingleMemberCharWithDef.h>
#include <UniTest/SingleMemberClass.h>
#include <UniTest/SingleMemberClassAcceptDefClass.h>
#include <UniTest/SingleMemberClassArrAcceptDefClass.h>
#include <UniTest/SingleMemberClassArrEmptyClass.h>
#include <UniTest/SingleMemberClassArrOneClass.h>
#include <UniTest/SingleMemberClassArrOvrdDefClass.h>
#include <UniTest/SingleMemberClassArrTwoClass.h>
#include <UniTest/SingleMemberClassArray.h>
#include <UniTest/SingleMemberClassArrayDef.h>
#include <UniTest/SingleMemberClassClass.h>
#include <UniTest/SingleMemberClassOvrdDefClass.h>
#include <UniTest/SingleMemberClassWithDef.h>
#include <UniTest/SingleMemberDouble.h>
#include <UniTest/SingleMemberDoubleAcceptDefClass.h>
#include <UniTest/SingleMemberDoubleArrAcceptDefClass.h>
#include <UniTest/SingleMemberDoubleArrEmptyClass.h>
#include <UniTest/SingleMemberDoubleArrOneClass.h>
#include <UniTest/SingleMemberDoubleArrOvrdDefClass.h>
#include <UniTest/SingleMemberDoubleArrTwoClass.h>
#include <UniTest/SingleMemberDoubleArray.h>
#include <UniTest/SingleMemberDoubleArrayDef.h>
#include <UniTest/SingleMemberDoubleClass.h>
#include <UniTest/SingleMemberDoubleOvrdDefClass.h>
#include <UniTest/SingleMemberDoubleWithDef.h>
#include <UniTest/SingleMemberEnum.h>
#include <UniTest/SingleMemberEnumAcceptDefClass.h>
#include <UniTest/SingleMemberEnumArrAcceptDefClass.h>
#include <UniTest/SingleMemberEnumArrEmptyClass.h>
#include <UniTest/SingleMemberEnumArrOneClass.h>
#include <UniTest/SingleMemberEnumArrOvrdDefClass.h>
#include <UniTest/SingleMemberEnumArrTwoClass.h>
#include <UniTest/SingleMemberEnumArray.h>
#include <UniTest/SingleMemberEnumArrayDef.h>
#include <UniTest/SingleMemberEnumClass.h>
#include <UniTest/SingleMemberEnumOvrdDefClass.h>
#include <UniTest/SingleMemberEnumWithDef.h>
#include <UniTest/SingleMemberFloat.h>
#include <UniTest/SingleMemberFloatAcceptDefClass.h>
#include <UniTest/SingleMemberFloatArrAcceptDefClass.h>
#include <UniTest/SingleMemberFloatArrEmptyClass.h>
#include <UniTest/SingleMemberFloatArrOneClass.h>
#include <UniTest/SingleMemberFloatArrOvrdDefClass.h>
#include <UniTest/SingleMemberFloatArrTwoClass.h>
#include <UniTest/SingleMemberFloatArray.h>
#include <UniTest/SingleMemberFloatArrayDef.h>
#include <UniTest/SingleMemberFloatClass.h>
#include <UniTest/SingleMemberFloatOvrdDefClass.h>
#include <UniTest/SingleMemberFloatWithDef.h>
#include <UniTest/SingleMemberInt.h>
#include <UniTest/SingleMemberIntAcceptDefClass.h>
#include <UniTest/SingleMemberIntArrAcceptDefClass.h>
#include <UniTest/SingleMemberIntArrEmptyClass.h>
#include <UniTest/SingleMemberIntArrOneClass.h>
#include <UniTest/SingleMemberIntArrOvrdDefClass.h>
#include <UniTest/SingleMemberIntArrTwoClass.h>
#include <UniTest/SingleMemberIntArray.h>
#include <UniTest/SingleMemberIntArrayDef.h>
#include <UniTest/SingleMemberIntClass.h>
#include <UniTest/SingleMemberIntOvrdDefClass.h>
#include <UniTest/SingleMemberIntWithDef.h>
#include <UniTest/SingleMemberLong.h>
#include <UniTest/SingleMemberLongAcceptDefClass.h>
#include <UniTest/SingleMemberLongArrAcceptDefClass.h>
#include <UniTest/SingleMemberLongArrEmptyClass.h>
#include <UniTest/SingleMemberLongArrOneClass.h>
#include <UniTest/SingleMemberLongArrOvrdDefClass.h>
#include <UniTest/SingleMemberLongArrTwoClass.h>
#include <UniTest/SingleMemberLongArray.h>
#include <UniTest/SingleMemberLongArrayDef.h>
#include <UniTest/SingleMemberLongClass.h>
#include <UniTest/SingleMemberLongOvrdDefClass.h>
#include <UniTest/SingleMemberLongWithDef.h>
#include <UniTest/SingleMemberShort.h>
#include <UniTest/SingleMemberShortAcceptDefClass.h>
#include <UniTest/SingleMemberShortArrAcceptDefClass.h>
#include <UniTest/SingleMemberShortArrEmptyClass.h>
#include <UniTest/SingleMemberShortArrOneClass.h>
#include <UniTest/SingleMemberShortArrOvrdDefClass.h>
#include <UniTest/SingleMemberShortArrTwoClass.h>
#include <UniTest/SingleMemberShortArray.h>
#include <UniTest/SingleMemberShortArrayDef.h>
#include <UniTest/SingleMemberShortClass.h>
#include <UniTest/SingleMemberShortOvrdDefClass.h>
#include <UniTest/SingleMemberShortWithDef.h>
#include <UniTest/SingleMemberString.h>
#include <UniTest/SingleMemberStringAcceptDefClass.h>
#include <UniTest/SingleMemberStringArrAcceptDefClass.h>
#include <UniTest/SingleMemberStringArrEmptyClass.h>
#include <UniTest/SingleMemberStringArrOneClass.h>
#include <UniTest/SingleMemberStringArrOvrdDefClass.h>
#include <UniTest/SingleMemberStringArrTwoClass.h>
#include <UniTest/SingleMemberStringArray.h>
#include <UniTest/SingleMemberStringArrayDef.h>
#include <UniTest/SingleMemberStringClass.h>
#include <UniTest/SingleMemberStringOvrdDefClass.h>
#include <UniTest/SingleMemberStringWithDef.h>
#include <UniTest/Son.h>
#include <UniTest/Stooge.h>
#include <UniTest/UnitTest$TestType.h>
#include <UniTest/arrayTypesAcceptDefaultClass.h>
#include <UniTest/arrayTypesOverrideDefaultClass.h>
#include <UniTest/emptyArrayTypesClass.h>
#include <UniTest/markerClass.h>
#include <UniTest/scalarTypesAcceptDefaultClass.h>
#include <UniTest/scalarTypesClass.h>
#include <UniTest/scalarTypesOverrideDefaultClass.h>
#include <UniTest/singleElementArrayTypesClass.h>
#include <UniTest/twoElementArrayTypesClass.h>
#include <java/io/ByteArrayInputStream.h>
#include <java/io/ByteArrayOutputStream.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutputStream.h>
#include <java/lang/Enum.h>
#include <java/lang/annotation/Annotation.h>
#include <java/lang/reflect/AccessibleObject.h>
#include <java/lang/reflect/AnnotatedElement.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Field.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Collection.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <java/util/RandomAccess.h>
#include <java/util/Set.h>
#include <java/util/SortedMap.h>
#include <java/util/SortedSet.h>
#include <jcpp.h>

#undef CURLY
#undef LARRY
#undef MOE
#undef TYPE
#undef X
#undef Y

using $ArrayTypes = ::UniTest::ArrayTypes;
using $ArrayTypesWithDefault = ::UniTest::ArrayTypesWithDefault;
using $Bar = ::UniTest::Bar;
using $Dad = ::UniTest::Dad;
using $Foo = ::UniTest::Foo;
using $Grandpa = ::UniTest::Grandpa;
using $Marker = ::UniTest::Marker;
using $ScalarTypes = ::UniTest::ScalarTypes;
using $ScalarTypesWithDefault = ::UniTest::ScalarTypesWithDefault;
using $SingleMemberBoolean = ::UniTest::SingleMemberBoolean;
using $SingleMemberBooleanAcceptDefClass = ::UniTest::SingleMemberBooleanAcceptDefClass;
using $SingleMemberBooleanArrAcceptDefClass = ::UniTest::SingleMemberBooleanArrAcceptDefClass;
using $SingleMemberBooleanArrEmptyClass = ::UniTest::SingleMemberBooleanArrEmptyClass;
using $SingleMemberBooleanArrOneClass = ::UniTest::SingleMemberBooleanArrOneClass;
using $SingleMemberBooleanArrOvrdDefClass = ::UniTest::SingleMemberBooleanArrOvrdDefClass;
using $SingleMemberBooleanArrTwoClass = ::UniTest::SingleMemberBooleanArrTwoClass;
using $SingleMemberBooleanArray = ::UniTest::SingleMemberBooleanArray;
using $SingleMemberBooleanArrayDef = ::UniTest::SingleMemberBooleanArrayDef;
using $SingleMemberBooleanClass = ::UniTest::SingleMemberBooleanClass;
using $SingleMemberBooleanOvrdDefClass = ::UniTest::SingleMemberBooleanOvrdDefClass;
using $SingleMemberBooleanWithDef = ::UniTest::SingleMemberBooleanWithDef;
using $SingleMemberByte = ::UniTest::SingleMemberByte;
using $SingleMemberByteAcceptDefClass = ::UniTest::SingleMemberByteAcceptDefClass;
using $SingleMemberByteArrAcceptDefClass = ::UniTest::SingleMemberByteArrAcceptDefClass;
using $SingleMemberByteArrEmptyClass = ::UniTest::SingleMemberByteArrEmptyClass;
using $SingleMemberByteArrOneClass = ::UniTest::SingleMemberByteArrOneClass;
using $SingleMemberByteArrOvrdDefClass = ::UniTest::SingleMemberByteArrOvrdDefClass;
using $SingleMemberByteArrTwoClass = ::UniTest::SingleMemberByteArrTwoClass;
using $SingleMemberByteArray = ::UniTest::SingleMemberByteArray;
using $SingleMemberByteArrayDef = ::UniTest::SingleMemberByteArrayDef;
using $SingleMemberByteClass = ::UniTest::SingleMemberByteClass;
using $SingleMemberByteOvrdDefClass = ::UniTest::SingleMemberByteOvrdDefClass;
using $SingleMemberByteWithDef = ::UniTest::SingleMemberByteWithDef;
using $SingleMemberChar = ::UniTest::SingleMemberChar;
using $SingleMemberCharAcceptDefClass = ::UniTest::SingleMemberCharAcceptDefClass;
using $SingleMemberCharArrAcceptDefClass = ::UniTest::SingleMemberCharArrAcceptDefClass;
using $SingleMemberCharArrEmptyClass = ::UniTest::SingleMemberCharArrEmptyClass;
using $SingleMemberCharArrOneClass = ::UniTest::SingleMemberCharArrOneClass;
using $SingleMemberCharArrOvrdDefClass = ::UniTest::SingleMemberCharArrOvrdDefClass;
using $SingleMemberCharArrTwoClass = ::UniTest::SingleMemberCharArrTwoClass;
using $SingleMemberCharArray = ::UniTest::SingleMemberCharArray;
using $SingleMemberCharArrayDef = ::UniTest::SingleMemberCharArrayDef;
using $SingleMemberCharClass = ::UniTest::SingleMemberCharClass;
using $SingleMemberCharOvrdDefClass = ::UniTest::SingleMemberCharOvrdDefClass;
using $SingleMemberCharWithDef = ::UniTest::SingleMemberCharWithDef;
using $SingleMemberClass = ::UniTest::SingleMemberClass;
using $SingleMemberClassAcceptDefClass = ::UniTest::SingleMemberClassAcceptDefClass;
using $SingleMemberClassArrAcceptDefClass = ::UniTest::SingleMemberClassArrAcceptDefClass;
using $SingleMemberClassArrEmptyClass = ::UniTest::SingleMemberClassArrEmptyClass;
using $SingleMemberClassArrOneClass = ::UniTest::SingleMemberClassArrOneClass;
using $SingleMemberClassArrOvrdDefClass = ::UniTest::SingleMemberClassArrOvrdDefClass;
using $SingleMemberClassArrTwoClass = ::UniTest::SingleMemberClassArrTwoClass;
using $SingleMemberClassArray = ::UniTest::SingleMemberClassArray;
using $SingleMemberClassArrayDef = ::UniTest::SingleMemberClassArrayDef;
using $SingleMemberClassClass = ::UniTest::SingleMemberClassClass;
using $SingleMemberClassOvrdDefClass = ::UniTest::SingleMemberClassOvrdDefClass;
using $SingleMemberClassWithDef = ::UniTest::SingleMemberClassWithDef;
using $SingleMemberDouble = ::UniTest::SingleMemberDouble;
using $SingleMemberDoubleAcceptDefClass = ::UniTest::SingleMemberDoubleAcceptDefClass;
using $SingleMemberDoubleArrAcceptDefClass = ::UniTest::SingleMemberDoubleArrAcceptDefClass;
using $SingleMemberDoubleArrEmptyClass = ::UniTest::SingleMemberDoubleArrEmptyClass;
using $SingleMemberDoubleArrOneClass = ::UniTest::SingleMemberDoubleArrOneClass;
using $SingleMemberDoubleArrOvrdDefClass = ::UniTest::SingleMemberDoubleArrOvrdDefClass;
using $SingleMemberDoubleArrTwoClass = ::UniTest::SingleMemberDoubleArrTwoClass;
using $SingleMemberDoubleArray = ::UniTest::SingleMemberDoubleArray;
using $SingleMemberDoubleArrayDef = ::UniTest::SingleMemberDoubleArrayDef;
using $SingleMemberDoubleClass = ::UniTest::SingleMemberDoubleClass;
using $SingleMemberDoubleOvrdDefClass = ::UniTest::SingleMemberDoubleOvrdDefClass;
using $SingleMemberDoubleWithDef = ::UniTest::SingleMemberDoubleWithDef;
using $SingleMemberEnum = ::UniTest::SingleMemberEnum;
using $SingleMemberEnumAcceptDefClass = ::UniTest::SingleMemberEnumAcceptDefClass;
using $SingleMemberEnumArrAcceptDefClass = ::UniTest::SingleMemberEnumArrAcceptDefClass;
using $SingleMemberEnumArrEmptyClass = ::UniTest::SingleMemberEnumArrEmptyClass;
using $SingleMemberEnumArrOneClass = ::UniTest::SingleMemberEnumArrOneClass;
using $SingleMemberEnumArrOvrdDefClass = ::UniTest::SingleMemberEnumArrOvrdDefClass;
using $SingleMemberEnumArrTwoClass = ::UniTest::SingleMemberEnumArrTwoClass;
using $SingleMemberEnumArray = ::UniTest::SingleMemberEnumArray;
using $SingleMemberEnumArrayDef = ::UniTest::SingleMemberEnumArrayDef;
using $SingleMemberEnumClass = ::UniTest::SingleMemberEnumClass;
using $SingleMemberEnumOvrdDefClass = ::UniTest::SingleMemberEnumOvrdDefClass;
using $SingleMemberEnumWithDef = ::UniTest::SingleMemberEnumWithDef;
using $SingleMemberFloat = ::UniTest::SingleMemberFloat;
using $SingleMemberFloatAcceptDefClass = ::UniTest::SingleMemberFloatAcceptDefClass;
using $SingleMemberFloatArrAcceptDefClass = ::UniTest::SingleMemberFloatArrAcceptDefClass;
using $SingleMemberFloatArrEmptyClass = ::UniTest::SingleMemberFloatArrEmptyClass;
using $SingleMemberFloatArrOneClass = ::UniTest::SingleMemberFloatArrOneClass;
using $SingleMemberFloatArrOvrdDefClass = ::UniTest::SingleMemberFloatArrOvrdDefClass;
using $SingleMemberFloatArrTwoClass = ::UniTest::SingleMemberFloatArrTwoClass;
using $SingleMemberFloatArray = ::UniTest::SingleMemberFloatArray;
using $SingleMemberFloatArrayDef = ::UniTest::SingleMemberFloatArrayDef;
using $SingleMemberFloatClass = ::UniTest::SingleMemberFloatClass;
using $SingleMemberFloatOvrdDefClass = ::UniTest::SingleMemberFloatOvrdDefClass;
using $SingleMemberFloatWithDef = ::UniTest::SingleMemberFloatWithDef;
using $SingleMemberInt = ::UniTest::SingleMemberInt;
using $SingleMemberIntAcceptDefClass = ::UniTest::SingleMemberIntAcceptDefClass;
using $SingleMemberIntArrAcceptDefClass = ::UniTest::SingleMemberIntArrAcceptDefClass;
using $SingleMemberIntArrEmptyClass = ::UniTest::SingleMemberIntArrEmptyClass;
using $SingleMemberIntArrOneClass = ::UniTest::SingleMemberIntArrOneClass;
using $SingleMemberIntArrOvrdDefClass = ::UniTest::SingleMemberIntArrOvrdDefClass;
using $SingleMemberIntArrTwoClass = ::UniTest::SingleMemberIntArrTwoClass;
using $SingleMemberIntArray = ::UniTest::SingleMemberIntArray;
using $SingleMemberIntArrayDef = ::UniTest::SingleMemberIntArrayDef;
using $SingleMemberIntClass = ::UniTest::SingleMemberIntClass;
using $SingleMemberIntOvrdDefClass = ::UniTest::SingleMemberIntOvrdDefClass;
using $SingleMemberIntWithDef = ::UniTest::SingleMemberIntWithDef;
using $SingleMemberLong = ::UniTest::SingleMemberLong;
using $SingleMemberLongAcceptDefClass = ::UniTest::SingleMemberLongAcceptDefClass;
using $SingleMemberLongArrAcceptDefClass = ::UniTest::SingleMemberLongArrAcceptDefClass;
using $SingleMemberLongArrEmptyClass = ::UniTest::SingleMemberLongArrEmptyClass;
using $SingleMemberLongArrOneClass = ::UniTest::SingleMemberLongArrOneClass;
using $SingleMemberLongArrOvrdDefClass = ::UniTest::SingleMemberLongArrOvrdDefClass;
using $SingleMemberLongArrTwoClass = ::UniTest::SingleMemberLongArrTwoClass;
using $SingleMemberLongArray = ::UniTest::SingleMemberLongArray;
using $SingleMemberLongArrayDef = ::UniTest::SingleMemberLongArrayDef;
using $SingleMemberLongClass = ::UniTest::SingleMemberLongClass;
using $SingleMemberLongOvrdDefClass = ::UniTest::SingleMemberLongOvrdDefClass;
using $SingleMemberLongWithDef = ::UniTest::SingleMemberLongWithDef;
using $SingleMemberShort = ::UniTest::SingleMemberShort;
using $SingleMemberShortAcceptDefClass = ::UniTest::SingleMemberShortAcceptDefClass;
using $SingleMemberShortArrAcceptDefClass = ::UniTest::SingleMemberShortArrAcceptDefClass;
using $SingleMemberShortArrEmptyClass = ::UniTest::SingleMemberShortArrEmptyClass;
using $SingleMemberShortArrOneClass = ::UniTest::SingleMemberShortArrOneClass;
using $SingleMemberShortArrOvrdDefClass = ::UniTest::SingleMemberShortArrOvrdDefClass;
using $SingleMemberShortArrTwoClass = ::UniTest::SingleMemberShortArrTwoClass;
using $SingleMemberShortArray = ::UniTest::SingleMemberShortArray;
using $SingleMemberShortArrayDef = ::UniTest::SingleMemberShortArrayDef;
using $SingleMemberShortClass = ::UniTest::SingleMemberShortClass;
using $SingleMemberShortOvrdDefClass = ::UniTest::SingleMemberShortOvrdDefClass;
using $SingleMemberShortWithDef = ::UniTest::SingleMemberShortWithDef;
using $SingleMemberString = ::UniTest::SingleMemberString;
using $SingleMemberStringAcceptDefClass = ::UniTest::SingleMemberStringAcceptDefClass;
using $SingleMemberStringArrAcceptDefClass = ::UniTest::SingleMemberStringArrAcceptDefClass;
using $SingleMemberStringArrEmptyClass = ::UniTest::SingleMemberStringArrEmptyClass;
using $SingleMemberStringArrOneClass = ::UniTest::SingleMemberStringArrOneClass;
using $SingleMemberStringArrOvrdDefClass = ::UniTest::SingleMemberStringArrOvrdDefClass;
using $SingleMemberStringArrTwoClass = ::UniTest::SingleMemberStringArrTwoClass;
using $SingleMemberStringArray = ::UniTest::SingleMemberStringArray;
using $SingleMemberStringArrayDef = ::UniTest::SingleMemberStringArrayDef;
using $SingleMemberStringClass = ::UniTest::SingleMemberStringClass;
using $SingleMemberStringOvrdDefClass = ::UniTest::SingleMemberStringOvrdDefClass;
using $SingleMemberStringWithDef = ::UniTest::SingleMemberStringWithDef;
using $Son = ::UniTest::Son;
using $Stooge = ::UniTest::Stooge;
using $UnitTest$TestType = ::UniTest::UnitTest$TestType;
using $arrayTypesAcceptDefaultClass = ::UniTest::arrayTypesAcceptDefaultClass;
using $arrayTypesOverrideDefaultClass = ::UniTest::arrayTypesOverrideDefaultClass;
using $emptyArrayTypesClass = ::UniTest::emptyArrayTypesClass;
using $markerClass = ::UniTest::markerClass;
using $scalarTypesAcceptDefaultClass = ::UniTest::scalarTypesAcceptDefaultClass;
using $scalarTypesClass = ::UniTest::scalarTypesClass;
using $scalarTypesOverrideDefaultClass = ::UniTest::scalarTypesOverrideDefaultClass;
using $singleElementArrayTypesClass = ::UniTest::singleElementArrayTypesClass;
using $twoElementArrayTypesClass = ::UniTest::twoElementArrayTypesClass;
using $EnumArray = $Array<::java::lang::Enum>;
using $AnnotationArray = $Array<::java::lang::annotation::Annotation>;
using $ByteArrayInputStream = ::java::io::ByteArrayInputStream;
using $ByteArrayOutputStream = ::java::io::ByteArrayOutputStream;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $Attribute = ::java::lang::Attribute;
using $Boolean = ::java::lang::Boolean;
using $Byte = ::java::lang::Byte;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $Double = ::java::lang::Double;
using $Enum = ::java::lang::Enum;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $ParameterAnnotation = ::java::lang::ParameterAnnotation;
using $Short = ::java::lang::Short;
using $Annotation = ::java::lang::annotation::Annotation;
using $AccessibleObject = ::java::lang::reflect::AccessibleObject;
using $AnnotatedElement = ::java::lang::reflect::AnnotatedElement;
using $Method = ::java::lang::reflect::Method;
using $Collection = ::java::util::Collection;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $RandomAccess = ::java::util::RandomAccess;
using $Set = ::java::util::Set;
using $SortedMap = ::java::util::SortedMap;
using $SortedSet = ::java::util::SortedSet;

namespace UniTest {

$ClassArray* UnitTest::X = nullptr;
$ClassArray* UnitTest::Y = nullptr;
int32_t UnitTest::numTests = 0;
int32_t UnitTest::failCount = 0;

void UnitTest::main($StringArray* args) {
	$init(UnitTest);
	$useLocalObjectStack();
	$beforeCallerSensitive();
	checkScalarTypes($$cast($AccessibleObject, UnitTest::class$->getMethod("scalarTypesMethod"_s, UnitTest::X)));
	checkScalarTypesOverrideDefault($$cast($AccessibleObject, UnitTest::class$->getMethod("scalarTypesOverrideDefaultMethod"_s, UnitTest::X)));
	checkScalarTypesAcceptDefault($$cast($AccessibleObject, UnitTest::class$->getMethod("scalarTypesAcceptDefaultMethod"_s, UnitTest::X)));
	checkArrayTypes0($$cast($AccessibleObject, UnitTest::class$->getMethod("emptyArrayTypesMethod"_s, UnitTest::X)));
	checkArrayTypes1($$cast($AccessibleObject, UnitTest::class$->getMethod("singleElementArrayTypesMethod"_s, UnitTest::X)));
	checkArrayTypes2($$cast($AccessibleObject, UnitTest::class$->getMethod("twoElementArrayTypesMethod"_s, UnitTest::X)));
	checkArrayTypesAcceptDefault($$cast($AccessibleObject, UnitTest::class$->getMethod("arrayTypesAcceptDefaultMethod"_s, UnitTest::X)));
	checkArrayTypesOverrideDefault($$cast($AccessibleObject, UnitTest::class$->getMethod("arrayTypesOverrideDefaultMethod"_s, UnitTest::X)));
	checkMarker($$cast($AccessibleObject, UnitTest::class$->getMethod("markerMethod"_s, UnitTest::X)));
	checkSingleMemberByte($$cast($AccessibleObject, UnitTest::class$->getMethod("SingleMemberByte"_s, UnitTest::X)));
	checkSingleMemberShort($$cast($AccessibleObject, UnitTest::class$->getMethod("SingleMemberShort"_s, UnitTest::X)));
	checkSingleMemberInt($$cast($AccessibleObject, UnitTest::class$->getMethod("SingleMemberInt"_s, UnitTest::X)));
	checkSingleMemberLong($$cast($AccessibleObject, UnitTest::class$->getMethod("SingleMemberLong"_s, UnitTest::X)));
	checkSingleMemberChar($$cast($AccessibleObject, UnitTest::class$->getMethod("SingleMemberChar"_s, UnitTest::X)));
	checkSingleMemberFloat($$cast($AccessibleObject, UnitTest::class$->getMethod("SingleMemberFloat"_s, UnitTest::X)));
	checkSingleMemberDouble($$cast($AccessibleObject, UnitTest::class$->getMethod("SingleMemberDouble"_s, UnitTest::X)));
	checkSingleMemberBoolean($$cast($AccessibleObject, UnitTest::class$->getMethod("SingleMemberBoolean"_s, UnitTest::X)));
	checkSingleMemberString($$cast($AccessibleObject, UnitTest::class$->getMethod("SingleMemberString"_s, UnitTest::X)));
	checkSingleMemberClass($$cast($AccessibleObject, UnitTest::class$->getMethod("SingleMemberClass"_s, UnitTest::X)));
	checkSingleMemberEnum($$cast($AccessibleObject, UnitTest::class$->getMethod("SingleMemberEnum"_s, UnitTest::X)));
	checkSingleMemberByteOvrdDef($$cast($AccessibleObject, UnitTest::class$->getMethod("SingleMemberByteOvrdDef"_s, UnitTest::X)));
	checkSingleMemberShortOvrdDef($$cast($AccessibleObject, UnitTest::class$->getMethod("SingleMemberShortOvrdDef"_s, UnitTest::X)));
	checkSingleMemberIntOvrdDef($$cast($AccessibleObject, UnitTest::class$->getMethod("SingleMemberIntOvrdDef"_s, UnitTest::X)));
	checkSingleMemberLongOvrdDef($$cast($AccessibleObject, UnitTest::class$->getMethod("SingleMemberLongOvrdDef"_s, UnitTest::X)));
	checkSingleMemberCharOvrdDef($$cast($AccessibleObject, UnitTest::class$->getMethod("SingleMemberCharOvrdDef"_s, UnitTest::X)));
	checkSingleMemberFloatOvrdDef($$cast($AccessibleObject, UnitTest::class$->getMethod("SingleMemberFloatOvrdDef"_s, UnitTest::X)));
	checkSingleMemberDoubleOvrdDef($$cast($AccessibleObject, UnitTest::class$->getMethod("SingleMemberDoubleOvrdDef"_s, UnitTest::X)));
	checkSingleMemberBooleanOvrdDef($$cast($AccessibleObject, UnitTest::class$->getMethod("SingleMemberBooleanOvrdDef"_s, UnitTest::X)));
	checkSingleMemberStringOvrdDef($$cast($AccessibleObject, UnitTest::class$->getMethod("SingleMemberStringOvrdDef"_s, UnitTest::X)));
	checkSingleMemberClassOvrdDef($$cast($AccessibleObject, UnitTest::class$->getMethod("SingleMemberClassOvrdDef"_s, UnitTest::X)));
	checkSingleMemberEnumOvrdDef($$cast($AccessibleObject, UnitTest::class$->getMethod("SingleMemberEnumOvrdDef"_s, UnitTest::X)));
	checkSingleMemberByteAcceptDef($$cast($AccessibleObject, UnitTest::class$->getMethod("SingleMemberByteAcceptDef"_s, UnitTest::X)));
	checkSingleMemberShortAcceptDef($$cast($AccessibleObject, UnitTest::class$->getMethod("SingleMemberShortAcceptDef"_s, UnitTest::X)));
	checkSingleMemberIntAcceptDef($$cast($AccessibleObject, UnitTest::class$->getMethod("SingleMemberIntAcceptDef"_s, UnitTest::X)));
	checkSingleMemberLongAcceptDef($$cast($AccessibleObject, UnitTest::class$->getMethod("SingleMemberLongAcceptDef"_s, UnitTest::X)));
	checkSingleMemberCharAcceptDef($$cast($AccessibleObject, UnitTest::class$->getMethod("SingleMemberCharAcceptDef"_s, UnitTest::X)));
	checkSingleMemberFloatAcceptDef($$cast($AccessibleObject, UnitTest::class$->getMethod("SingleMemberFloatAcceptDef"_s, UnitTest::X)));
	checkSingleMemberDoubleAcceptDef($$cast($AccessibleObject, UnitTest::class$->getMethod("SingleMemberDoubleAcceptDef"_s, UnitTest::X)));
	checkSingleMemberBooleanAcceptDef($$cast($AccessibleObject, UnitTest::class$->getMethod("SingleMemberBooleanAcceptDef"_s, UnitTest::X)));
	checkSingleMemberStringAcceptDef($$cast($AccessibleObject, UnitTest::class$->getMethod("SingleMemberStringAcceptDef"_s, UnitTest::X)));
	checkSingleMemberClassAcceptDef($$cast($AccessibleObject, UnitTest::class$->getMethod("SingleMemberClassAcceptDef"_s, UnitTest::X)));
	checkSingleMemberEnumAcceptDef($$cast($AccessibleObject, UnitTest::class$->getMethod("SingleMemberEnumAcceptDef"_s, UnitTest::X)));
	checkSingleMemberByteArrEmpty($$cast($AccessibleObject, UnitTest::class$->getMethod("SingleMemberByteArrEmpty"_s, UnitTest::X)));
	checkSingleMemberShortArrEmpty($$cast($AccessibleObject, UnitTest::class$->getMethod("SingleMemberShortArrEmpty"_s, UnitTest::X)));
	checkSingleMemberIntArrEmpty($$cast($AccessibleObject, UnitTest::class$->getMethod("SingleMemberIntArrEmpty"_s, UnitTest::X)));
	checkSingleMemberLongArrEmpty($$cast($AccessibleObject, UnitTest::class$->getMethod("SingleMemberLongArrEmpty"_s, UnitTest::X)));
	checkSingleMemberCharArrEmpty($$cast($AccessibleObject, UnitTest::class$->getMethod("SingleMemberCharArrEmpty"_s, UnitTest::X)));
	checkSingleMemberFloatArrEmpty($$cast($AccessibleObject, UnitTest::class$->getMethod("SingleMemberFloatArrEmpty"_s, UnitTest::X)));
	checkSingleMemberDoubleArrEmpty($$cast($AccessibleObject, UnitTest::class$->getMethod("SingleMemberDoubleArrEmpty"_s, UnitTest::X)));
	checkSingleMemberBooleanArrEmpty($$cast($AccessibleObject, UnitTest::class$->getMethod("SingleMemberBooleanArrEmpty"_s, UnitTest::X)));
	checkSingleMemberStringArrEmpty($$cast($AccessibleObject, UnitTest::class$->getMethod("SingleMemberStringArrEmpty"_s, UnitTest::X)));
	checkSingleMemberClassArrEmpty($$cast($AccessibleObject, UnitTest::class$->getMethod("SingleMemberClassArrEmpty"_s, UnitTest::X)));
	checkSingleMemberEnumArrEmpty($$cast($AccessibleObject, UnitTest::class$->getMethod("SingleMemberEnumArrEmpty"_s, UnitTest::X)));
	checkSingleMemberByteArrOne($$cast($AccessibleObject, UnitTest::class$->getMethod("SingleMemberByteArrOne"_s, UnitTest::X)));
	checkSingleMemberShortArrOne($$cast($AccessibleObject, UnitTest::class$->getMethod("SingleMemberShortArrOne"_s, UnitTest::X)));
	checkSingleMemberIntArrOne($$cast($AccessibleObject, UnitTest::class$->getMethod("SingleMemberIntArrOne"_s, UnitTest::X)));
	checkSingleMemberLongArrOne($$cast($AccessibleObject, UnitTest::class$->getMethod("SingleMemberLongArrOne"_s, UnitTest::X)));
	checkSingleMemberCharArrOne($$cast($AccessibleObject, UnitTest::class$->getMethod("SingleMemberCharArrOne"_s, UnitTest::X)));
	checkSingleMemberFloatArrOne($$cast($AccessibleObject, UnitTest::class$->getMethod("SingleMemberFloatArrOne"_s, UnitTest::X)));
	checkSingleMemberDoubleArrOne($$cast($AccessibleObject, UnitTest::class$->getMethod("SingleMemberDoubleArrOne"_s, UnitTest::X)));
	checkSingleMemberBooleanArrOne($$cast($AccessibleObject, UnitTest::class$->getMethod("SingleMemberBooleanArrOne"_s, UnitTest::X)));
	checkSingleMemberStringArrOne($$cast($AccessibleObject, UnitTest::class$->getMethod("SingleMemberStringArrOne"_s, UnitTest::X)));
	checkSingleMemberClassArrOne($$cast($AccessibleObject, UnitTest::class$->getMethod("SingleMemberClassArrOne"_s, UnitTest::X)));
	checkSingleMemberEnumArrOne($$cast($AccessibleObject, UnitTest::class$->getMethod("SingleMemberEnumArrOne"_s, UnitTest::X)));
	checkSingleMemberByteArrTwo($$cast($AccessibleObject, UnitTest::class$->getMethod("SingleMemberByteArrTwo"_s, UnitTest::X)));
	checkSingleMemberShortArrTwo($$cast($AccessibleObject, UnitTest::class$->getMethod("SingleMemberShortArrTwo"_s, UnitTest::X)));
	checkSingleMemberIntArrTwo($$cast($AccessibleObject, UnitTest::class$->getMethod("SingleMemberIntArrTwo"_s, UnitTest::X)));
	checkSingleMemberLongArrTwo($$cast($AccessibleObject, UnitTest::class$->getMethod("SingleMemberLongArrTwo"_s, UnitTest::X)));
	checkSingleMemberCharArrTwo($$cast($AccessibleObject, UnitTest::class$->getMethod("SingleMemberCharArrTwo"_s, UnitTest::X)));
	checkSingleMemberFloatArrTwo($$cast($AccessibleObject, UnitTest::class$->getMethod("SingleMemberFloatArrTwo"_s, UnitTest::X)));
	checkSingleMemberDoubleArrTwo($$cast($AccessibleObject, UnitTest::class$->getMethod("SingleMemberDoubleArrTwo"_s, UnitTest::X)));
	checkSingleMemberBooleanArrTwo($$cast($AccessibleObject, UnitTest::class$->getMethod("SingleMemberBooleanArrTwo"_s, UnitTest::X)));
	checkSingleMemberStringArrTwo($$cast($AccessibleObject, UnitTest::class$->getMethod("SingleMemberStringArrTwo"_s, UnitTest::X)));
	checkSingleMemberClassArrTwo($$cast($AccessibleObject, UnitTest::class$->getMethod("SingleMemberClassArrTwo"_s, UnitTest::X)));
	checkSingleMemberEnumArrTwo($$cast($AccessibleObject, UnitTest::class$->getMethod("SingleMemberEnumArrTwo"_s, UnitTest::X)));
	checkSingleMemberByteArrOvrdDef($$cast($AccessibleObject, UnitTest::class$->getMethod("SingleMemberByteArrOvrdDef"_s, UnitTest::X)));
	checkSingleMemberShortArrOvrdDef($$cast($AccessibleObject, UnitTest::class$->getMethod("SingleMemberShortArrOvrdDef"_s, UnitTest::X)));
	checkSingleMemberIntArrOvrdDef($$cast($AccessibleObject, UnitTest::class$->getMethod("SingleMemberIntArrOvrdDef"_s, UnitTest::X)));
	checkSingleMemberLongArrOvrdDef($$cast($AccessibleObject, UnitTest::class$->getMethod("SingleMemberLongArrOvrdDef"_s, UnitTest::X)));
	checkSingleMemberCharArrOvrdDef($$cast($AccessibleObject, UnitTest::class$->getMethod("SingleMemberCharArrOvrdDef"_s, UnitTest::X)));
	checkSingleMemberFloatArrOvrdDef($$cast($AccessibleObject, UnitTest::class$->getMethod("SingleMemberFloatArrOvrdDef"_s, UnitTest::X)));
	checkSingleMemberDoubleArrOvrdDef($$cast($AccessibleObject, UnitTest::class$->getMethod("SingleMemberDoubleArrOvrdDef"_s, UnitTest::X)));
	checkSingleMemberBooleanArrOvrdDef($$cast($AccessibleObject, UnitTest::class$->getMethod("SingleMemberBooleanArrOvrdDef"_s, UnitTest::X)));
	checkSingleMemberStringArrOvrdDef($$cast($AccessibleObject, UnitTest::class$->getMethod("SingleMemberStringArrOvrdDef"_s, UnitTest::X)));
	checkSingleMemberClassArrOvrdDef($$cast($AccessibleObject, UnitTest::class$->getMethod("SingleMemberClassArrOvrdDef"_s, UnitTest::X)));
	checkSingleMemberEnumArrOvrdDef($$cast($AccessibleObject, UnitTest::class$->getMethod("SingleMemberEnumArrOvrdDef"_s, UnitTest::X)));
	checkSingleMemberByteArrAcceptDef($$cast($AccessibleObject, UnitTest::class$->getMethod("SingleMemberByteArrAcceptDef"_s, UnitTest::X)));
	checkSingleMemberShortArrAcceptDef($$cast($AccessibleObject, UnitTest::class$->getMethod("SingleMemberShortArrAcceptDef"_s, UnitTest::X)));
	checkSingleMemberIntArrAcceptDef($$cast($AccessibleObject, UnitTest::class$->getMethod("SingleMemberIntArrAcceptDef"_s, UnitTest::X)));
	checkSingleMemberLongArrAcceptDef($$cast($AccessibleObject, UnitTest::class$->getMethod("SingleMemberLongArrAcceptDef"_s, UnitTest::X)));
	checkSingleMemberCharArrAcceptDef($$cast($AccessibleObject, UnitTest::class$->getMethod("SingleMemberCharArrAcceptDef"_s, UnitTest::X)));
	checkSingleMemberFloatArrAcceptDef($$cast($AccessibleObject, UnitTest::class$->getMethod("SingleMemberFloatArrAcceptDef"_s, UnitTest::X)));
	checkSingleMemberDoubleArrAcceptDef($$cast($AccessibleObject, UnitTest::class$->getMethod("SingleMemberDoubleArrAcceptDef"_s, UnitTest::X)));
	checkSingleMemberBooleanArrAcceptDef($$cast($AccessibleObject, UnitTest::class$->getMethod("SingleMemberBooleanArrAcceptDef"_s, UnitTest::X)));
	checkSingleMemberStringArrAcceptDef($$cast($AccessibleObject, UnitTest::class$->getMethod("SingleMemberStringArrAcceptDef"_s, UnitTest::X)));
	checkSingleMemberClassArrAcceptDef($$cast($AccessibleObject, UnitTest::class$->getMethod("SingleMemberClassArrAcceptDef"_s, UnitTest::X)));
	checkSingleMemberEnumArrAcceptDef($$cast($AccessibleObject, UnitTest::class$->getMethod("SingleMemberEnumArrAcceptDef"_s, UnitTest::X)));
	checkScalarTypes($(UnitTest::class$->getField("scalarTypesField"_s)));
	checkScalarTypesAcceptDefault($(UnitTest::class$->getField("scalarTypesAcceptDefaultField"_s)));
	checkScalarTypesOverrideDefault($(UnitTest::class$->getField("scalarTypesOverrideDefaultField"_s)));
	checkArrayTypes0($(UnitTest::class$->getField("emptyArrayTypesField"_s)));
	checkArrayTypes1($(UnitTest::class$->getField("singleElementArrayTypesField"_s)));
	checkArrayTypes2($(UnitTest::class$->getField("twoElementArrayTypesField"_s)));
	checkArrayTypesAcceptDefault($(UnitTest::class$->getField("arrayTypesAcceptDefaultField"_s)));
	checkArrayTypesOverrideDefault($(UnitTest::class$->getField("arrayTypesOverrideDefaultField"_s)));
	checkMarker($(UnitTest::class$->getField("markerField"_s)));
	checkSingleMemberByte($(UnitTest::class$->getField("SingleMemberByteField"_s)));
	checkSingleMemberShort($(UnitTest::class$->getField("SingleMemberShortField"_s)));
	checkSingleMemberInt($(UnitTest::class$->getField("SingleMemberIntField"_s)));
	checkSingleMemberLong($(UnitTest::class$->getField("SingleMemberLongField"_s)));
	checkSingleMemberChar($(UnitTest::class$->getField("SingleMemberCharField"_s)));
	checkSingleMemberFloat($(UnitTest::class$->getField("SingleMemberFloatField"_s)));
	checkSingleMemberDouble($(UnitTest::class$->getField("SingleMemberDoubleField"_s)));
	checkSingleMemberBoolean($(UnitTest::class$->getField("SingleMemberBooleanField"_s)));
	checkSingleMemberString($(UnitTest::class$->getField("SingleMemberStringField"_s)));
	checkSingleMemberClass($(UnitTest::class$->getField("SingleMemberClassField"_s)));
	checkSingleMemberEnum($(UnitTest::class$->getField("SingleMemberEnumField"_s)));
	checkSingleMemberByteOvrdDef($(UnitTest::class$->getField("SingleMemberByteOvrdDefField"_s)));
	checkSingleMemberShortOvrdDef($(UnitTest::class$->getField("SingleMemberShortOvrdDefField"_s)));
	checkSingleMemberIntOvrdDef($(UnitTest::class$->getField("SingleMemberIntOvrdDefField"_s)));
	checkSingleMemberLongOvrdDef($(UnitTest::class$->getField("SingleMemberLongOvrdDefField"_s)));
	checkSingleMemberCharOvrdDef($(UnitTest::class$->getField("SingleMemberCharOvrdDefField"_s)));
	checkSingleMemberFloatOvrdDef($(UnitTest::class$->getField("SingleMemberFloatOvrdDefField"_s)));
	checkSingleMemberDoubleOvrdDef($(UnitTest::class$->getField("SingleMemberDoubleOvrdDefField"_s)));
	checkSingleMemberBooleanOvrdDef($(UnitTest::class$->getField("SingleMemberBooleanOvrdDefField"_s)));
	checkSingleMemberStringOvrdDef($(UnitTest::class$->getField("SingleMemberStringOvrdDefField"_s)));
	checkSingleMemberClassOvrdDef($(UnitTest::class$->getField("SingleMemberClassOvrdDefField"_s)));
	checkSingleMemberEnumOvrdDef($(UnitTest::class$->getField("SingleMemberEnumOvrdDefField"_s)));
	checkSingleMemberByteAcceptDef($(UnitTest::class$->getField("SingleMemberByteAcceptDefField"_s)));
	checkSingleMemberShortAcceptDef($(UnitTest::class$->getField("SingleMemberShortAcceptDefField"_s)));
	checkSingleMemberIntAcceptDef($(UnitTest::class$->getField("SingleMemberIntAcceptDefField"_s)));
	checkSingleMemberLongAcceptDef($(UnitTest::class$->getField("SingleMemberLongAcceptDefField"_s)));
	checkSingleMemberCharAcceptDef($(UnitTest::class$->getField("SingleMemberCharAcceptDefField"_s)));
	checkSingleMemberFloatAcceptDef($(UnitTest::class$->getField("SingleMemberFloatAcceptDefField"_s)));
	checkSingleMemberDoubleAcceptDef($(UnitTest::class$->getField("SingleMemberDoubleAcceptDefField"_s)));
	checkSingleMemberBooleanAcceptDef($(UnitTest::class$->getField("SingleMemberBooleanAcceptDefField"_s)));
	checkSingleMemberStringAcceptDef($(UnitTest::class$->getField("SingleMemberStringAcceptDefField"_s)));
	checkSingleMemberClassAcceptDef($(UnitTest::class$->getField("SingleMemberClassAcceptDefField"_s)));
	checkSingleMemberEnumAcceptDef($(UnitTest::class$->getField("SingleMemberEnumAcceptDefField"_s)));
	checkSingleMemberByteArrEmpty($(UnitTest::class$->getField("SingleMemberByteArrEmptyField"_s)));
	checkSingleMemberShortArrEmpty($(UnitTest::class$->getField("SingleMemberShortArrEmptyField"_s)));
	checkSingleMemberIntArrEmpty($(UnitTest::class$->getField("SingleMemberIntArrEmptyField"_s)));
	checkSingleMemberLongArrEmpty($(UnitTest::class$->getField("SingleMemberLongArrEmptyField"_s)));
	checkSingleMemberCharArrEmpty($(UnitTest::class$->getField("SingleMemberCharArrEmptyField"_s)));
	checkSingleMemberFloatArrEmpty($(UnitTest::class$->getField("SingleMemberFloatArrEmptyField"_s)));
	checkSingleMemberDoubleArrEmpty($(UnitTest::class$->getField("SingleMemberDoubleArrEmptyField"_s)));
	checkSingleMemberBooleanArrEmpty($(UnitTest::class$->getField("SingleMemberBooleanArrEmptyField"_s)));
	checkSingleMemberStringArrEmpty($(UnitTest::class$->getField("SingleMemberStringArrEmptyField"_s)));
	checkSingleMemberClassArrEmpty($(UnitTest::class$->getField("SingleMemberClassArrEmptyField"_s)));
	checkSingleMemberEnumArrEmpty($(UnitTest::class$->getField("SingleMemberEnumArrEmptyField"_s)));
	checkSingleMemberByteArrOne($(UnitTest::class$->getField("SingleMemberByteArrOneField"_s)));
	checkSingleMemberShortArrOne($(UnitTest::class$->getField("SingleMemberShortArrOneField"_s)));
	checkSingleMemberIntArrOne($(UnitTest::class$->getField("SingleMemberIntArrOneField"_s)));
	checkSingleMemberLongArrOne($(UnitTest::class$->getField("SingleMemberLongArrOneField"_s)));
	checkSingleMemberCharArrOne($(UnitTest::class$->getField("SingleMemberCharArrOneField"_s)));
	checkSingleMemberFloatArrOne($(UnitTest::class$->getField("SingleMemberFloatArrOneField"_s)));
	checkSingleMemberDoubleArrOne($(UnitTest::class$->getField("SingleMemberDoubleArrOneField"_s)));
	checkSingleMemberBooleanArrOne($(UnitTest::class$->getField("SingleMemberBooleanArrOneField"_s)));
	checkSingleMemberStringArrOne($(UnitTest::class$->getField("SingleMemberStringArrOneField"_s)));
	checkSingleMemberClassArrOne($(UnitTest::class$->getField("SingleMemberClassArrOneField"_s)));
	checkSingleMemberEnumArrOne($(UnitTest::class$->getField("SingleMemberEnumArrOneField"_s)));
	checkSingleMemberByteArrTwo($(UnitTest::class$->getField("SingleMemberByteArrTwoField"_s)));
	checkSingleMemberShortArrTwo($(UnitTest::class$->getField("SingleMemberShortArrTwoField"_s)));
	checkSingleMemberIntArrTwo($(UnitTest::class$->getField("SingleMemberIntArrTwoField"_s)));
	checkSingleMemberLongArrTwo($(UnitTest::class$->getField("SingleMemberLongArrTwoField"_s)));
	checkSingleMemberCharArrTwo($(UnitTest::class$->getField("SingleMemberCharArrTwoField"_s)));
	checkSingleMemberFloatArrTwo($(UnitTest::class$->getField("SingleMemberFloatArrTwoField"_s)));
	checkSingleMemberDoubleArrTwo($(UnitTest::class$->getField("SingleMemberDoubleArrTwoField"_s)));
	checkSingleMemberBooleanArrTwo($(UnitTest::class$->getField("SingleMemberBooleanArrTwoField"_s)));
	checkSingleMemberStringArrTwo($(UnitTest::class$->getField("SingleMemberStringArrTwoField"_s)));
	checkSingleMemberClassArrTwo($(UnitTest::class$->getField("SingleMemberClassArrTwoField"_s)));
	checkSingleMemberEnumArrTwo($(UnitTest::class$->getField("SingleMemberEnumArrTwoField"_s)));
	checkSingleMemberByteArrOvrdDef($(UnitTest::class$->getField("SingleMemberByteArrOvrdDefField"_s)));
	checkSingleMemberShortArrOvrdDef($(UnitTest::class$->getField("SingleMemberShortArrOvrdDefField"_s)));
	checkSingleMemberIntArrOvrdDef($(UnitTest::class$->getField("SingleMemberIntArrOvrdDefField"_s)));
	checkSingleMemberLongArrOvrdDef($(UnitTest::class$->getField("SingleMemberLongArrOvrdDefField"_s)));
	checkSingleMemberCharArrOvrdDef($(UnitTest::class$->getField("SingleMemberCharArrOvrdDefField"_s)));
	checkSingleMemberFloatArrOvrdDef($(UnitTest::class$->getField("SingleMemberFloatArrOvrdDefField"_s)));
	checkSingleMemberDoubleArrOvrdDef($(UnitTest::class$->getField("SingleMemberDoubleArrOvrdDefField"_s)));
	checkSingleMemberBooleanArrOvrdDef($(UnitTest::class$->getField("SingleMemberBooleanArrOvrdDefField"_s)));
	checkSingleMemberStringArrOvrdDef($(UnitTest::class$->getField("SingleMemberStringArrOvrdDefField"_s)));
	checkSingleMemberClassArrOvrdDef($(UnitTest::class$->getField("SingleMemberClassArrOvrdDefField"_s)));
	checkSingleMemberEnumArrOvrdDef($(UnitTest::class$->getField("SingleMemberEnumArrOvrdDefField"_s)));
	checkSingleMemberByteArrAcceptDef($(UnitTest::class$->getField("SingleMemberByteArrAcceptDefField"_s)));
	checkSingleMemberShortArrAcceptDef($(UnitTest::class$->getField("SingleMemberShortArrAcceptDefField"_s)));
	checkSingleMemberIntArrAcceptDef($(UnitTest::class$->getField("SingleMemberIntArrAcceptDefField"_s)));
	checkSingleMemberLongArrAcceptDef($(UnitTest::class$->getField("SingleMemberLongArrAcceptDefField"_s)));
	checkSingleMemberCharArrAcceptDef($(UnitTest::class$->getField("SingleMemberCharArrAcceptDefField"_s)));
	checkSingleMemberFloatArrAcceptDef($(UnitTest::class$->getField("SingleMemberFloatArrAcceptDefField"_s)));
	checkSingleMemberDoubleArrAcceptDef($(UnitTest::class$->getField("SingleMemberDoubleArrAcceptDefField"_s)));
	checkSingleMemberBooleanArrAcceptDef($(UnitTest::class$->getField("SingleMemberBooleanArrAcceptDefField"_s)));
	checkSingleMemberStringArrAcceptDef($(UnitTest::class$->getField("SingleMemberStringArrAcceptDefField"_s)));
	checkSingleMemberClassArrAcceptDef($(UnitTest::class$->getField("SingleMemberClassArrAcceptDefField"_s)));
	checkSingleMemberEnumArrAcceptDef($(UnitTest::class$->getField("SingleMemberEnumArrAcceptDefField"_s)));
	$load($UnitTest$TestType);
	checkScalarTypes($($UnitTest$TestType::class$->getField("scalarTypesField"_s)));
	checkScalarTypesAcceptDefault($($UnitTest$TestType::class$->getField("scalarTypesAcceptDefaultField"_s)));
	checkScalarTypesOverrideDefault($($UnitTest$TestType::class$->getField("scalarTypesOverrideDefaultField"_s)));
	checkArrayTypes0($($UnitTest$TestType::class$->getField("emptyArrayTypesField"_s)));
	checkArrayTypes1($($UnitTest$TestType::class$->getField("singleElementArrayTypesField"_s)));
	checkArrayTypes2($($UnitTest$TestType::class$->getField("twoElementArrayTypesField"_s)));
	checkArrayTypesAcceptDefault($($UnitTest$TestType::class$->getField("arrayTypesAcceptDefaultField"_s)));
	checkArrayTypesOverrideDefault($($UnitTest$TestType::class$->getField("arrayTypesOverrideDefaultField"_s)));
	checkMarker($($UnitTest$TestType::class$->getField("marker"_s)));
	checkSingleMemberByte($($UnitTest$TestType::class$->getField("SingleMemberByte"_s)));
	checkSingleMemberShort($($UnitTest$TestType::class$->getField("SingleMemberShort"_s)));
	checkSingleMemberInt($($UnitTest$TestType::class$->getField("SingleMemberInt"_s)));
	checkSingleMemberLong($($UnitTest$TestType::class$->getField("SingleMemberLong"_s)));
	checkSingleMemberChar($($UnitTest$TestType::class$->getField("SingleMemberChar"_s)));
	checkSingleMemberFloat($($UnitTest$TestType::class$->getField("SingleMemberFloat"_s)));
	checkSingleMemberDouble($($UnitTest$TestType::class$->getField("SingleMemberDouble"_s)));
	checkSingleMemberBoolean($($UnitTest$TestType::class$->getField("SingleMemberBoolean"_s)));
	checkSingleMemberString($($UnitTest$TestType::class$->getField("SingleMemberString"_s)));
	checkSingleMemberClass($($UnitTest$TestType::class$->getField("SingleMemberClass"_s)));
	checkSingleMemberEnum($($UnitTest$TestType::class$->getField("SingleMemberEnum"_s)));
	checkSingleMemberByteOvrdDef($($UnitTest$TestType::class$->getField("SingleMemberByteOvrdDef"_s)));
	checkSingleMemberShortOvrdDef($($UnitTest$TestType::class$->getField("SingleMemberShortOvrdDef"_s)));
	checkSingleMemberIntOvrdDef($($UnitTest$TestType::class$->getField("SingleMemberIntOvrdDef"_s)));
	checkSingleMemberLongOvrdDef($($UnitTest$TestType::class$->getField("SingleMemberLongOvrdDef"_s)));
	checkSingleMemberCharOvrdDef($($UnitTest$TestType::class$->getField("SingleMemberCharOvrdDef"_s)));
	checkSingleMemberFloatOvrdDef($($UnitTest$TestType::class$->getField("SingleMemberFloatOvrdDef"_s)));
	checkSingleMemberDoubleOvrdDef($($UnitTest$TestType::class$->getField("SingleMemberDoubleOvrdDef"_s)));
	checkSingleMemberBooleanOvrdDef($($UnitTest$TestType::class$->getField("SingleMemberBooleanOvrdDef"_s)));
	checkSingleMemberStringOvrdDef($($UnitTest$TestType::class$->getField("SingleMemberStringOvrdDef"_s)));
	checkSingleMemberClassOvrdDef($($UnitTest$TestType::class$->getField("SingleMemberClassOvrdDef"_s)));
	checkSingleMemberEnumOvrdDef($($UnitTest$TestType::class$->getField("SingleMemberEnumOvrdDef"_s)));
	checkSingleMemberByteAcceptDef($($UnitTest$TestType::class$->getField("SingleMemberByteAcceptDef"_s)));
	checkSingleMemberShortAcceptDef($($UnitTest$TestType::class$->getField("SingleMemberShortAcceptDef"_s)));
	checkSingleMemberIntAcceptDef($($UnitTest$TestType::class$->getField("SingleMemberIntAcceptDef"_s)));
	checkSingleMemberLongAcceptDef($($UnitTest$TestType::class$->getField("SingleMemberLongAcceptDef"_s)));
	checkSingleMemberCharAcceptDef($($UnitTest$TestType::class$->getField("SingleMemberCharAcceptDef"_s)));
	checkSingleMemberFloatAcceptDef($($UnitTest$TestType::class$->getField("SingleMemberFloatAcceptDef"_s)));
	checkSingleMemberDoubleAcceptDef($($UnitTest$TestType::class$->getField("SingleMemberDoubleAcceptDef"_s)));
	checkSingleMemberBooleanAcceptDef($($UnitTest$TestType::class$->getField("SingleMemberBooleanAcceptDef"_s)));
	checkSingleMemberStringAcceptDef($($UnitTest$TestType::class$->getField("SingleMemberStringAcceptDef"_s)));
	checkSingleMemberClassAcceptDef($($UnitTest$TestType::class$->getField("SingleMemberClassAcceptDef"_s)));
	checkSingleMemberEnumAcceptDef($($UnitTest$TestType::class$->getField("SingleMemberEnumAcceptDef"_s)));
	checkSingleMemberByteArrEmpty($($UnitTest$TestType::class$->getField("SingleMemberByteArrEmpty"_s)));
	checkSingleMemberShortArrEmpty($($UnitTest$TestType::class$->getField("SingleMemberShortArrEmpty"_s)));
	checkSingleMemberIntArrEmpty($($UnitTest$TestType::class$->getField("SingleMemberIntArrEmpty"_s)));
	checkSingleMemberLongArrEmpty($($UnitTest$TestType::class$->getField("SingleMemberLongArrEmpty"_s)));
	checkSingleMemberCharArrEmpty($($UnitTest$TestType::class$->getField("SingleMemberCharArrEmpty"_s)));
	checkSingleMemberFloatArrEmpty($($UnitTest$TestType::class$->getField("SingleMemberFloatArrEmpty"_s)));
	checkSingleMemberDoubleArrEmpty($($UnitTest$TestType::class$->getField("SingleMemberDoubleArrEmpty"_s)));
	checkSingleMemberBooleanArrEmpty($($UnitTest$TestType::class$->getField("SingleMemberBooleanArrEmpty"_s)));
	checkSingleMemberStringArrEmpty($($UnitTest$TestType::class$->getField("SingleMemberStringArrEmpty"_s)));
	checkSingleMemberClassArrEmpty($($UnitTest$TestType::class$->getField("SingleMemberClassArrEmpty"_s)));
	checkSingleMemberEnumArrEmpty($($UnitTest$TestType::class$->getField("SingleMemberEnumArrEmpty"_s)));
	checkSingleMemberByteArrOne($($UnitTest$TestType::class$->getField("SingleMemberByteArrOne"_s)));
	checkSingleMemberShortArrOne($($UnitTest$TestType::class$->getField("SingleMemberShortArrOne"_s)));
	checkSingleMemberIntArrOne($($UnitTest$TestType::class$->getField("SingleMemberIntArrOne"_s)));
	checkSingleMemberLongArrOne($($UnitTest$TestType::class$->getField("SingleMemberLongArrOne"_s)));
	checkSingleMemberCharArrOne($($UnitTest$TestType::class$->getField("SingleMemberCharArrOne"_s)));
	checkSingleMemberFloatArrOne($($UnitTest$TestType::class$->getField("SingleMemberFloatArrOne"_s)));
	checkSingleMemberDoubleArrOne($($UnitTest$TestType::class$->getField("SingleMemberDoubleArrOne"_s)));
	checkSingleMemberBooleanArrOne($($UnitTest$TestType::class$->getField("SingleMemberBooleanArrOne"_s)));
	checkSingleMemberStringArrOne($($UnitTest$TestType::class$->getField("SingleMemberStringArrOne"_s)));
	checkSingleMemberClassArrOne($($UnitTest$TestType::class$->getField("SingleMemberClassArrOne"_s)));
	checkSingleMemberEnumArrOne($($UnitTest$TestType::class$->getField("SingleMemberEnumArrOne"_s)));
	checkSingleMemberByteArrTwo($($UnitTest$TestType::class$->getField("SingleMemberByteArrTwo"_s)));
	checkSingleMemberShortArrTwo($($UnitTest$TestType::class$->getField("SingleMemberShortArrTwo"_s)));
	checkSingleMemberIntArrTwo($($UnitTest$TestType::class$->getField("SingleMemberIntArrTwo"_s)));
	checkSingleMemberLongArrTwo($($UnitTest$TestType::class$->getField("SingleMemberLongArrTwo"_s)));
	checkSingleMemberCharArrTwo($($UnitTest$TestType::class$->getField("SingleMemberCharArrTwo"_s)));
	checkSingleMemberFloatArrTwo($($UnitTest$TestType::class$->getField("SingleMemberFloatArrTwo"_s)));
	checkSingleMemberDoubleArrTwo($($UnitTest$TestType::class$->getField("SingleMemberDoubleArrTwo"_s)));
	checkSingleMemberBooleanArrTwo($($UnitTest$TestType::class$->getField("SingleMemberBooleanArrTwo"_s)));
	checkSingleMemberStringArrTwo($($UnitTest$TestType::class$->getField("SingleMemberStringArrTwo"_s)));
	checkSingleMemberClassArrTwo($($UnitTest$TestType::class$->getField("SingleMemberClassArrTwo"_s)));
	checkSingleMemberEnumArrTwo($($UnitTest$TestType::class$->getField("SingleMemberEnumArrTwo"_s)));
	checkSingleMemberByteArrOvrdDef($($UnitTest$TestType::class$->getField("SingleMemberByteArrOvrdDef"_s)));
	checkSingleMemberShortArrOvrdDef($($UnitTest$TestType::class$->getField("SingleMemberShortArrOvrdDef"_s)));
	checkSingleMemberIntArrOvrdDef($($UnitTest$TestType::class$->getField("SingleMemberIntArrOvrdDef"_s)));
	checkSingleMemberLongArrOvrdDef($($UnitTest$TestType::class$->getField("SingleMemberLongArrOvrdDef"_s)));
	checkSingleMemberCharArrOvrdDef($($UnitTest$TestType::class$->getField("SingleMemberCharArrOvrdDef"_s)));
	checkSingleMemberFloatArrOvrdDef($($UnitTest$TestType::class$->getField("SingleMemberFloatArrOvrdDef"_s)));
	checkSingleMemberDoubleArrOvrdDef($($UnitTest$TestType::class$->getField("SingleMemberDoubleArrOvrdDef"_s)));
	checkSingleMemberBooleanArrOvrdDef($($UnitTest$TestType::class$->getField("SingleMemberBooleanArrOvrdDef"_s)));
	checkSingleMemberStringArrOvrdDef($($UnitTest$TestType::class$->getField("SingleMemberStringArrOvrdDef"_s)));
	checkSingleMemberClassArrOvrdDef($($UnitTest$TestType::class$->getField("SingleMemberClassArrOvrdDef"_s)));
	checkSingleMemberEnumArrOvrdDef($($UnitTest$TestType::class$->getField("SingleMemberEnumArrOvrdDef"_s)));
	checkSingleMemberByteArrAcceptDef($($UnitTest$TestType::class$->getField("SingleMemberByteArrAcceptDef"_s)));
	checkSingleMemberShortArrAcceptDef($($UnitTest$TestType::class$->getField("SingleMemberShortArrAcceptDef"_s)));
	checkSingleMemberIntArrAcceptDef($($UnitTest$TestType::class$->getField("SingleMemberIntArrAcceptDef"_s)));
	checkSingleMemberLongArrAcceptDef($($UnitTest$TestType::class$->getField("SingleMemberLongArrAcceptDef"_s)));
	checkSingleMemberCharArrAcceptDef($($UnitTest$TestType::class$->getField("SingleMemberCharArrAcceptDef"_s)));
	checkSingleMemberFloatArrAcceptDef($($UnitTest$TestType::class$->getField("SingleMemberFloatArrAcceptDef"_s)));
	checkSingleMemberDoubleArrAcceptDef($($UnitTest$TestType::class$->getField("SingleMemberDoubleArrAcceptDef"_s)));
	checkSingleMemberBooleanArrAcceptDef($($UnitTest$TestType::class$->getField("SingleMemberBooleanArrAcceptDef"_s)));
	checkSingleMemberStringArrAcceptDef($($UnitTest$TestType::class$->getField("SingleMemberStringArrAcceptDef"_s)));
	checkSingleMemberClassArrAcceptDef($($UnitTest$TestType::class$->getField("SingleMemberClassArrAcceptDef"_s)));
	checkSingleMemberEnumArrAcceptDef($($UnitTest$TestType::class$->getField("SingleMemberEnumArrAcceptDef"_s)));
	$load($Iterator);
	checkScalarTypes($$cast($AccessibleObject, UnitTest::class$->getConstructor($$new($ClassArray, {$Iterator::class$}))));
	$load($Map);
	checkScalarTypesOverrideDefault($$cast($AccessibleObject, UnitTest::class$->getConstructor($$new($ClassArray, {$Map::class$}))));
	$load($Set);
	checkScalarTypesAcceptDefault($$cast($AccessibleObject, UnitTest::class$->getConstructor($$new($ClassArray, {$Set::class$}))));
	$load($List);
	checkArrayTypes0($$cast($AccessibleObject, UnitTest::class$->getConstructor($$new($ClassArray, {$List::class$}))));
	$load($Collection);
	checkArrayTypes1($$cast($AccessibleObject, UnitTest::class$->getConstructor($$new($ClassArray, {$Collection::class$}))));
	$load($SortedSet);
	checkArrayTypes2($$cast($AccessibleObject, UnitTest::class$->getConstructor($$new($ClassArray, {$SortedSet::class$}))));
	$load($SortedMap);
	checkArrayTypesAcceptDefault($$cast($AccessibleObject, UnitTest::class$->getConstructor($$new($ClassArray, {$SortedMap::class$}))));
	$load($RandomAccess);
	checkArrayTypesOverrideDefault($$cast($AccessibleObject, UnitTest::class$->getConstructor($$new($ClassArray, {$RandomAccess::class$}))));
	checkMarker($$cast($AccessibleObject, UnitTest::class$->getConstructor($$new($ClassArray, 0))));
	checkSingleMemberByte($$cast($AccessibleObject, UnitTest::class$->getConstructor($$new($ClassArray, {$Byte::TYPE}))));
	checkSingleMemberShort($$cast($AccessibleObject, UnitTest::class$->getConstructor($$new($ClassArray, {$Short::TYPE}))));
	checkSingleMemberInt($$cast($AccessibleObject, UnitTest::class$->getConstructor($$new($ClassArray, {$Integer::TYPE}))));
	checkSingleMemberLong($$cast($AccessibleObject, UnitTest::class$->getConstructor($$new($ClassArray, {$Long::TYPE}))));
	checkSingleMemberChar($$cast($AccessibleObject, UnitTest::class$->getConstructor($$new($ClassArray, {$Character::TYPE}))));
	checkSingleMemberFloat($$cast($AccessibleObject, UnitTest::class$->getConstructor($$new($ClassArray, {$Float::TYPE}))));
	checkSingleMemberDouble($$cast($AccessibleObject, UnitTest::class$->getConstructor($$new($ClassArray, {$Double::TYPE}))));
	checkSingleMemberBoolean($$cast($AccessibleObject, UnitTest::class$->getConstructor($$new($ClassArray, {$Boolean::TYPE}))));
	checkSingleMemberString($$cast($AccessibleObject, UnitTest::class$->getConstructor($$new($ClassArray, {$String::class$}))));
	checkSingleMemberClass($$cast($AccessibleObject, UnitTest::class$->getConstructor($$new($ClassArray, {$Class::class$}))));
	checkSingleMemberEnum($$cast($AccessibleObject, UnitTest::class$->getConstructor($$new($ClassArray, {$Enum::class$}))));
	checkSingleMemberByteOvrdDef($$cast($AccessibleObject, UnitTest::class$->getConstructor($$new($ClassArray, {
		$Byte::TYPE,
		$Set::class$
	}))));
	checkSingleMemberShortOvrdDef($$cast($AccessibleObject, UnitTest::class$->getConstructor($$new($ClassArray, {
		$Short::TYPE,
		$Set::class$
	}))));
	checkSingleMemberIntOvrdDef($$cast($AccessibleObject, UnitTest::class$->getConstructor($$new($ClassArray, {
		$Integer::TYPE,
		$Set::class$
	}))));
	checkSingleMemberLongOvrdDef($$cast($AccessibleObject, UnitTest::class$->getConstructor($$new($ClassArray, {
		$Long::TYPE,
		$Set::class$
	}))));
	checkSingleMemberCharOvrdDef($$cast($AccessibleObject, UnitTest::class$->getConstructor($$new($ClassArray, {
		$Character::TYPE,
		$Set::class$
	}))));
	checkSingleMemberFloatOvrdDef($$cast($AccessibleObject, UnitTest::class$->getConstructor($$new($ClassArray, {
		$Float::TYPE,
		$Set::class$
	}))));
	checkSingleMemberDoubleOvrdDef($$cast($AccessibleObject, UnitTest::class$->getConstructor($$new($ClassArray, {
		$Double::TYPE,
		$Set::class$
	}))));
	checkSingleMemberBooleanOvrdDef($$cast($AccessibleObject, UnitTest::class$->getConstructor($$new($ClassArray, {
		$Boolean::TYPE,
		$Set::class$
	}))));
	checkSingleMemberStringOvrdDef($$cast($AccessibleObject, UnitTest::class$->getConstructor($$new($ClassArray, {
		$String::class$,
		$Set::class$
	}))));
	checkSingleMemberClassOvrdDef($$cast($AccessibleObject, UnitTest::class$->getConstructor($$new($ClassArray, {
		$Class::class$,
		$Set::class$
	}))));
	checkSingleMemberEnumOvrdDef($$cast($AccessibleObject, UnitTest::class$->getConstructor($$new($ClassArray, {
		$Enum::class$,
		$Set::class$
	}))));
	checkSingleMemberByteAcceptDef($$cast($AccessibleObject, UnitTest::class$->getConstructor($$new($ClassArray, {
		$Byte::TYPE,
		$Map::class$
	}))));
	checkSingleMemberShortAcceptDef($$cast($AccessibleObject, UnitTest::class$->getConstructor($$new($ClassArray, {
		$Short::TYPE,
		$Map::class$
	}))));
	checkSingleMemberIntAcceptDef($$cast($AccessibleObject, UnitTest::class$->getConstructor($$new($ClassArray, {
		$Integer::TYPE,
		$Map::class$
	}))));
	checkSingleMemberLongAcceptDef($$cast($AccessibleObject, UnitTest::class$->getConstructor($$new($ClassArray, {
		$Long::TYPE,
		$Map::class$
	}))));
	checkSingleMemberCharAcceptDef($$cast($AccessibleObject, UnitTest::class$->getConstructor($$new($ClassArray, {
		$Character::TYPE,
		$Map::class$
	}))));
	checkSingleMemberFloatAcceptDef($$cast($AccessibleObject, UnitTest::class$->getConstructor($$new($ClassArray, {
		$Float::TYPE,
		$Map::class$
	}))));
	checkSingleMemberDoubleAcceptDef($$cast($AccessibleObject, UnitTest::class$->getConstructor($$new($ClassArray, {
		$Double::TYPE,
		$Map::class$
	}))));
	checkSingleMemberBooleanAcceptDef($$cast($AccessibleObject, UnitTest::class$->getConstructor($$new($ClassArray, {
		$Boolean::TYPE,
		$Map::class$
	}))));
	checkSingleMemberStringAcceptDef($$cast($AccessibleObject, UnitTest::class$->getConstructor($$new($ClassArray, {
		$String::class$,
		$Map::class$
	}))));
	checkSingleMemberClassAcceptDef($$cast($AccessibleObject, UnitTest::class$->getConstructor($$new($ClassArray, {
		$Class::class$,
		$Map::class$
	}))));
	checkSingleMemberEnumAcceptDef($$cast($AccessibleObject, UnitTest::class$->getConstructor($$new($ClassArray, {
		$Enum::class$,
		$Map::class$
	}))));
	checkSingleMemberByteArrEmpty($$cast($AccessibleObject, UnitTest::class$->getConstructor($$new($ClassArray, {$getClass($bytes)}))));
	checkSingleMemberShortArrEmpty($$cast($AccessibleObject, UnitTest::class$->getConstructor($$new($ClassArray, {$getClass($shorts)}))));
	checkSingleMemberIntArrEmpty($$cast($AccessibleObject, UnitTest::class$->getConstructor($$new($ClassArray, {$getClass($ints)}))));
	checkSingleMemberLongArrEmpty($$cast($AccessibleObject, UnitTest::class$->getConstructor($$new($ClassArray, {$getClass($longs)}))));
	checkSingleMemberCharArrEmpty($$cast($AccessibleObject, UnitTest::class$->getConstructor($$new($ClassArray, {$getClass($chars)}))));
	checkSingleMemberFloatArrEmpty($$cast($AccessibleObject, UnitTest::class$->getConstructor($$new($ClassArray, {$getClass($floats)}))));
	checkSingleMemberDoubleArrEmpty($$cast($AccessibleObject, UnitTest::class$->getConstructor($$new($ClassArray, {$getClass($doubles)}))));
	checkSingleMemberBooleanArrEmpty($$cast($AccessibleObject, UnitTest::class$->getConstructor($$new($ClassArray, {$getClass($booleans)}))));
	checkSingleMemberStringArrEmpty($$cast($AccessibleObject, UnitTest::class$->getConstructor($$new($ClassArray, {$getClass($StringArray)}))));
	checkSingleMemberClassArrEmpty($$cast($AccessibleObject, UnitTest::class$->getConstructor($$new($ClassArray, {$getClass($ClassArray)}))));
	checkSingleMemberEnumArrEmpty($$cast($AccessibleObject, UnitTest::class$->getConstructor($$new($ClassArray, {$getClass($EnumArray)}))));
	checkSingleMemberByteArrOne($$cast($AccessibleObject, UnitTest::class$->getConstructor($$new($ClassArray, {
		$getClass($bytes),
		$Set::class$
	}))));
	checkSingleMemberShortArrOne($$cast($AccessibleObject, UnitTest::class$->getConstructor($$new($ClassArray, {
		$getClass($shorts),
		$Set::class$
	}))));
	checkSingleMemberIntArrOne($$cast($AccessibleObject, UnitTest::class$->getConstructor($$new($ClassArray, {
		$getClass($ints),
		$Set::class$
	}))));
	checkSingleMemberLongArrOne($$cast($AccessibleObject, UnitTest::class$->getConstructor($$new($ClassArray, {
		$getClass($longs),
		$Set::class$
	}))));
	checkSingleMemberCharArrOne($$cast($AccessibleObject, UnitTest::class$->getConstructor($$new($ClassArray, {
		$getClass($chars),
		$Set::class$
	}))));
	checkSingleMemberFloatArrOne($$cast($AccessibleObject, UnitTest::class$->getConstructor($$new($ClassArray, {
		$getClass($floats),
		$Set::class$
	}))));
	checkSingleMemberDoubleArrOne($$cast($AccessibleObject, UnitTest::class$->getConstructor($$new($ClassArray, {
		$getClass($doubles),
		$Set::class$
	}))));
	checkSingleMemberBooleanArrOne($$cast($AccessibleObject, UnitTest::class$->getConstructor($$new($ClassArray, {
		$getClass($booleans),
		$Set::class$
	}))));
	checkSingleMemberStringArrOne($$cast($AccessibleObject, UnitTest::class$->getConstructor($$new($ClassArray, {
		$getClass($StringArray),
		$Set::class$
	}))));
	checkSingleMemberClassArrOne($$cast($AccessibleObject, UnitTest::class$->getConstructor($$new($ClassArray, {
		$getClass($ClassArray),
		$Set::class$
	}))));
	checkSingleMemberEnumArrOne($$cast($AccessibleObject, UnitTest::class$->getConstructor($$new($ClassArray, {
		$getClass($EnumArray),
		$Set::class$
	}))));
	checkSingleMemberByteArrTwo($$cast($AccessibleObject, UnitTest::class$->getConstructor($$new($ClassArray, {
		$getClass($bytes),
		$Map::class$
	}))));
	checkSingleMemberShortArrTwo($$cast($AccessibleObject, UnitTest::class$->getConstructor($$new($ClassArray, {
		$getClass($shorts),
		$Map::class$
	}))));
	checkSingleMemberIntArrTwo($$cast($AccessibleObject, UnitTest::class$->getConstructor($$new($ClassArray, {
		$getClass($ints),
		$Map::class$
	}))));
	checkSingleMemberLongArrTwo($$cast($AccessibleObject, UnitTest::class$->getConstructor($$new($ClassArray, {
		$getClass($longs),
		$Map::class$
	}))));
	checkSingleMemberCharArrTwo($$cast($AccessibleObject, UnitTest::class$->getConstructor($$new($ClassArray, {
		$getClass($chars),
		$Map::class$
	}))));
	checkSingleMemberFloatArrTwo($$cast($AccessibleObject, UnitTest::class$->getConstructor($$new($ClassArray, {
		$getClass($floats),
		$Map::class$
	}))));
	checkSingleMemberDoubleArrTwo($$cast($AccessibleObject, UnitTest::class$->getConstructor($$new($ClassArray, {
		$getClass($doubles),
		$Map::class$
	}))));
	checkSingleMemberBooleanArrTwo($$cast($AccessibleObject, UnitTest::class$->getConstructor($$new($ClassArray, {
		$getClass($booleans),
		$Map::class$
	}))));
	checkSingleMemberStringArrTwo($$cast($AccessibleObject, UnitTest::class$->getConstructor($$new($ClassArray, {
		$getClass($StringArray),
		$Map::class$
	}))));
	checkSingleMemberClassArrTwo($$cast($AccessibleObject, UnitTest::class$->getConstructor($$new($ClassArray, {
		$getClass($ClassArray),
		$Map::class$
	}))));
	checkSingleMemberEnumArrTwo($$cast($AccessibleObject, UnitTest::class$->getConstructor($$new($ClassArray, {
		$getClass($EnumArray),
		$Map::class$
	}))));
	checkSingleMemberByteArrOvrdDef($$cast($AccessibleObject, UnitTest::class$->getConstructor($$new($ClassArray, {
		$getClass($bytes),
		$List::class$
	}))));
	checkSingleMemberShortArrOvrdDef($$cast($AccessibleObject, UnitTest::class$->getConstructor($$new($ClassArray, {
		$getClass($shorts),
		$List::class$
	}))));
	checkSingleMemberIntArrOvrdDef($$cast($AccessibleObject, UnitTest::class$->getConstructor($$new($ClassArray, {
		$getClass($ints),
		$List::class$
	}))));
	checkSingleMemberLongArrOvrdDef($$cast($AccessibleObject, UnitTest::class$->getConstructor($$new($ClassArray, {
		$getClass($longs),
		$List::class$
	}))));
	checkSingleMemberCharArrOvrdDef($$cast($AccessibleObject, UnitTest::class$->getConstructor($$new($ClassArray, {
		$getClass($chars),
		$List::class$
	}))));
	checkSingleMemberFloatArrOvrdDef($$cast($AccessibleObject, UnitTest::class$->getConstructor($$new($ClassArray, {
		$getClass($floats),
		$List::class$
	}))));
	checkSingleMemberDoubleArrOvrdDef($$cast($AccessibleObject, UnitTest::class$->getConstructor($$new($ClassArray, {
		$getClass($doubles),
		$List::class$
	}))));
	checkSingleMemberBooleanArrOvrdDef($$cast($AccessibleObject, UnitTest::class$->getConstructor($$new($ClassArray, {
		$getClass($booleans),
		$List::class$
	}))));
	checkSingleMemberStringArrOvrdDef($$cast($AccessibleObject, UnitTest::class$->getConstructor($$new($ClassArray, {
		$getClass($StringArray),
		$List::class$
	}))));
	checkSingleMemberClassArrOvrdDef($$cast($AccessibleObject, UnitTest::class$->getConstructor($$new($ClassArray, {
		$getClass($ClassArray),
		$List::class$
	}))));
	checkSingleMemberEnumArrOvrdDef($$cast($AccessibleObject, UnitTest::class$->getConstructor($$new($ClassArray, {
		$getClass($EnumArray),
		$List::class$
	}))));
	checkSingleMemberByteArrAcceptDef($$cast($AccessibleObject, UnitTest::class$->getConstructor($$new($ClassArray, {
		$getClass($bytes),
		$Collection::class$
	}))));
	checkSingleMemberShortArrAcceptDef($$cast($AccessibleObject, UnitTest::class$->getConstructor($$new($ClassArray, {
		$getClass($shorts),
		$Collection::class$
	}))));
	checkSingleMemberIntArrAcceptDef($$cast($AccessibleObject, UnitTest::class$->getConstructor($$new($ClassArray, {
		$getClass($ints),
		$Collection::class$
	}))));
	checkSingleMemberLongArrAcceptDef($$cast($AccessibleObject, UnitTest::class$->getConstructor($$new($ClassArray, {
		$getClass($longs),
		$Collection::class$
	}))));
	checkSingleMemberCharArrAcceptDef($$cast($AccessibleObject, UnitTest::class$->getConstructor($$new($ClassArray, {
		$getClass($chars),
		$Collection::class$
	}))));
	checkSingleMemberFloatArrAcceptDef($$cast($AccessibleObject, UnitTest::class$->getConstructor($$new($ClassArray, {
		$getClass($floats),
		$Collection::class$
	}))));
	checkSingleMemberDoubleArrAcceptDef($$cast($AccessibleObject, UnitTest::class$->getConstructor($$new($ClassArray, {
		$getClass($doubles),
		$Collection::class$
	}))));
	checkSingleMemberBooleanArrAcceptDef($$cast($AccessibleObject, UnitTest::class$->getConstructor($$new($ClassArray, {
		$getClass($booleans),
		$Collection::class$
	}))));
	checkSingleMemberStringArrAcceptDef($$cast($AccessibleObject, UnitTest::class$->getConstructor($$new($ClassArray, {
		$getClass($StringArray),
		$Collection::class$
	}))));
	checkSingleMemberClassArrAcceptDef($$cast($AccessibleObject, UnitTest::class$->getConstructor($$new($ClassArray, {
		$getClass($ClassArray),
		$Collection::class$
	}))));
	checkSingleMemberEnumArrAcceptDef($$cast($AccessibleObject, UnitTest::class$->getConstructor($$new($ClassArray, {
		$getClass($EnumArray),
		$Collection::class$
	}))));
	checkScalarTypesParam($(UnitTest::class$->getMethod("scalarTypesParam"_s, UnitTest::Y)));
	checkScalarTypesOverrideDefaultParam($(UnitTest::class$->getMethod("scalarTypesOverrideDefaultParam"_s, UnitTest::Y)));
	checkScalarTypesAcceptDefaultParam($(UnitTest::class$->getMethod("scalarTypesAcceptDefaultParam"_s, UnitTest::Y)));
	checkArrayTypes0Param($(UnitTest::class$->getMethod("emptyArrayTypesParam"_s, UnitTest::Y)));
	checkArrayTypes1Param($(UnitTest::class$->getMethod("singleElementArrayTypesParam"_s, UnitTest::Y)));
	checkArrayTypes2Param($(UnitTest::class$->getMethod("twoElementArrayTypesParam"_s, UnitTest::Y)));
	checkArrayTypesAcceptDefaultParam($(UnitTest::class$->getMethod("arrayTypesAcceptDefaultParam"_s, UnitTest::Y)));
	checkArrayTypesOverrideDefaultParam($(UnitTest::class$->getMethod("arrayTypesOverrideDefaultParam"_s, UnitTest::Y)));
	checkMarkerParam($(UnitTest::class$->getMethod("markerParam"_s, UnitTest::Y)));
	checkSingleMemberByteParam($(UnitTest::class$->getMethod("SingleMemberByteParam"_s, UnitTest::Y)));
	checkSingleMemberShortParam($(UnitTest::class$->getMethod("SingleMemberShortParam"_s, UnitTest::Y)));
	checkSingleMemberIntParam($(UnitTest::class$->getMethod("SingleMemberIntParam"_s, UnitTest::Y)));
	checkSingleMemberLongParam($(UnitTest::class$->getMethod("SingleMemberLongParam"_s, UnitTest::Y)));
	checkSingleMemberCharParam($(UnitTest::class$->getMethod("SingleMemberCharParam"_s, UnitTest::Y)));
	checkSingleMemberFloatParam($(UnitTest::class$->getMethod("SingleMemberFloatParam"_s, UnitTest::Y)));
	checkSingleMemberDoubleParam($(UnitTest::class$->getMethod("SingleMemberDoubleParam"_s, UnitTest::Y)));
	checkSingleMemberBooleanParam($(UnitTest::class$->getMethod("SingleMemberBooleanParam"_s, UnitTest::Y)));
	checkSingleMemberStringParam($(UnitTest::class$->getMethod("SingleMemberStringParam"_s, UnitTest::Y)));
	checkSingleMemberClassParam($(UnitTest::class$->getMethod("SingleMemberClassParam"_s, UnitTest::Y)));
	checkSingleMemberEnumParam($(UnitTest::class$->getMethod("SingleMemberEnumParam"_s, UnitTest::Y)));
	checkSingleMemberByteOvrdDefParam($(UnitTest::class$->getMethod("SingleMemberByteOvrdDefParam"_s, UnitTest::Y)));
	checkSingleMemberShortOvrdDefParam($(UnitTest::class$->getMethod("SingleMemberShortOvrdDefParam"_s, UnitTest::Y)));
	checkSingleMemberIntOvrdDefParam($(UnitTest::class$->getMethod("SingleMemberIntOvrdDefParam"_s, UnitTest::Y)));
	checkSingleMemberLongOvrdDefParam($(UnitTest::class$->getMethod("SingleMemberLongOvrdDefParam"_s, UnitTest::Y)));
	checkSingleMemberCharOvrdDefParam($(UnitTest::class$->getMethod("SingleMemberCharOvrdDefParam"_s, UnitTest::Y)));
	checkSingleMemberFloatOvrdDefParam($(UnitTest::class$->getMethod("SingleMemberFloatOvrdDefParam"_s, UnitTest::Y)));
	checkSingleMemberDoubleOvrdDefParam($(UnitTest::class$->getMethod("SingleMemberDoubleOvrdDefParam"_s, UnitTest::Y)));
	checkSingleMemberBooleanOvrdDefParam($(UnitTest::class$->getMethod("SingleMemberBooleanOvrdDefParam"_s, UnitTest::Y)));
	checkSingleMemberStringOvrdDefParam($(UnitTest::class$->getMethod("SingleMemberStringOvrdDefParam"_s, UnitTest::Y)));
	checkSingleMemberClassOvrdDefParam($(UnitTest::class$->getMethod("SingleMemberClassOvrdDefParam"_s, UnitTest::Y)));
	checkSingleMemberEnumOvrdDefParam($(UnitTest::class$->getMethod("SingleMemberEnumOvrdDefParam"_s, UnitTest::Y)));
	checkSingleMemberByteAcceptDefParam($(UnitTest::class$->getMethod("SingleMemberByteAcceptDefParam"_s, UnitTest::Y)));
	checkSingleMemberShortAcceptDefParam($(UnitTest::class$->getMethod("SingleMemberShortAcceptDefParam"_s, UnitTest::Y)));
	checkSingleMemberIntAcceptDefParam($(UnitTest::class$->getMethod("SingleMemberIntAcceptDefParam"_s, UnitTest::Y)));
	checkSingleMemberLongAcceptDefParam($(UnitTest::class$->getMethod("SingleMemberLongAcceptDefParam"_s, UnitTest::Y)));
	checkSingleMemberCharAcceptDefParam($(UnitTest::class$->getMethod("SingleMemberCharAcceptDefParam"_s, UnitTest::Y)));
	checkSingleMemberFloatAcceptDefParam($(UnitTest::class$->getMethod("SingleMemberFloatAcceptDefParam"_s, UnitTest::Y)));
	checkSingleMemberDoubleAcceptDefParam($(UnitTest::class$->getMethod("SingleMemberDoubleAcceptDefParam"_s, UnitTest::Y)));
	checkSingleMemberBooleanAcceptDefParam($(UnitTest::class$->getMethod("SingleMemberBooleanAcceptDefParam"_s, UnitTest::Y)));
	checkSingleMemberStringAcceptDefParam($(UnitTest::class$->getMethod("SingleMemberStringAcceptDefParam"_s, UnitTest::Y)));
	checkSingleMemberClassAcceptDefParam($(UnitTest::class$->getMethod("SingleMemberClassAcceptDefParam"_s, UnitTest::Y)));
	checkSingleMemberEnumAcceptDefParam($(UnitTest::class$->getMethod("SingleMemberEnumAcceptDefParam"_s, UnitTest::Y)));
	checkSingleMemberByteArrEmptyParam($(UnitTest::class$->getMethod("SingleMemberByteArrEmptyParam"_s, UnitTest::Y)));
	checkSingleMemberShortArrEmptyParam($(UnitTest::class$->getMethod("SingleMemberShortArrEmptyParam"_s, UnitTest::Y)));
	checkSingleMemberIntArrEmptyParam($(UnitTest::class$->getMethod("SingleMemberIntArrEmptyParam"_s, UnitTest::Y)));
	checkSingleMemberLongArrEmptyParam($(UnitTest::class$->getMethod("SingleMemberLongArrEmptyParam"_s, UnitTest::Y)));
	checkSingleMemberCharArrEmptyParam($(UnitTest::class$->getMethod("SingleMemberCharArrEmptyParam"_s, UnitTest::Y)));
	checkSingleMemberFloatArrEmptyParam($(UnitTest::class$->getMethod("SingleMemberFloatArrEmptyParam"_s, UnitTest::Y)));
	checkSingleMemberDoubleArrEmptyParam($(UnitTest::class$->getMethod("SingleMemberDoubleArrEmptyParam"_s, UnitTest::Y)));
	checkSingleMemberBooleanArrEmptyParam($(UnitTest::class$->getMethod("SingleMemberBooleanArrEmptyParam"_s, UnitTest::Y)));
	checkSingleMemberStringArrEmptyParam($(UnitTest::class$->getMethod("SingleMemberStringArrEmptyParam"_s, UnitTest::Y)));
	checkSingleMemberClassArrEmptyParam($(UnitTest::class$->getMethod("SingleMemberClassArrEmptyParam"_s, UnitTest::Y)));
	checkSingleMemberEnumArrEmptyParam($(UnitTest::class$->getMethod("SingleMemberEnumArrEmptyParam"_s, UnitTest::Y)));
	checkSingleMemberByteArrOneParam($(UnitTest::class$->getMethod("SingleMemberByteArrOneParam"_s, UnitTest::Y)));
	checkSingleMemberShortArrOneParam($(UnitTest::class$->getMethod("SingleMemberShortArrOneParam"_s, UnitTest::Y)));
	checkSingleMemberIntArrOneParam($(UnitTest::class$->getMethod("SingleMemberIntArrOneParam"_s, UnitTest::Y)));
	checkSingleMemberLongArrOneParam($(UnitTest::class$->getMethod("SingleMemberLongArrOneParam"_s, UnitTest::Y)));
	checkSingleMemberCharArrOneParam($(UnitTest::class$->getMethod("SingleMemberCharArrOneParam"_s, UnitTest::Y)));
	checkSingleMemberFloatArrOneParam($(UnitTest::class$->getMethod("SingleMemberFloatArrOneParam"_s, UnitTest::Y)));
	checkSingleMemberDoubleArrOneParam($(UnitTest::class$->getMethod("SingleMemberDoubleArrOneParam"_s, UnitTest::Y)));
	checkSingleMemberBooleanArrOneParam($(UnitTest::class$->getMethod("SingleMemberBooleanArrOneParam"_s, UnitTest::Y)));
	checkSingleMemberStringArrOneParam($(UnitTest::class$->getMethod("SingleMemberStringArrOneParam"_s, UnitTest::Y)));
	checkSingleMemberClassArrOneParam($(UnitTest::class$->getMethod("SingleMemberClassArrOneParam"_s, UnitTest::Y)));
	checkSingleMemberEnumArrOneParam($(UnitTest::class$->getMethod("SingleMemberEnumArrOneParam"_s, UnitTest::Y)));
	checkSingleMemberByteArrTwoParam($(UnitTest::class$->getMethod("SingleMemberByteArrTwoParam"_s, UnitTest::Y)));
	checkSingleMemberShortArrTwoParam($(UnitTest::class$->getMethod("SingleMemberShortArrTwoParam"_s, UnitTest::Y)));
	checkSingleMemberIntArrTwoParam($(UnitTest::class$->getMethod("SingleMemberIntArrTwoParam"_s, UnitTest::Y)));
	checkSingleMemberLongArrTwoParam($(UnitTest::class$->getMethod("SingleMemberLongArrTwoParam"_s, UnitTest::Y)));
	checkSingleMemberCharArrTwoParam($(UnitTest::class$->getMethod("SingleMemberCharArrTwoParam"_s, UnitTest::Y)));
	checkSingleMemberFloatArrTwoParam($(UnitTest::class$->getMethod("SingleMemberFloatArrTwoParam"_s, UnitTest::Y)));
	checkSingleMemberDoubleArrTwoParam($(UnitTest::class$->getMethod("SingleMemberDoubleArrTwoParam"_s, UnitTest::Y)));
	checkSingleMemberBooleanArrTwoParam($(UnitTest::class$->getMethod("SingleMemberBooleanArrTwoParam"_s, UnitTest::Y)));
	checkSingleMemberStringArrTwoParam($(UnitTest::class$->getMethod("SingleMemberStringArrTwoParam"_s, UnitTest::Y)));
	checkSingleMemberClassArrTwoParam($(UnitTest::class$->getMethod("SingleMemberClassArrTwoParam"_s, UnitTest::Y)));
	checkSingleMemberEnumArrTwoParam($(UnitTest::class$->getMethod("SingleMemberEnumArrTwoParam"_s, UnitTest::Y)));
	checkSingleMemberByteArrOvrdDefParam($(UnitTest::class$->getMethod("SingleMemberByteArrOvrdDefParam"_s, UnitTest::Y)));
	checkSingleMemberShortArrOvrdDefParam($(UnitTest::class$->getMethod("SingleMemberShortArrOvrdDefParam"_s, UnitTest::Y)));
	checkSingleMemberIntArrOvrdDefParam($(UnitTest::class$->getMethod("SingleMemberIntArrOvrdDefParam"_s, UnitTest::Y)));
	checkSingleMemberLongArrOvrdDefParam($(UnitTest::class$->getMethod("SingleMemberLongArrOvrdDefParam"_s, UnitTest::Y)));
	checkSingleMemberCharArrOvrdDefParam($(UnitTest::class$->getMethod("SingleMemberCharArrOvrdDefParam"_s, UnitTest::Y)));
	checkSingleMemberFloatArrOvrdDefParam($(UnitTest::class$->getMethod("SingleMemberFloatArrOvrdDefParam"_s, UnitTest::Y)));
	checkSingleMemberDoubleArrOvrdDefParam($(UnitTest::class$->getMethod("SingleMemberDoubleArrOvrdDefParam"_s, UnitTest::Y)));
	checkSingleMemberBooleanArrOvrdDefParam($(UnitTest::class$->getMethod("SingleMemberBooleanArrOvrdDefParam"_s, UnitTest::Y)));
	checkSingleMemberStringArrOvrdDefParam($(UnitTest::class$->getMethod("SingleMemberStringArrOvrdDefParam"_s, UnitTest::Y)));
	checkSingleMemberClassArrOvrdDefParam($(UnitTest::class$->getMethod("SingleMemberClassArrOvrdDefParam"_s, UnitTest::Y)));
	checkSingleMemberEnumArrOvrdDefParam($(UnitTest::class$->getMethod("SingleMemberEnumArrOvrdDefParam"_s, UnitTest::Y)));
	checkSingleMemberByteArrAcceptDefParam($(UnitTest::class$->getMethod("SingleMemberByteArrAcceptDefParam"_s, UnitTest::Y)));
	checkSingleMemberShortArrAcceptDefParam($(UnitTest::class$->getMethod("SingleMemberShortArrAcceptDefParam"_s, UnitTest::Y)));
	checkSingleMemberIntArrAcceptDefParam($(UnitTest::class$->getMethod("SingleMemberIntArrAcceptDefParam"_s, UnitTest::Y)));
	checkSingleMemberLongArrAcceptDefParam($(UnitTest::class$->getMethod("SingleMemberLongArrAcceptDefParam"_s, UnitTest::Y)));
	checkSingleMemberCharArrAcceptDefParam($(UnitTest::class$->getMethod("SingleMemberCharArrAcceptDefParam"_s, UnitTest::Y)));
	checkSingleMemberFloatArrAcceptDefParam($(UnitTest::class$->getMethod("SingleMemberFloatArrAcceptDefParam"_s, UnitTest::Y)));
	checkSingleMemberDoubleArrAcceptDefParam($(UnitTest::class$->getMethod("SingleMemberDoubleArrAcceptDefParam"_s, UnitTest::Y)));
	checkSingleMemberBooleanArrAcceptDefParam($(UnitTest::class$->getMethod("SingleMemberBooleanArrAcceptDefParam"_s, UnitTest::Y)));
	checkSingleMemberStringArrAcceptDefParam($(UnitTest::class$->getMethod("SingleMemberStringArrAcceptDefParam"_s, UnitTest::Y)));
	checkSingleMemberClassArrAcceptDefParam($(UnitTest::class$->getMethod("SingleMemberClassArrAcceptDefParam"_s, UnitTest::Y)));
	checkSingleMemberEnumArrAcceptDefParam($(UnitTest::class$->getMethod("SingleMemberEnumArrAcceptDefParam"_s, UnitTest::Y)));
	$load($scalarTypesClass);
	checkScalarTypes($scalarTypesClass::class$);
	$load($scalarTypesOverrideDefaultClass);
	checkScalarTypesOverrideDefault($scalarTypesOverrideDefaultClass::class$);
	$load($scalarTypesAcceptDefaultClass);
	checkScalarTypesAcceptDefault($scalarTypesAcceptDefaultClass::class$);
	$load($emptyArrayTypesClass);
	checkArrayTypes0($emptyArrayTypesClass::class$);
	$load($singleElementArrayTypesClass);
	checkArrayTypes1($singleElementArrayTypesClass::class$);
	$load($twoElementArrayTypesClass);
	checkArrayTypes2($twoElementArrayTypesClass::class$);
	$load($arrayTypesOverrideDefaultClass);
	checkArrayTypesOverrideDefault($arrayTypesOverrideDefaultClass::class$);
	$load($arrayTypesAcceptDefaultClass);
	checkArrayTypesAcceptDefault($arrayTypesAcceptDefaultClass::class$);
	$load($markerClass);
	checkMarker($markerClass::class$);
	$load($SingleMemberByteClass);
	checkSingleMemberByte($SingleMemberByteClass::class$);
	$load($SingleMemberShortClass);
	checkSingleMemberShort($SingleMemberShortClass::class$);
	$load($SingleMemberIntClass);
	checkSingleMemberInt($SingleMemberIntClass::class$);
	$load($SingleMemberLongClass);
	checkSingleMemberLong($SingleMemberLongClass::class$);
	$load($SingleMemberCharClass);
	checkSingleMemberChar($SingleMemberCharClass::class$);
	$load($SingleMemberFloatClass);
	checkSingleMemberFloat($SingleMemberFloatClass::class$);
	$load($SingleMemberDoubleClass);
	checkSingleMemberDouble($SingleMemberDoubleClass::class$);
	$load($SingleMemberBooleanClass);
	checkSingleMemberBoolean($SingleMemberBooleanClass::class$);
	$load($SingleMemberStringClass);
	checkSingleMemberString($SingleMemberStringClass::class$);
	$load($SingleMemberClassClass);
	checkSingleMemberClass($SingleMemberClassClass::class$);
	$load($SingleMemberEnumClass);
	checkSingleMemberEnum($SingleMemberEnumClass::class$);
	$load($SingleMemberByteOvrdDefClass);
	checkSingleMemberByteOvrdDef($SingleMemberByteOvrdDefClass::class$);
	$load($SingleMemberShortOvrdDefClass);
	checkSingleMemberShortOvrdDef($SingleMemberShortOvrdDefClass::class$);
	$load($SingleMemberIntOvrdDefClass);
	checkSingleMemberIntOvrdDef($SingleMemberIntOvrdDefClass::class$);
	$load($SingleMemberLongOvrdDefClass);
	checkSingleMemberLongOvrdDef($SingleMemberLongOvrdDefClass::class$);
	$load($SingleMemberCharOvrdDefClass);
	checkSingleMemberCharOvrdDef($SingleMemberCharOvrdDefClass::class$);
	$load($SingleMemberFloatOvrdDefClass);
	checkSingleMemberFloatOvrdDef($SingleMemberFloatOvrdDefClass::class$);
	$load($SingleMemberDoubleOvrdDefClass);
	checkSingleMemberDoubleOvrdDef($SingleMemberDoubleOvrdDefClass::class$);
	$load($SingleMemberBooleanOvrdDefClass);
	checkSingleMemberBooleanOvrdDef($SingleMemberBooleanOvrdDefClass::class$);
	$load($SingleMemberStringOvrdDefClass);
	checkSingleMemberStringOvrdDef($SingleMemberStringOvrdDefClass::class$);
	$load($SingleMemberClassOvrdDefClass);
	checkSingleMemberClassOvrdDef($SingleMemberClassOvrdDefClass::class$);
	$load($SingleMemberEnumOvrdDefClass);
	checkSingleMemberEnumOvrdDef($SingleMemberEnumOvrdDefClass::class$);
	$load($SingleMemberByteAcceptDefClass);
	checkSingleMemberByteAcceptDef($SingleMemberByteAcceptDefClass::class$);
	$load($SingleMemberShortAcceptDefClass);
	checkSingleMemberShortAcceptDef($SingleMemberShortAcceptDefClass::class$);
	$load($SingleMemberIntAcceptDefClass);
	checkSingleMemberIntAcceptDef($SingleMemberIntAcceptDefClass::class$);
	$load($SingleMemberLongAcceptDefClass);
	checkSingleMemberLongAcceptDef($SingleMemberLongAcceptDefClass::class$);
	$load($SingleMemberCharAcceptDefClass);
	checkSingleMemberCharAcceptDef($SingleMemberCharAcceptDefClass::class$);
	$load($SingleMemberFloatAcceptDefClass);
	checkSingleMemberFloatAcceptDef($SingleMemberFloatAcceptDefClass::class$);
	$load($SingleMemberDoubleAcceptDefClass);
	checkSingleMemberDoubleAcceptDef($SingleMemberDoubleAcceptDefClass::class$);
	$load($SingleMemberBooleanAcceptDefClass);
	checkSingleMemberBooleanAcceptDef($SingleMemberBooleanAcceptDefClass::class$);
	$load($SingleMemberStringAcceptDefClass);
	checkSingleMemberStringAcceptDef($SingleMemberStringAcceptDefClass::class$);
	$load($SingleMemberClassAcceptDefClass);
	checkSingleMemberClassAcceptDef($SingleMemberClassAcceptDefClass::class$);
	$load($SingleMemberEnumAcceptDefClass);
	checkSingleMemberEnumAcceptDef($SingleMemberEnumAcceptDefClass::class$);
	$load($SingleMemberByteArrEmptyClass);
	checkSingleMemberByteArrEmpty($SingleMemberByteArrEmptyClass::class$);
	$load($SingleMemberShortArrEmptyClass);
	checkSingleMemberShortArrEmpty($SingleMemberShortArrEmptyClass::class$);
	$load($SingleMemberIntArrEmptyClass);
	checkSingleMemberIntArrEmpty($SingleMemberIntArrEmptyClass::class$);
	$load($SingleMemberLongArrEmptyClass);
	checkSingleMemberLongArrEmpty($SingleMemberLongArrEmptyClass::class$);
	$load($SingleMemberCharArrEmptyClass);
	checkSingleMemberCharArrEmpty($SingleMemberCharArrEmptyClass::class$);
	$load($SingleMemberFloatArrEmptyClass);
	checkSingleMemberFloatArrEmpty($SingleMemberFloatArrEmptyClass::class$);
	$load($SingleMemberDoubleArrEmptyClass);
	checkSingleMemberDoubleArrEmpty($SingleMemberDoubleArrEmptyClass::class$);
	$load($SingleMemberBooleanArrEmptyClass);
	checkSingleMemberBooleanArrEmpty($SingleMemberBooleanArrEmptyClass::class$);
	$load($SingleMemberStringArrEmptyClass);
	checkSingleMemberStringArrEmpty($SingleMemberStringArrEmptyClass::class$);
	$load($SingleMemberClassArrEmptyClass);
	checkSingleMemberClassArrEmpty($SingleMemberClassArrEmptyClass::class$);
	$load($SingleMemberEnumArrEmptyClass);
	checkSingleMemberEnumArrEmpty($SingleMemberEnumArrEmptyClass::class$);
	$load($SingleMemberByteArrOneClass);
	checkSingleMemberByteArrOne($SingleMemberByteArrOneClass::class$);
	$load($SingleMemberShortArrOneClass);
	checkSingleMemberShortArrOne($SingleMemberShortArrOneClass::class$);
	$load($SingleMemberIntArrOneClass);
	checkSingleMemberIntArrOne($SingleMemberIntArrOneClass::class$);
	$load($SingleMemberLongArrOneClass);
	checkSingleMemberLongArrOne($SingleMemberLongArrOneClass::class$);
	$load($SingleMemberCharArrOneClass);
	checkSingleMemberCharArrOne($SingleMemberCharArrOneClass::class$);
	$load($SingleMemberFloatArrOneClass);
	checkSingleMemberFloatArrOne($SingleMemberFloatArrOneClass::class$);
	$load($SingleMemberDoubleArrOneClass);
	checkSingleMemberDoubleArrOne($SingleMemberDoubleArrOneClass::class$);
	$load($SingleMemberBooleanArrOneClass);
	checkSingleMemberBooleanArrOne($SingleMemberBooleanArrOneClass::class$);
	$load($SingleMemberStringArrOneClass);
	checkSingleMemberStringArrOne($SingleMemberStringArrOneClass::class$);
	$load($SingleMemberClassArrOneClass);
	checkSingleMemberClassArrOne($SingleMemberClassArrOneClass::class$);
	$load($SingleMemberEnumArrOneClass);
	checkSingleMemberEnumArrOne($SingleMemberEnumArrOneClass::class$);
	$load($SingleMemberByteArrTwoClass);
	checkSingleMemberByteArrTwo($SingleMemberByteArrTwoClass::class$);
	$load($SingleMemberShortArrTwoClass);
	checkSingleMemberShortArrTwo($SingleMemberShortArrTwoClass::class$);
	$load($SingleMemberIntArrTwoClass);
	checkSingleMemberIntArrTwo($SingleMemberIntArrTwoClass::class$);
	$load($SingleMemberLongArrTwoClass);
	checkSingleMemberLongArrTwo($SingleMemberLongArrTwoClass::class$);
	$load($SingleMemberCharArrTwoClass);
	checkSingleMemberCharArrTwo($SingleMemberCharArrTwoClass::class$);
	$load($SingleMemberFloatArrTwoClass);
	checkSingleMemberFloatArrTwo($SingleMemberFloatArrTwoClass::class$);
	$load($SingleMemberDoubleArrTwoClass);
	checkSingleMemberDoubleArrTwo($SingleMemberDoubleArrTwoClass::class$);
	$load($SingleMemberBooleanArrTwoClass);
	checkSingleMemberBooleanArrTwo($SingleMemberBooleanArrTwoClass::class$);
	$load($SingleMemberStringArrTwoClass);
	checkSingleMemberStringArrTwo($SingleMemberStringArrTwoClass::class$);
	$load($SingleMemberClassArrTwoClass);
	checkSingleMemberClassArrTwo($SingleMemberClassArrTwoClass::class$);
	$load($SingleMemberEnumArrTwoClass);
	checkSingleMemberEnumArrTwo($SingleMemberEnumArrTwoClass::class$);
	$load($SingleMemberByteArrOvrdDefClass);
	checkSingleMemberByteArrOvrdDef($SingleMemberByteArrOvrdDefClass::class$);
	$load($SingleMemberShortArrOvrdDefClass);
	checkSingleMemberShortArrOvrdDef($SingleMemberShortArrOvrdDefClass::class$);
	$load($SingleMemberIntArrOvrdDefClass);
	checkSingleMemberIntArrOvrdDef($SingleMemberIntArrOvrdDefClass::class$);
	$load($SingleMemberLongArrOvrdDefClass);
	checkSingleMemberLongArrOvrdDef($SingleMemberLongArrOvrdDefClass::class$);
	$load($SingleMemberCharArrOvrdDefClass);
	checkSingleMemberCharArrOvrdDef($SingleMemberCharArrOvrdDefClass::class$);
	$load($SingleMemberFloatArrOvrdDefClass);
	checkSingleMemberFloatArrOvrdDef($SingleMemberFloatArrOvrdDefClass::class$);
	$load($SingleMemberDoubleArrOvrdDefClass);
	checkSingleMemberDoubleArrOvrdDef($SingleMemberDoubleArrOvrdDefClass::class$);
	$load($SingleMemberBooleanArrOvrdDefClass);
	checkSingleMemberBooleanArrOvrdDef($SingleMemberBooleanArrOvrdDefClass::class$);
	$load($SingleMemberStringArrOvrdDefClass);
	checkSingleMemberStringArrOvrdDef($SingleMemberStringArrOvrdDefClass::class$);
	$load($SingleMemberClassArrOvrdDefClass);
	checkSingleMemberClassArrOvrdDef($SingleMemberClassArrOvrdDefClass::class$);
	$load($SingleMemberEnumArrOvrdDefClass);
	checkSingleMemberEnumArrOvrdDef($SingleMemberEnumArrOvrdDefClass::class$);
	$load($SingleMemberByteArrAcceptDefClass);
	checkSingleMemberByteArrAcceptDef($SingleMemberByteArrAcceptDefClass::class$);
	$load($SingleMemberShortArrAcceptDefClass);
	checkSingleMemberShortArrAcceptDef($SingleMemberShortArrAcceptDefClass::class$);
	$load($SingleMemberIntArrAcceptDefClass);
	checkSingleMemberIntArrAcceptDef($SingleMemberIntArrAcceptDefClass::class$);
	$load($SingleMemberLongArrAcceptDefClass);
	checkSingleMemberLongArrAcceptDef($SingleMemberLongArrAcceptDefClass::class$);
	$load($SingleMemberCharArrAcceptDefClass);
	checkSingleMemberCharArrAcceptDef($SingleMemberCharArrAcceptDefClass::class$);
	$load($SingleMemberFloatArrAcceptDefClass);
	checkSingleMemberFloatArrAcceptDef($SingleMemberFloatArrAcceptDefClass::class$);
	$load($SingleMemberDoubleArrAcceptDefClass);
	checkSingleMemberDoubleArrAcceptDef($SingleMemberDoubleArrAcceptDefClass::class$);
	$load($SingleMemberBooleanArrAcceptDefClass);
	checkSingleMemberBooleanArrAcceptDef($SingleMemberBooleanArrAcceptDefClass::class$);
	$load($SingleMemberStringArrAcceptDefClass);
	checkSingleMemberStringArrAcceptDef($SingleMemberStringArrAcceptDefClass::class$);
	$load($SingleMemberClassArrAcceptDefClass);
	checkSingleMemberClassArrAcceptDef($SingleMemberClassArrAcceptDefClass::class$);
	$load($SingleMemberEnumArrAcceptDefClass);
	checkSingleMemberEnumArrAcceptDef($SingleMemberEnumArrAcceptDefClass::class$);
	$load($ScalarTypes);
	checkEquals($scalarTypesClass::class$, $(UnitTest::class$->getField("scalarTypesField"_s)), $ScalarTypes::class$);
	$load($ScalarTypesWithDefault);
	checkEquals($scalarTypesOverrideDefaultClass::class$, $(UnitTest::class$->getField("scalarTypesOverrideDefaultField"_s)), $ScalarTypesWithDefault::class$);
	checkEquals($scalarTypesAcceptDefaultClass::class$, $(UnitTest::class$->getField("scalarTypesAcceptDefaultField"_s)), $ScalarTypesWithDefault::class$);
	$load($ArrayTypes);
	checkEquals($emptyArrayTypesClass::class$, $(UnitTest::class$->getField("emptyArrayTypesField"_s)), $ArrayTypes::class$);
	checkEquals($singleElementArrayTypesClass::class$, $(UnitTest::class$->getField("singleElementArrayTypesField"_s)), $ArrayTypes::class$);
	checkEquals($twoElementArrayTypesClass::class$, $(UnitTest::class$->getField("twoElementArrayTypesField"_s)), $ArrayTypes::class$);
	$load($ArrayTypesWithDefault);
	checkEquals($arrayTypesOverrideDefaultClass::class$, $(UnitTest::class$->getField("arrayTypesOverrideDefaultField"_s)), $ArrayTypesWithDefault::class$);
	checkEquals($arrayTypesAcceptDefaultClass::class$, $(UnitTest::class$->getField("arrayTypesAcceptDefaultField"_s)), $ArrayTypesWithDefault::class$);
	$load($Marker);
	checkEquals($markerClass::class$, $(UnitTest::class$->getField("markerField"_s)), $Marker::class$);
	$load($SingleMemberByte);
	checkEquals($SingleMemberByteClass::class$, $(UnitTest::class$->getField("SingleMemberByteField"_s)), $SingleMemberByte::class$);
	$load($SingleMemberShort);
	checkEquals($SingleMemberShortClass::class$, $(UnitTest::class$->getField("SingleMemberShortField"_s)), $SingleMemberShort::class$);
	$load($SingleMemberInt);
	checkEquals($SingleMemberIntClass::class$, $(UnitTest::class$->getField("SingleMemberIntField"_s)), $SingleMemberInt::class$);
	$load($SingleMemberLong);
	checkEquals($SingleMemberLongClass::class$, $(UnitTest::class$->getField("SingleMemberLongField"_s)), $SingleMemberLong::class$);
	$load($SingleMemberChar);
	checkEquals($SingleMemberCharClass::class$, $(UnitTest::class$->getField("SingleMemberCharField"_s)), $SingleMemberChar::class$);
	$load($SingleMemberFloat);
	checkEquals($SingleMemberFloatClass::class$, $(UnitTest::class$->getField("SingleMemberFloatField"_s)), $SingleMemberFloat::class$);
	$load($SingleMemberDouble);
	checkEquals($SingleMemberDoubleClass::class$, $(UnitTest::class$->getField("SingleMemberDoubleField"_s)), $SingleMemberDouble::class$);
	$load($SingleMemberBoolean);
	checkEquals($SingleMemberBooleanClass::class$, $(UnitTest::class$->getField("SingleMemberBooleanField"_s)), $SingleMemberBoolean::class$);
	$load($SingleMemberString);
	checkEquals($SingleMemberStringClass::class$, $(UnitTest::class$->getField("SingleMemberStringField"_s)), $SingleMemberString::class$);
	$load($SingleMemberClass);
	checkEquals($SingleMemberClassClass::class$, $(UnitTest::class$->getField("SingleMemberClassField"_s)), $SingleMemberClass::class$);
	$load($SingleMemberEnum);
	checkEquals($SingleMemberEnumClass::class$, $(UnitTest::class$->getField("SingleMemberEnumField"_s)), $SingleMemberEnum::class$);
	$load($SingleMemberByteWithDef);
	checkEquals($SingleMemberByteOvrdDefClass::class$, $(UnitTest::class$->getField("SingleMemberByteOvrdDefField"_s)), $SingleMemberByteWithDef::class$);
	$load($SingleMemberShortWithDef);
	checkEquals($SingleMemberShortOvrdDefClass::class$, $(UnitTest::class$->getField("SingleMemberShortOvrdDefField"_s)), $SingleMemberShortWithDef::class$);
	$load($SingleMemberIntWithDef);
	checkEquals($SingleMemberIntOvrdDefClass::class$, $(UnitTest::class$->getField("SingleMemberIntOvrdDefField"_s)), $SingleMemberIntWithDef::class$);
	$load($SingleMemberLongWithDef);
	checkEquals($SingleMemberLongOvrdDefClass::class$, $(UnitTest::class$->getField("SingleMemberLongOvrdDefField"_s)), $SingleMemberLongWithDef::class$);
	$load($SingleMemberCharWithDef);
	checkEquals($SingleMemberCharOvrdDefClass::class$, $(UnitTest::class$->getField("SingleMemberCharOvrdDefField"_s)), $SingleMemberCharWithDef::class$);
	$load($SingleMemberFloatWithDef);
	checkEquals($SingleMemberFloatOvrdDefClass::class$, $(UnitTest::class$->getField("SingleMemberFloatOvrdDefField"_s)), $SingleMemberFloatWithDef::class$);
	$load($SingleMemberDoubleWithDef);
	checkEquals($SingleMemberDoubleOvrdDefClass::class$, $(UnitTest::class$->getField("SingleMemberDoubleOvrdDefField"_s)), $SingleMemberDoubleWithDef::class$);
	$load($SingleMemberBooleanWithDef);
	checkEquals($SingleMemberBooleanOvrdDefClass::class$, $(UnitTest::class$->getField("SingleMemberBooleanOvrdDefField"_s)), $SingleMemberBooleanWithDef::class$);
	$load($SingleMemberStringWithDef);
	checkEquals($SingleMemberStringOvrdDefClass::class$, $(UnitTest::class$->getField("SingleMemberStringOvrdDefField"_s)), $SingleMemberStringWithDef::class$);
	$load($SingleMemberClassWithDef);
	checkEquals($SingleMemberClassOvrdDefClass::class$, $(UnitTest::class$->getField("SingleMemberClassOvrdDefField"_s)), $SingleMemberClassWithDef::class$);
	$load($SingleMemberEnumWithDef);
	checkEquals($SingleMemberEnumOvrdDefClass::class$, $(UnitTest::class$->getField("SingleMemberEnumOvrdDefField"_s)), $SingleMemberEnumWithDef::class$);
	checkEquals($SingleMemberByteAcceptDefClass::class$, $(UnitTest::class$->getField("SingleMemberByteAcceptDefField"_s)), $SingleMemberByteWithDef::class$);
	checkEquals($SingleMemberShortAcceptDefClass::class$, $(UnitTest::class$->getField("SingleMemberShortAcceptDefField"_s)), $SingleMemberShortWithDef::class$);
	checkEquals($SingleMemberIntAcceptDefClass::class$, $(UnitTest::class$->getField("SingleMemberIntAcceptDefField"_s)), $SingleMemberIntWithDef::class$);
	checkEquals($SingleMemberLongAcceptDefClass::class$, $(UnitTest::class$->getField("SingleMemberLongAcceptDefField"_s)), $SingleMemberLongWithDef::class$);
	checkEquals($SingleMemberCharAcceptDefClass::class$, $(UnitTest::class$->getField("SingleMemberCharAcceptDefField"_s)), $SingleMemberCharWithDef::class$);
	checkEquals($SingleMemberFloatAcceptDefClass::class$, $(UnitTest::class$->getField("SingleMemberFloatAcceptDefField"_s)), $SingleMemberFloatWithDef::class$);
	checkEquals($SingleMemberDoubleAcceptDefClass::class$, $(UnitTest::class$->getField("SingleMemberDoubleAcceptDefField"_s)), $SingleMemberDoubleWithDef::class$);
	checkEquals($SingleMemberBooleanAcceptDefClass::class$, $(UnitTest::class$->getField("SingleMemberBooleanAcceptDefField"_s)), $SingleMemberBooleanWithDef::class$);
	checkEquals($SingleMemberStringAcceptDefClass::class$, $(UnitTest::class$->getField("SingleMemberStringAcceptDefField"_s)), $SingleMemberStringWithDef::class$);
	checkEquals($SingleMemberClassAcceptDefClass::class$, $(UnitTest::class$->getField("SingleMemberClassAcceptDefField"_s)), $SingleMemberClassWithDef::class$);
	checkEquals($SingleMemberEnumAcceptDefClass::class$, $(UnitTest::class$->getField("SingleMemberEnumAcceptDefField"_s)), $SingleMemberEnumWithDef::class$);
	$load($SingleMemberByteArray);
	checkEquals($SingleMemberByteArrEmptyClass::class$, $(UnitTest::class$->getField("SingleMemberByteArrEmptyField"_s)), $SingleMemberByteArray::class$);
	$load($SingleMemberShortArray);
	checkEquals($SingleMemberShortArrEmptyClass::class$, $(UnitTest::class$->getField("SingleMemberShortArrEmptyField"_s)), $SingleMemberShortArray::class$);
	$load($SingleMemberIntArray);
	checkEquals($SingleMemberIntArrEmptyClass::class$, $(UnitTest::class$->getField("SingleMemberIntArrEmptyField"_s)), $SingleMemberIntArray::class$);
	$load($SingleMemberLongArray);
	checkEquals($SingleMemberLongArrEmptyClass::class$, $(UnitTest::class$->getField("SingleMemberLongArrEmptyField"_s)), $SingleMemberLongArray::class$);
	$load($SingleMemberCharArray);
	checkEquals($SingleMemberCharArrEmptyClass::class$, $(UnitTest::class$->getField("SingleMemberCharArrEmptyField"_s)), $SingleMemberCharArray::class$);
	$load($SingleMemberFloatArray);
	checkEquals($SingleMemberFloatArrEmptyClass::class$, $(UnitTest::class$->getField("SingleMemberFloatArrEmptyField"_s)), $SingleMemberFloatArray::class$);
	$load($SingleMemberDoubleArray);
	checkEquals($SingleMemberDoubleArrEmptyClass::class$, $(UnitTest::class$->getField("SingleMemberDoubleArrEmptyField"_s)), $SingleMemberDoubleArray::class$);
	$load($SingleMemberBooleanArray);
	checkEquals($SingleMemberBooleanArrEmptyClass::class$, $(UnitTest::class$->getField("SingleMemberBooleanArrEmptyField"_s)), $SingleMemberBooleanArray::class$);
	$load($SingleMemberStringArray);
	checkEquals($SingleMemberStringArrEmptyClass::class$, $(UnitTest::class$->getField("SingleMemberStringArrEmptyField"_s)), $SingleMemberStringArray::class$);
	$load($SingleMemberClassArray);
	checkEquals($SingleMemberClassArrEmptyClass::class$, $(UnitTest::class$->getField("SingleMemberClassArrEmptyField"_s)), $SingleMemberClassArray::class$);
	$load($SingleMemberEnumArray);
	checkEquals($SingleMemberEnumArrEmptyClass::class$, $(UnitTest::class$->getField("SingleMemberEnumArrEmptyField"_s)), $SingleMemberEnumArray::class$);
	checkEquals($SingleMemberByteArrOneClass::class$, $(UnitTest::class$->getField("SingleMemberByteArrOneField"_s)), $SingleMemberByteArray::class$);
	checkEquals($SingleMemberShortArrOneClass::class$, $(UnitTest::class$->getField("SingleMemberShortArrOneField"_s)), $SingleMemberShortArray::class$);
	checkEquals($SingleMemberIntArrOneClass::class$, $(UnitTest::class$->getField("SingleMemberIntArrOneField"_s)), $SingleMemberIntArray::class$);
	checkEquals($SingleMemberLongArrOneClass::class$, $(UnitTest::class$->getField("SingleMemberLongArrOneField"_s)), $SingleMemberLongArray::class$);
	checkEquals($SingleMemberCharArrOneClass::class$, $(UnitTest::class$->getField("SingleMemberCharArrOneField"_s)), $SingleMemberCharArray::class$);
	checkEquals($SingleMemberFloatArrOneClass::class$, $(UnitTest::class$->getField("SingleMemberFloatArrOneField"_s)), $SingleMemberFloatArray::class$);
	checkEquals($SingleMemberDoubleArrOneClass::class$, $(UnitTest::class$->getField("SingleMemberDoubleArrOneField"_s)), $SingleMemberDoubleArray::class$);
	checkEquals($SingleMemberBooleanArrOneClass::class$, $(UnitTest::class$->getField("SingleMemberBooleanArrOneField"_s)), $SingleMemberBooleanArray::class$);
	checkEquals($SingleMemberStringArrOneClass::class$, $(UnitTest::class$->getField("SingleMemberStringArrOneField"_s)), $SingleMemberStringArray::class$);
	checkEquals($SingleMemberClassArrOneClass::class$, $(UnitTest::class$->getField("SingleMemberClassArrOneField"_s)), $SingleMemberClassArray::class$);
	checkEquals($SingleMemberEnumArrOneClass::class$, $(UnitTest::class$->getField("SingleMemberEnumArrOneField"_s)), $SingleMemberEnumArray::class$);
	checkEquals($SingleMemberByteArrTwoClass::class$, $(UnitTest::class$->getField("SingleMemberByteArrTwoField"_s)), $SingleMemberByteArray::class$);
	checkEquals($SingleMemberShortArrTwoClass::class$, $(UnitTest::class$->getField("SingleMemberShortArrTwoField"_s)), $SingleMemberShortArray::class$);
	checkEquals($SingleMemberIntArrTwoClass::class$, $(UnitTest::class$->getField("SingleMemberIntArrTwoField"_s)), $SingleMemberIntArray::class$);
	checkEquals($SingleMemberLongArrTwoClass::class$, $(UnitTest::class$->getField("SingleMemberLongArrTwoField"_s)), $SingleMemberLongArray::class$);
	checkEquals($SingleMemberCharArrTwoClass::class$, $(UnitTest::class$->getField("SingleMemberCharArrTwoField"_s)), $SingleMemberCharArray::class$);
	checkEquals($SingleMemberFloatArrTwoClass::class$, $(UnitTest::class$->getField("SingleMemberFloatArrTwoField"_s)), $SingleMemberFloatArray::class$);
	checkEquals($SingleMemberDoubleArrTwoClass::class$, $(UnitTest::class$->getField("SingleMemberDoubleArrTwoField"_s)), $SingleMemberDoubleArray::class$);
	checkEquals($SingleMemberBooleanArrTwoClass::class$, $(UnitTest::class$->getField("SingleMemberBooleanArrTwoField"_s)), $SingleMemberBooleanArray::class$);
	checkEquals($SingleMemberStringArrTwoClass::class$, $(UnitTest::class$->getField("SingleMemberStringArrTwoField"_s)), $SingleMemberStringArray::class$);
	checkEquals($SingleMemberClassArrTwoClass::class$, $(UnitTest::class$->getField("SingleMemberClassArrTwoField"_s)), $SingleMemberClassArray::class$);
	checkEquals($SingleMemberEnumArrTwoClass::class$, $(UnitTest::class$->getField("SingleMemberEnumArrTwoField"_s)), $SingleMemberEnumArray::class$);
	$load($SingleMemberByteArrayDef);
	checkEquals($SingleMemberByteArrOvrdDefClass::class$, $(UnitTest::class$->getField("SingleMemberByteArrOvrdDefField"_s)), $SingleMemberByteArrayDef::class$);
	$load($SingleMemberShortArrayDef);
	checkEquals($SingleMemberShortArrOvrdDefClass::class$, $(UnitTest::class$->getField("SingleMemberShortArrOvrdDefField"_s)), $SingleMemberShortArrayDef::class$);
	$load($SingleMemberIntArrayDef);
	checkEquals($SingleMemberIntArrOvrdDefClass::class$, $(UnitTest::class$->getField("SingleMemberIntArrOvrdDefField"_s)), $SingleMemberIntArrayDef::class$);
	$load($SingleMemberLongArrayDef);
	checkEquals($SingleMemberLongArrOvrdDefClass::class$, $(UnitTest::class$->getField("SingleMemberLongArrOvrdDefField"_s)), $SingleMemberLongArrayDef::class$);
	$load($SingleMemberCharArrayDef);
	checkEquals($SingleMemberCharArrOvrdDefClass::class$, $(UnitTest::class$->getField("SingleMemberCharArrOvrdDefField"_s)), $SingleMemberCharArrayDef::class$);
	$load($SingleMemberFloatArrayDef);
	checkEquals($SingleMemberFloatArrOvrdDefClass::class$, $(UnitTest::class$->getField("SingleMemberFloatArrOvrdDefField"_s)), $SingleMemberFloatArrayDef::class$);
	$load($SingleMemberDoubleArrayDef);
	checkEquals($SingleMemberDoubleArrOvrdDefClass::class$, $(UnitTest::class$->getField("SingleMemberDoubleArrOvrdDefField"_s)), $SingleMemberDoubleArrayDef::class$);
	$load($SingleMemberBooleanArrayDef);
	checkEquals($SingleMemberBooleanArrOvrdDefClass::class$, $(UnitTest::class$->getField("SingleMemberBooleanArrOvrdDefField"_s)), $SingleMemberBooleanArrayDef::class$);
	$load($SingleMemberStringArrayDef);
	checkEquals($SingleMemberStringArrOvrdDefClass::class$, $(UnitTest::class$->getField("SingleMemberStringArrOvrdDefField"_s)), $SingleMemberStringArrayDef::class$);
	$load($SingleMemberClassArrayDef);
	checkEquals($SingleMemberClassArrOvrdDefClass::class$, $(UnitTest::class$->getField("SingleMemberClassArrOvrdDefField"_s)), $SingleMemberClassArrayDef::class$);
	$load($SingleMemberEnumArrayDef);
	checkEquals($SingleMemberEnumArrOvrdDefClass::class$, $(UnitTest::class$->getField("SingleMemberEnumArrOvrdDefField"_s)), $SingleMemberEnumArrayDef::class$);
	checkEquals($SingleMemberByteArrAcceptDefClass::class$, $(UnitTest::class$->getField("SingleMemberByteArrAcceptDefField"_s)), $SingleMemberByteArrayDef::class$);
	checkEquals($SingleMemberShortArrAcceptDefClass::class$, $(UnitTest::class$->getField("SingleMemberShortArrAcceptDefField"_s)), $SingleMemberShortArrayDef::class$);
	checkEquals($SingleMemberIntArrAcceptDefClass::class$, $(UnitTest::class$->getField("SingleMemberIntArrAcceptDefField"_s)), $SingleMemberIntArrayDef::class$);
	checkEquals($SingleMemberLongArrAcceptDefClass::class$, $(UnitTest::class$->getField("SingleMemberLongArrAcceptDefField"_s)), $SingleMemberLongArrayDef::class$);
	checkEquals($SingleMemberCharArrAcceptDefClass::class$, $(UnitTest::class$->getField("SingleMemberCharArrAcceptDefField"_s)), $SingleMemberCharArrayDef::class$);
	checkEquals($SingleMemberFloatArrAcceptDefClass::class$, $(UnitTest::class$->getField("SingleMemberFloatArrAcceptDefField"_s)), $SingleMemberFloatArrayDef::class$);
	checkEquals($SingleMemberDoubleArrAcceptDefClass::class$, $(UnitTest::class$->getField("SingleMemberDoubleArrAcceptDefField"_s)), $SingleMemberDoubleArrayDef::class$);
	checkEquals($SingleMemberBooleanArrAcceptDefClass::class$, $(UnitTest::class$->getField("SingleMemberBooleanArrAcceptDefField"_s)), $SingleMemberBooleanArrayDef::class$);
	checkEquals($SingleMemberStringArrAcceptDefClass::class$, $(UnitTest::class$->getField("SingleMemberStringArrAcceptDefField"_s)), $SingleMemberStringArrayDef::class$);
	checkEquals($SingleMemberClassArrAcceptDefClass::class$, $(UnitTest::class$->getField("SingleMemberClassArrAcceptDefField"_s)), $SingleMemberClassArrayDef::class$);
	checkEquals($SingleMemberEnumArrAcceptDefClass::class$, $(UnitTest::class$->getField("SingleMemberEnumArrAcceptDefField"_s)), $SingleMemberEnumArrayDef::class$);
	checkUnequals($scalarTypesOverrideDefaultClass::class$, $(UnitTest::class$->getField("scalarTypesAcceptDefaultField"_s)), $ScalarTypesWithDefault::class$);
	checkUnequals($scalarTypesAcceptDefaultClass::class$, $(UnitTest::class$->getField("scalarTypesOverrideDefaultField"_s)), $ScalarTypesWithDefault::class$);
	checkUnequals($emptyArrayTypesClass::class$, $(UnitTest::class$->getField("singleElementArrayTypesField"_s)), $ArrayTypes::class$);
	checkUnequals($singleElementArrayTypesClass::class$, $(UnitTest::class$->getField("twoElementArrayTypesField"_s)), $ArrayTypes::class$);
	checkUnequals($twoElementArrayTypesClass::class$, $(UnitTest::class$->getField("singleElementArrayTypesField"_s)), $ArrayTypes::class$);
	checkUnequals($arrayTypesOverrideDefaultClass::class$, $(UnitTest::class$->getField("arrayTypesAcceptDefaultField"_s)), $ArrayTypesWithDefault::class$);
	checkUnequals($arrayTypesAcceptDefaultClass::class$, $(UnitTest::class$->getField("arrayTypesOverrideDefaultField"_s)), $ArrayTypesWithDefault::class$);
	checkUnequals($SingleMemberByteOvrdDefClass::class$, $(UnitTest::class$->getField("SingleMemberByteAcceptDefField"_s)), $SingleMemberByteWithDef::class$);
	checkUnequals($SingleMemberShortOvrdDefClass::class$, $(UnitTest::class$->getField("SingleMemberShortAcceptDefField"_s)), $SingleMemberShortWithDef::class$);
	checkUnequals($SingleMemberIntOvrdDefClass::class$, $(UnitTest::class$->getField("SingleMemberIntAcceptDefField"_s)), $SingleMemberIntWithDef::class$);
	checkUnequals($SingleMemberLongOvrdDefClass::class$, $(UnitTest::class$->getField("SingleMemberLongAcceptDefField"_s)), $SingleMemberLongWithDef::class$);
	checkUnequals($SingleMemberCharOvrdDefClass::class$, $(UnitTest::class$->getField("SingleMemberCharAcceptDefField"_s)), $SingleMemberCharWithDef::class$);
	checkUnequals($SingleMemberFloatOvrdDefClass::class$, $(UnitTest::class$->getField("SingleMemberFloatAcceptDefField"_s)), $SingleMemberFloatWithDef::class$);
	checkUnequals($SingleMemberDoubleOvrdDefClass::class$, $(UnitTest::class$->getField("SingleMemberDoubleAcceptDefField"_s)), $SingleMemberDoubleWithDef::class$);
	checkUnequals($SingleMemberBooleanOvrdDefClass::class$, $(UnitTest::class$->getField("SingleMemberBooleanAcceptDefField"_s)), $SingleMemberBooleanWithDef::class$);
	checkUnequals($SingleMemberStringOvrdDefClass::class$, $(UnitTest::class$->getField("SingleMemberStringAcceptDefField"_s)), $SingleMemberStringWithDef::class$);
	checkUnequals($SingleMemberClassOvrdDefClass::class$, $(UnitTest::class$->getField("SingleMemberClassAcceptDefField"_s)), $SingleMemberClassWithDef::class$);
	checkUnequals($SingleMemberEnumOvrdDefClass::class$, $(UnitTest::class$->getField("SingleMemberEnumAcceptDefField"_s)), $SingleMemberEnumWithDef::class$);
	checkUnequals($SingleMemberByteAcceptDefClass::class$, $(UnitTest::class$->getField("SingleMemberByteOvrdDefField"_s)), $SingleMemberByteWithDef::class$);
	checkUnequals($SingleMemberShortAcceptDefClass::class$, $(UnitTest::class$->getField("SingleMemberShortOvrdDefField"_s)), $SingleMemberShortWithDef::class$);
	checkUnequals($SingleMemberIntAcceptDefClass::class$, $(UnitTest::class$->getField("SingleMemberIntOvrdDefField"_s)), $SingleMemberIntWithDef::class$);
	checkUnequals($SingleMemberLongAcceptDefClass::class$, $(UnitTest::class$->getField("SingleMemberLongOvrdDefField"_s)), $SingleMemberLongWithDef::class$);
	checkUnequals($SingleMemberCharAcceptDefClass::class$, $(UnitTest::class$->getField("SingleMemberCharOvrdDefField"_s)), $SingleMemberCharWithDef::class$);
	checkUnequals($SingleMemberFloatAcceptDefClass::class$, $(UnitTest::class$->getField("SingleMemberFloatOvrdDefField"_s)), $SingleMemberFloatWithDef::class$);
	checkUnequals($SingleMemberDoubleAcceptDefClass::class$, $(UnitTest::class$->getField("SingleMemberDoubleOvrdDefField"_s)), $SingleMemberDoubleWithDef::class$);
	checkUnequals($SingleMemberBooleanAcceptDefClass::class$, $(UnitTest::class$->getField("SingleMemberBooleanOvrdDefField"_s)), $SingleMemberBooleanWithDef::class$);
	checkUnequals($SingleMemberStringAcceptDefClass::class$, $(UnitTest::class$->getField("SingleMemberStringOvrdDefField"_s)), $SingleMemberStringWithDef::class$);
	checkUnequals($SingleMemberClassAcceptDefClass::class$, $(UnitTest::class$->getField("SingleMemberClassOvrdDefField"_s)), $SingleMemberClassWithDef::class$);
	checkUnequals($SingleMemberEnumAcceptDefClass::class$, $(UnitTest::class$->getField("SingleMemberEnumOvrdDefField"_s)), $SingleMemberEnumWithDef::class$);
	checkUnequals($SingleMemberByteArrEmptyClass::class$, $(UnitTest::class$->getField("SingleMemberByteArrOneField"_s)), $SingleMemberByteArray::class$);
	checkUnequals($SingleMemberShortArrEmptyClass::class$, $(UnitTest::class$->getField("SingleMemberShortArrOneField"_s)), $SingleMemberShortArray::class$);
	checkUnequals($SingleMemberIntArrEmptyClass::class$, $(UnitTest::class$->getField("SingleMemberIntArrOneField"_s)), $SingleMemberIntArray::class$);
	checkUnequals($SingleMemberLongArrEmptyClass::class$, $(UnitTest::class$->getField("SingleMemberLongArrOneField"_s)), $SingleMemberLongArray::class$);
	checkUnequals($SingleMemberCharArrEmptyClass::class$, $(UnitTest::class$->getField("SingleMemberCharArrOneField"_s)), $SingleMemberCharArray::class$);
	checkUnequals($SingleMemberFloatArrEmptyClass::class$, $(UnitTest::class$->getField("SingleMemberFloatArrOneField"_s)), $SingleMemberFloatArray::class$);
	checkUnequals($SingleMemberDoubleArrEmptyClass::class$, $(UnitTest::class$->getField("SingleMemberDoubleArrOneField"_s)), $SingleMemberDoubleArray::class$);
	checkUnequals($SingleMemberBooleanArrEmptyClass::class$, $(UnitTest::class$->getField("SingleMemberBooleanArrOneField"_s)), $SingleMemberBooleanArray::class$);
	checkUnequals($SingleMemberStringArrEmptyClass::class$, $(UnitTest::class$->getField("SingleMemberStringArrOneField"_s)), $SingleMemberStringArray::class$);
	checkUnequals($SingleMemberClassArrEmptyClass::class$, $(UnitTest::class$->getField("SingleMemberClassArrOneField"_s)), $SingleMemberClassArray::class$);
	checkUnequals($SingleMemberEnumArrEmptyClass::class$, $(UnitTest::class$->getField("SingleMemberEnumArrOneField"_s)), $SingleMemberEnumArray::class$);
	checkUnequals($SingleMemberByteArrOneClass::class$, $(UnitTest::class$->getField("SingleMemberByteArrTwoField"_s)), $SingleMemberByteArray::class$);
	checkUnequals($SingleMemberShortArrOneClass::class$, $(UnitTest::class$->getField("SingleMemberShortArrTwoField"_s)), $SingleMemberShortArray::class$);
	checkUnequals($SingleMemberIntArrOneClass::class$, $(UnitTest::class$->getField("SingleMemberIntArrTwoField"_s)), $SingleMemberIntArray::class$);
	checkUnequals($SingleMemberLongArrOneClass::class$, $(UnitTest::class$->getField("SingleMemberLongArrTwoField"_s)), $SingleMemberLongArray::class$);
	checkUnequals($SingleMemberCharArrOneClass::class$, $(UnitTest::class$->getField("SingleMemberCharArrTwoField"_s)), $SingleMemberCharArray::class$);
	checkUnequals($SingleMemberFloatArrOneClass::class$, $(UnitTest::class$->getField("SingleMemberFloatArrTwoField"_s)), $SingleMemberFloatArray::class$);
	checkUnequals($SingleMemberDoubleArrOneClass::class$, $(UnitTest::class$->getField("SingleMemberDoubleArrTwoField"_s)), $SingleMemberDoubleArray::class$);
	checkUnequals($SingleMemberBooleanArrOneClass::class$, $(UnitTest::class$->getField("SingleMemberBooleanArrTwoField"_s)), $SingleMemberBooleanArray::class$);
	checkUnequals($SingleMemberStringArrOneClass::class$, $(UnitTest::class$->getField("SingleMemberStringArrTwoField"_s)), $SingleMemberStringArray::class$);
	checkUnequals($SingleMemberClassArrOneClass::class$, $(UnitTest::class$->getField("SingleMemberClassArrTwoField"_s)), $SingleMemberClassArray::class$);
	checkUnequals($SingleMemberEnumArrOneClass::class$, $(UnitTest::class$->getField("SingleMemberEnumArrTwoField"_s)), $SingleMemberEnumArray::class$);
	checkUnequals($SingleMemberByteArrTwoClass::class$, $(UnitTest::class$->getField("SingleMemberByteArrOneField"_s)), $SingleMemberByteArray::class$);
	checkUnequals($SingleMemberShortArrTwoClass::class$, $(UnitTest::class$->getField("SingleMemberShortArrOneField"_s)), $SingleMemberShortArray::class$);
	checkUnequals($SingleMemberIntArrTwoClass::class$, $(UnitTest::class$->getField("SingleMemberIntArrOneField"_s)), $SingleMemberIntArray::class$);
	checkUnequals($SingleMemberLongArrTwoClass::class$, $(UnitTest::class$->getField("SingleMemberLongArrOneField"_s)), $SingleMemberLongArray::class$);
	checkUnequals($SingleMemberCharArrTwoClass::class$, $(UnitTest::class$->getField("SingleMemberCharArrOneField"_s)), $SingleMemberCharArray::class$);
	checkUnequals($SingleMemberFloatArrTwoClass::class$, $(UnitTest::class$->getField("SingleMemberFloatArrOneField"_s)), $SingleMemberFloatArray::class$);
	checkUnequals($SingleMemberDoubleArrTwoClass::class$, $(UnitTest::class$->getField("SingleMemberDoubleArrOneField"_s)), $SingleMemberDoubleArray::class$);
	checkUnequals($SingleMemberBooleanArrTwoClass::class$, $(UnitTest::class$->getField("SingleMemberBooleanArrOneField"_s)), $SingleMemberBooleanArray::class$);
	checkUnequals($SingleMemberStringArrTwoClass::class$, $(UnitTest::class$->getField("SingleMemberStringArrOneField"_s)), $SingleMemberStringArray::class$);
	checkUnequals($SingleMemberClassArrTwoClass::class$, $(UnitTest::class$->getField("SingleMemberClassArrOneField"_s)), $SingleMemberClassArray::class$);
	checkUnequals($SingleMemberEnumArrTwoClass::class$, $(UnitTest::class$->getField("SingleMemberEnumArrOneField"_s)), $SingleMemberEnumArray::class$);
	checkUnequals($SingleMemberByteArrOvrdDefClass::class$, $(UnitTest::class$->getField("SingleMemberByteArrAcceptDefField"_s)), $SingleMemberByteArrayDef::class$);
	checkUnequals($SingleMemberShortArrOvrdDefClass::class$, $(UnitTest::class$->getField("SingleMemberShortArrAcceptDefField"_s)), $SingleMemberShortArrayDef::class$);
	checkUnequals($SingleMemberIntArrOvrdDefClass::class$, $(UnitTest::class$->getField("SingleMemberIntArrAcceptDefField"_s)), $SingleMemberIntArrayDef::class$);
	checkUnequals($SingleMemberLongArrOvrdDefClass::class$, $(UnitTest::class$->getField("SingleMemberLongArrAcceptDefField"_s)), $SingleMemberLongArrayDef::class$);
	checkUnequals($SingleMemberCharArrOvrdDefClass::class$, $(UnitTest::class$->getField("SingleMemberCharArrAcceptDefField"_s)), $SingleMemberCharArrayDef::class$);
	checkUnequals($SingleMemberFloatArrOvrdDefClass::class$, $(UnitTest::class$->getField("SingleMemberFloatArrAcceptDefField"_s)), $SingleMemberFloatArrayDef::class$);
	checkUnequals($SingleMemberDoubleArrOvrdDefClass::class$, $(UnitTest::class$->getField("SingleMemberDoubleArrAcceptDefField"_s)), $SingleMemberDoubleArrayDef::class$);
	checkUnequals($SingleMemberBooleanArrOvrdDefClass::class$, $(UnitTest::class$->getField("SingleMemberBooleanArrAcceptDefField"_s)), $SingleMemberBooleanArrayDef::class$);
	checkUnequals($SingleMemberStringArrOvrdDefClass::class$, $(UnitTest::class$->getField("SingleMemberStringArrAcceptDefField"_s)), $SingleMemberStringArrayDef::class$);
	checkUnequals($SingleMemberClassArrOvrdDefClass::class$, $(UnitTest::class$->getField("SingleMemberClassArrAcceptDefField"_s)), $SingleMemberClassArrayDef::class$);
	checkUnequals($SingleMemberEnumArrOvrdDefClass::class$, $(UnitTest::class$->getField("SingleMemberEnumArrAcceptDefField"_s)), $SingleMemberEnumArrayDef::class$);
	checkUnequals($SingleMemberByteArrAcceptDefClass::class$, $(UnitTest::class$->getField("SingleMemberByteArrOvrdDefField"_s)), $SingleMemberByteArrayDef::class$);
	checkUnequals($SingleMemberShortArrAcceptDefClass::class$, $(UnitTest::class$->getField("SingleMemberShortArrOvrdDefField"_s)), $SingleMemberShortArrayDef::class$);
	checkUnequals($SingleMemberIntArrAcceptDefClass::class$, $(UnitTest::class$->getField("SingleMemberIntArrOvrdDefField"_s)), $SingleMemberIntArrayDef::class$);
	checkUnequals($SingleMemberLongArrAcceptDefClass::class$, $(UnitTest::class$->getField("SingleMemberLongArrOvrdDefField"_s)), $SingleMemberLongArrayDef::class$);
	checkUnequals($SingleMemberCharArrAcceptDefClass::class$, $(UnitTest::class$->getField("SingleMemberCharArrOvrdDefField"_s)), $SingleMemberCharArrayDef::class$);
	checkUnequals($SingleMemberFloatArrAcceptDefClass::class$, $(UnitTest::class$->getField("SingleMemberFloatArrOvrdDefField"_s)), $SingleMemberFloatArrayDef::class$);
	checkUnequals($SingleMemberDoubleArrAcceptDefClass::class$, $(UnitTest::class$->getField("SingleMemberDoubleArrOvrdDefField"_s)), $SingleMemberDoubleArrayDef::class$);
	checkUnequals($SingleMemberBooleanArrAcceptDefClass::class$, $(UnitTest::class$->getField("SingleMemberBooleanArrOvrdDefField"_s)), $SingleMemberBooleanArrayDef::class$);
	checkUnequals($SingleMemberStringArrAcceptDefClass::class$, $(UnitTest::class$->getField("SingleMemberStringArrOvrdDefField"_s)), $SingleMemberStringArrayDef::class$);
	checkUnequals($SingleMemberClassArrAcceptDefClass::class$, $(UnitTest::class$->getField("SingleMemberClassArrOvrdDefField"_s)), $SingleMemberClassArrayDef::class$);
	checkUnequals($SingleMemberEnumArrAcceptDefClass::class$, $(UnitTest::class$->getField("SingleMemberEnumArrOvrdDefField"_s)), $SingleMemberEnumArrayDef::class$);
	checkSerialization($scalarTypesClass::class$, $ScalarTypes::class$);
	checkSerialization($scalarTypesOverrideDefaultClass::class$, $ScalarTypesWithDefault::class$);
	checkSerialization($scalarTypesAcceptDefaultClass::class$, $ScalarTypesWithDefault::class$);
	checkSerialization($emptyArrayTypesClass::class$, $ArrayTypes::class$);
	checkSerialization($singleElementArrayTypesClass::class$, $ArrayTypes::class$);
	checkSerialization($twoElementArrayTypesClass::class$, $ArrayTypes::class$);
	checkSerialization($arrayTypesOverrideDefaultClass::class$, $ArrayTypesWithDefault::class$);
	checkSerialization($arrayTypesAcceptDefaultClass::class$, $ArrayTypesWithDefault::class$);
	checkSerialization($markerClass::class$, $Marker::class$);
	checkSerialization($SingleMemberByteClass::class$, $SingleMemberByte::class$);
	checkSerialization($SingleMemberShortClass::class$, $SingleMemberShort::class$);
	checkSerialization($SingleMemberIntClass::class$, $SingleMemberInt::class$);
	checkSerialization($SingleMemberLongClass::class$, $SingleMemberLong::class$);
	checkSerialization($SingleMemberCharClass::class$, $SingleMemberChar::class$);
	checkSerialization($SingleMemberFloatClass::class$, $SingleMemberFloat::class$);
	checkSerialization($SingleMemberDoubleClass::class$, $SingleMemberDouble::class$);
	checkSerialization($SingleMemberBooleanClass::class$, $SingleMemberBoolean::class$);
	checkSerialization($SingleMemberStringClass::class$, $SingleMemberString::class$);
	checkSerialization($SingleMemberClassClass::class$, $SingleMemberClass::class$);
	checkSerialization($SingleMemberEnumClass::class$, $SingleMemberEnum::class$);
	checkSerialization($SingleMemberByteOvrdDefClass::class$, $SingleMemberByteWithDef::class$);
	checkSerialization($SingleMemberShortOvrdDefClass::class$, $SingleMemberShortWithDef::class$);
	checkSerialization($SingleMemberIntOvrdDefClass::class$, $SingleMemberIntWithDef::class$);
	checkSerialization($SingleMemberLongOvrdDefClass::class$, $SingleMemberLongWithDef::class$);
	checkSerialization($SingleMemberCharOvrdDefClass::class$, $SingleMemberCharWithDef::class$);
	checkSerialization($SingleMemberFloatOvrdDefClass::class$, $SingleMemberFloatWithDef::class$);
	checkSerialization($SingleMemberDoubleOvrdDefClass::class$, $SingleMemberDoubleWithDef::class$);
	checkSerialization($SingleMemberBooleanOvrdDefClass::class$, $SingleMemberBooleanWithDef::class$);
	checkSerialization($SingleMemberStringOvrdDefClass::class$, $SingleMemberStringWithDef::class$);
	checkSerialization($SingleMemberClassOvrdDefClass::class$, $SingleMemberClassWithDef::class$);
	checkSerialization($SingleMemberEnumOvrdDefClass::class$, $SingleMemberEnumWithDef::class$);
	checkSerialization($SingleMemberByteAcceptDefClass::class$, $SingleMemberByteWithDef::class$);
	checkSerialization($SingleMemberShortAcceptDefClass::class$, $SingleMemberShortWithDef::class$);
	checkSerialization($SingleMemberIntAcceptDefClass::class$, $SingleMemberIntWithDef::class$);
	checkSerialization($SingleMemberLongAcceptDefClass::class$, $SingleMemberLongWithDef::class$);
	checkSerialization($SingleMemberCharAcceptDefClass::class$, $SingleMemberCharWithDef::class$);
	checkSerialization($SingleMemberFloatAcceptDefClass::class$, $SingleMemberFloatWithDef::class$);
	checkSerialization($SingleMemberDoubleAcceptDefClass::class$, $SingleMemberDoubleWithDef::class$);
	checkSerialization($SingleMemberBooleanAcceptDefClass::class$, $SingleMemberBooleanWithDef::class$);
	checkSerialization($SingleMemberStringAcceptDefClass::class$, $SingleMemberStringWithDef::class$);
	checkSerialization($SingleMemberClassAcceptDefClass::class$, $SingleMemberClassWithDef::class$);
	checkSerialization($SingleMemberEnumAcceptDefClass::class$, $SingleMemberEnumWithDef::class$);
	checkSerialization($SingleMemberByteArrEmptyClass::class$, $SingleMemberByteArray::class$);
	checkSerialization($SingleMemberShortArrEmptyClass::class$, $SingleMemberShortArray::class$);
	checkSerialization($SingleMemberIntArrEmptyClass::class$, $SingleMemberIntArray::class$);
	checkSerialization($SingleMemberLongArrEmptyClass::class$, $SingleMemberLongArray::class$);
	checkSerialization($SingleMemberCharArrEmptyClass::class$, $SingleMemberCharArray::class$);
	checkSerialization($SingleMemberFloatArrEmptyClass::class$, $SingleMemberFloatArray::class$);
	checkSerialization($SingleMemberDoubleArrEmptyClass::class$, $SingleMemberDoubleArray::class$);
	checkSerialization($SingleMemberBooleanArrEmptyClass::class$, $SingleMemberBooleanArray::class$);
	checkSerialization($SingleMemberStringArrEmptyClass::class$, $SingleMemberStringArray::class$);
	checkSerialization($SingleMemberClassArrEmptyClass::class$, $SingleMemberClassArray::class$);
	checkSerialization($SingleMemberEnumArrEmptyClass::class$, $SingleMemberEnumArray::class$);
	checkSerialization($SingleMemberByteArrOneClass::class$, $SingleMemberByteArray::class$);
	checkSerialization($SingleMemberShortArrOneClass::class$, $SingleMemberShortArray::class$);
	checkSerialization($SingleMemberIntArrOneClass::class$, $SingleMemberIntArray::class$);
	checkSerialization($SingleMemberLongArrOneClass::class$, $SingleMemberLongArray::class$);
	checkSerialization($SingleMemberCharArrOneClass::class$, $SingleMemberCharArray::class$);
	checkSerialization($SingleMemberFloatArrOneClass::class$, $SingleMemberFloatArray::class$);
	checkSerialization($SingleMemberDoubleArrOneClass::class$, $SingleMemberDoubleArray::class$);
	checkSerialization($SingleMemberBooleanArrOneClass::class$, $SingleMemberBooleanArray::class$);
	checkSerialization($SingleMemberStringArrOneClass::class$, $SingleMemberStringArray::class$);
	checkSerialization($SingleMemberClassArrOneClass::class$, $SingleMemberClassArray::class$);
	checkSerialization($SingleMemberEnumArrOneClass::class$, $SingleMemberEnumArray::class$);
	checkSerialization($SingleMemberByteArrTwoClass::class$, $SingleMemberByteArray::class$);
	checkSerialization($SingleMemberShortArrTwoClass::class$, $SingleMemberShortArray::class$);
	checkSerialization($SingleMemberIntArrTwoClass::class$, $SingleMemberIntArray::class$);
	checkSerialization($SingleMemberLongArrTwoClass::class$, $SingleMemberLongArray::class$);
	checkSerialization($SingleMemberCharArrTwoClass::class$, $SingleMemberCharArray::class$);
	checkSerialization($SingleMemberFloatArrTwoClass::class$, $SingleMemberFloatArray::class$);
	checkSerialization($SingleMemberDoubleArrTwoClass::class$, $SingleMemberDoubleArray::class$);
	checkSerialization($SingleMemberBooleanArrTwoClass::class$, $SingleMemberBooleanArray::class$);
	checkSerialization($SingleMemberStringArrTwoClass::class$, $SingleMemberStringArray::class$);
	checkSerialization($SingleMemberClassArrTwoClass::class$, $SingleMemberClassArray::class$);
	checkSerialization($SingleMemberEnumArrTwoClass::class$, $SingleMemberEnumArray::class$);
	checkSerialization($SingleMemberByteArrOvrdDefClass::class$, $SingleMemberByteArrayDef::class$);
	checkSerialization($SingleMemberShortArrOvrdDefClass::class$, $SingleMemberShortArrayDef::class$);
	checkSerialization($SingleMemberIntArrOvrdDefClass::class$, $SingleMemberIntArrayDef::class$);
	checkSerialization($SingleMemberLongArrOvrdDefClass::class$, $SingleMemberLongArrayDef::class$);
	checkSerialization($SingleMemberCharArrOvrdDefClass::class$, $SingleMemberCharArrayDef::class$);
	checkSerialization($SingleMemberFloatArrOvrdDefClass::class$, $SingleMemberFloatArrayDef::class$);
	checkSerialization($SingleMemberDoubleArrOvrdDefClass::class$, $SingleMemberDoubleArrayDef::class$);
	checkSerialization($SingleMemberBooleanArrOvrdDefClass::class$, $SingleMemberBooleanArrayDef::class$);
	checkSerialization($SingleMemberStringArrOvrdDefClass::class$, $SingleMemberStringArrayDef::class$);
	checkSerialization($SingleMemberClassArrOvrdDefClass::class$, $SingleMemberClassArrayDef::class$);
	checkSerialization($SingleMemberEnumArrOvrdDefClass::class$, $SingleMemberEnumArrayDef::class$);
	checkSerialization($SingleMemberByteArrAcceptDefClass::class$, $SingleMemberByteArrayDef::class$);
	checkSerialization($SingleMemberShortArrAcceptDefClass::class$, $SingleMemberShortArrayDef::class$);
	checkSerialization($SingleMemberIntArrAcceptDefClass::class$, $SingleMemberIntArrayDef::class$);
	checkSerialization($SingleMemberLongArrAcceptDefClass::class$, $SingleMemberLongArrayDef::class$);
	checkSerialization($SingleMemberCharArrAcceptDefClass::class$, $SingleMemberCharArrayDef::class$);
	checkSerialization($SingleMemberFloatArrAcceptDefClass::class$, $SingleMemberFloatArrayDef::class$);
	checkSerialization($SingleMemberDoubleArrAcceptDefClass::class$, $SingleMemberDoubleArrayDef::class$);
	checkSerialization($SingleMemberBooleanArrAcceptDefClass::class$, $SingleMemberBooleanArrayDef::class$);
	checkSerialization($SingleMemberStringArrAcceptDefClass::class$, $SingleMemberStringArrayDef::class$);
	checkSerialization($SingleMemberClassArrAcceptDefClass::class$, $SingleMemberClassArrayDef::class$);
	checkSerialization($SingleMemberEnumArrAcceptDefClass::class$, $SingleMemberEnumArrayDef::class$);
	$load($Grandpa);
	checkInheritence($Grandpa::class$, true, true);
	$load($Dad);
	checkInheritence($Dad::class$, true, false);
	$load($Son);
	checkInheritence($Son::class$, true, true);
	checkDeclaredAnnotations($Grandpa::class$, true, true);
	checkDeclaredAnnotations($Dad::class$, false, false);
	checkDeclaredAnnotations($Son::class$, false, true);
	$nc($System::out)->println($$str({"\n"_s, $$str(UnitTest::numTests), " tests completed"_s}));
	if (UnitTest::failCount != 0) {
		$throwNew($Exception, $$str({"Failure count: "_s, $$str(UnitTest::failCount)}));
	} else {
		$System::out->println("Success."_s);
	}
}

void UnitTest::fail($String* test) {
	$init(UnitTest);
	$nc($System::out)->println($$str({"Failure: "_s, test}));
	++UnitTest::failCount;
}

void UnitTest::checkScalarTypes($AnnotatedElement* e) {
	$init(UnitTest);
	$useLocalObjectStack();
	try {
		$load($ScalarTypes);
		checkScalarTypes($$cast($ScalarTypes, $nc(e)->getAnnotation($ScalarTypes::class$)), e);
	} catch ($Throwable& t) {
		fail($$str({"ScalarTypes "_s, e, ": "_s, t}));
		t->printStackTrace();
	}
}

void UnitTest::checkScalarTypes($ScalarTypes* st, $AnnotatedElement* e) {
	$init(UnitTest);
	$useLocalObjectStack();
	++UnitTest::numTests;
	bool var$11 = $nc(st)->b() == 1;
	bool var$10 = var$11 && st->s() == 2;
	bool var$9 = var$10 && st->i() == 3;
	bool var$8 = var$9 && st->l() == 4;
	bool var$7 = var$8 && st->c() == u'5';
	bool var$6 = var$7 && st->f() == 6.0f;
	bool var$5 = var$6 && st->d() == 7.0;
	bool var$4 = var$5 && st->bool$() == true;
	bool var$3 = var$4 && $$nc(st->str())->equals("custom"_s);
	$load($Map);
	bool var$2 = var$3 && st->cls() == $Map::class$;
	$init($Stooge);
	bool var$1 = var$2 && st->e() == $Stooge::MOE;
	bool var$0 = var$1 && $$nc(st->a())->x() == 1;
	if (!(var$0 && $$nc(st->a())->y() == 2)) {
		fail($$str({"ScalarTypes"_s, e}));
	}
}

void UnitTest::checkScalarTypesOverrideDefault($AnnotatedElement* e) {
	$init(UnitTest);
	$useLocalObjectStack();
	try {
		$load($ScalarTypesWithDefault);
		checkScalarTypesOverrideDefault($$cast($ScalarTypesWithDefault, $nc(e)->getAnnotation($ScalarTypesWithDefault::class$)), e);
	} catch ($Throwable& t) {
		fail($$str({"ScalarTypesOverrideDefaults"_s, e, ": "_s, t}));
	}
}

void UnitTest::checkScalarTypesOverrideDefault($ScalarTypesWithDefault* st, $AnnotatedElement* e) {
	$init(UnitTest);
	$useLocalObjectStack();
	++UnitTest::numTests;
	bool var$9 = $nc(st)->b() == 1;
	bool var$8 = var$9 && st->s() == 2;
	bool var$7 = var$8 && st->i() == 3;
	bool var$6 = var$7 && st->l() == 4;
	bool var$5 = var$6 && st->c() == u'5';
	bool var$4 = var$5 && st->f() == 6.0f;
	bool var$3 = var$4 && st->d() == 7.0;
	bool var$2 = var$3 && st->bool$() == true;
	bool var$1 = var$2 && $$nc(st->str())->equals("custom"_s);
	$load($Map);
	bool var$0 = var$1 && st->cls() == $Map::class$;
	$init($Stooge);
	if (!(var$0 && st->e() == $Stooge::MOE)) {
		fail($$str({"ScalarTypesOverrideDefaults"_s, e}));
	}
}

void UnitTest::checkScalarTypesAcceptDefault($AnnotatedElement* e) {
	$init(UnitTest);
	$useLocalObjectStack();
	try {
		$load($ScalarTypesWithDefault);
		checkScalarTypesAcceptDefault($$cast($ScalarTypesWithDefault, $nc(e)->getAnnotation($ScalarTypesWithDefault::class$)), e);
	} catch ($Throwable& t) {
		fail($$str({"ScalarTypesAcceptDefaults"_s, e, ": "_s, t}));
	}
}

void UnitTest::checkScalarTypesAcceptDefault($ScalarTypesWithDefault* st, $AnnotatedElement* e) {
	$init(UnitTest);
	$useLocalObjectStack();
	++UnitTest::numTests;
	bool var$11 = $nc(st)->b() == 11;
	bool var$10 = var$11 && st->s() == 12;
	bool var$9 = var$10 && st->i() == 13;
	bool var$8 = var$9 && st->l() == 14;
	bool var$7 = var$8 && st->c() == u'V';
	bool var$6 = var$7 && st->f() == 16.0f;
	bool var$5 = var$6 && st->d() == 17.0;
	bool var$4 = var$5 && st->bool$() == false;
	bool var$3 = var$4 && $$nc(st->str())->equals("default"_s);
	bool var$2 = var$3 && st->cls() == $Class::class$;
	$init($Stooge);
	bool var$1 = var$2 && st->e() == $Stooge::LARRY;
	bool var$0 = var$1 && $$nc(st->a())->x() == 11;
	if (!(var$0 && $$nc(st->a())->y() == 12)) {
		fail($$str({"ScalarTypesAcceptDefaults"_s, e}));
	}
}

void UnitTest::checkArrayTypes0($AnnotatedElement* e) {
	$init(UnitTest);
	$useLocalObjectStack();
	try {
		$load($ArrayTypes);
		checkArrayTypes0($$cast($ArrayTypes, $nc(e)->getAnnotation($ArrayTypes::class$)), e);
	} catch ($Throwable& t) {
		fail($$str({"ArrayTypes(Empty)"_s, e, ": "_s, t}));
	}
}

void UnitTest::checkArrayTypes0($ArrayTypes* at, $AnnotatedElement* e) {
	$init(UnitTest);
	$useLocalObjectStack();
	++UnitTest::numTests;
	bool var$10 = $nc($($nc(at)->b()))->length == 0;
	bool var$9 = var$10 && $nc($(at->s()))->length == 0;
	bool var$8 = var$9 && $nc($(at->i()))->length == 0;
	bool var$7 = var$8 && $nc($(at->l()))->length == 0;
	bool var$6 = var$7 && $nc($(at->c()))->length == 0;
	bool var$5 = var$6 && $nc($(at->f()))->length == 0;
	bool var$4 = var$5 && $nc($(at->d()))->length == 0;
	bool var$3 = var$4 && $nc($(at->bool$()))->length == 0;
	bool var$2 = var$3 && $nc($(at->str()))->length == 0;
	bool var$1 = var$2 && $nc($(at->cls()))->length == 0;
	bool var$0 = var$1 && $nc($(at->e()))->length == 0;
	if (!(var$0 && $nc($(at->a()))->length == 0)) {
		fail($$str({"ArrayTypes(Empty)"_s, e}));
	}
}

void UnitTest::checkArrayTypes1($AnnotatedElement* e) {
	$init(UnitTest);
	$useLocalObjectStack();
	try {
		$load($ArrayTypes);
		checkArrayTypes1($$cast($ArrayTypes, $nc(e)->getAnnotation($ArrayTypes::class$)), e);
	} catch ($Throwable& t) {
		fail($$str({"ArrayTypes(One element)"_s, e, ": "_s, t}));
	}
}

void UnitTest::checkArrayTypes1($ArrayTypes* at, $AnnotatedElement* e) {
	$init(UnitTest);
	$useLocalObjectStack();
	++UnitTest::numTests;
	bool var$22 = $nc($($nc(at)->b()))->get(0) == 1;
	bool var$21 = var$22 && $nc($(at->s()))->get(0) == 2;
	bool var$20 = var$21 && $nc($(at->i()))->get(0) == 3;
	bool var$19 = var$20 && $nc($(at->l()))->get(0) == 4;
	bool var$18 = var$19 && $nc($(at->c()))->get(0) == u'5';
	bool var$17 = var$18 && $nc($(at->f()))->get(0) == 6.0f;
	bool var$16 = var$17 && $nc($(at->d()))->get(0) == 7.0;
	bool var$15 = var$16 && $nc($(at->bool$()))->get(0) == true;
	bool var$14 = var$15 && $nc($nc($(at->str()))->get(0))->equals("custom"_s);
	$load($Map);
	bool var$13 = var$14 && $nc($(at->cls()))->get(0) == $Map::class$;
	$init($Stooge);
	bool var$12 = var$13 && $nc($(at->e()))->get(0) == $Stooge::MOE;
	bool var$11 = var$12 && $nc($nc($(at->a()))->get(0))->x() == 1;
	bool var$10 = var$11 && $nc($nc($(at->a()))->get(0))->y() == 2;
	bool var$9 = var$10 && $nc($(at->b()))->length == 1;
	bool var$8 = var$9 && $nc($(at->s()))->length == 1;
	bool var$7 = var$8 && $nc($(at->i()))->length == 1;
	bool var$6 = var$7 && $nc($(at->l()))->length == 1;
	bool var$5 = var$6 && $nc($(at->c()))->length == 1;
	bool var$4 = var$5 && $nc($(at->d()))->length == 1;
	bool var$3 = var$4 && $nc($(at->bool$()))->length == 1;
	bool var$2 = var$3 && $nc($(at->str()))->length == 1;
	bool var$1 = var$2 && $nc($(at->cls()))->length == 1;
	bool var$0 = var$1 && $nc($(at->cls()))->length == 1;
	if (!(var$0 && $nc($(at->a()))->length == 1)) {
		fail($$str({"ArrayTypes(One element)"_s, e}));
	}
}

void UnitTest::checkArrayTypes2($AnnotatedElement* e) {
	$init(UnitTest);
	$useLocalObjectStack();
	try {
		$load($ArrayTypes);
		checkArrayTypes2($$cast($ArrayTypes, $nc(e)->getAnnotation($ArrayTypes::class$)), e);
	} catch ($Throwable& t) {
		fail($$str({"ArrayTypes(Two element)"_s, e, ": "_s, t}));
	}
}

void UnitTest::checkArrayTypes2($ArrayTypes* at, $AnnotatedElement* e) {
	$init(UnitTest);
	$useLocalObjectStack();
	++UnitTest::numTests;
	bool var$35 = $nc($($nc(at)->b()))->get(0) == 1;
	bool var$34 = var$35 && $nc($(at->b()))->get(1) == 2;
	bool var$33 = var$34 && $nc($(at->s()))->get(0) == 2;
	bool var$32 = var$33 && $nc($(at->s()))->get(1) == 3;
	bool var$31 = var$32 && $nc($(at->i()))->get(0) == 3;
	bool var$30 = var$31 && $nc($(at->i()))->get(1) == 4;
	bool var$29 = var$30 && $nc($(at->l()))->get(0) == 4;
	bool var$28 = var$29 && $nc($(at->l()))->get(1) == 5;
	bool var$27 = var$28 && $nc($(at->c()))->get(0) == u'5';
	bool var$26 = var$27 && $nc($(at->c()))->get(1) == u'6';
	bool var$25 = var$26 && $nc($(at->f()))->get(0) == 6.0f;
	bool var$24 = var$25 && $nc($(at->f()))->get(1) == 7.0f;
	bool var$23 = var$24 && $nc($(at->d()))->get(0) == 7.0;
	bool var$22 = var$23 && $nc($(at->d()))->get(1) == 8.0;
	bool var$21 = var$22 && $nc($(at->bool$()))->get(0) == true;
	bool var$20 = var$21 && $nc($(at->bool$()))->get(1) == false;
	bool var$19 = var$20 && $nc($nc($(at->str()))->get(0))->equals("custom"_s);
	bool var$18 = var$19 && $nc($nc($(at->str()))->get(1))->equals("paint"_s);
	$load($Map);
	bool var$17 = var$18 && $nc($(at->cls()))->get(0) == $Map::class$;
	$load($Set);
	bool var$16 = var$17 && $nc($(at->cls()))->get(1) == $Set::class$;
	$init($Stooge);
	bool var$15 = var$16 && $nc($(at->e()))->get(0) == $Stooge::MOE;
	bool var$14 = var$15 && $nc($(at->e()))->get(1) == $Stooge::CURLY;
	bool var$13 = var$14 && $nc($nc($(at->a()))->get(0))->x() == 1;
	bool var$12 = var$13 && $nc($nc($(at->a()))->get(0))->y() == 2;
	bool var$11 = var$12 && $nc($nc($(at->a()))->get(1))->x() == 3;
	bool var$10 = var$11 && $nc($nc($(at->a()))->get(1))->y() == 4;
	bool var$9 = var$10 && $nc($(at->b()))->length == 2;
	bool var$8 = var$9 && $nc($(at->s()))->length == 2;
	bool var$7 = var$8 && $nc($(at->i()))->length == 2;
	bool var$6 = var$7 && $nc($(at->l()))->length == 2;
	bool var$5 = var$6 && $nc($(at->c()))->length == 2;
	bool var$4 = var$5 && $nc($(at->d()))->length == 2;
	bool var$3 = var$4 && $nc($(at->bool$()))->length == 2;
	bool var$2 = var$3 && $nc($(at->str()))->length == 2;
	bool var$1 = var$2 && $nc($(at->cls()))->length == 2;
	bool var$0 = var$1 && $nc($(at->cls()))->length == 2;
	if (!(var$0 && $nc($(at->a()))->length == 2)) {
		fail($$str({"ArrayTypes(Two element)"_s, e}));
	}
}

void UnitTest::checkArrayTypesOverrideDefault($AnnotatedElement* e) {
	$init(UnitTest);
	$useLocalObjectStack();
	try {
		$load($ArrayTypesWithDefault);
		checkArrayTypesOverrideDefault($$cast($ArrayTypesWithDefault, $nc(e)->getAnnotation($ArrayTypesWithDefault::class$)), e);
	} catch ($Throwable& t) {
		fail($$str({"ArrayTypesOverrideDefault"_s, e, ": "_s, t}));
	}
}

void UnitTest::checkArrayTypesOverrideDefault($ArrayTypesWithDefault* at, $AnnotatedElement* e) {
	$init(UnitTest);
	$useLocalObjectStack();
	++UnitTest::numTests;
	bool var$21 = $nc($($nc(at)->b()))->get(0) == 1;
	bool var$20 = var$21 && $nc($(at->s()))->get(0) == 2;
	bool var$19 = var$20 && $nc($(at->i()))->get(0) == 3;
	bool var$18 = var$19 && $nc($(at->l()))->get(0) == 4;
	bool var$17 = var$18 && $nc($(at->c()))->get(0) == u'5';
	bool var$16 = var$17 && $nc($(at->f()))->get(0) == 6.0f;
	bool var$15 = var$16 && $nc($(at->d()))->get(0) == 7.0;
	bool var$14 = var$15 && $nc($(at->bool$()))->get(0) == true;
	bool var$13 = var$14 && $nc($nc($(at->str()))->get(0))->equals("custom"_s);
	$load($Map);
	bool var$12 = var$13 && $nc($(at->cls()))->get(0) == $Map::class$;
	$init($Stooge);
	bool var$11 = var$12 && $nc($(at->e()))->get(0) == $Stooge::MOE;
	bool var$10 = var$11 && $nc($nc($(at->a()))->get(0))->x() == 1;
	bool var$9 = var$10 && $nc($nc($(at->a()))->get(0))->y() == 2;
	bool var$8 = var$9 && $nc($(at->b()))->length == 1;
	bool var$7 = var$8 && $nc($(at->s()))->length == 1;
	bool var$6 = var$7 && $nc($(at->i()))->length == 1;
	bool var$5 = var$6 && $nc($(at->l()))->length == 1;
	bool var$4 = var$5 && $nc($(at->c()))->length == 1;
	bool var$3 = var$4 && $nc($(at->d()))->length == 1;
	bool var$2 = var$3 && $nc($(at->bool$()))->length == 1;
	bool var$1 = var$2 && $nc($(at->str()))->length == 1;
	bool var$0 = var$1 && $nc($(at->cls()))->length == 1;
	if (!(var$0 && $nc($(at->cls()))->length == 1)) {
		fail($$str({"ArrayTypesOverrideDefault"_s, e}));
	}
}

void UnitTest::checkArrayTypesAcceptDefault($AnnotatedElement* e) {
	$init(UnitTest);
	$useLocalObjectStack();
	try {
		$load($ArrayTypesWithDefault);
		checkArrayTypesAcceptDefault($$cast($ArrayTypesWithDefault, $nc(e)->getAnnotation($ArrayTypesWithDefault::class$)), e);
	} catch ($Throwable& t) {
		fail($$str({"ArrayTypesAcceptDefault"_s, e, ": "_s, t}));
	}
}

void UnitTest::checkArrayTypesAcceptDefault($ArrayTypesWithDefault* at, $AnnotatedElement* e) {
	$init(UnitTest);
	$useLocalObjectStack();
	++UnitTest::numTests;
	bool var$21 = $nc($($nc(at)->b()))->get(0) == 11;
	bool var$20 = var$21 && $nc($(at->s()))->get(0) == 12;
	bool var$19 = var$20 && $nc($(at->i()))->get(0) == 13;
	bool var$18 = var$19 && $nc($(at->l()))->get(0) == 14;
	bool var$17 = var$18 && $nc($(at->c()))->get(0) == u'V';
	bool var$16 = var$17 && $nc($(at->f()))->get(0) == 16.0f;
	bool var$15 = var$16 && $nc($(at->d()))->get(0) == 17.0;
	bool var$14 = var$15 && $nc($(at->bool$()))->get(0) == false;
	bool var$13 = var$14 && $nc($nc($(at->str()))->get(0))->equals("default"_s);
	bool var$12 = var$13 && $nc($(at->cls()))->get(0) == $Class::class$;
	$init($Stooge);
	bool var$11 = var$12 && $nc($(at->e()))->get(0) == $Stooge::LARRY;
	bool var$10 = var$11 && $nc($nc($(at->a()))->get(0))->x() == 11;
	bool var$9 = var$10 && $nc($nc($(at->a()))->get(0))->y() == 12;
	bool var$8 = var$9 && $nc($(at->b()))->length == 1;
	bool var$7 = var$8 && $nc($(at->s()))->length == 1;
	bool var$6 = var$7 && $nc($(at->i()))->length == 1;
	bool var$5 = var$6 && $nc($(at->l()))->length == 1;
	bool var$4 = var$5 && $nc($(at->c()))->length == 1;
	bool var$3 = var$4 && $nc($(at->d()))->length == 1;
	bool var$2 = var$3 && $nc($(at->bool$()))->length == 1;
	bool var$1 = var$2 && $nc($(at->str()))->length == 1;
	bool var$0 = var$1 && $nc($(at->cls()))->length == 1;
	if (!(var$0 && $nc($(at->cls()))->length == 1)) {
		fail($$str({"ArrayTypesAcceptDefault"_s, e}));
	}
}

void UnitTest::checkScalarTypesParam($Method* m) {
	$init(UnitTest);
	$useLocalObjectStack();
	try {
		checkScalarTypes($cast($ScalarTypes, $nc($nc($($nc(m)->getParameterAnnotations()))->get(0))->get(0)), $cast($AccessibleObject, m));
	} catch ($Throwable& t) {
		fail($$str({"ScalarTypes"_s, m, ": "_s, t}));
	}
}

void UnitTest::checkScalarTypesOverrideDefaultParam($Method* m) {
	$init(UnitTest);
	$useLocalObjectStack();
	try {
		checkScalarTypesOverrideDefault($cast($ScalarTypesWithDefault, $nc($nc($($nc(m)->getParameterAnnotations()))->get(0))->get(0)), $cast($AccessibleObject, m));
	} catch ($Throwable& t) {
		fail($$str({"ScalarTypesOverrideDefaults"_s, m, ": "_s, t}));
	}
}

void UnitTest::checkScalarTypesAcceptDefaultParam($Method* m) {
	$init(UnitTest);
	$useLocalObjectStack();
	try {
		checkScalarTypesAcceptDefault($cast($ScalarTypesWithDefault, $nc($nc($($nc(m)->getParameterAnnotations()))->get(0))->get(0)), $cast($AccessibleObject, m));
	} catch ($Throwable& t) {
		fail($$str({"ScalarTypesAcceptDefaults"_s, m, ": "_s, t}));
	}
}

void UnitTest::checkArrayTypes0Param($Method* m) {
	$init(UnitTest);
	$useLocalObjectStack();
	try {
		checkArrayTypes0($cast($ArrayTypes, $nc($nc($($nc(m)->getParameterAnnotations()))->get(0))->get(0)), $cast($AccessibleObject, m));
	} catch ($Throwable& t) {
		fail($$str({"ArrayTypes(Empty)"_s, m, ": "_s, t}));
	}
}

void UnitTest::checkArrayTypes1Param($Method* m) {
	$init(UnitTest);
	$useLocalObjectStack();
	try {
		checkArrayTypes1($cast($ArrayTypes, $nc($nc($($nc(m)->getParameterAnnotations()))->get(0))->get(0)), $cast($AccessibleObject, m));
	} catch ($Throwable& t) {
		fail($$str({"ArrayTypes(One Element)"_s, m, ": "_s, t}));
	}
}

void UnitTest::checkArrayTypes2Param($Method* m) {
	$init(UnitTest);
	$useLocalObjectStack();
	try {
		checkArrayTypes2($cast($ArrayTypes, $nc($nc($($nc(m)->getParameterAnnotations()))->get(0))->get(0)), $cast($AccessibleObject, m));
	} catch ($Throwable& t) {
		fail($$str({"ArrayTypes(Two Elements)"_s, m, ": "_s, t}));
	}
}

void UnitTest::checkArrayTypesOverrideDefaultParam($Method* m) {
	$init(UnitTest);
	$useLocalObjectStack();
	try {
		checkArrayTypesOverrideDefault($cast($ArrayTypesWithDefault, $nc($nc($($nc(m)->getParameterAnnotations()))->get(0))->get(0)), $cast($AccessibleObject, m));
	} catch ($Throwable& t) {
		fail($$str({"ArrayTypesOverrideDefault"_s, m, ": "_s, t}));
	}
}

void UnitTest::checkArrayTypesAcceptDefaultParam($Method* m) {
	$init(UnitTest);
	$useLocalObjectStack();
	try {
		checkArrayTypesAcceptDefault($cast($ArrayTypesWithDefault, $nc($nc($($nc(m)->getParameterAnnotations()))->get(0))->get(0)), $cast($AccessibleObject, m));
	} catch ($Throwable& t) {
		fail($$str({"ArrayTypesAcceptDefault"_s, m, ": "_s, t}));
	}
}

void UnitTest::checkMarkerParam($Method* m) {
	$init(UnitTest);
	$useLocalObjectStack();
	try {
		checkMarker($cast($Marker, $nc($nc($($nc(m)->getParameterAnnotations()))->get(0))->get(0)), $cast($AccessibleObject, m));
	} catch ($Throwable& t) {
		fail($$str({"Marker"_s, m, ": "_s, t}));
	}
}

void UnitTest::checkSingleMemberByteParam($Method* m) {
	$init(UnitTest);
	$useLocalObjectStack();
	try {
		checkSingleMemberByte($cast($SingleMemberByte, $nc($nc($($nc(m)->getParameterAnnotations()))->get(0))->get(0)), $cast($AccessibleObject, m));
	} catch ($Throwable& t) {
		fail($$str({"SingleMemberByte"_s, m, ": "_s, t}));
	}
}

void UnitTest::checkSingleMemberShortParam($Method* m) {
	$init(UnitTest);
	$useLocalObjectStack();
	try {
		checkSingleMemberShort($cast($SingleMemberShort, $nc($nc($($nc(m)->getParameterAnnotations()))->get(0))->get(0)), $cast($AccessibleObject, m));
	} catch ($Throwable& t) {
		fail($$str({"SingleMemberShort"_s, m, ": "_s, t}));
	}
}

void UnitTest::checkSingleMemberIntParam($Method* m) {
	$init(UnitTest);
	$useLocalObjectStack();
	try {
		checkSingleMemberInt($cast($SingleMemberInt, $nc($nc($($nc(m)->getParameterAnnotations()))->get(0))->get(0)), $cast($AccessibleObject, m));
	} catch ($Throwable& t) {
		fail($$str({"SingleMemberInt"_s, m, ": "_s, t}));
	}
}

void UnitTest::checkSingleMemberLongParam($Method* m) {
	$init(UnitTest);
	$useLocalObjectStack();
	try {
		checkSingleMemberLong($cast($SingleMemberLong, $nc($nc($($nc(m)->getParameterAnnotations()))->get(0))->get(0)), $cast($AccessibleObject, m));
	} catch ($Throwable& t) {
		fail($$str({"SingleMemberLong"_s, m, ": "_s, t}));
	}
}

void UnitTest::checkSingleMemberCharParam($Method* m) {
	$init(UnitTest);
	$useLocalObjectStack();
	try {
		checkSingleMemberChar($cast($SingleMemberChar, $nc($nc($($nc(m)->getParameterAnnotations()))->get(0))->get(0)), $cast($AccessibleObject, m));
	} catch ($Throwable& t) {
		fail($$str({"SingleMemberChar"_s, m, ": "_s, t}));
	}
}

void UnitTest::checkSingleMemberFloatParam($Method* m) {
	$init(UnitTest);
	$useLocalObjectStack();
	try {
		checkSingleMemberFloat($cast($SingleMemberFloat, $nc($nc($($nc(m)->getParameterAnnotations()))->get(0))->get(0)), $cast($AccessibleObject, m));
	} catch ($Throwable& t) {
		fail($$str({"SingleMemberFloat"_s, m, ": "_s, t}));
	}
}

void UnitTest::checkSingleMemberDoubleParam($Method* m) {
	$init(UnitTest);
	$useLocalObjectStack();
	try {
		checkSingleMemberDouble($cast($SingleMemberDouble, $nc($nc($($nc(m)->getParameterAnnotations()))->get(0))->get(0)), $cast($AccessibleObject, m));
	} catch ($Throwable& t) {
		fail($$str({"SingleMemberDouble"_s, m, ": "_s, t}));
	}
}

void UnitTest::checkSingleMemberBooleanParam($Method* m) {
	$init(UnitTest);
	$useLocalObjectStack();
	try {
		checkSingleMemberBoolean($cast($SingleMemberBoolean, $nc($nc($($nc(m)->getParameterAnnotations()))->get(0))->get(0)), $cast($AccessibleObject, m));
	} catch ($Throwable& t) {
		fail($$str({"SingleMemberBoolean"_s, m, ": "_s, t}));
	}
}

void UnitTest::checkSingleMemberStringParam($Method* m) {
	$init(UnitTest);
	$useLocalObjectStack();
	try {
		checkSingleMemberString($cast($SingleMemberString, $nc($nc($($nc(m)->getParameterAnnotations()))->get(0))->get(0)), $cast($AccessibleObject, m));
	} catch ($Throwable& t) {
		fail($$str({"SingleMemberString"_s, m, ": "_s, t}));
	}
}

void UnitTest::checkSingleMemberClassParam($Method* m) {
	$init(UnitTest);
	$useLocalObjectStack();
	try {
		checkSingleMemberClass($cast($SingleMemberClass, $nc($nc($($nc(m)->getParameterAnnotations()))->get(0))->get(0)), $cast($AccessibleObject, m));
	} catch ($Throwable& t) {
		fail($$str({"SingleMemberClass"_s, m, ": "_s, t}));
	}
}

void UnitTest::checkSingleMemberEnumParam($Method* m) {
	$init(UnitTest);
	$useLocalObjectStack();
	try {
		checkSingleMemberEnum($cast($SingleMemberEnum, $nc($nc($($nc(m)->getParameterAnnotations()))->get(0))->get(0)), $cast($AccessibleObject, m));
	} catch ($Throwable& t) {
		fail($$str({"SingleMemberEnum"_s, m, ": "_s, t}));
	}
}

void UnitTest::checkSingleMemberByteOvrdDefParam($Method* m) {
	$init(UnitTest);
	$useLocalObjectStack();
	try {
		checkSingleMemberByteOvrdDef($cast($SingleMemberByteWithDef, $nc($nc($($nc(m)->getParameterAnnotations()))->get(0))->get(0)), $cast($AccessibleObject, m));
	} catch ($Throwable& t) {
		fail($$str({"SingleMemberByteOvrdDef"_s, m, ": "_s, t}));
	}
}

void UnitTest::checkSingleMemberShortOvrdDefParam($Method* m) {
	$init(UnitTest);
	$useLocalObjectStack();
	try {
		checkSingleMemberShortOvrdDef($cast($SingleMemberShortWithDef, $nc($nc($($nc(m)->getParameterAnnotations()))->get(0))->get(0)), $cast($AccessibleObject, m));
	} catch ($Throwable& t) {
		fail($$str({"SingleMemberShortOvrdDef"_s, m, ": "_s, t}));
	}
}

void UnitTest::checkSingleMemberIntOvrdDefParam($Method* m) {
	$init(UnitTest);
	$useLocalObjectStack();
	try {
		checkSingleMemberIntOvrdDef($cast($SingleMemberIntWithDef, $nc($nc($($nc(m)->getParameterAnnotations()))->get(0))->get(0)), $cast($AccessibleObject, m));
	} catch ($Throwable& t) {
		fail($$str({"SingleMemberIntOvrdDef"_s, m, ": "_s, t}));
	}
}

void UnitTest::checkSingleMemberLongOvrdDefParam($Method* m) {
	$init(UnitTest);
	$useLocalObjectStack();
	try {
		checkSingleMemberLongOvrdDef($cast($SingleMemberLongWithDef, $nc($nc($($nc(m)->getParameterAnnotations()))->get(0))->get(0)), $cast($AccessibleObject, m));
	} catch ($Throwable& t) {
		fail($$str({"SingleMemberLongOvrdDef"_s, m, ": "_s, t}));
	}
}

void UnitTest::checkSingleMemberCharOvrdDefParam($Method* m) {
	$init(UnitTest);
	$useLocalObjectStack();
	try {
		checkSingleMemberCharOvrdDef($cast($SingleMemberCharWithDef, $nc($nc($($nc(m)->getParameterAnnotations()))->get(0))->get(0)), $cast($AccessibleObject, m));
	} catch ($Throwable& t) {
		fail($$str({"SingleMemberCharOvrdDef"_s, m, ": "_s, t}));
	}
}

void UnitTest::checkSingleMemberFloatOvrdDefParam($Method* m) {
	$init(UnitTest);
	$useLocalObjectStack();
	try {
		checkSingleMemberFloatOvrdDef($cast($SingleMemberFloatWithDef, $nc($nc($($nc(m)->getParameterAnnotations()))->get(0))->get(0)), $cast($AccessibleObject, m));
	} catch ($Throwable& t) {
		fail($$str({"SingleMemberFloatOvrdDef"_s, m, ": "_s, t}));
	}
}

void UnitTest::checkSingleMemberDoubleOvrdDefParam($Method* m) {
	$init(UnitTest);
	$useLocalObjectStack();
	try {
		checkSingleMemberDoubleOvrdDef($cast($SingleMemberDoubleWithDef, $nc($nc($($nc(m)->getParameterAnnotations()))->get(0))->get(0)), $cast($AccessibleObject, m));
	} catch ($Throwable& t) {
		fail($$str({"SingleMemberDoubleOvrdDef"_s, m, ": "_s, t}));
	}
}

void UnitTest::checkSingleMemberBooleanOvrdDefParam($Method* m) {
	$init(UnitTest);
	$useLocalObjectStack();
	try {
		checkSingleMemberBooleanOvrdDef($cast($SingleMemberBooleanWithDef, $nc($nc($($nc(m)->getParameterAnnotations()))->get(0))->get(0)), $cast($AccessibleObject, m));
	} catch ($Throwable& t) {
		fail($$str({"SingleMemberBooleanOvrdDef"_s, m, ": "_s, t}));
	}
}

void UnitTest::checkSingleMemberStringOvrdDefParam($Method* m) {
	$init(UnitTest);
	$useLocalObjectStack();
	try {
		checkSingleMemberStringOvrdDef($cast($SingleMemberStringWithDef, $nc($nc($($nc(m)->getParameterAnnotations()))->get(0))->get(0)), $cast($AccessibleObject, m));
	} catch ($Throwable& t) {
		fail($$str({"SingleMemberStringOvrdDef"_s, m, ": "_s, t}));
	}
}

void UnitTest::checkSingleMemberClassOvrdDefParam($Method* m) {
	$init(UnitTest);
	$useLocalObjectStack();
	try {
		checkSingleMemberClassOvrdDef($cast($SingleMemberClassWithDef, $nc($nc($($nc(m)->getParameterAnnotations()))->get(0))->get(0)), $cast($AccessibleObject, m));
	} catch ($Throwable& t) {
		fail($$str({"SingleMemberClassOvrdDef"_s, m, ": "_s, t}));
	}
}

void UnitTest::checkSingleMemberEnumOvrdDefParam($Method* m) {
	$init(UnitTest);
	$useLocalObjectStack();
	try {
		checkSingleMemberEnumOvrdDef($cast($SingleMemberEnumWithDef, $nc($nc($($nc(m)->getParameterAnnotations()))->get(0))->get(0)), $cast($AccessibleObject, m));
	} catch ($Throwable& t) {
		fail($$str({"SingleMemberEnumOvrdDef"_s, m, ": "_s, t}));
	}
}

void UnitTest::checkSingleMemberByteAcceptDefParam($Method* m) {
	$init(UnitTest);
	$useLocalObjectStack();
	try {
		checkSingleMemberByteAcceptDef($cast($SingleMemberByteWithDef, $nc($nc($($nc(m)->getParameterAnnotations()))->get(0))->get(0)), $cast($AccessibleObject, m));
	} catch ($Throwable& t) {
		fail($$str({"SingleMemberByteAcceptDef"_s, m, ": "_s, t}));
	}
}

void UnitTest::checkSingleMemberShortAcceptDefParam($Method* m) {
	$init(UnitTest);
	$useLocalObjectStack();
	try {
		checkSingleMemberShortAcceptDef($cast($SingleMemberShortWithDef, $nc($nc($($nc(m)->getParameterAnnotations()))->get(0))->get(0)), $cast($AccessibleObject, m));
	} catch ($Throwable& t) {
		fail($$str({"SingleMemberShortAcceptDef"_s, m, ": "_s, t}));
	}
}

void UnitTest::checkSingleMemberIntAcceptDefParam($Method* m) {
	$init(UnitTest);
	$useLocalObjectStack();
	try {
		checkSingleMemberIntAcceptDef($cast($SingleMemberIntWithDef, $nc($nc($($nc(m)->getParameterAnnotations()))->get(0))->get(0)), $cast($AccessibleObject, m));
	} catch ($Throwable& t) {
		fail($$str({"SingleMemberIntAcceptDef"_s, m, ": "_s, t}));
	}
}

void UnitTest::checkSingleMemberLongAcceptDefParam($Method* m) {
	$init(UnitTest);
	$useLocalObjectStack();
	try {
		checkSingleMemberLongAcceptDef($cast($SingleMemberLongWithDef, $nc($nc($($nc(m)->getParameterAnnotations()))->get(0))->get(0)), $cast($AccessibleObject, m));
	} catch ($Throwable& t) {
		fail($$str({"SingleMemberLongAcceptDef"_s, m, ": "_s, t}));
	}
}

void UnitTest::checkSingleMemberCharAcceptDefParam($Method* m) {
	$init(UnitTest);
	$useLocalObjectStack();
	try {
		checkSingleMemberCharAcceptDef($cast($SingleMemberCharWithDef, $nc($nc($($nc(m)->getParameterAnnotations()))->get(0))->get(0)), $cast($AccessibleObject, m));
	} catch ($Throwable& t) {
		fail($$str({"SingleMemberCharAcceptDef"_s, m, ": "_s, t}));
	}
}

void UnitTest::checkSingleMemberFloatAcceptDefParam($Method* m) {
	$init(UnitTest);
	$useLocalObjectStack();
	try {
		checkSingleMemberFloatAcceptDef($cast($SingleMemberFloatWithDef, $nc($nc($($nc(m)->getParameterAnnotations()))->get(0))->get(0)), $cast($AccessibleObject, m));
	} catch ($Throwable& t) {
		fail($$str({"SingleMemberFloatAcceptDef"_s, m, ": "_s, t}));
	}
}

void UnitTest::checkSingleMemberDoubleAcceptDefParam($Method* m) {
	$init(UnitTest);
	$useLocalObjectStack();
	try {
		checkSingleMemberDoubleAcceptDef($cast($SingleMemberDoubleWithDef, $nc($nc($($nc(m)->getParameterAnnotations()))->get(0))->get(0)), $cast($AccessibleObject, m));
	} catch ($Throwable& t) {
		fail($$str({"SingleMemberDoubleAcceptDef"_s, m, ": "_s, t}));
	}
}

void UnitTest::checkSingleMemberBooleanAcceptDefParam($Method* m) {
	$init(UnitTest);
	$useLocalObjectStack();
	try {
		checkSingleMemberBooleanAcceptDef($cast($SingleMemberBooleanWithDef, $nc($nc($($nc(m)->getParameterAnnotations()))->get(0))->get(0)), $cast($AccessibleObject, m));
	} catch ($Throwable& t) {
		fail($$str({"SingleMemberBooleanAcceptDef"_s, m, ": "_s, t}));
	}
}

void UnitTest::checkSingleMemberStringAcceptDefParam($Method* m) {
	$init(UnitTest);
	$useLocalObjectStack();
	try {
		checkSingleMemberStringAcceptDef($cast($SingleMemberStringWithDef, $nc($nc($($nc(m)->getParameterAnnotations()))->get(0))->get(0)), $cast($AccessibleObject, m));
	} catch ($Throwable& t) {
		fail($$str({"SingleMemberStringAcceptDef"_s, m, ": "_s, t}));
	}
}

void UnitTest::checkSingleMemberClassAcceptDefParam($Method* m) {
	$init(UnitTest);
	$useLocalObjectStack();
	try {
		checkSingleMemberClassAcceptDef($cast($SingleMemberClassWithDef, $nc($nc($($nc(m)->getParameterAnnotations()))->get(0))->get(0)), $cast($AccessibleObject, m));
	} catch ($Throwable& t) {
		fail($$str({"SingleMemberClassAcceptDef"_s, m, ": "_s, t}));
	}
}

void UnitTest::checkSingleMemberEnumAcceptDefParam($Method* m) {
	$init(UnitTest);
	$useLocalObjectStack();
	try {
		checkSingleMemberEnumAcceptDef($cast($SingleMemberEnumWithDef, $nc($nc($($nc(m)->getParameterAnnotations()))->get(0))->get(0)), $cast($AccessibleObject, m));
	} catch ($Throwable& t) {
		fail($$str({"SingleMemberEnumAcceptDef"_s, m, ": "_s, t}));
	}
}

void UnitTest::checkSingleMemberByteArrEmptyParam($Method* m) {
	$init(UnitTest);
	$useLocalObjectStack();
	try {
		checkSingleMemberByteArrEmpty($cast($SingleMemberByteArray, $nc($nc($($nc(m)->getParameterAnnotations()))->get(0))->get(0)), $cast($AccessibleObject, m));
	} catch ($Throwable& t) {
		fail($$str({"SingleMemberByteArrEmpty"_s, m, ": "_s, t}));
	}
}

void UnitTest::checkSingleMemberShortArrEmptyParam($Method* m) {
	$init(UnitTest);
	$useLocalObjectStack();
	try {
		checkSingleMemberShortArrEmpty($cast($SingleMemberShortArray, $nc($nc($($nc(m)->getParameterAnnotations()))->get(0))->get(0)), $cast($AccessibleObject, m));
	} catch ($Throwable& t) {
		fail($$str({"SingleMemberShortArrEmpty"_s, m, ": "_s, t}));
	}
}

void UnitTest::checkSingleMemberIntArrEmptyParam($Method* m) {
	$init(UnitTest);
	$useLocalObjectStack();
	try {
		checkSingleMemberIntArrEmpty($cast($SingleMemberIntArray, $nc($nc($($nc(m)->getParameterAnnotations()))->get(0))->get(0)), $cast($AccessibleObject, m));
	} catch ($Throwable& t) {
		fail($$str({"SingleMemberIntArrEmpty"_s, m, ": "_s, t}));
	}
}

void UnitTest::checkSingleMemberLongArrEmptyParam($Method* m) {
	$init(UnitTest);
	$useLocalObjectStack();
	try {
		checkSingleMemberLongArrEmpty($cast($SingleMemberLongArray, $nc($nc($($nc(m)->getParameterAnnotations()))->get(0))->get(0)), $cast($AccessibleObject, m));
	} catch ($Throwable& t) {
		fail($$str({"SingleMemberLongArrEmpty"_s, m, ": "_s, t}));
	}
}

void UnitTest::checkSingleMemberCharArrEmptyParam($Method* m) {
	$init(UnitTest);
	$useLocalObjectStack();
	try {
		checkSingleMemberCharArrEmpty($cast($SingleMemberCharArray, $nc($nc($($nc(m)->getParameterAnnotations()))->get(0))->get(0)), $cast($AccessibleObject, m));
	} catch ($Throwable& t) {
		fail($$str({"SingleMemberCharArrEmpty"_s, m, ": "_s, t}));
	}
}

void UnitTest::checkSingleMemberFloatArrEmptyParam($Method* m) {
	$init(UnitTest);
	$useLocalObjectStack();
	try {
		checkSingleMemberFloatArrEmpty($cast($SingleMemberFloatArray, $nc($nc($($nc(m)->getParameterAnnotations()))->get(0))->get(0)), $cast($AccessibleObject, m));
	} catch ($Throwable& t) {
		fail($$str({"SingleMemberFloatArrEmpty"_s, m, ": "_s, t}));
	}
}

void UnitTest::checkSingleMemberDoubleArrEmptyParam($Method* m) {
	$init(UnitTest);
	$useLocalObjectStack();
	try {
		checkSingleMemberDoubleArrEmpty($cast($SingleMemberDoubleArray, $nc($nc($($nc(m)->getParameterAnnotations()))->get(0))->get(0)), $cast($AccessibleObject, m));
	} catch ($Throwable& t) {
		fail($$str({"SingleMemberDoubleArrEmpty"_s, m, ": "_s, t}));
	}
}

void UnitTest::checkSingleMemberBooleanArrEmptyParam($Method* m) {
	$init(UnitTest);
	$useLocalObjectStack();
	try {
		checkSingleMemberBooleanArrEmpty($cast($SingleMemberBooleanArray, $nc($nc($($nc(m)->getParameterAnnotations()))->get(0))->get(0)), $cast($AccessibleObject, m));
	} catch ($Throwable& t) {
		fail($$str({"SingleMemberBooleanArrEmpty"_s, m, ": "_s, t}));
	}
}

void UnitTest::checkSingleMemberStringArrEmptyParam($Method* m) {
	$init(UnitTest);
	$useLocalObjectStack();
	try {
		checkSingleMemberStringArrEmpty($cast($SingleMemberStringArray, $nc($nc($($nc(m)->getParameterAnnotations()))->get(0))->get(0)), $cast($AccessibleObject, m));
	} catch ($Throwable& t) {
		fail($$str({"SingleMemberStringArrEmpty"_s, m, ": "_s, t}));
	}
}

void UnitTest::checkSingleMemberClassArrEmptyParam($Method* m) {
	$init(UnitTest);
	$useLocalObjectStack();
	try {
		checkSingleMemberClassArrEmpty($cast($SingleMemberClassArray, $nc($nc($($nc(m)->getParameterAnnotations()))->get(0))->get(0)), $cast($AccessibleObject, m));
	} catch ($Throwable& t) {
		fail($$str({"SingleMemberClassArrEmpty"_s, m, ": "_s, t}));
	}
}

void UnitTest::checkSingleMemberEnumArrEmptyParam($Method* m) {
	$init(UnitTest);
	$useLocalObjectStack();
	try {
		checkSingleMemberEnumArrEmpty($cast($SingleMemberEnumArray, $nc($nc($($nc(m)->getParameterAnnotations()))->get(0))->get(0)), $cast($AccessibleObject, m));
	} catch ($Throwable& t) {
		fail($$str({"SingleMemberEnumArrEmpty"_s, m, ": "_s, t}));
	}
}

void UnitTest::checkSingleMemberByteArrOneParam($Method* m) {
	$init(UnitTest);
	$useLocalObjectStack();
	try {
		checkSingleMemberByteArrOne($cast($SingleMemberByteArray, $nc($nc($($nc(m)->getParameterAnnotations()))->get(0))->get(0)), $cast($AccessibleObject, m));
	} catch ($Throwable& t) {
		fail($$str({"SingleMemberByteArrOne"_s, m, ": "_s, t}));
	}
}

void UnitTest::checkSingleMemberShortArrOneParam($Method* m) {
	$init(UnitTest);
	$useLocalObjectStack();
	try {
		checkSingleMemberShortArrOne($cast($SingleMemberShortArray, $nc($nc($($nc(m)->getParameterAnnotations()))->get(0))->get(0)), $cast($AccessibleObject, m));
	} catch ($Throwable& t) {
		fail($$str({"SingleMemberShortArrOne"_s, m, ": "_s, t}));
	}
}

void UnitTest::checkSingleMemberIntArrOneParam($Method* m) {
	$init(UnitTest);
	$useLocalObjectStack();
	try {
		checkSingleMemberIntArrOne($cast($SingleMemberIntArray, $nc($nc($($nc(m)->getParameterAnnotations()))->get(0))->get(0)), $cast($AccessibleObject, m));
	} catch ($Throwable& t) {
		fail($$str({"SingleMemberIntArrOne"_s, m, ": "_s, t}));
	}
}

void UnitTest::checkSingleMemberLongArrOneParam($Method* m) {
	$init(UnitTest);
	$useLocalObjectStack();
	try {
		checkSingleMemberLongArrOne($cast($SingleMemberLongArray, $nc($nc($($nc(m)->getParameterAnnotations()))->get(0))->get(0)), $cast($AccessibleObject, m));
	} catch ($Throwable& t) {
		fail($$str({"SingleMemberLongArrOne"_s, m, ": "_s, t}));
	}
}

void UnitTest::checkSingleMemberCharArrOneParam($Method* m) {
	$init(UnitTest);
	$useLocalObjectStack();
	try {
		checkSingleMemberCharArrOne($cast($SingleMemberCharArray, $nc($nc($($nc(m)->getParameterAnnotations()))->get(0))->get(0)), $cast($AccessibleObject, m));
	} catch ($Throwable& t) {
		fail($$str({"SingleMemberCharArrOne"_s, m, ": "_s, t}));
	}
}

void UnitTest::checkSingleMemberFloatArrOneParam($Method* m) {
	$init(UnitTest);
	$useLocalObjectStack();
	try {
		checkSingleMemberFloatArrOne($cast($SingleMemberFloatArray, $nc($nc($($nc(m)->getParameterAnnotations()))->get(0))->get(0)), $cast($AccessibleObject, m));
	} catch ($Throwable& t) {
		fail($$str({"SingleMemberFloatArrOne"_s, m, ": "_s, t}));
	}
}

void UnitTest::checkSingleMemberDoubleArrOneParam($Method* m) {
	$init(UnitTest);
	$useLocalObjectStack();
	try {
		checkSingleMemberDoubleArrOne($cast($SingleMemberDoubleArray, $nc($nc($($nc(m)->getParameterAnnotations()))->get(0))->get(0)), $cast($AccessibleObject, m));
	} catch ($Throwable& t) {
		fail($$str({"SingleMemberDoubleArrOne"_s, m, ": "_s, t}));
	}
}

void UnitTest::checkSingleMemberBooleanArrOneParam($Method* m) {
	$init(UnitTest);
	$useLocalObjectStack();
	try {
		checkSingleMemberBooleanArrOne($cast($SingleMemberBooleanArray, $nc($nc($($nc(m)->getParameterAnnotations()))->get(0))->get(0)), $cast($AccessibleObject, m));
	} catch ($Throwable& t) {
		fail($$str({"SingleMemberBooleanArrOne"_s, m, ": "_s, t}));
	}
}

void UnitTest::checkSingleMemberStringArrOneParam($Method* m) {
	$init(UnitTest);
	$useLocalObjectStack();
	try {
		checkSingleMemberStringArrOne($cast($SingleMemberStringArray, $nc($nc($($nc(m)->getParameterAnnotations()))->get(0))->get(0)), $cast($AccessibleObject, m));
	} catch ($Throwable& t) {
		fail($$str({"SingleMemberStringArrOne"_s, m, ": "_s, t}));
	}
}

void UnitTest::checkSingleMemberClassArrOneParam($Method* m) {
	$init(UnitTest);
	$useLocalObjectStack();
	try {
		checkSingleMemberClassArrOne($cast($SingleMemberClassArray, $nc($nc($($nc(m)->getParameterAnnotations()))->get(0))->get(0)), $cast($AccessibleObject, m));
	} catch ($Throwable& t) {
		fail($$str({"SingleMemberClassArrOne"_s, m, ": "_s, t}));
	}
}

void UnitTest::checkSingleMemberEnumArrOneParam($Method* m) {
	$init(UnitTest);
	$useLocalObjectStack();
	try {
		checkSingleMemberEnumArrOne($cast($SingleMemberEnumArray, $nc($nc($($nc(m)->getParameterAnnotations()))->get(0))->get(0)), $cast($AccessibleObject, m));
	} catch ($Throwable& t) {
		fail($$str({"SingleMemberEnumArrOne"_s, m, ": "_s, t}));
	}
}

void UnitTest::checkSingleMemberByteArrTwoParam($Method* m) {
	$init(UnitTest);
	$useLocalObjectStack();
	try {
		checkSingleMemberByteArrTwo($cast($SingleMemberByteArray, $nc($nc($($nc(m)->getParameterAnnotations()))->get(0))->get(0)), $cast($AccessibleObject, m));
	} catch ($Throwable& t) {
		fail($$str({"SingleMemberByteArrTwo"_s, m, ": "_s, t}));
	}
}

void UnitTest::checkSingleMemberShortArrTwoParam($Method* m) {
	$init(UnitTest);
	$useLocalObjectStack();
	try {
		checkSingleMemberShortArrTwo($cast($SingleMemberShortArray, $nc($nc($($nc(m)->getParameterAnnotations()))->get(0))->get(0)), $cast($AccessibleObject, m));
	} catch ($Throwable& t) {
		fail($$str({"SingleMemberShortArrTwo"_s, m, ": "_s, t}));
	}
}

void UnitTest::checkSingleMemberIntArrTwoParam($Method* m) {
	$init(UnitTest);
	$useLocalObjectStack();
	try {
		checkSingleMemberIntArrTwo($cast($SingleMemberIntArray, $nc($nc($($nc(m)->getParameterAnnotations()))->get(0))->get(0)), $cast($AccessibleObject, m));
	} catch ($Throwable& t) {
		fail($$str({"SingleMemberIntArrTwo"_s, m, ": "_s, t}));
	}
}

void UnitTest::checkSingleMemberLongArrTwoParam($Method* m) {
	$init(UnitTest);
	$useLocalObjectStack();
	try {
		checkSingleMemberLongArrTwo($cast($SingleMemberLongArray, $nc($nc($($nc(m)->getParameterAnnotations()))->get(0))->get(0)), $cast($AccessibleObject, m));
	} catch ($Throwable& t) {
		fail($$str({"SingleMemberLongArrTwo"_s, m, ": "_s, t}));
	}
}

void UnitTest::checkSingleMemberCharArrTwoParam($Method* m) {
	$init(UnitTest);
	$useLocalObjectStack();
	try {
		checkSingleMemberCharArrTwo($cast($SingleMemberCharArray, $nc($nc($($nc(m)->getParameterAnnotations()))->get(0))->get(0)), $cast($AccessibleObject, m));
	} catch ($Throwable& t) {
		fail($$str({"SingleMemberCharArrTwo"_s, m, ": "_s, t}));
	}
}

void UnitTest::checkSingleMemberFloatArrTwoParam($Method* m) {
	$init(UnitTest);
	$useLocalObjectStack();
	try {
		checkSingleMemberFloatArrTwo($cast($SingleMemberFloatArray, $nc($nc($($nc(m)->getParameterAnnotations()))->get(0))->get(0)), $cast($AccessibleObject, m));
	} catch ($Throwable& t) {
		fail($$str({"SingleMemberFloatArrTwo"_s, m, ": "_s, t}));
	}
}

void UnitTest::checkSingleMemberDoubleArrTwoParam($Method* m) {
	$init(UnitTest);
	$useLocalObjectStack();
	try {
		checkSingleMemberDoubleArrTwo($cast($SingleMemberDoubleArray, $nc($nc($($nc(m)->getParameterAnnotations()))->get(0))->get(0)), $cast($AccessibleObject, m));
	} catch ($Throwable& t) {
		fail($$str({"SingleMemberDoubleArrTwo"_s, m, ": "_s, t}));
	}
}

void UnitTest::checkSingleMemberBooleanArrTwoParam($Method* m) {
	$init(UnitTest);
	$useLocalObjectStack();
	try {
		checkSingleMemberBooleanArrTwo($cast($SingleMemberBooleanArray, $nc($nc($($nc(m)->getParameterAnnotations()))->get(0))->get(0)), $cast($AccessibleObject, m));
	} catch ($Throwable& t) {
		fail($$str({"SingleMemberBooleanArrTwo"_s, m, ": "_s, t}));
	}
}

void UnitTest::checkSingleMemberStringArrTwoParam($Method* m) {
	$init(UnitTest);
	$useLocalObjectStack();
	try {
		checkSingleMemberStringArrTwo($cast($SingleMemberStringArray, $nc($nc($($nc(m)->getParameterAnnotations()))->get(0))->get(0)), $cast($AccessibleObject, m));
	} catch ($Throwable& t) {
		fail($$str({"SingleMemberStringArrTwo"_s, m, ": "_s, t}));
	}
}

void UnitTest::checkSingleMemberClassArrTwoParam($Method* m) {
	$init(UnitTest);
	$useLocalObjectStack();
	try {
		checkSingleMemberClassArrTwo($cast($SingleMemberClassArray, $nc($nc($($nc(m)->getParameterAnnotations()))->get(0))->get(0)), $cast($AccessibleObject, m));
	} catch ($Throwable& t) {
		fail($$str({"SingleMemberClassArrTwo"_s, m, ": "_s, t}));
	}
}

void UnitTest::checkSingleMemberEnumArrTwoParam($Method* m) {
	$init(UnitTest);
	$useLocalObjectStack();
	try {
		checkSingleMemberEnumArrTwo($cast($SingleMemberEnumArray, $nc($nc($($nc(m)->getParameterAnnotations()))->get(0))->get(0)), $cast($AccessibleObject, m));
	} catch ($Throwable& t) {
		fail($$str({"SingleMemberEnumArrTwo"_s, m, ": "_s, t}));
	}
}

void UnitTest::checkSingleMemberByteArrOvrdDefParam($Method* m) {
	$init(UnitTest);
	$useLocalObjectStack();
	try {
		checkSingleMemberByteArrOvrdDef($cast($SingleMemberByteArrayDef, $nc($nc($($nc(m)->getParameterAnnotations()))->get(0))->get(0)), $cast($AccessibleObject, m));
	} catch ($Throwable& t) {
		fail($$str({"SingleMemberByteArrOvrdDef"_s, m, ": "_s, t}));
	}
}

void UnitTest::checkSingleMemberShortArrOvrdDefParam($Method* m) {
	$init(UnitTest);
	$useLocalObjectStack();
	try {
		checkSingleMemberShortArrOvrdDef($cast($SingleMemberShortArrayDef, $nc($nc($($nc(m)->getParameterAnnotations()))->get(0))->get(0)), $cast($AccessibleObject, m));
	} catch ($Throwable& t) {
		fail($$str({"SingleMemberShortArrOvrdDef"_s, m, ": "_s, t}));
	}
}

void UnitTest::checkSingleMemberIntArrOvrdDefParam($Method* m) {
	$init(UnitTest);
	$useLocalObjectStack();
	try {
		checkSingleMemberIntArrOvrdDef($cast($SingleMemberIntArrayDef, $nc($nc($($nc(m)->getParameterAnnotations()))->get(0))->get(0)), $cast($AccessibleObject, m));
	} catch ($Throwable& t) {
		fail($$str({"SingleMemberIntArrOvrdDef"_s, m, ": "_s, t}));
	}
}

void UnitTest::checkSingleMemberLongArrOvrdDefParam($Method* m) {
	$init(UnitTest);
	$useLocalObjectStack();
	try {
		checkSingleMemberLongArrOvrdDef($cast($SingleMemberLongArrayDef, $nc($nc($($nc(m)->getParameterAnnotations()))->get(0))->get(0)), $cast($AccessibleObject, m));
	} catch ($Throwable& t) {
		fail($$str({"SingleMemberLongArrOvrdDef"_s, m, ": "_s, t}));
	}
}

void UnitTest::checkSingleMemberCharArrOvrdDefParam($Method* m) {
	$init(UnitTest);
	$useLocalObjectStack();
	try {
		checkSingleMemberCharArrOvrdDef($cast($SingleMemberCharArrayDef, $nc($nc($($nc(m)->getParameterAnnotations()))->get(0))->get(0)), $cast($AccessibleObject, m));
	} catch ($Throwable& t) {
		fail($$str({"SingleMemberCharArrOvrdDef"_s, m, ": "_s, t}));
	}
}

void UnitTest::checkSingleMemberFloatArrOvrdDefParam($Method* m) {
	$init(UnitTest);
	$useLocalObjectStack();
	try {
		checkSingleMemberFloatArrOvrdDef($cast($SingleMemberFloatArrayDef, $nc($nc($($nc(m)->getParameterAnnotations()))->get(0))->get(0)), $cast($AccessibleObject, m));
	} catch ($Throwable& t) {
		fail($$str({"SingleMemberFloatArrOvrdDef"_s, m, ": "_s, t}));
	}
}

void UnitTest::checkSingleMemberDoubleArrOvrdDefParam($Method* m) {
	$init(UnitTest);
	$useLocalObjectStack();
	try {
		checkSingleMemberDoubleArrOvrdDef($cast($SingleMemberDoubleArrayDef, $nc($nc($($nc(m)->getParameterAnnotations()))->get(0))->get(0)), $cast($AccessibleObject, m));
	} catch ($Throwable& t) {
		fail($$str({"SingleMemberDoubleArrOvrdDef"_s, m, ": "_s, t}));
	}
}

void UnitTest::checkSingleMemberBooleanArrOvrdDefParam($Method* m) {
	$init(UnitTest);
	$useLocalObjectStack();
	try {
		checkSingleMemberBooleanArrOvrdDef($cast($SingleMemberBooleanArrayDef, $nc($nc($($nc(m)->getParameterAnnotations()))->get(0))->get(0)), $cast($AccessibleObject, m));
	} catch ($Throwable& t) {
		fail($$str({"SingleMemberBooleanArrOvrdDef"_s, m, ": "_s, t}));
	}
}

void UnitTest::checkSingleMemberStringArrOvrdDefParam($Method* m) {
	$init(UnitTest);
	$useLocalObjectStack();
	try {
		checkSingleMemberStringArrOvrdDef($cast($SingleMemberStringArrayDef, $nc($nc($($nc(m)->getParameterAnnotations()))->get(0))->get(0)), $cast($AccessibleObject, m));
	} catch ($Throwable& t) {
		fail($$str({"SingleMemberStringArrOvrdDef"_s, m, ": "_s, t}));
	}
}

void UnitTest::checkSingleMemberClassArrOvrdDefParam($Method* m) {
	$init(UnitTest);
	$useLocalObjectStack();
	try {
		checkSingleMemberClassArrOvrdDef($cast($SingleMemberClassArrayDef, $nc($nc($($nc(m)->getParameterAnnotations()))->get(0))->get(0)), $cast($AccessibleObject, m));
	} catch ($Throwable& t) {
		fail($$str({"SingleMemberClassArrOvrdDef"_s, m, ": "_s, t}));
	}
}

void UnitTest::checkSingleMemberEnumArrOvrdDefParam($Method* m) {
	$init(UnitTest);
	$useLocalObjectStack();
	try {
		checkSingleMemberEnumArrOvrdDef($cast($SingleMemberEnumArrayDef, $nc($nc($($nc(m)->getParameterAnnotations()))->get(0))->get(0)), $cast($AccessibleObject, m));
	} catch ($Throwable& t) {
		fail($$str({"SingleMemberEnumArrOvrdDef"_s, m, ": "_s, t}));
	}
}

void UnitTest::checkSingleMemberByteArrAcceptDefParam($Method* m) {
	$init(UnitTest);
	$useLocalObjectStack();
	try {
		checkSingleMemberByteArrAcceptDef($cast($SingleMemberByteArrayDef, $nc($nc($($nc(m)->getParameterAnnotations()))->get(0))->get(0)), $cast($AccessibleObject, m));
	} catch ($Throwable& t) {
		fail($$str({"SingleMemberByteArrAcceptDef"_s, m, ": "_s, t}));
	}
}

void UnitTest::checkSingleMemberShortArrAcceptDefParam($Method* m) {
	$init(UnitTest);
	$useLocalObjectStack();
	try {
		checkSingleMemberShortArrAcceptDef($cast($SingleMemberShortArrayDef, $nc($nc($($nc(m)->getParameterAnnotations()))->get(0))->get(0)), $cast($AccessibleObject, m));
	} catch ($Throwable& t) {
		fail($$str({"SingleMemberShortArrAcceptDef"_s, m, ": "_s, t}));
	}
}

void UnitTest::checkSingleMemberIntArrAcceptDefParam($Method* m) {
	$init(UnitTest);
	$useLocalObjectStack();
	try {
		checkSingleMemberIntArrAcceptDef($cast($SingleMemberIntArrayDef, $nc($nc($($nc(m)->getParameterAnnotations()))->get(0))->get(0)), $cast($AccessibleObject, m));
	} catch ($Throwable& t) {
		fail($$str({"SingleMemberIntArrAcceptDef"_s, m, ": "_s, t}));
	}
}

void UnitTest::checkSingleMemberLongArrAcceptDefParam($Method* m) {
	$init(UnitTest);
	$useLocalObjectStack();
	try {
		checkSingleMemberLongArrAcceptDef($cast($SingleMemberLongArrayDef, $nc($nc($($nc(m)->getParameterAnnotations()))->get(0))->get(0)), $cast($AccessibleObject, m));
	} catch ($Throwable& t) {
		fail($$str({"SingleMemberLongArrAcceptDef"_s, m, ": "_s, t}));
	}
}

void UnitTest::checkSingleMemberCharArrAcceptDefParam($Method* m) {
	$init(UnitTest);
	$useLocalObjectStack();
	try {
		checkSingleMemberCharArrAcceptDef($cast($SingleMemberCharArrayDef, $nc($nc($($nc(m)->getParameterAnnotations()))->get(0))->get(0)), $cast($AccessibleObject, m));
	} catch ($Throwable& t) {
		fail($$str({"SingleMemberCharArrAcceptDef"_s, m, ": "_s, t}));
	}
}

void UnitTest::checkSingleMemberFloatArrAcceptDefParam($Method* m) {
	$init(UnitTest);
	$useLocalObjectStack();
	try {
		checkSingleMemberFloatArrAcceptDef($cast($SingleMemberFloatArrayDef, $nc($nc($($nc(m)->getParameterAnnotations()))->get(0))->get(0)), $cast($AccessibleObject, m));
	} catch ($Throwable& t) {
		fail($$str({"SingleMemberFloatArrAcceptDef"_s, m, ": "_s, t}));
	}
}

void UnitTest::checkSingleMemberDoubleArrAcceptDefParam($Method* m) {
	$init(UnitTest);
	$useLocalObjectStack();
	try {
		checkSingleMemberDoubleArrAcceptDef($cast($SingleMemberDoubleArrayDef, $nc($nc($($nc(m)->getParameterAnnotations()))->get(0))->get(0)), $cast($AccessibleObject, m));
	} catch ($Throwable& t) {
		fail($$str({"SingleMemberDoubleArrAcceptDef"_s, m, ": "_s, t}));
	}
}

void UnitTest::checkSingleMemberBooleanArrAcceptDefParam($Method* m) {
	$init(UnitTest);
	$useLocalObjectStack();
	try {
		checkSingleMemberBooleanArrAcceptDef($cast($SingleMemberBooleanArrayDef, $nc($nc($($nc(m)->getParameterAnnotations()))->get(0))->get(0)), $cast($AccessibleObject, m));
	} catch ($Throwable& t) {
		fail($$str({"SingleMemberBooleanArrAcceptDef"_s, m, ": "_s, t}));
	}
}

void UnitTest::checkSingleMemberStringArrAcceptDefParam($Method* m) {
	$init(UnitTest);
	$useLocalObjectStack();
	try {
		checkSingleMemberStringArrAcceptDef($cast($SingleMemberStringArrayDef, $nc($nc($($nc(m)->getParameterAnnotations()))->get(0))->get(0)), $cast($AccessibleObject, m));
	} catch ($Throwable& t) {
		fail($$str({"SingleMemberStringArrAcceptDef"_s, m, ": "_s, t}));
	}
}

void UnitTest::checkSingleMemberClassArrAcceptDefParam($Method* m) {
	$init(UnitTest);
	$useLocalObjectStack();
	try {
		checkSingleMemberClassArrAcceptDef($cast($SingleMemberClassArrayDef, $nc($nc($($nc(m)->getParameterAnnotations()))->get(0))->get(0)), $cast($AccessibleObject, m));
	} catch ($Throwable& t) {
		fail($$str({"SingleMemberClassArrAcceptDef"_s, m, ": "_s, t}));
	}
}

void UnitTest::checkSingleMemberEnumArrAcceptDefParam($Method* m) {
	$init(UnitTest);
	$useLocalObjectStack();
	try {
		checkSingleMemberEnumArrAcceptDef($cast($SingleMemberEnumArrayDef, $nc($nc($($nc(m)->getParameterAnnotations()))->get(0))->get(0)), $cast($AccessibleObject, m));
	} catch ($Throwable& t) {
		fail($$str({"SingleMemberEnumArrAcceptDef"_s, m, ": "_s, t}));
	}
}

void UnitTest::checkMarker($AnnotatedElement* e) {
	$init(UnitTest);
	$load($Marker);
	checkMarker($$cast($Marker, $nc(e)->getAnnotation($Marker::class$)), e);
}

void UnitTest::checkMarker($Marker* m, $AnnotatedElement* e) {
	$init(UnitTest);
	$useLocalObjectStack();
	++UnitTest::numTests;
	try {
		if (m == nullptr) {
			fail($$str({"Marker "_s, e}));
		}
	} catch ($Throwable& t) {
		fail($$str({"Marker "_s, e, ": "_s, t}));
	}
}

void UnitTest::checkSingleMemberByte($AnnotatedElement* e) {
	$init(UnitTest);
	$load($SingleMemberByte);
	checkSingleMemberByte($$cast($SingleMemberByte, $nc(e)->getAnnotation($SingleMemberByte::class$)), e);
}

void UnitTest::checkSingleMemberByte($SingleMemberByte* a, $AnnotatedElement* e) {
	$init(UnitTest);
	$useLocalObjectStack();
	++UnitTest::numTests;
	try {
		if ($nc(a)->value() != 1) {
			$var($StringBuilder, var$0, $new($StringBuilder));
			var$0->append("SingleMemberByte "_s);
			var$0->append(e);
			var$0->append(" = "_s);
			var$0->append(a->value());
			fail($$str(var$0));
		}
	} catch ($Throwable& t) {
		fail($$str({"SingleMemberByte "_s, e, ": "_s, t}));
	}
}

void UnitTest::checkSingleMemberShort($AnnotatedElement* e) {
	$init(UnitTest);
	$load($SingleMemberShort);
	checkSingleMemberShort($$cast($SingleMemberShort, $nc(e)->getAnnotation($SingleMemberShort::class$)), e);
}

void UnitTest::checkSingleMemberShort($SingleMemberShort* a, $AnnotatedElement* e) {
	$init(UnitTest);
	$useLocalObjectStack();
	++UnitTest::numTests;
	try {
		if ($nc(a)->value() != 2) {
			$var($StringBuilder, var$0, $new($StringBuilder));
			var$0->append("SingleMemberShort "_s);
			var$0->append(e);
			var$0->append(" = "_s);
			var$0->append(a->value());
			fail($$str(var$0));
		}
	} catch ($Throwable& t) {
		fail($$str({"SingleMemberShort "_s, e, ": "_s, t}));
	}
}

void UnitTest::checkSingleMemberInt($AnnotatedElement* e) {
	$init(UnitTest);
	$load($SingleMemberInt);
	checkSingleMemberInt($$cast($SingleMemberInt, $nc(e)->getAnnotation($SingleMemberInt::class$)), e);
}

void UnitTest::checkSingleMemberInt($SingleMemberInt* a, $AnnotatedElement* e) {
	$init(UnitTest);
	$useLocalObjectStack();
	++UnitTest::numTests;
	try {
		if ($nc(a)->value() != 3) {
			$var($StringBuilder, var$0, $new($StringBuilder));
			var$0->append("SingleMemberInt "_s);
			var$0->append(e);
			var$0->append(" = "_s);
			var$0->append(a->value());
			fail($$str(var$0));
		}
	} catch ($Throwable& t) {
		fail($$str({"SingleMemberInt "_s, e, ": "_s, t}));
	}
}

void UnitTest::checkSingleMemberLong($AnnotatedElement* e) {
	$init(UnitTest);
	$load($SingleMemberLong);
	checkSingleMemberLong($$cast($SingleMemberLong, $nc(e)->getAnnotation($SingleMemberLong::class$)), e);
}

void UnitTest::checkSingleMemberLong($SingleMemberLong* a, $AnnotatedElement* e) {
	$init(UnitTest);
	$useLocalObjectStack();
	++UnitTest::numTests;
	try {
		if ($nc(a)->value() != 4) {
			$var($StringBuilder, var$0, $new($StringBuilder));
			var$0->append("SingleMemberLong "_s);
			var$0->append(e);
			var$0->append(" = "_s);
			var$0->append(a->value());
			fail($$str(var$0));
		}
	} catch ($Throwable& t) {
		fail($$str({"SingleMemberLong "_s, e, ": "_s, t}));
	}
}

void UnitTest::checkSingleMemberChar($AnnotatedElement* e) {
	$init(UnitTest);
	$load($SingleMemberChar);
	checkSingleMemberChar($$cast($SingleMemberChar, $nc(e)->getAnnotation($SingleMemberChar::class$)), e);
}

void UnitTest::checkSingleMemberChar($SingleMemberChar* a, $AnnotatedElement* e) {
	$init(UnitTest);
	$useLocalObjectStack();
	++UnitTest::numTests;
	try {
		if ($nc(a)->value() != u'5') {
			$var($StringBuilder, var$0, $new($StringBuilder));
			var$0->append("SingleMemberChar "_s);
			var$0->append(e);
			var$0->append(" = "_s);
			var$0->append(a->value());
			fail($$str(var$0));
		}
	} catch ($Throwable& t) {
		fail($$str({"SingleMemberChar "_s, e, ": "_s, t}));
	}
}

void UnitTest::checkSingleMemberFloat($AnnotatedElement* e) {
	$init(UnitTest);
	$load($SingleMemberFloat);
	checkSingleMemberFloat($$cast($SingleMemberFloat, $nc(e)->getAnnotation($SingleMemberFloat::class$)), e);
}

void UnitTest::checkSingleMemberFloat($SingleMemberFloat* a, $AnnotatedElement* e) {
	$init(UnitTest);
	$useLocalObjectStack();
	++UnitTest::numTests;
	try {
		if ($nc(a)->value() != 6.0f) {
			$var($StringBuilder, var$0, $new($StringBuilder));
			var$0->append("SingleMemberFloat "_s);
			var$0->append(e);
			var$0->append(" = "_s);
			var$0->append(a->value());
			fail($$str(var$0));
		}
	} catch ($Throwable& t) {
		fail($$str({"SingleMemberFloat "_s, e, ": "_s, t}));
	}
}

void UnitTest::checkSingleMemberDouble($AnnotatedElement* e) {
	$init(UnitTest);
	$load($SingleMemberDouble);
	checkSingleMemberDouble($$cast($SingleMemberDouble, $nc(e)->getAnnotation($SingleMemberDouble::class$)), e);
}

void UnitTest::checkSingleMemberDouble($SingleMemberDouble* a, $AnnotatedElement* e) {
	$init(UnitTest);
	$useLocalObjectStack();
	++UnitTest::numTests;
	try {
		if ($nc(a)->value() != 7.0) {
			$var($StringBuilder, var$0, $new($StringBuilder));
			var$0->append("SingleMemberDouble "_s);
			var$0->append(e);
			var$0->append(" = "_s);
			var$0->append(a->value());
			fail($$str(var$0));
		}
	} catch ($Throwable& t) {
		fail($$str({"SingleMemberDouble "_s, e, ": "_s, t}));
	}
}

void UnitTest::checkSingleMemberBoolean($AnnotatedElement* e) {
	$init(UnitTest);
	$load($SingleMemberBoolean);
	checkSingleMemberBoolean($$cast($SingleMemberBoolean, $nc(e)->getAnnotation($SingleMemberBoolean::class$)), e);
}

void UnitTest::checkSingleMemberBoolean($SingleMemberBoolean* a, $AnnotatedElement* e) {
	$init(UnitTest);
	$useLocalObjectStack();
	++UnitTest::numTests;
	try {
		if (!$nc(a)->value()) {
			$var($StringBuilder, var$0, $new($StringBuilder));
			var$0->append("SingleMemberBoolean "_s);
			var$0->append(e);
			var$0->append(" = "_s);
			var$0->append(a->value());
			fail($$str(var$0));
		}
	} catch ($Throwable& t) {
		fail($$str({"SingleMemberBoolean "_s, e, ": "_s, t}));
	}
}

void UnitTest::checkSingleMemberString($AnnotatedElement* e) {
	$init(UnitTest);
	$load($SingleMemberString);
	checkSingleMemberString($$cast($SingleMemberString, $nc(e)->getAnnotation($SingleMemberString::class$)), e);
}

void UnitTest::checkSingleMemberString($SingleMemberString* a, $AnnotatedElement* e) {
	$init(UnitTest);
	$useLocalObjectStack();
	++UnitTest::numTests;
	try {
		if (!($$nc($nc(a)->value())->equals("custom"_s))) {
			$var($StringBuilder, var$0, $new($StringBuilder));
			var$0->append("SingleMemberString "_s);
			var$0->append(e);
			var$0->append(" = "_s);
			var$0->append($(a->value()));
			fail($$str(var$0));
		}
	} catch ($Throwable& t) {
		fail($$str({"SingleMemberString "_s, e, ": "_s, t}));
	}
}

void UnitTest::checkSingleMemberClass($AnnotatedElement* e) {
	$init(UnitTest);
	$load($SingleMemberClass);
	checkSingleMemberClass($$cast($SingleMemberClass, $nc(e)->getAnnotation($SingleMemberClass::class$)), e);
}

void UnitTest::checkSingleMemberClass($SingleMemberClass* a, $AnnotatedElement* e) {
	$init(UnitTest);
	$useLocalObjectStack();
	++UnitTest::numTests;
	try {
		$load($Map);
		if ($nc(a)->value() != $Map::class$) {
			$var($StringBuilder, var$0, $new($StringBuilder));
			var$0->append("SingleMemberClass "_s);
			var$0->append(e);
			var$0->append(" = "_s);
			var$0->append(a->value());
			fail($$str(var$0));
		}
	} catch ($Throwable& t) {
		fail($$str({"SingleMemberClass "_s, e, ": "_s, t}));
	}
}

void UnitTest::checkSingleMemberEnum($AnnotatedElement* e) {
	$init(UnitTest);
	$load($SingleMemberEnum);
	checkSingleMemberEnum($$cast($SingleMemberEnum, $nc(e)->getAnnotation($SingleMemberEnum::class$)), e);
}

void UnitTest::checkSingleMemberEnum($SingleMemberEnum* a, $AnnotatedElement* e) {
	$init(UnitTest);
	$useLocalObjectStack();
	++UnitTest::numTests;
	try {
		$init($Stooge);
		if ($nc(a)->value() != $Stooge::MOE) {
			$var($StringBuilder, var$0, $new($StringBuilder));
			var$0->append("SingleMemberEnum "_s);
			var$0->append(e);
			var$0->append(" = "_s);
			var$0->append($(a->value()));
			fail($$str(var$0));
		}
	} catch ($Throwable& t) {
		fail($$str({"SingleMemberEnum "_s, e, ": "_s, t}));
	}
}

void UnitTest::checkSingleMemberByteOvrdDef($AnnotatedElement* e) {
	$init(UnitTest);
	$load($SingleMemberByteWithDef);
	checkSingleMemberByteOvrdDef($$cast($SingleMemberByteWithDef, $nc(e)->getAnnotation($SingleMemberByteWithDef::class$)), e);
}

void UnitTest::checkSingleMemberByteOvrdDef($SingleMemberByteWithDef* a, $AnnotatedElement* e) {
	$init(UnitTest);
	$useLocalObjectStack();
	++UnitTest::numTests;
	try {
		if ($nc(a)->value() != 1) {
			$var($StringBuilder, var$0, $new($StringBuilder));
			var$0->append("SingleMemberByteOvrdDef "_s);
			var$0->append(e);
			var$0->append(" = "_s);
			var$0->append(a->value());
			fail($$str(var$0));
		}
	} catch ($Throwable& t) {
		fail($$str({"SingleMemberByteOvrdDef "_s, e, ": "_s, t}));
	}
}

void UnitTest::checkSingleMemberShortOvrdDef($AnnotatedElement* e) {
	$init(UnitTest);
	$load($SingleMemberShortWithDef);
	checkSingleMemberShortOvrdDef($$cast($SingleMemberShortWithDef, $nc(e)->getAnnotation($SingleMemberShortWithDef::class$)), e);
}

void UnitTest::checkSingleMemberShortOvrdDef($SingleMemberShortWithDef* a, $AnnotatedElement* e) {
	$init(UnitTest);
	$useLocalObjectStack();
	++UnitTest::numTests;
	try {
		if ($nc(a)->value() != 2) {
			$var($StringBuilder, var$0, $new($StringBuilder));
			var$0->append("SingleMemberShortOvrdDef "_s);
			var$0->append(e);
			var$0->append(" = "_s);
			var$0->append(a->value());
			fail($$str(var$0));
		}
	} catch ($Throwable& t) {
		fail($$str({"SingleMemberShortOvrdDef "_s, e, ": "_s, t}));
	}
}

void UnitTest::checkSingleMemberIntOvrdDef($AnnotatedElement* e) {
	$init(UnitTest);
	$load($SingleMemberIntWithDef);
	checkSingleMemberIntOvrdDef($$cast($SingleMemberIntWithDef, $nc(e)->getAnnotation($SingleMemberIntWithDef::class$)), e);
}

void UnitTest::checkSingleMemberIntOvrdDef($SingleMemberIntWithDef* a, $AnnotatedElement* e) {
	$init(UnitTest);
	$useLocalObjectStack();
	++UnitTest::numTests;
	try {
		if ($nc(a)->value() != 3) {
			$var($StringBuilder, var$0, $new($StringBuilder));
			var$0->append("SingleMemberIntOvrdDef "_s);
			var$0->append(e);
			var$0->append(" = "_s);
			var$0->append(a->value());
			fail($$str(var$0));
		}
	} catch ($Throwable& t) {
		fail($$str({"SingleMemberIntOvrdDef "_s, e, ": "_s, t}));
	}
}

void UnitTest::checkSingleMemberLongOvrdDef($AnnotatedElement* e) {
	$init(UnitTest);
	$load($SingleMemberLongWithDef);
	checkSingleMemberLongOvrdDef($$cast($SingleMemberLongWithDef, $nc(e)->getAnnotation($SingleMemberLongWithDef::class$)), e);
}

void UnitTest::checkSingleMemberLongOvrdDef($SingleMemberLongWithDef* a, $AnnotatedElement* e) {
	$init(UnitTest);
	$useLocalObjectStack();
	++UnitTest::numTests;
	try {
		if ($nc(a)->value() != 4) {
			$var($StringBuilder, var$0, $new($StringBuilder));
			var$0->append("SingleMemberLongOvrdDef "_s);
			var$0->append(e);
			var$0->append(" = "_s);
			var$0->append(a->value());
			fail($$str(var$0));
		}
	} catch ($Throwable& t) {
		fail($$str({"SingleMemberLongOvrdDef "_s, e, ": "_s, t}));
	}
}

void UnitTest::checkSingleMemberCharOvrdDef($AnnotatedElement* e) {
	$init(UnitTest);
	$load($SingleMemberCharWithDef);
	checkSingleMemberCharOvrdDef($$cast($SingleMemberCharWithDef, $nc(e)->getAnnotation($SingleMemberCharWithDef::class$)), e);
}

void UnitTest::checkSingleMemberCharOvrdDef($SingleMemberCharWithDef* a, $AnnotatedElement* e) {
	$init(UnitTest);
	$useLocalObjectStack();
	++UnitTest::numTests;
	try {
		if ($nc(a)->value() != u'5') {
			$var($StringBuilder, var$0, $new($StringBuilder));
			var$0->append("SingleMemberCharOvrdDef "_s);
			var$0->append(e);
			var$0->append(" = "_s);
			var$0->append(a->value());
			fail($$str(var$0));
		}
	} catch ($Throwable& t) {
		fail($$str({"SingleMemberCharOvrdDef "_s, e, ": "_s, t}));
	}
}

void UnitTest::checkSingleMemberFloatOvrdDef($AnnotatedElement* e) {
	$init(UnitTest);
	$load($SingleMemberFloatWithDef);
	checkSingleMemberFloatOvrdDef($$cast($SingleMemberFloatWithDef, $nc(e)->getAnnotation($SingleMemberFloatWithDef::class$)), e);
}

void UnitTest::checkSingleMemberFloatOvrdDef($SingleMemberFloatWithDef* a, $AnnotatedElement* e) {
	$init(UnitTest);
	$useLocalObjectStack();
	++UnitTest::numTests;
	try {
		if ($nc(a)->value() != 6.0f) {
			$var($StringBuilder, var$0, $new($StringBuilder));
			var$0->append("SingleMemberFloatOvrdDef "_s);
			var$0->append(e);
			var$0->append(" = "_s);
			var$0->append(a->value());
			fail($$str(var$0));
		}
	} catch ($Throwable& t) {
		fail($$str({"SingleMemberFloatOvrdDef "_s, e, ": "_s, t}));
	}
}

void UnitTest::checkSingleMemberDoubleOvrdDef($AnnotatedElement* e) {
	$init(UnitTest);
	$load($SingleMemberDoubleWithDef);
	checkSingleMemberDoubleOvrdDef($$cast($SingleMemberDoubleWithDef, $nc(e)->getAnnotation($SingleMemberDoubleWithDef::class$)), e);
}

void UnitTest::checkSingleMemberDoubleOvrdDef($SingleMemberDoubleWithDef* a, $AnnotatedElement* e) {
	$init(UnitTest);
	$useLocalObjectStack();
	++UnitTest::numTests;
	try {
		if ($nc(a)->value() != 7.0) {
			$var($StringBuilder, var$0, $new($StringBuilder));
			var$0->append("SingleMemberDoubleOvrdDef "_s);
			var$0->append(e);
			var$0->append(" = "_s);
			var$0->append(a->value());
			fail($$str(var$0));
		}
	} catch ($Throwable& t) {
		fail($$str({"SingleMemberDoubleOvrdDef "_s, e, ": "_s, t}));
	}
}

void UnitTest::checkSingleMemberBooleanOvrdDef($AnnotatedElement* e) {
	$init(UnitTest);
	$load($SingleMemberBooleanWithDef);
	checkSingleMemberBooleanOvrdDef($$cast($SingleMemberBooleanWithDef, $nc(e)->getAnnotation($SingleMemberBooleanWithDef::class$)), e);
}

void UnitTest::checkSingleMemberBooleanOvrdDef($SingleMemberBooleanWithDef* a, $AnnotatedElement* e) {
	$init(UnitTest);
	$useLocalObjectStack();
	++UnitTest::numTests;
	try {
		if (!$nc(a)->value()) {
			$var($StringBuilder, var$0, $new($StringBuilder));
			var$0->append("SingleMemberBooleanOvrdDef "_s);
			var$0->append(e);
			var$0->append(" = "_s);
			var$0->append(a->value());
			fail($$str(var$0));
		}
	} catch ($Throwable& t) {
		fail($$str({"SingleMemberBooleanOvrdDef "_s, e, ": "_s, t}));
	}
}

void UnitTest::checkSingleMemberStringOvrdDef($AnnotatedElement* e) {
	$init(UnitTest);
	$load($SingleMemberStringWithDef);
	checkSingleMemberStringOvrdDef($$cast($SingleMemberStringWithDef, $nc(e)->getAnnotation($SingleMemberStringWithDef::class$)), e);
}

void UnitTest::checkSingleMemberStringOvrdDef($SingleMemberStringWithDef* a, $AnnotatedElement* e) {
	$init(UnitTest);
	$useLocalObjectStack();
	++UnitTest::numTests;
	try {
		if (!($$nc($nc(a)->value())->equals("custom"_s))) {
			$var($StringBuilder, var$0, $new($StringBuilder));
			var$0->append("SingleMemberStringOvrdDef "_s);
			var$0->append(e);
			var$0->append(" = "_s);
			var$0->append($(a->value()));
			fail($$str(var$0));
		}
	} catch ($Throwable& t) {
		fail($$str({"SingleMemberStringOvrdDef "_s, e, ": "_s, t}));
	}
}

void UnitTest::checkSingleMemberClassOvrdDef($AnnotatedElement* e) {
	$init(UnitTest);
	$load($SingleMemberClassWithDef);
	checkSingleMemberClassOvrdDef($$cast($SingleMemberClassWithDef, $nc(e)->getAnnotation($SingleMemberClassWithDef::class$)), e);
}

void UnitTest::checkSingleMemberClassOvrdDef($SingleMemberClassWithDef* a, $AnnotatedElement* e) {
	$init(UnitTest);
	$useLocalObjectStack();
	++UnitTest::numTests;
	try {
		$load($Map);
		if ($nc(a)->value() != $Map::class$) {
			$var($StringBuilder, var$0, $new($StringBuilder));
			var$0->append("SingleMemberClassOvrdDef "_s);
			var$0->append(e);
			var$0->append(" = "_s);
			var$0->append(a->value());
			fail($$str(var$0));
		}
	} catch ($Throwable& t) {
		fail($$str({"SingleMemberClassOvrdDef "_s, e, ": "_s, t}));
	}
}

void UnitTest::checkSingleMemberEnumOvrdDef($AnnotatedElement* e) {
	$init(UnitTest);
	$load($SingleMemberEnumWithDef);
	checkSingleMemberEnumOvrdDef($$cast($SingleMemberEnumWithDef, $nc(e)->getAnnotation($SingleMemberEnumWithDef::class$)), e);
}

void UnitTest::checkSingleMemberEnumOvrdDef($SingleMemberEnumWithDef* a, $AnnotatedElement* e) {
	$init(UnitTest);
	$useLocalObjectStack();
	++UnitTest::numTests;
	try {
		$init($Stooge);
		if ($nc(a)->value() != $Stooge::MOE) {
			$var($StringBuilder, var$0, $new($StringBuilder));
			var$0->append("SingleMemberEnumOvrdDef "_s);
			var$0->append(e);
			var$0->append(" = "_s);
			var$0->append($(a->value()));
			fail($$str(var$0));
		}
	} catch ($Throwable& t) {
		fail($$str({"SingleMemberEnumOvrdDef "_s, e, ": "_s, t}));
	}
}

void UnitTest::checkSingleMemberByteAcceptDef($AnnotatedElement* e) {
	$init(UnitTest);
	$load($SingleMemberByteWithDef);
	checkSingleMemberByteAcceptDef($$cast($SingleMemberByteWithDef, $nc(e)->getAnnotation($SingleMemberByteWithDef::class$)), e);
}

void UnitTest::checkSingleMemberByteAcceptDef($SingleMemberByteWithDef* a, $AnnotatedElement* e) {
	$init(UnitTest);
	$useLocalObjectStack();
	++UnitTest::numTests;
	try {
		if ($nc(a)->value() != 11) {
			$var($StringBuilder, var$0, $new($StringBuilder));
			var$0->append("SingleMemberByteAcceptDef "_s);
			var$0->append(e);
			var$0->append(" = "_s);
			var$0->append(a->value());
			fail($$str(var$0));
		}
	} catch ($Throwable& t) {
		fail($$str({"SingleMemberByteAcceptDef "_s, e, ": "_s, t}));
	}
}

void UnitTest::checkSingleMemberShortAcceptDef($AnnotatedElement* e) {
	$init(UnitTest);
	$load($SingleMemberShortWithDef);
	checkSingleMemberShortAcceptDef($$cast($SingleMemberShortWithDef, $nc(e)->getAnnotation($SingleMemberShortWithDef::class$)), e);
}

void UnitTest::checkSingleMemberShortAcceptDef($SingleMemberShortWithDef* a, $AnnotatedElement* e) {
	$init(UnitTest);
	$useLocalObjectStack();
	++UnitTest::numTests;
	try {
		if ($nc(a)->value() != 12) {
			$var($StringBuilder, var$0, $new($StringBuilder));
			var$0->append("SingleMemberShortAcceptDef "_s);
			var$0->append(e);
			var$0->append(" = "_s);
			var$0->append(a->value());
			fail($$str(var$0));
		}
	} catch ($Throwable& t) {
		fail($$str({"SingleMemberShortAcceptDef "_s, e, ": "_s, t}));
	}
}

void UnitTest::checkSingleMemberIntAcceptDef($AnnotatedElement* e) {
	$init(UnitTest);
	$load($SingleMemberIntWithDef);
	checkSingleMemberIntAcceptDef($$cast($SingleMemberIntWithDef, $nc(e)->getAnnotation($SingleMemberIntWithDef::class$)), e);
}

void UnitTest::checkSingleMemberIntAcceptDef($SingleMemberIntWithDef* a, $AnnotatedElement* e) {
	$init(UnitTest);
	$useLocalObjectStack();
	++UnitTest::numTests;
	try {
		if ($nc(a)->value() != 13) {
			$var($StringBuilder, var$0, $new($StringBuilder));
			var$0->append("SingleMemberIntAcceptDef "_s);
			var$0->append(e);
			var$0->append(" = "_s);
			var$0->append(a->value());
			fail($$str(var$0));
		}
	} catch ($Throwable& t) {
		fail($$str({"SingleMemberIntAcceptDef "_s, e, ": "_s, t}));
	}
}

void UnitTest::checkSingleMemberLongAcceptDef($AnnotatedElement* e) {
	$init(UnitTest);
	$load($SingleMemberLongWithDef);
	checkSingleMemberLongAcceptDef($$cast($SingleMemberLongWithDef, $nc(e)->getAnnotation($SingleMemberLongWithDef::class$)), e);
}

void UnitTest::checkSingleMemberLongAcceptDef($SingleMemberLongWithDef* a, $AnnotatedElement* e) {
	$init(UnitTest);
	$useLocalObjectStack();
	++UnitTest::numTests;
	try {
		if ($nc(a)->value() != 14) {
			$var($StringBuilder, var$0, $new($StringBuilder));
			var$0->append("SingleMemberLongAcceptDef "_s);
			var$0->append(e);
			var$0->append(" = "_s);
			var$0->append(a->value());
			fail($$str(var$0));
		}
	} catch ($Throwable& t) {
		fail($$str({"SingleMemberLongAcceptDef "_s, e, ": "_s, t}));
	}
}

void UnitTest::checkSingleMemberCharAcceptDef($AnnotatedElement* e) {
	$init(UnitTest);
	$load($SingleMemberCharWithDef);
	checkSingleMemberCharAcceptDef($$cast($SingleMemberCharWithDef, $nc(e)->getAnnotation($SingleMemberCharWithDef::class$)), e);
}

void UnitTest::checkSingleMemberCharAcceptDef($SingleMemberCharWithDef* a, $AnnotatedElement* e) {
	$init(UnitTest);
	$useLocalObjectStack();
	++UnitTest::numTests;
	try {
		if ($nc(a)->value() != u'V') {
			$var($StringBuilder, var$0, $new($StringBuilder));
			var$0->append("SingleMemberCharAcceptDef "_s);
			var$0->append(e);
			var$0->append(" = "_s);
			var$0->append(a->value());
			fail($$str(var$0));
		}
	} catch ($Throwable& t) {
		fail($$str({"SingleMemberCharAcceptDef "_s, e, ": "_s, t}));
	}
}

void UnitTest::checkSingleMemberFloatAcceptDef($AnnotatedElement* e) {
	$init(UnitTest);
	$load($SingleMemberFloatWithDef);
	checkSingleMemberFloatAcceptDef($$cast($SingleMemberFloatWithDef, $nc(e)->getAnnotation($SingleMemberFloatWithDef::class$)), e);
}

void UnitTest::checkSingleMemberFloatAcceptDef($SingleMemberFloatWithDef* a, $AnnotatedElement* e) {
	$init(UnitTest);
	$useLocalObjectStack();
	++UnitTest::numTests;
	try {
		if ($nc(a)->value() != 16.0f) {
			$var($StringBuilder, var$0, $new($StringBuilder));
			var$0->append("SingleMemberFloatAcceptDef "_s);
			var$0->append(e);
			var$0->append(" = "_s);
			var$0->append(a->value());
			fail($$str(var$0));
		}
	} catch ($Throwable& t) {
		fail($$str({"SingleMemberFloatAcceptDef "_s, e, ": "_s, t}));
	}
}

void UnitTest::checkSingleMemberDoubleAcceptDef($AnnotatedElement* e) {
	$init(UnitTest);
	$load($SingleMemberDoubleWithDef);
	checkSingleMemberDoubleAcceptDef($$cast($SingleMemberDoubleWithDef, $nc(e)->getAnnotation($SingleMemberDoubleWithDef::class$)), e);
}

void UnitTest::checkSingleMemberDoubleAcceptDef($SingleMemberDoubleWithDef* a, $AnnotatedElement* e) {
	$init(UnitTest);
	$useLocalObjectStack();
	++UnitTest::numTests;
	try {
		if ($nc(a)->value() != 17.0) {
			$var($StringBuilder, var$0, $new($StringBuilder));
			var$0->append("SingleMemberDoubleAcceptDef "_s);
			var$0->append(e);
			var$0->append(" = "_s);
			var$0->append(a->value());
			fail($$str(var$0));
		}
	} catch ($Throwable& t) {
		fail($$str({"SingleMemberDoubleAcceptDef "_s, e, ": "_s, t}));
	}
}

void UnitTest::checkSingleMemberBooleanAcceptDef($AnnotatedElement* e) {
	$init(UnitTest);
	$load($SingleMemberBooleanWithDef);
	checkSingleMemberBooleanAcceptDef($$cast($SingleMemberBooleanWithDef, $nc(e)->getAnnotation($SingleMemberBooleanWithDef::class$)), e);
}

void UnitTest::checkSingleMemberBooleanAcceptDef($SingleMemberBooleanWithDef* a, $AnnotatedElement* e) {
	$init(UnitTest);
	$useLocalObjectStack();
	++UnitTest::numTests;
	try {
		if ($nc(a)->value()) {
			$var($StringBuilder, var$0, $new($StringBuilder));
			var$0->append("SingleMemberBooleanAcceptDef "_s);
			var$0->append(e);
			var$0->append(" = "_s);
			var$0->append(a->value());
			fail($$str(var$0));
		}
	} catch ($Throwable& t) {
		fail($$str({"SingleMemberBooleanAcceptDef "_s, e, ": "_s, t}));
	}
}

void UnitTest::checkSingleMemberStringAcceptDef($AnnotatedElement* e) {
	$init(UnitTest);
	$load($SingleMemberStringWithDef);
	checkSingleMemberStringAcceptDef($$cast($SingleMemberStringWithDef, $nc(e)->getAnnotation($SingleMemberStringWithDef::class$)), e);
}

void UnitTest::checkSingleMemberStringAcceptDef($SingleMemberStringWithDef* a, $AnnotatedElement* e) {
	$init(UnitTest);
	$useLocalObjectStack();
	++UnitTest::numTests;
	try {
		if (!($$nc($nc(a)->value())->equals("default"_s))) {
			$var($StringBuilder, var$0, $new($StringBuilder));
			var$0->append("SingleMemberStringAcceptDef "_s);
			var$0->append(e);
			var$0->append(" = "_s);
			var$0->append($(a->value()));
			fail($$str(var$0));
		}
	} catch ($Throwable& t) {
		fail($$str({"SingleMemberStringAcceptDef "_s, e, ": "_s, t}));
	}
}

void UnitTest::checkSingleMemberClassAcceptDef($AnnotatedElement* e) {
	$init(UnitTest);
	$load($SingleMemberClassWithDef);
	checkSingleMemberClassAcceptDef($$cast($SingleMemberClassWithDef, $nc(e)->getAnnotation($SingleMemberClassWithDef::class$)), e);
}

void UnitTest::checkSingleMemberClassAcceptDef($SingleMemberClassWithDef* a, $AnnotatedElement* e) {
	$init(UnitTest);
	$useLocalObjectStack();
	++UnitTest::numTests;
	try {
		if ($nc(a)->value() != $Class::class$) {
			$var($StringBuilder, var$0, $new($StringBuilder));
			var$0->append("SingleMemberClassAcceptDef "_s);
			var$0->append(e);
			var$0->append(" = "_s);
			var$0->append(a->value());
			fail($$str(var$0));
		}
	} catch ($Throwable& t) {
		fail($$str({"SingleMemberClassAcceptDef "_s, e, ": "_s, t}));
	}
}

void UnitTest::checkSingleMemberEnumAcceptDef($AnnotatedElement* e) {
	$init(UnitTest);
	$load($SingleMemberEnumWithDef);
	checkSingleMemberEnumAcceptDef($$cast($SingleMemberEnumWithDef, $nc(e)->getAnnotation($SingleMemberEnumWithDef::class$)), e);
}

void UnitTest::checkSingleMemberEnumAcceptDef($SingleMemberEnumWithDef* a, $AnnotatedElement* e) {
	$init(UnitTest);
	$useLocalObjectStack();
	++UnitTest::numTests;
	try {
		$init($Stooge);
		if ($nc(a)->value() != $Stooge::LARRY) {
			$var($StringBuilder, var$0, $new($StringBuilder));
			var$0->append("SingleMemberEnumAcceptDef "_s);
			var$0->append(e);
			var$0->append(" = "_s);
			var$0->append($(a->value()));
			fail($$str(var$0));
		}
	} catch ($Throwable& t) {
		fail($$str({"SingleMemberEnumAcceptDef "_s, e, ": "_s, t}));
	}
}

void UnitTest::checkSingleMemberByteArrEmpty($AnnotatedElement* e) {
	$init(UnitTest);
	$load($SingleMemberByteArray);
	checkSingleMemberByteArrEmpty($$cast($SingleMemberByteArray, $nc(e)->getAnnotation($SingleMemberByteArray::class$)), e);
}

void UnitTest::checkSingleMemberByteArrEmpty($SingleMemberByteArray* a, $AnnotatedElement* e) {
	$init(UnitTest);
	$useLocalObjectStack();
	++UnitTest::numTests;
	try {
		if ($nc($($nc(a)->value()))->length != 0) {
			$var($StringBuilder, var$0, $new($StringBuilder));
			var$0->append("SingleMemberByteArrEmpty "_s);
			var$0->append(e);
			var$0->append(" = "_s);
			var$0->append($(a->value()));
			fail($$str(var$0));
		}
	} catch ($Throwable& t) {
		fail($$str({"SingleMemberByteArrEmpty "_s, e, ": "_s, t}));
	}
}

void UnitTest::checkSingleMemberShortArrEmpty($AnnotatedElement* e) {
	$init(UnitTest);
	$load($SingleMemberShortArray);
	checkSingleMemberShortArrEmpty($$cast($SingleMemberShortArray, $nc(e)->getAnnotation($SingleMemberShortArray::class$)), e);
}

void UnitTest::checkSingleMemberShortArrEmpty($SingleMemberShortArray* a, $AnnotatedElement* e) {
	$init(UnitTest);
	$useLocalObjectStack();
	++UnitTest::numTests;
	try {
		if ($nc($($nc(a)->value()))->length != 0) {
			$var($StringBuilder, var$0, $new($StringBuilder));
			var$0->append("SingleMemberShortArrEmpty "_s);
			var$0->append(e);
			var$0->append(" = "_s);
			var$0->append($(a->value()));
			fail($$str(var$0));
		}
	} catch ($Throwable& t) {
		fail($$str({"SingleMemberShortArrEmpty "_s, e, ": "_s, t}));
	}
}

void UnitTest::checkSingleMemberIntArrEmpty($AnnotatedElement* e) {
	$init(UnitTest);
	$load($SingleMemberIntArray);
	checkSingleMemberIntArrEmpty($$cast($SingleMemberIntArray, $nc(e)->getAnnotation($SingleMemberIntArray::class$)), e);
}

void UnitTest::checkSingleMemberIntArrEmpty($SingleMemberIntArray* a, $AnnotatedElement* e) {
	$init(UnitTest);
	$useLocalObjectStack();
	++UnitTest::numTests;
	try {
		if ($nc($($nc(a)->value()))->length != 0) {
			$var($StringBuilder, var$0, $new($StringBuilder));
			var$0->append("SingleMemberIntArrEmpty "_s);
			var$0->append(e);
			var$0->append(" = "_s);
			var$0->append($(a->value()));
			fail($$str(var$0));
		}
	} catch ($Throwable& t) {
		fail($$str({"SingleMemberIntArrEmpty "_s, e, ": "_s, t}));
	}
}

void UnitTest::checkSingleMemberLongArrEmpty($AnnotatedElement* e) {
	$init(UnitTest);
	$load($SingleMemberLongArray);
	checkSingleMemberLongArrEmpty($$cast($SingleMemberLongArray, $nc(e)->getAnnotation($SingleMemberLongArray::class$)), e);
}

void UnitTest::checkSingleMemberLongArrEmpty($SingleMemberLongArray* a, $AnnotatedElement* e) {
	$init(UnitTest);
	$useLocalObjectStack();
	++UnitTest::numTests;
	try {
		if ($nc($($nc(a)->value()))->length != 0) {
			$var($StringBuilder, var$0, $new($StringBuilder));
			var$0->append("SingleMemberLongArrEmpty "_s);
			var$0->append(e);
			var$0->append(" = "_s);
			var$0->append($(a->value()));
			fail($$str(var$0));
		}
	} catch ($Throwable& t) {
		fail($$str({"SingleMemberLongArrEmpty "_s, e, ": "_s, t}));
	}
}

void UnitTest::checkSingleMemberCharArrEmpty($AnnotatedElement* e) {
	$init(UnitTest);
	$load($SingleMemberCharArray);
	checkSingleMemberCharArrEmpty($$cast($SingleMemberCharArray, $nc(e)->getAnnotation($SingleMemberCharArray::class$)), e);
}

void UnitTest::checkSingleMemberCharArrEmpty($SingleMemberCharArray* a, $AnnotatedElement* e) {
	$init(UnitTest);
	$useLocalObjectStack();
	++UnitTest::numTests;
	try {
		if ($nc($($nc(a)->value()))->length != 0) {
			$var($StringBuilder, var$0, $new($StringBuilder));
			var$0->append("SingleMemberCharArrEmpty "_s);
			var$0->append(e);
			var$0->append(" = "_s);
			var$0->append($(a->value()));
			fail($$str(var$0));
		}
	} catch ($Throwable& t) {
		fail($$str({"SingleMemberCharArrEmpty "_s, e, ": "_s, t}));
	}
}

void UnitTest::checkSingleMemberFloatArrEmpty($AnnotatedElement* e) {
	$init(UnitTest);
	$load($SingleMemberFloatArray);
	checkSingleMemberFloatArrEmpty($$cast($SingleMemberFloatArray, $nc(e)->getAnnotation($SingleMemberFloatArray::class$)), e);
}

void UnitTest::checkSingleMemberFloatArrEmpty($SingleMemberFloatArray* a, $AnnotatedElement* e) {
	$init(UnitTest);
	$useLocalObjectStack();
	++UnitTest::numTests;
	try {
		if ($nc($($nc(a)->value()))->length != 0) {
			$var($StringBuilder, var$0, $new($StringBuilder));
			var$0->append("SingleMemberFloatArrEmpty "_s);
			var$0->append(e);
			var$0->append(" = "_s);
			var$0->append($(a->value()));
			fail($$str(var$0));
		}
	} catch ($Throwable& t) {
		fail($$str({"SingleMemberFloatArrEmpty "_s, e, ": "_s, t}));
	}
}

void UnitTest::checkSingleMemberDoubleArrEmpty($AnnotatedElement* e) {
	$init(UnitTest);
	$load($SingleMemberDoubleArray);
	checkSingleMemberDoubleArrEmpty($$cast($SingleMemberDoubleArray, $nc(e)->getAnnotation($SingleMemberDoubleArray::class$)), e);
}

void UnitTest::checkSingleMemberDoubleArrEmpty($SingleMemberDoubleArray* a, $AnnotatedElement* e) {
	$init(UnitTest);
	$useLocalObjectStack();
	++UnitTest::numTests;
	try {
		if ($nc($($nc(a)->value()))->length != 0) {
			$var($StringBuilder, var$0, $new($StringBuilder));
			var$0->append("SingleMemberDoubleArrEmpty "_s);
			var$0->append(e);
			var$0->append(" = "_s);
			var$0->append($(a->value()));
			fail($$str(var$0));
		}
	} catch ($Throwable& t) {
		fail($$str({"SingleMemberDoubleArrEmpty "_s, e, ": "_s, t}));
	}
}

void UnitTest::checkSingleMemberBooleanArrEmpty($AnnotatedElement* e) {
	$init(UnitTest);
	$load($SingleMemberBooleanArray);
	checkSingleMemberBooleanArrEmpty($$cast($SingleMemberBooleanArray, $nc(e)->getAnnotation($SingleMemberBooleanArray::class$)), e);
}

void UnitTest::checkSingleMemberBooleanArrEmpty($SingleMemberBooleanArray* a, $AnnotatedElement* e) {
	$init(UnitTest);
	$useLocalObjectStack();
	++UnitTest::numTests;
	try {
		if ($nc($($nc(a)->value()))->length != 0) {
			$var($StringBuilder, var$0, $new($StringBuilder));
			var$0->append("SingleMemberBooleanArrEmpty "_s);
			var$0->append(e);
			var$0->append(" = "_s);
			var$0->append($(a->value()));
			fail($$str(var$0));
		}
	} catch ($Throwable& t) {
		fail($$str({"SingleMemberBooleanArrEmpty "_s, e, ": "_s, t}));
	}
}

void UnitTest::checkSingleMemberStringArrEmpty($AnnotatedElement* e) {
	$init(UnitTest);
	$load($SingleMemberStringArray);
	checkSingleMemberStringArrEmpty($$cast($SingleMemberStringArray, $nc(e)->getAnnotation($SingleMemberStringArray::class$)), e);
}

void UnitTest::checkSingleMemberStringArrEmpty($SingleMemberStringArray* a, $AnnotatedElement* e) {
	$init(UnitTest);
	$useLocalObjectStack();
	++UnitTest::numTests;
	try {
		if ($nc($($nc(a)->value()))->length != 0) {
			$var($StringBuilder, var$0, $new($StringBuilder));
			var$0->append("SingleMemberStringArrEmpty "_s);
			var$0->append(e);
			var$0->append(" = "_s);
			var$0->append($(a->value()));
			fail($$str(var$0));
		}
	} catch ($Throwable& t) {
		fail($$str({"SingleMemberStringArrEmpty "_s, e, ": "_s, t}));
	}
}

void UnitTest::checkSingleMemberClassArrEmpty($AnnotatedElement* e) {
	$init(UnitTest);
	$load($SingleMemberClassArray);
	checkSingleMemberClassArrEmpty($$cast($SingleMemberClassArray, $nc(e)->getAnnotation($SingleMemberClassArray::class$)), e);
}

void UnitTest::checkSingleMemberClassArrEmpty($SingleMemberClassArray* a, $AnnotatedElement* e) {
	$init(UnitTest);
	$useLocalObjectStack();
	++UnitTest::numTests;
	try {
		if ($nc($($nc(a)->value()))->length != 0) {
			$var($StringBuilder, var$0, $new($StringBuilder));
			var$0->append("SingleMemberClassArrEmpty "_s);
			var$0->append(e);
			var$0->append(" = "_s);
			var$0->append($(a->value()));
			fail($$str(var$0));
		}
	} catch ($Throwable& t) {
		fail($$str({"SingleMemberClassArrEmpty "_s, e, ": "_s, t}));
	}
}

void UnitTest::checkSingleMemberEnumArrEmpty($AnnotatedElement* e) {
	$init(UnitTest);
	$load($SingleMemberEnumArray);
	checkSingleMemberEnumArrEmpty($$cast($SingleMemberEnumArray, $nc(e)->getAnnotation($SingleMemberEnumArray::class$)), e);
}

void UnitTest::checkSingleMemberEnumArrEmpty($SingleMemberEnumArray* a, $AnnotatedElement* e) {
	$init(UnitTest);
	$useLocalObjectStack();
	++UnitTest::numTests;
	try {
		if ($nc($($nc(a)->value()))->length != 0) {
			$var($StringBuilder, var$0, $new($StringBuilder));
			var$0->append("SingleMemberEnumArrEmpty "_s);
			var$0->append(e);
			var$0->append(" = "_s);
			var$0->append($(a->value()));
			fail($$str(var$0));
		}
	} catch ($Throwable& t) {
		fail($$str({"SingleMemberEnumArrEmpty "_s, e, ": "_s, t}));
	}
}

void UnitTest::checkSingleMemberByteArrOne($AnnotatedElement* e) {
	$init(UnitTest);
	$load($SingleMemberByteArray);
	checkSingleMemberByteArrOne($$cast($SingleMemberByteArray, $nc(e)->getAnnotation($SingleMemberByteArray::class$)), e);
}

void UnitTest::checkSingleMemberByteArrOne($SingleMemberByteArray* a, $AnnotatedElement* e) {
	$init(UnitTest);
	$useLocalObjectStack();
	++UnitTest::numTests;
	try {
		bool var$0 = $nc($($nc(a)->value()))->length != 1;
		if (var$0 || $nc($(a->value()))->get(0) != (int8_t)1) {
			$var($StringBuilder, var$1, $new($StringBuilder));
			var$1->append("SingleMemberByteArrOne "_s);
			var$1->append(e);
			var$1->append(" = "_s);
			var$1->append($(a->value()));
			fail($$str(var$1));
		}
	} catch ($Throwable& t) {
		fail($$str({"SingleMemberByteArrOne "_s, e, ": "_s, t}));
	}
}

void UnitTest::checkSingleMemberShortArrOne($AnnotatedElement* e) {
	$init(UnitTest);
	$load($SingleMemberShortArray);
	checkSingleMemberShortArrOne($$cast($SingleMemberShortArray, $nc(e)->getAnnotation($SingleMemberShortArray::class$)), e);
}

void UnitTest::checkSingleMemberShortArrOne($SingleMemberShortArray* a, $AnnotatedElement* e) {
	$init(UnitTest);
	$useLocalObjectStack();
	++UnitTest::numTests;
	try {
		bool var$0 = $nc($($nc(a)->value()))->length != 1;
		if (var$0 || $nc($(a->value()))->get(0) != (int16_t)2) {
			$var($StringBuilder, var$1, $new($StringBuilder));
			var$1->append("SingleMemberShortArrOne "_s);
			var$1->append(e);
			var$1->append(" = "_s);
			var$1->append($(a->value()));
			fail($$str(var$1));
		}
	} catch ($Throwable& t) {
		fail($$str({"SingleMemberShortArrOne "_s, e, ": "_s, t}));
	}
}

void UnitTest::checkSingleMemberIntArrOne($AnnotatedElement* e) {
	$init(UnitTest);
	$load($SingleMemberIntArray);
	checkSingleMemberIntArrOne($$cast($SingleMemberIntArray, $nc(e)->getAnnotation($SingleMemberIntArray::class$)), e);
}

void UnitTest::checkSingleMemberIntArrOne($SingleMemberIntArray* a, $AnnotatedElement* e) {
	$init(UnitTest);
	$useLocalObjectStack();
	++UnitTest::numTests;
	try {
		bool var$0 = $nc($($nc(a)->value()))->length != 1;
		if (var$0 || $nc($(a->value()))->get(0) != 3) {
			$var($StringBuilder, var$1, $new($StringBuilder));
			var$1->append("SingleMemberIntArrOne "_s);
			var$1->append(e);
			var$1->append(" = "_s);
			var$1->append($(a->value()));
			fail($$str(var$1));
		}
	} catch ($Throwable& t) {
		fail($$str({"SingleMemberIntArrOne "_s, e, ": "_s, t}));
	}
}

void UnitTest::checkSingleMemberLongArrOne($AnnotatedElement* e) {
	$init(UnitTest);
	$load($SingleMemberLongArray);
	checkSingleMemberLongArrOne($$cast($SingleMemberLongArray, $nc(e)->getAnnotation($SingleMemberLongArray::class$)), e);
}

void UnitTest::checkSingleMemberLongArrOne($SingleMemberLongArray* a, $AnnotatedElement* e) {
	$init(UnitTest);
	$useLocalObjectStack();
	++UnitTest::numTests;
	try {
		bool var$0 = $nc($($nc(a)->value()))->length != 1;
		if (var$0 || $nc($(a->value()))->get(0) != 4) {
			$var($StringBuilder, var$1, $new($StringBuilder));
			var$1->append("SingleMemberLongArrOne "_s);
			var$1->append(e);
			var$1->append(" = "_s);
			var$1->append($(a->value()));
			fail($$str(var$1));
		}
	} catch ($Throwable& t) {
		fail($$str({"SingleMemberLongArrOne "_s, e, ": "_s, t}));
	}
}

void UnitTest::checkSingleMemberCharArrOne($AnnotatedElement* e) {
	$init(UnitTest);
	$load($SingleMemberCharArray);
	checkSingleMemberCharArrOne($$cast($SingleMemberCharArray, $nc(e)->getAnnotation($SingleMemberCharArray::class$)), e);
}

void UnitTest::checkSingleMemberCharArrOne($SingleMemberCharArray* a, $AnnotatedElement* e) {
	$init(UnitTest);
	$useLocalObjectStack();
	++UnitTest::numTests;
	try {
		bool var$0 = $nc($($nc(a)->value()))->length != 1;
		if (var$0 || $nc($(a->value()))->get(0) != u'5') {
			$var($StringBuilder, var$1, $new($StringBuilder));
			var$1->append("SingleMemberCharArrOne "_s);
			var$1->append(e);
			var$1->append(" = "_s);
			var$1->append($(a->value()));
			fail($$str(var$1));
		}
	} catch ($Throwable& t) {
		fail($$str({"SingleMemberCharArrOne "_s, e, ": "_s, t}));
	}
}

void UnitTest::checkSingleMemberFloatArrOne($AnnotatedElement* e) {
	$init(UnitTest);
	$load($SingleMemberFloatArray);
	checkSingleMemberFloatArrOne($$cast($SingleMemberFloatArray, $nc(e)->getAnnotation($SingleMemberFloatArray::class$)), e);
}

void UnitTest::checkSingleMemberFloatArrOne($SingleMemberFloatArray* a, $AnnotatedElement* e) {
	$init(UnitTest);
	$useLocalObjectStack();
	++UnitTest::numTests;
	try {
		bool var$0 = $nc($($nc(a)->value()))->length != 1;
		if (var$0 || $nc($(a->value()))->get(0) != 6.0f) {
			$var($StringBuilder, var$1, $new($StringBuilder));
			var$1->append("SingleMemberFloatArrOne "_s);
			var$1->append(e);
			var$1->append(" = "_s);
			var$1->append($(a->value()));
			fail($$str(var$1));
		}
	} catch ($Throwable& t) {
		fail($$str({"SingleMemberFloatArrOne "_s, e, ": "_s, t}));
	}
}

void UnitTest::checkSingleMemberDoubleArrOne($AnnotatedElement* e) {
	$init(UnitTest);
	$load($SingleMemberDoubleArray);
	checkSingleMemberDoubleArrOne($$cast($SingleMemberDoubleArray, $nc(e)->getAnnotation($SingleMemberDoubleArray::class$)), e);
}

void UnitTest::checkSingleMemberDoubleArrOne($SingleMemberDoubleArray* a, $AnnotatedElement* e) {
	$init(UnitTest);
	$useLocalObjectStack();
	++UnitTest::numTests;
	try {
		bool var$0 = $nc($($nc(a)->value()))->length != 1;
		if (var$0 || $nc($(a->value()))->get(0) != 7.0) {
			$var($StringBuilder, var$1, $new($StringBuilder));
			var$1->append("SingleMemberDoubleArrOne "_s);
			var$1->append(e);
			var$1->append(" = "_s);
			var$1->append($(a->value()));
			fail($$str(var$1));
		}
	} catch ($Throwable& t) {
		fail($$str({"SingleMemberDoubleArrOne "_s, e, ": "_s, t}));
	}
}

void UnitTest::checkSingleMemberBooleanArrOne($AnnotatedElement* e) {
	$init(UnitTest);
	$load($SingleMemberBooleanArray);
	checkSingleMemberBooleanArrOne($$cast($SingleMemberBooleanArray, $nc(e)->getAnnotation($SingleMemberBooleanArray::class$)), e);
}

void UnitTest::checkSingleMemberBooleanArrOne($SingleMemberBooleanArray* a, $AnnotatedElement* e) {
	$init(UnitTest);
	$useLocalObjectStack();
	++UnitTest::numTests;
	try {
		bool var$0 = $nc($($nc(a)->value()))->length != 1;
		if (var$0 || !$nc($(a->value()))->get(0)) {
			$var($StringBuilder, var$1, $new($StringBuilder));
			var$1->append("SingleMemberBooleanArrOne "_s);
			var$1->append(e);
			var$1->append(" = "_s);
			var$1->append($(a->value()));
			fail($$str(var$1));
		}
	} catch ($Throwable& t) {
		fail($$str({"SingleMemberBooleanArrOne "_s, e, ": "_s, t}));
	}
}

void UnitTest::checkSingleMemberStringArrOne($AnnotatedElement* e) {
	$init(UnitTest);
	$load($SingleMemberStringArray);
	checkSingleMemberStringArrOne($$cast($SingleMemberStringArray, $nc(e)->getAnnotation($SingleMemberStringArray::class$)), e);
}

void UnitTest::checkSingleMemberStringArrOne($SingleMemberStringArray* a, $AnnotatedElement* e) {
	$init(UnitTest);
	$useLocalObjectStack();
	++UnitTest::numTests;
	try {
		bool var$0 = $nc($($nc(a)->value()))->length != 1;
		if (var$0 || !($nc($nc($(a->value()))->get(0))->equals("custom"_s))) {
			$var($StringBuilder, var$1, $new($StringBuilder));
			var$1->append("SingleMemberStringArrOne "_s);
			var$1->append(e);
			var$1->append(" = "_s);
			var$1->append($(a->value()));
			fail($$str(var$1));
		}
	} catch ($Throwable& t) {
		fail($$str({"SingleMemberStringArrOne "_s, e, ": "_s, t}));
	}
}

void UnitTest::checkSingleMemberClassArrOne($AnnotatedElement* e) {
	$init(UnitTest);
	$load($SingleMemberClassArray);
	checkSingleMemberClassArrOne($$cast($SingleMemberClassArray, $nc(e)->getAnnotation($SingleMemberClassArray::class$)), e);
}

void UnitTest::checkSingleMemberClassArrOne($SingleMemberClassArray* a, $AnnotatedElement* e) {
	$init(UnitTest);
	$useLocalObjectStack();
	++UnitTest::numTests;
	try {
		bool var$0 = $nc($($nc(a)->value()))->length != 1;
		$load($Map);
		if (var$0 || $nc($(a->value()))->get(0) != $Map::class$) {
			$var($StringBuilder, var$1, $new($StringBuilder));
			var$1->append("SingleMemberClassArrOne "_s);
			var$1->append(e);
			var$1->append(" = "_s);
			var$1->append($(a->value()));
			fail($$str(var$1));
		}
	} catch ($Throwable& t) {
		fail($$str({"SingleMemberClassArrOne "_s, e, ": "_s, t}));
	}
}

void UnitTest::checkSingleMemberEnumArrOne($AnnotatedElement* e) {
	$init(UnitTest);
	$load($SingleMemberEnumArray);
	checkSingleMemberEnumArrOne($$cast($SingleMemberEnumArray, $nc(e)->getAnnotation($SingleMemberEnumArray::class$)), e);
}

void UnitTest::checkSingleMemberEnumArrOne($SingleMemberEnumArray* a, $AnnotatedElement* e) {
	$init(UnitTest);
	$useLocalObjectStack();
	++UnitTest::numTests;
	try {
		bool var$0 = $nc($($nc(a)->value()))->length != 1;
		if (var$0 || $nc($(a->value()))->get(0) != $Stooge::MOE) {
			$var($StringBuilder, var$1, $new($StringBuilder));
			var$1->append("SingleMemberEnumArrOne "_s);
			var$1->append(e);
			var$1->append(" = "_s);
			var$1->append($(a->value()));
			fail($$str(var$1));
		}
	} catch ($Throwable& t) {
		fail($$str({"SingleMemberEnumArrOne "_s, e, ": "_s, t}));
	}
}

void UnitTest::checkSingleMemberByteArrTwo($AnnotatedElement* e) {
	$init(UnitTest);
	$load($SingleMemberByteArray);
	checkSingleMemberByteArrTwo($$cast($SingleMemberByteArray, $nc(e)->getAnnotation($SingleMemberByteArray::class$)), e);
}

void UnitTest::checkSingleMemberByteArrTwo($SingleMemberByteArray* a, $AnnotatedElement* e) {
	$init(UnitTest);
	$useLocalObjectStack();
	++UnitTest::numTests;
	try {
		bool var$1 = $nc($($nc(a)->value()))->length != 2;
		bool var$0 = var$1 || $nc($(a->value()))->get(0) != (int8_t)1;
		if (var$0 || $nc($(a->value()))->get(1) != (int8_t)2) {
			$var($StringBuilder, var$2, $new($StringBuilder));
			var$2->append("SingleMemberByteArrTwo "_s);
			var$2->append(e);
			var$2->append(" = "_s);
			var$2->append($(a->value()));
			fail($$str(var$2));
		}
	} catch ($Throwable& t) {
		fail($$str({"SingleMemberByteArrTwo "_s, e, ": "_s, t}));
	}
}

void UnitTest::checkSingleMemberShortArrTwo($AnnotatedElement* e) {
	$init(UnitTest);
	$load($SingleMemberShortArray);
	checkSingleMemberShortArrTwo($$cast($SingleMemberShortArray, $nc(e)->getAnnotation($SingleMemberShortArray::class$)), e);
}

void UnitTest::checkSingleMemberShortArrTwo($SingleMemberShortArray* a, $AnnotatedElement* e) {
	$init(UnitTest);
	$useLocalObjectStack();
	++UnitTest::numTests;
	try {
		bool var$1 = $nc($($nc(a)->value()))->length != 2;
		bool var$0 = var$1 || $nc($(a->value()))->get(0) != (int16_t)2;
		if (var$0 || $nc($(a->value()))->get(1) != (int16_t)3) {
			$var($StringBuilder, var$2, $new($StringBuilder));
			var$2->append("SingleMemberShortArrTwo "_s);
			var$2->append(e);
			var$2->append(" = "_s);
			var$2->append($(a->value()));
			fail($$str(var$2));
		}
	} catch ($Throwable& t) {
		fail($$str({"SingleMemberShortArrTwo "_s, e, ": "_s, t}));
	}
}

void UnitTest::checkSingleMemberIntArrTwo($AnnotatedElement* e) {
	$init(UnitTest);
	$load($SingleMemberIntArray);
	checkSingleMemberIntArrTwo($$cast($SingleMemberIntArray, $nc(e)->getAnnotation($SingleMemberIntArray::class$)), e);
}

void UnitTest::checkSingleMemberIntArrTwo($SingleMemberIntArray* a, $AnnotatedElement* e) {
	$init(UnitTest);
	$useLocalObjectStack();
	++UnitTest::numTests;
	try {
		bool var$1 = $nc($($nc(a)->value()))->length != 2;
		bool var$0 = var$1 || $nc($(a->value()))->get(0) != 3;
		if (var$0 || $nc($(a->value()))->get(1) != 4) {
			$var($StringBuilder, var$2, $new($StringBuilder));
			var$2->append("SingleMemberIntArrTwo "_s);
			var$2->append(e);
			var$2->append(" = "_s);
			var$2->append($(a->value()));
			fail($$str(var$2));
		}
	} catch ($Throwable& t) {
		fail($$str({"SingleMemberIntArrTwo "_s, e, ": "_s, t}));
	}
}

void UnitTest::checkSingleMemberLongArrTwo($AnnotatedElement* e) {
	$init(UnitTest);
	$load($SingleMemberLongArray);
	checkSingleMemberLongArrTwo($$cast($SingleMemberLongArray, $nc(e)->getAnnotation($SingleMemberLongArray::class$)), e);
}

void UnitTest::checkSingleMemberLongArrTwo($SingleMemberLongArray* a, $AnnotatedElement* e) {
	$init(UnitTest);
	$useLocalObjectStack();
	++UnitTest::numTests;
	try {
		bool var$1 = $nc($($nc(a)->value()))->length != 2;
		bool var$0 = var$1 || $nc($(a->value()))->get(0) != 4;
		if (var$0 || $nc($(a->value()))->get(1) != 5) {
			$var($StringBuilder, var$2, $new($StringBuilder));
			var$2->append("SingleMemberLongArrTwo "_s);
			var$2->append(e);
			var$2->append(" = "_s);
			var$2->append($(a->value()));
			fail($$str(var$2));
		}
	} catch ($Throwable& t) {
		fail($$str({"SingleMemberLongArrTwo "_s, e, ": "_s, t}));
	}
}

void UnitTest::checkSingleMemberCharArrTwo($AnnotatedElement* e) {
	$init(UnitTest);
	$load($SingleMemberCharArray);
	checkSingleMemberCharArrTwo($$cast($SingleMemberCharArray, $nc(e)->getAnnotation($SingleMemberCharArray::class$)), e);
}

void UnitTest::checkSingleMemberCharArrTwo($SingleMemberCharArray* a, $AnnotatedElement* e) {
	$init(UnitTest);
	$useLocalObjectStack();
	++UnitTest::numTests;
	try {
		bool var$1 = $nc($($nc(a)->value()))->length != 2;
		bool var$0 = var$1 || $nc($(a->value()))->get(0) != u'5';
		if (var$0 || $nc($(a->value()))->get(1) != u'6') {
			$var($StringBuilder, var$2, $new($StringBuilder));
			var$2->append("SingleMemberCharArrTwo "_s);
			var$2->append(e);
			var$2->append(" = "_s);
			var$2->append($(a->value()));
			fail($$str(var$2));
		}
	} catch ($Throwable& t) {
		fail($$str({"SingleMemberCharArrTwo "_s, e, ": "_s, t}));
	}
}

void UnitTest::checkSingleMemberFloatArrTwo($AnnotatedElement* e) {
	$init(UnitTest);
	$load($SingleMemberFloatArray);
	checkSingleMemberFloatArrTwo($$cast($SingleMemberFloatArray, $nc(e)->getAnnotation($SingleMemberFloatArray::class$)), e);
}

void UnitTest::checkSingleMemberFloatArrTwo($SingleMemberFloatArray* a, $AnnotatedElement* e) {
	$init(UnitTest);
	$useLocalObjectStack();
	++UnitTest::numTests;
	try {
		bool var$1 = $nc($($nc(a)->value()))->length != 2;
		bool var$0 = var$1 || $nc($(a->value()))->get(0) != 6.0f;
		if (var$0 || $nc($(a->value()))->get(1) != 7.0f) {
			$var($StringBuilder, var$2, $new($StringBuilder));
			var$2->append("SingleMemberFloatArrTwo "_s);
			var$2->append(e);
			var$2->append(" = "_s);
			var$2->append($(a->value()));
			fail($$str(var$2));
		}
	} catch ($Throwable& t) {
		fail($$str({"SingleMemberFloatArrTwo "_s, e, ": "_s, t}));
	}
}

void UnitTest::checkSingleMemberDoubleArrTwo($AnnotatedElement* e) {
	$init(UnitTest);
	$load($SingleMemberDoubleArray);
	checkSingleMemberDoubleArrTwo($$cast($SingleMemberDoubleArray, $nc(e)->getAnnotation($SingleMemberDoubleArray::class$)), e);
}

void UnitTest::checkSingleMemberDoubleArrTwo($SingleMemberDoubleArray* a, $AnnotatedElement* e) {
	$init(UnitTest);
	$useLocalObjectStack();
	++UnitTest::numTests;
	try {
		bool var$1 = $nc($($nc(a)->value()))->length != 2;
		bool var$0 = var$1 || $nc($(a->value()))->get(0) != 7.0;
		if (var$0 || $nc($(a->value()))->get(1) != 8.0) {
			$var($StringBuilder, var$2, $new($StringBuilder));
			var$2->append("SingleMemberDoubleArrTwo "_s);
			var$2->append(e);
			var$2->append(" = "_s);
			var$2->append($(a->value()));
			fail($$str(var$2));
		}
	} catch ($Throwable& t) {
		fail($$str({"SingleMemberDoubleArrTwo "_s, e, ": "_s, t}));
	}
}

void UnitTest::checkSingleMemberBooleanArrTwo($AnnotatedElement* e) {
	$init(UnitTest);
	$load($SingleMemberBooleanArray);
	checkSingleMemberBooleanArrTwo($$cast($SingleMemberBooleanArray, $nc(e)->getAnnotation($SingleMemberBooleanArray::class$)), e);
}

void UnitTest::checkSingleMemberBooleanArrTwo($SingleMemberBooleanArray* a, $AnnotatedElement* e) {
	$init(UnitTest);
	$useLocalObjectStack();
	++UnitTest::numTests;
	try {
		bool var$1 = $nc($($nc(a)->value()))->length != 2;
		bool var$0 = var$1 || !$nc($(a->value()))->get(0);
		if (var$0 || $nc($(a->value()))->get(1)) {
			$var($StringBuilder, var$2, $new($StringBuilder));
			var$2->append("SingleMemberBooleanArrTwo "_s);
			var$2->append(e);
			var$2->append(" = "_s);
			var$2->append($(a->value()));
			fail($$str(var$2));
		}
	} catch ($Throwable& t) {
		fail($$str({"SingleMemberBooleanArrTwo "_s, e, ": "_s, t}));
	}
}

void UnitTest::checkSingleMemberStringArrTwo($AnnotatedElement* e) {
	$init(UnitTest);
	$load($SingleMemberStringArray);
	checkSingleMemberStringArrTwo($$cast($SingleMemberStringArray, $nc(e)->getAnnotation($SingleMemberStringArray::class$)), e);
}

void UnitTest::checkSingleMemberStringArrTwo($SingleMemberStringArray* a, $AnnotatedElement* e) {
	$init(UnitTest);
	$useLocalObjectStack();
	++UnitTest::numTests;
	try {
		bool var$1 = $nc($($nc(a)->value()))->length != 2;
		bool var$0 = var$1 || !($nc($nc($(a->value()))->get(0))->equals("custom"_s));
		if (var$0 || !($nc($nc($(a->value()))->get(1))->equals("paint"_s))) {
			$var($StringBuilder, var$2, $new($StringBuilder));
			var$2->append("SingleMemberStringArrTwo "_s);
			var$2->append(e);
			var$2->append(" = "_s);
			var$2->append($(a->value()));
			fail($$str(var$2));
		}
	} catch ($Throwable& t) {
		fail($$str({"SingleMemberStringArrTwo "_s, e, ": "_s, t}));
	}
}

void UnitTest::checkSingleMemberClassArrTwo($AnnotatedElement* e) {
	$init(UnitTest);
	$load($SingleMemberClassArray);
	checkSingleMemberClassArrTwo($$cast($SingleMemberClassArray, $nc(e)->getAnnotation($SingleMemberClassArray::class$)), e);
}

void UnitTest::checkSingleMemberClassArrTwo($SingleMemberClassArray* a, $AnnotatedElement* e) {
	$init(UnitTest);
	$useLocalObjectStack();
	++UnitTest::numTests;
	try {
		bool var$1 = $nc($($nc(a)->value()))->length != 2;
		$load($Map);
		bool var$0 = var$1 || $nc($(a->value()))->get(0) != $Map::class$;
		$load($Set);
		if (var$0 || $nc($(a->value()))->get(1) != $Set::class$) {
			$var($StringBuilder, var$2, $new($StringBuilder));
			var$2->append("SingleMemberClassArrTwo "_s);
			var$2->append(e);
			var$2->append(" = "_s);
			var$2->append($(a->value()));
			fail($$str(var$2));
		}
	} catch ($Throwable& t) {
		fail($$str({"SingleMemberClassArrTwo "_s, e, ": "_s, t}));
	}
}

void UnitTest::checkSingleMemberEnumArrTwo($AnnotatedElement* e) {
	$init(UnitTest);
	$load($SingleMemberEnumArray);
	checkSingleMemberEnumArrTwo($$cast($SingleMemberEnumArray, $nc(e)->getAnnotation($SingleMemberEnumArray::class$)), e);
}

void UnitTest::checkSingleMemberEnumArrTwo($SingleMemberEnumArray* a, $AnnotatedElement* e) {
	$init(UnitTest);
	$useLocalObjectStack();
	++UnitTest::numTests;
	try {
		bool var$1 = $nc($($nc(a)->value()))->length != 2;
		bool var$0 = var$1 || $nc($(a->value()))->get(0) != $Stooge::MOE;
		if (var$0 || $nc($(a->value()))->get(1) != $Stooge::CURLY) {
			$var($StringBuilder, var$2, $new($StringBuilder));
			var$2->append("SingleMemberEnumArrTwo "_s);
			var$2->append(e);
			var$2->append(" = "_s);
			var$2->append($(a->value()));
			fail($$str(var$2));
		}
	} catch ($Throwable& t) {
		fail($$str({"SingleMemberEnumArrTwo "_s, e, ": "_s, t}));
	}
}

void UnitTest::checkSingleMemberByteArrOvrdDef($AnnotatedElement* e) {
	$init(UnitTest);
	$load($SingleMemberByteArrayDef);
	checkSingleMemberByteArrOvrdDef($$cast($SingleMemberByteArrayDef, $nc(e)->getAnnotation($SingleMemberByteArrayDef::class$)), e);
}

void UnitTest::checkSingleMemberByteArrOvrdDef($SingleMemberByteArrayDef* a, $AnnotatedElement* e) {
	$init(UnitTest);
	$useLocalObjectStack();
	++UnitTest::numTests;
	try {
		bool var$0 = $nc($($nc(a)->value()))->length != 1;
		if (var$0 || $nc($(a->value()))->get(0) != (int8_t)1) {
			$var($StringBuilder, var$1, $new($StringBuilder));
			var$1->append("SingleMemberByteArrOvrdDef "_s);
			var$1->append(e);
			var$1->append(" = "_s);
			var$1->append($(a->value()));
			fail($$str(var$1));
		}
	} catch ($Throwable& t) {
		fail($$str({"SingleMemberByteArrOvrdDef "_s, e, ": "_s, t}));
	}
}

void UnitTest::checkSingleMemberShortArrOvrdDef($AnnotatedElement* e) {
	$init(UnitTest);
	$load($SingleMemberShortArrayDef);
	checkSingleMemberShortArrOvrdDef($$cast($SingleMemberShortArrayDef, $nc(e)->getAnnotation($SingleMemberShortArrayDef::class$)), e);
}

void UnitTest::checkSingleMemberShortArrOvrdDef($SingleMemberShortArrayDef* a, $AnnotatedElement* e) {
	$init(UnitTest);
	$useLocalObjectStack();
	++UnitTest::numTests;
	try {
		bool var$0 = $nc($($nc(a)->value()))->length != 1;
		if (var$0 || $nc($(a->value()))->get(0) != (int16_t)2) {
			$var($StringBuilder, var$1, $new($StringBuilder));
			var$1->append("SingleMemberShortArrOvrdDef "_s);
			var$1->append(e);
			var$1->append(" = "_s);
			var$1->append($(a->value()));
			fail($$str(var$1));
		}
	} catch ($Throwable& t) {
		fail($$str({"SingleMemberShortArrOvrdDef "_s, e, ": "_s, t}));
	}
}

void UnitTest::checkSingleMemberIntArrOvrdDef($AnnotatedElement* e) {
	$init(UnitTest);
	$load($SingleMemberIntArrayDef);
	checkSingleMemberIntArrOvrdDef($$cast($SingleMemberIntArrayDef, $nc(e)->getAnnotation($SingleMemberIntArrayDef::class$)), e);
}

void UnitTest::checkSingleMemberIntArrOvrdDef($SingleMemberIntArrayDef* a, $AnnotatedElement* e) {
	$init(UnitTest);
	$useLocalObjectStack();
	++UnitTest::numTests;
	try {
		bool var$0 = $nc($($nc(a)->value()))->length != 1;
		if (var$0 || $nc($(a->value()))->get(0) != 3) {
			$var($StringBuilder, var$1, $new($StringBuilder));
			var$1->append("SingleMemberIntArrOvrdDef "_s);
			var$1->append(e);
			var$1->append(" = "_s);
			var$1->append($(a->value()));
			fail($$str(var$1));
		}
	} catch ($Throwable& t) {
		fail($$str({"SingleMemberIntArrOvrdDef "_s, e, ": "_s, t}));
	}
}

void UnitTest::checkSingleMemberLongArrOvrdDef($AnnotatedElement* e) {
	$init(UnitTest);
	$load($SingleMemberLongArrayDef);
	checkSingleMemberLongArrOvrdDef($$cast($SingleMemberLongArrayDef, $nc(e)->getAnnotation($SingleMemberLongArrayDef::class$)), e);
}

void UnitTest::checkSingleMemberLongArrOvrdDef($SingleMemberLongArrayDef* a, $AnnotatedElement* e) {
	$init(UnitTest);
	$useLocalObjectStack();
	++UnitTest::numTests;
	try {
		bool var$0 = $nc($($nc(a)->value()))->length != 1;
		if (var$0 || $nc($(a->value()))->get(0) != 4) {
			$var($StringBuilder, var$1, $new($StringBuilder));
			var$1->append("SingleMemberLongArrOvrdDef "_s);
			var$1->append(e);
			var$1->append(" = "_s);
			var$1->append($(a->value()));
			fail($$str(var$1));
		}
	} catch ($Throwable& t) {
		fail($$str({"SingleMemberLongArrOvrdDef "_s, e, ": "_s, t}));
	}
}

void UnitTest::checkSingleMemberCharArrOvrdDef($AnnotatedElement* e) {
	$init(UnitTest);
	$load($SingleMemberCharArrayDef);
	checkSingleMemberCharArrOvrdDef($$cast($SingleMemberCharArrayDef, $nc(e)->getAnnotation($SingleMemberCharArrayDef::class$)), e);
}

void UnitTest::checkSingleMemberCharArrOvrdDef($SingleMemberCharArrayDef* a, $AnnotatedElement* e) {
	$init(UnitTest);
	$useLocalObjectStack();
	++UnitTest::numTests;
	try {
		bool var$0 = $nc($($nc(a)->value()))->length != 1;
		if (var$0 || $nc($(a->value()))->get(0) != u'5') {
			$var($StringBuilder, var$1, $new($StringBuilder));
			var$1->append("SingleMemberCharArrOvrdDef "_s);
			var$1->append(e);
			var$1->append(" = "_s);
			var$1->append($(a->value()));
			fail($$str(var$1));
		}
	} catch ($Throwable& t) {
		fail($$str({"SingleMemberCharArrOvrdDef "_s, e, ": "_s, t}));
	}
}

void UnitTest::checkSingleMemberFloatArrOvrdDef($AnnotatedElement* e) {
	$init(UnitTest);
	$load($SingleMemberFloatArrayDef);
	checkSingleMemberFloatArrOvrdDef($$cast($SingleMemberFloatArrayDef, $nc(e)->getAnnotation($SingleMemberFloatArrayDef::class$)), e);
}

void UnitTest::checkSingleMemberFloatArrOvrdDef($SingleMemberFloatArrayDef* a, $AnnotatedElement* e) {
	$init(UnitTest);
	$useLocalObjectStack();
	++UnitTest::numTests;
	try {
		bool var$0 = $nc($($nc(a)->value()))->length != 1;
		if (var$0 || $nc($(a->value()))->get(0) != 6.0f) {
			$var($StringBuilder, var$1, $new($StringBuilder));
			var$1->append("SingleMemberFloatArrOvrdDef "_s);
			var$1->append(e);
			var$1->append(" = "_s);
			var$1->append($(a->value()));
			fail($$str(var$1));
		}
	} catch ($Throwable& t) {
		fail($$str({"SingleMemberFloatArrOvrdDef "_s, e, ": "_s, t}));
	}
}

void UnitTest::checkSingleMemberDoubleArrOvrdDef($AnnotatedElement* e) {
	$init(UnitTest);
	$load($SingleMemberDoubleArrayDef);
	checkSingleMemberDoubleArrOvrdDef($$cast($SingleMemberDoubleArrayDef, $nc(e)->getAnnotation($SingleMemberDoubleArrayDef::class$)), e);
}

void UnitTest::checkSingleMemberDoubleArrOvrdDef($SingleMemberDoubleArrayDef* a, $AnnotatedElement* e) {
	$init(UnitTest);
	$useLocalObjectStack();
	++UnitTest::numTests;
	try {
		bool var$0 = $nc($($nc(a)->value()))->length != 1;
		if (var$0 || $nc($(a->value()))->get(0) != 7.0) {
			$var($StringBuilder, var$1, $new($StringBuilder));
			var$1->append("SingleMemberDoubleArrOvrdDef "_s);
			var$1->append(e);
			var$1->append(" = "_s);
			var$1->append($(a->value()));
			fail($$str(var$1));
		}
	} catch ($Throwable& t) {
		fail($$str({"SingleMemberDoubleArrOvrdDef "_s, e, ": "_s, t}));
	}
}

void UnitTest::checkSingleMemberBooleanArrOvrdDef($AnnotatedElement* e) {
	$init(UnitTest);
	$load($SingleMemberBooleanArrayDef);
	checkSingleMemberBooleanArrOvrdDef($$cast($SingleMemberBooleanArrayDef, $nc(e)->getAnnotation($SingleMemberBooleanArrayDef::class$)), e);
}

void UnitTest::checkSingleMemberBooleanArrOvrdDef($SingleMemberBooleanArrayDef* a, $AnnotatedElement* e) {
	$init(UnitTest);
	$useLocalObjectStack();
	++UnitTest::numTests;
	try {
		bool var$0 = $nc($($nc(a)->value()))->length != 1;
		if (var$0 || !$nc($(a->value()))->get(0)) {
			$var($StringBuilder, var$1, $new($StringBuilder));
			var$1->append("SingleMemberBooleanArrOvrdDef "_s);
			var$1->append(e);
			var$1->append(" = "_s);
			var$1->append($(a->value()));
			fail($$str(var$1));
		}
	} catch ($Throwable& t) {
		fail($$str({"SingleMemberBooleanArrOvrdDef "_s, e, ": "_s, t}));
	}
}

void UnitTest::checkSingleMemberStringArrOvrdDef($AnnotatedElement* e) {
	$init(UnitTest);
	$load($SingleMemberStringArrayDef);
	checkSingleMemberStringArrOvrdDef($$cast($SingleMemberStringArrayDef, $nc(e)->getAnnotation($SingleMemberStringArrayDef::class$)), e);
}

void UnitTest::checkSingleMemberStringArrOvrdDef($SingleMemberStringArrayDef* a, $AnnotatedElement* e) {
	$init(UnitTest);
	$useLocalObjectStack();
	++UnitTest::numTests;
	try {
		bool var$0 = $nc($($nc(a)->value()))->length != 1;
		if (var$0 || !($nc($nc($(a->value()))->get(0))->equals("custom"_s))) {
			$var($StringBuilder, var$1, $new($StringBuilder));
			var$1->append("SingleMemberStringArrOvrdDef "_s);
			var$1->append(e);
			var$1->append(" = "_s);
			var$1->append($(a->value()));
			fail($$str(var$1));
		}
	} catch ($Throwable& t) {
		fail($$str({"SingleMemberStringArrOvrdDef "_s, e, ": "_s, t}));
	}
}

void UnitTest::checkSingleMemberClassArrOvrdDef($AnnotatedElement* e) {
	$init(UnitTest);
	$load($SingleMemberClassArrayDef);
	checkSingleMemberClassArrOvrdDef($$cast($SingleMemberClassArrayDef, $nc(e)->getAnnotation($SingleMemberClassArrayDef::class$)), e);
}

void UnitTest::checkSingleMemberClassArrOvrdDef($SingleMemberClassArrayDef* a, $AnnotatedElement* e) {
	$init(UnitTest);
	$useLocalObjectStack();
	++UnitTest::numTests;
	try {
		bool var$0 = $nc($($nc(a)->value()))->length != 1;
		$load($Map);
		if (var$0 || $nc($(a->value()))->get(0) != $Map::class$) {
			$var($StringBuilder, var$1, $new($StringBuilder));
			var$1->append("SingleMemberClassArrOvrdDef "_s);
			var$1->append(e);
			var$1->append(" = "_s);
			var$1->append($(a->value()));
			fail($$str(var$1));
		}
	} catch ($Throwable& t) {
		fail($$str({"SingleMemberClassArrOvrdDef "_s, e, ": "_s, t}));
	}
}

void UnitTest::checkSingleMemberEnumArrOvrdDef($AnnotatedElement* e) {
	$init(UnitTest);
	$load($SingleMemberEnumArrayDef);
	checkSingleMemberEnumArrOvrdDef($$cast($SingleMemberEnumArrayDef, $nc(e)->getAnnotation($SingleMemberEnumArrayDef::class$)), e);
}

void UnitTest::checkSingleMemberEnumArrOvrdDef($SingleMemberEnumArrayDef* a, $AnnotatedElement* e) {
	$init(UnitTest);
	$useLocalObjectStack();
	++UnitTest::numTests;
	try {
		bool var$0 = $nc($($nc(a)->value()))->length != 1;
		if (var$0 || $nc($(a->value()))->get(0) != $Stooge::MOE) {
			$var($StringBuilder, var$1, $new($StringBuilder));
			var$1->append("SingleMemberEnumArrOvrdDef "_s);
			var$1->append(e);
			var$1->append(" = "_s);
			var$1->append($(a->value()));
			fail($$str(var$1));
		}
	} catch ($Throwable& t) {
		fail($$str({"SingleMemberEnumArrOvrdDef "_s, e, ": "_s, t}));
	}
}

void UnitTest::checkSingleMemberByteArrAcceptDef($AnnotatedElement* e) {
	$init(UnitTest);
	$load($SingleMemberByteArrayDef);
	checkSingleMemberByteArrAcceptDef($$cast($SingleMemberByteArrayDef, $nc(e)->getAnnotation($SingleMemberByteArrayDef::class$)), e);
}

void UnitTest::checkSingleMemberByteArrAcceptDef($SingleMemberByteArrayDef* a, $AnnotatedElement* e) {
	$init(UnitTest);
	$useLocalObjectStack();
	++UnitTest::numTests;
	try {
		bool var$0 = $nc($($nc(a)->value()))->length != 1;
		if (var$0 || $nc($(a->value()))->get(0) != (int8_t)11) {
			$var($StringBuilder, var$1, $new($StringBuilder));
			var$1->append("SingleMemberByteArrAcceptDef "_s);
			var$1->append(e);
			var$1->append(" = "_s);
			var$1->append($(a->value()));
			fail($$str(var$1));
		}
	} catch ($Throwable& t) {
		fail($$str({"SingleMemberByteArrAcceptDef "_s, e, ": "_s, t}));
	}
}

void UnitTest::checkSingleMemberShortArrAcceptDef($AnnotatedElement* e) {
	$init(UnitTest);
	$load($SingleMemberShortArrayDef);
	checkSingleMemberShortArrAcceptDef($$cast($SingleMemberShortArrayDef, $nc(e)->getAnnotation($SingleMemberShortArrayDef::class$)), e);
}

void UnitTest::checkSingleMemberShortArrAcceptDef($SingleMemberShortArrayDef* a, $AnnotatedElement* e) {
	$init(UnitTest);
	$useLocalObjectStack();
	++UnitTest::numTests;
	try {
		bool var$0 = $nc($($nc(a)->value()))->length != 1;
		if (var$0 || $nc($(a->value()))->get(0) != (int16_t)12) {
			$var($StringBuilder, var$1, $new($StringBuilder));
			var$1->append("SingleMemberShortArrAcceptDef "_s);
			var$1->append(e);
			var$1->append(" = "_s);
			var$1->append($(a->value()));
			fail($$str(var$1));
		}
	} catch ($Throwable& t) {
		fail($$str({"SingleMemberShortArrAcceptDef "_s, e, ": "_s, t}));
	}
}

void UnitTest::checkSingleMemberIntArrAcceptDef($AnnotatedElement* e) {
	$init(UnitTest);
	$load($SingleMemberIntArrayDef);
	checkSingleMemberIntArrAcceptDef($$cast($SingleMemberIntArrayDef, $nc(e)->getAnnotation($SingleMemberIntArrayDef::class$)), e);
}

void UnitTest::checkSingleMemberIntArrAcceptDef($SingleMemberIntArrayDef* a, $AnnotatedElement* e) {
	$init(UnitTest);
	$useLocalObjectStack();
	++UnitTest::numTests;
	try {
		bool var$0 = $nc($($nc(a)->value()))->length != 1;
		if (var$0 || $nc($(a->value()))->get(0) != 13) {
			$var($StringBuilder, var$1, $new($StringBuilder));
			var$1->append("SingleMemberIntArrAcceptDef "_s);
			var$1->append(e);
			var$1->append(" = "_s);
			var$1->append($(a->value()));
			fail($$str(var$1));
		}
	} catch ($Throwable& t) {
		fail($$str({"SingleMemberIntArrAcceptDef "_s, e, ": "_s, t}));
	}
}

void UnitTest::checkSingleMemberLongArrAcceptDef($AnnotatedElement* e) {
	$init(UnitTest);
	$load($SingleMemberLongArrayDef);
	checkSingleMemberLongArrAcceptDef($$cast($SingleMemberLongArrayDef, $nc(e)->getAnnotation($SingleMemberLongArrayDef::class$)), e);
}

void UnitTest::checkSingleMemberLongArrAcceptDef($SingleMemberLongArrayDef* a, $AnnotatedElement* e) {
	$init(UnitTest);
	$useLocalObjectStack();
	++UnitTest::numTests;
	try {
		bool var$0 = $nc($($nc(a)->value()))->length != 1;
		if (var$0 || $nc($(a->value()))->get(0) != 14) {
			$var($StringBuilder, var$1, $new($StringBuilder));
			var$1->append("SingleMemberLongArrAcceptDef "_s);
			var$1->append(e);
			var$1->append(" = "_s);
			var$1->append($(a->value()));
			fail($$str(var$1));
		}
	} catch ($Throwable& t) {
		fail($$str({"SingleMemberLongArrAcceptDef "_s, e, ": "_s, t}));
	}
}

void UnitTest::checkSingleMemberCharArrAcceptDef($AnnotatedElement* e) {
	$init(UnitTest);
	$load($SingleMemberCharArrayDef);
	checkSingleMemberCharArrAcceptDef($$cast($SingleMemberCharArrayDef, $nc(e)->getAnnotation($SingleMemberCharArrayDef::class$)), e);
}

void UnitTest::checkSingleMemberCharArrAcceptDef($SingleMemberCharArrayDef* a, $AnnotatedElement* e) {
	$init(UnitTest);
	$useLocalObjectStack();
	++UnitTest::numTests;
	try {
		bool var$0 = $nc($($nc(a)->value()))->length != 1;
		if (var$0 || $nc($(a->value()))->get(0) != u'V') {
			$var($StringBuilder, var$1, $new($StringBuilder));
			var$1->append("SingleMemberCharArrAcceptDef "_s);
			var$1->append(e);
			var$1->append(" = "_s);
			var$1->append($(a->value()));
			fail($$str(var$1));
		}
	} catch ($Throwable& t) {
		fail($$str({"SingleMemberCharArrAcceptDef "_s, e, ": "_s, t}));
	}
}

void UnitTest::checkSingleMemberFloatArrAcceptDef($AnnotatedElement* e) {
	$init(UnitTest);
	$load($SingleMemberFloatArrayDef);
	checkSingleMemberFloatArrAcceptDef($$cast($SingleMemberFloatArrayDef, $nc(e)->getAnnotation($SingleMemberFloatArrayDef::class$)), e);
}

void UnitTest::checkSingleMemberFloatArrAcceptDef($SingleMemberFloatArrayDef* a, $AnnotatedElement* e) {
	$init(UnitTest);
	$useLocalObjectStack();
	++UnitTest::numTests;
	try {
		bool var$0 = $nc($($nc(a)->value()))->length != 1;
		if (var$0 || $nc($(a->value()))->get(0) != 16.0f) {
			$var($StringBuilder, var$1, $new($StringBuilder));
			var$1->append("SingleMemberFloatArrAcceptDef "_s);
			var$1->append(e);
			var$1->append(" = "_s);
			var$1->append($(a->value()));
			fail($$str(var$1));
		}
	} catch ($Throwable& t) {
		fail($$str({"SingleMemberFloatArrAcceptDef "_s, e, ": "_s, t}));
	}
}

void UnitTest::checkSingleMemberDoubleArrAcceptDef($AnnotatedElement* e) {
	$init(UnitTest);
	$load($SingleMemberDoubleArrayDef);
	checkSingleMemberDoubleArrAcceptDef($$cast($SingleMemberDoubleArrayDef, $nc(e)->getAnnotation($SingleMemberDoubleArrayDef::class$)), e);
}

void UnitTest::checkSingleMemberDoubleArrAcceptDef($SingleMemberDoubleArrayDef* a, $AnnotatedElement* e) {
	$init(UnitTest);
	$useLocalObjectStack();
	++UnitTest::numTests;
	try {
		bool var$0 = $nc($($nc(a)->value()))->length != 1;
		if (var$0 || $nc($(a->value()))->get(0) != 17.0) {
			$var($StringBuilder, var$1, $new($StringBuilder));
			var$1->append("SingleMemberDoubleArrAcceptDef "_s);
			var$1->append(e);
			var$1->append(" = "_s);
			var$1->append($(a->value()));
			fail($$str(var$1));
		}
	} catch ($Throwable& t) {
		fail($$str({"SingleMemberDoubleArrAcceptDef "_s, e, ": "_s, t}));
	}
}

void UnitTest::checkSingleMemberBooleanArrAcceptDef($AnnotatedElement* e) {
	$init(UnitTest);
	$load($SingleMemberBooleanArrayDef);
	checkSingleMemberBooleanArrAcceptDef($$cast($SingleMemberBooleanArrayDef, $nc(e)->getAnnotation($SingleMemberBooleanArrayDef::class$)), e);
}

void UnitTest::checkSingleMemberBooleanArrAcceptDef($SingleMemberBooleanArrayDef* a, $AnnotatedElement* e) {
	$init(UnitTest);
	$useLocalObjectStack();
	++UnitTest::numTests;
	try {
		bool var$0 = $nc($($nc(a)->value()))->length != 1;
		if (var$0 || $nc($(a->value()))->get(0)) {
			$var($StringBuilder, var$1, $new($StringBuilder));
			var$1->append("SingleMemberBooleanArrAcceptDef "_s);
			var$1->append(e);
			var$1->append(" = "_s);
			var$1->append($(a->value()));
			fail($$str(var$1));
		}
	} catch ($Throwable& t) {
		fail($$str({"SingleMemberBooleanArrAcceptDef "_s, e, ": "_s, t}));
	}
}

void UnitTest::checkSingleMemberStringArrAcceptDef($AnnotatedElement* e) {
	$init(UnitTest);
	$load($SingleMemberStringArrayDef);
	checkSingleMemberStringArrAcceptDef($$cast($SingleMemberStringArrayDef, $nc(e)->getAnnotation($SingleMemberStringArrayDef::class$)), e);
}

void UnitTest::checkSingleMemberStringArrAcceptDef($SingleMemberStringArrayDef* a, $AnnotatedElement* e) {
	$init(UnitTest);
	$useLocalObjectStack();
	++UnitTest::numTests;
	try {
		bool var$0 = $nc($($nc(a)->value()))->length != 1;
		if (var$0 || !($nc($nc($(a->value()))->get(0))->equals("default"_s))) {
			$var($StringBuilder, var$1, $new($StringBuilder));
			var$1->append("SingleMemberStringArrAcceptDef "_s);
			var$1->append(e);
			var$1->append(" = "_s);
			var$1->append($(a->value()));
			fail($$str(var$1));
		}
	} catch ($Throwable& t) {
		fail($$str({"SingleMemberStringArrAcceptDef "_s, e, ": "_s, t}));
	}
}

void UnitTest::checkSingleMemberClassArrAcceptDef($AnnotatedElement* e) {
	$init(UnitTest);
	$load($SingleMemberClassArrayDef);
	checkSingleMemberClassArrAcceptDef($$cast($SingleMemberClassArrayDef, $nc(e)->getAnnotation($SingleMemberClassArrayDef::class$)), e);
}

void UnitTest::checkSingleMemberClassArrAcceptDef($SingleMemberClassArrayDef* a, $AnnotatedElement* e) {
	$init(UnitTest);
	$useLocalObjectStack();
	++UnitTest::numTests;
	try {
		bool var$0 = $nc($($nc(a)->value()))->length != 1;
		if (var$0 || $nc($(a->value()))->get(0) != $Class::class$) {
			$var($StringBuilder, var$1, $new($StringBuilder));
			var$1->append("SingleMemberClassArrAcceptDef "_s);
			var$1->append(e);
			var$1->append(" = "_s);
			var$1->append($(a->value()));
			fail($$str(var$1));
		}
	} catch ($Throwable& t) {
		fail($$str({"SingleMemberClassArrAcceptDef "_s, e, ": "_s, t}));
	}
}

void UnitTest::checkSingleMemberEnumArrAcceptDef($AnnotatedElement* e) {
	$init(UnitTest);
	$load($SingleMemberEnumArrayDef);
	checkSingleMemberEnumArrAcceptDef($$cast($SingleMemberEnumArrayDef, $nc(e)->getAnnotation($SingleMemberEnumArrayDef::class$)), e);
}

void UnitTest::checkSingleMemberEnumArrAcceptDef($SingleMemberEnumArrayDef* a, $AnnotatedElement* e) {
	$init(UnitTest);
	$useLocalObjectStack();
	++UnitTest::numTests;
	try {
		bool var$0 = $nc($($nc(a)->value()))->length != 1;
		if (var$0 || $nc($(a->value()))->get(0) != $Stooge::LARRY) {
			$var($StringBuilder, var$1, $new($StringBuilder));
			var$1->append("SingleMemberEnumArrAcceptDef "_s);
			var$1->append(e);
			var$1->append(" = "_s);
			var$1->append($(a->value()));
			fail($$str(var$1));
		}
	} catch ($Throwable& t) {
		fail($$str({"SingleMemberEnumArrAcceptDef "_s, e, ": "_s, t}));
	}
}

void UnitTest::checkEquals($AnnotatedElement* e1, $AnnotatedElement* e2, $Class* annoType) {
	$init(UnitTest);
	$useLocalObjectStack();
	++UnitTest::numTests;
	$var($Annotation, a1, $nc(e1)->getAnnotation(annoType));
	$var($Annotation, a2, $nc(e2)->getAnnotation(annoType));
	try {
		if (!$nc(a1)->equals(a2)) {
			fail($$str({a1, " != "_s, a2}));
		}
		int32_t var$0 = a1->hashCode();
		if (var$0 != $nc(a2)->hashCode()) {
			$var($StringBuilder, var$1, $new($StringBuilder));
			var$1->append(a1);
			var$1->append(".hashCode() ["_s);
			var$1->append(a1->hashCode());
			var$1->append("] != "_s);
			var$1->append(a2);
			var$1->append(" .hashCode()["_s);
			var$1->append(a2->hashCode());
			var$1->append("]"_s);
			fail($$str(var$1));
		}
		if (!($$nc(a1->toString())->equals($(a2->toString())))) {
			fail($$str({a1, ".toString() != "_s, a2, ".toString()"_s}));
		}
	} catch ($Throwable& t) {
		fail($$str({a1, " == "_s, a2, ": "_s, t}));
	}
}

void UnitTest::checkUnequals($AnnotatedElement* e1, $AnnotatedElement* e2, $Class* annoType) {
	$init(UnitTest);
	$useLocalObjectStack();
	++UnitTest::numTests;
	$var($Annotation, a1, $nc(e1)->getAnnotation(annoType));
	$var($Annotation, a2, $nc(e2)->getAnnotation(annoType));
	try {
		if ($nc(a1)->equals(a2)) {
			fail($$str({a1, " == "_s, a2}));
		}
		int32_t var$0 = a1->hashCode();
		if (var$0 == $nc(a2)->hashCode()) {
			$var($StringBuilder, var$1, $new($StringBuilder));
			var$1->append(a1);
			var$1->append(".hashCode() ["_s);
			var$1->append(a1->hashCode());
			var$1->append("] == "_s);
			var$1->append(a2);
			var$1->append(" .hashCode()["_s);
			var$1->append(a2->hashCode());
			var$1->append("]"_s);
			fail($$str(var$1));
		}
		if ($$nc(a1->toString())->equals($(a2->toString()))) {
			fail($$str({a1, ".toString() == "_s, a2, ".toString()"_s}));
		}
	} catch ($Throwable& t) {
		fail($$str({a1, " != "_s, a2, ": "_s, t}));
	}
}

void UnitTest::checkSerialization($AnnotatedElement* e, $Class* annoType) {
	$init(UnitTest);
	$useLocalObjectStack();
	++UnitTest::numTests;
	$var($Annotation, a1, $nc(e)->getAnnotation(annoType));
	$var($Object, a2, deepCopy(a1));
	try {
		if (!$nc(a1)->equals(a2)) {
			fail($$str({"Serialization: "_s, a1, " != "_s, a2}));
		}
		int32_t var$0 = a1->hashCode();
		if (var$0 != $nc(a2)->hashCode()) {
			$var($StringBuilder, var$1, $new($StringBuilder));
			var$1->append("Serialization: "_s);
			var$1->append(a1);
			var$1->append(".hashCode() ["_s);
			var$1->append(a1->hashCode());
			var$1->append("] != "_s);
			var$1->append(a2);
			var$1->append(" .hashCode()["_s);
			var$1->append(a2->hashCode());
			var$1->append("]"_s);
			fail($$str(var$1));
		}
		if (!($$nc(a1->toString())->equals($(a2->toString())))) {
			fail($$str({"Serialization: "_s, a1, ".toString() != "_s, a2, ".toString()"_s}));
		}
	} catch ($Throwable& t) {
		fail($$str({"Serialization: "_s, a1, " == "_s, a2, ": "_s, t}));
	}
}

$Object* UnitTest::deepCopy(Object$* original) {
	$init(UnitTest);
	$useLocalObjectStack();
	try {
		$var($ByteArrayOutputStream, bos, $new($ByteArrayOutputStream));
		$var($ObjectOutputStream, oos, $new($ObjectOutputStream, bos));
		oos->writeObject(original);
		oos->flush();
		$var($ByteArrayInputStream, bin, $new($ByteArrayInputStream, $(bos->toByteArray())));
		$var($ObjectInputStream, ois, $new($ObjectInputStream, bin));
		return ois->readObject();
	} catch ($Exception& e) {
		$throwNew($IllegalArgumentException, e);
	}
	$shouldNotReachHere();
}

void UnitTest::checkInheritence($AnnotatedElement* e, bool shouldHaveFoo, bool shouldHaveBar) {
	$init(UnitTest);
	$useLocalObjectStack();
	++UnitTest::numTests;
	try {
		$load($Foo);
		bool hasFoo = $nc(e)->isAnnotationPresent($Foo::class$);
		$load($Bar);
		bool hasBar = e->isAnnotationPresent($Bar::class$);
		if (hasFoo != shouldHaveFoo || hasBar != shouldHaveBar) {
			fail($$str({"Inheritance(1): "_s, e, " - Foo: "_s, $$str(hasFoo), ", Bar: "_s, $$str(hasBar)}));
		}
		hasFoo = (hasBar = false);
		$var($AnnotationArray, allAnnotations, e->getAnnotations());
		{
			$var($AnnotationArray, arr$, allAnnotations);
			for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
				$var($Annotation, a, arr$->get(i$));
				if ($instanceOf($Foo, a)) {
					hasFoo = true;
				} else if ($instanceOf($Bar, a)) {
					hasBar = true;
				}
			}
		}
		if (hasFoo != shouldHaveFoo || hasBar != shouldHaveBar) {
			fail($$str({"Inheritance(2): "_s, e, " - Foo: "_s, $$str(hasFoo), ", Bar: "_s, $$str(hasBar)}));
		}
	} catch ($Throwable& t) {
		fail($$str({"Inheritance: "_s, e, ": "_s, t}));
	}
}

void UnitTest::checkDeclaredAnnotations($AnnotatedElement* e, bool shouldHaveFoo, bool shouldHaveBar) {
	$init(UnitTest);
	$useLocalObjectStack();
	++UnitTest::numTests;
	try {
		bool hasFoo = false;
		bool hasBar = false;
		$var($AnnotationArray, declaredAnnotations, $nc(e)->getDeclaredAnnotations());
		{
			$var($AnnotationArray, arr$, declaredAnnotations);
			for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
				$var($Annotation, a, arr$->get(i$));
				if ($instanceOf($Foo, a)) {
					hasFoo = true;
				} else if ($instanceOf($Bar, a)) {
					hasBar = true;
				}
			}
		}
		if (hasFoo != shouldHaveFoo || hasBar != shouldHaveBar) {
			fail($$str({"Declared annotations: "_s, e, " - Foo: "_s, $$str(hasFoo), ", Bar: "_s, $$str(hasBar)}));
		}
	} catch ($Throwable& t) {
		fail($$str({"Declared annotations: "_s, e, ": "_s, t}));
	}
}

void UnitTest::scalarTypesMethod() {
}

void UnitTest::scalarTypesAcceptDefaultMethod() {
}

void UnitTest::scalarTypesOverrideDefaultMethod() {
}

void UnitTest::emptyArrayTypesMethod() {
}

void UnitTest::singleElementArrayTypesMethod() {
}

void UnitTest::twoElementArrayTypesMethod() {
}

void UnitTest::arrayTypesAcceptDefaultMethod() {
}

void UnitTest::arrayTypesOverrideDefaultMethod() {
}

void UnitTest::markerMethod() {
}

void UnitTest::SingleMemberByte() {
}

void UnitTest::SingleMemberShort() {
}

void UnitTest::SingleMemberInt() {
}

void UnitTest::SingleMemberLong() {
}

void UnitTest::SingleMemberChar() {
}

void UnitTest::SingleMemberFloat() {
}

void UnitTest::SingleMemberDouble() {
}

void UnitTest::SingleMemberBoolean() {
}

void UnitTest::SingleMemberString() {
}

void UnitTest::SingleMemberClass() {
}

void UnitTest::SingleMemberEnum() {
}

void UnitTest::SingleMemberByteOvrdDef() {
}

void UnitTest::SingleMemberShortOvrdDef() {
}

void UnitTest::SingleMemberIntOvrdDef() {
}

void UnitTest::SingleMemberLongOvrdDef() {
}

void UnitTest::SingleMemberCharOvrdDef() {
}

void UnitTest::SingleMemberFloatOvrdDef() {
}

void UnitTest::SingleMemberDoubleOvrdDef() {
}

void UnitTest::SingleMemberBooleanOvrdDef() {
}

void UnitTest::SingleMemberStringOvrdDef() {
}

void UnitTest::SingleMemberClassOvrdDef() {
}

void UnitTest::SingleMemberEnumOvrdDef() {
}

void UnitTest::SingleMemberByteAcceptDef() {
}

void UnitTest::SingleMemberShortAcceptDef() {
}

void UnitTest::SingleMemberIntAcceptDef() {
}

void UnitTest::SingleMemberLongAcceptDef() {
}

void UnitTest::SingleMemberCharAcceptDef() {
}

void UnitTest::SingleMemberFloatAcceptDef() {
}

void UnitTest::SingleMemberDoubleAcceptDef() {
}

void UnitTest::SingleMemberBooleanAcceptDef() {
}

void UnitTest::SingleMemberStringAcceptDef() {
}

void UnitTest::SingleMemberClassAcceptDef() {
}

void UnitTest::SingleMemberEnumAcceptDef() {
}

void UnitTest::SingleMemberByteArrEmpty() {
}

void UnitTest::SingleMemberShortArrEmpty() {
}

void UnitTest::SingleMemberIntArrEmpty() {
}

void UnitTest::SingleMemberLongArrEmpty() {
}

void UnitTest::SingleMemberCharArrEmpty() {
}

void UnitTest::SingleMemberFloatArrEmpty() {
}

void UnitTest::SingleMemberDoubleArrEmpty() {
}

void UnitTest::SingleMemberBooleanArrEmpty() {
}

void UnitTest::SingleMemberStringArrEmpty() {
}

void UnitTest::SingleMemberClassArrEmpty() {
}

void UnitTest::SingleMemberEnumArrEmpty() {
}

void UnitTest::SingleMemberByteArrOne() {
}

void UnitTest::SingleMemberShortArrOne() {
}

void UnitTest::SingleMemberIntArrOne() {
}

void UnitTest::SingleMemberLongArrOne() {
}

void UnitTest::SingleMemberCharArrOne() {
}

void UnitTest::SingleMemberFloatArrOne() {
}

void UnitTest::SingleMemberDoubleArrOne() {
}

void UnitTest::SingleMemberBooleanArrOne() {
}

void UnitTest::SingleMemberStringArrOne() {
}

void UnitTest::SingleMemberClassArrOne() {
}

void UnitTest::SingleMemberEnumArrOne() {
}

void UnitTest::SingleMemberByteArrTwo() {
}

void UnitTest::SingleMemberShortArrTwo() {
}

void UnitTest::SingleMemberIntArrTwo() {
}

void UnitTest::SingleMemberLongArrTwo() {
}

void UnitTest::SingleMemberCharArrTwo() {
}

void UnitTest::SingleMemberFloatArrTwo() {
}

void UnitTest::SingleMemberDoubleArrTwo() {
}

void UnitTest::SingleMemberBooleanArrTwo() {
}

void UnitTest::SingleMemberStringArrTwo() {
}

void UnitTest::SingleMemberClassArrTwo() {
}

void UnitTest::SingleMemberEnumArrTwo() {
}

void UnitTest::SingleMemberByteArrOvrdDef() {
}

void UnitTest::SingleMemberShortArrOvrdDef() {
}

void UnitTest::SingleMemberIntArrOvrdDef() {
}

void UnitTest::SingleMemberLongArrOvrdDef() {
}

void UnitTest::SingleMemberCharArrOvrdDef() {
}

void UnitTest::SingleMemberFloatArrOvrdDef() {
}

void UnitTest::SingleMemberDoubleArrOvrdDef() {
}

void UnitTest::SingleMemberBooleanArrOvrdDef() {
}

void UnitTest::SingleMemberStringArrOvrdDef() {
}

void UnitTest::SingleMemberClassArrOvrdDef() {
}

void UnitTest::SingleMemberEnumArrOvrdDef() {
}

void UnitTest::SingleMemberByteArrAcceptDef() {
}

void UnitTest::SingleMemberShortArrAcceptDef() {
}

void UnitTest::SingleMemberIntArrAcceptDef() {
}

void UnitTest::SingleMemberLongArrAcceptDef() {
}

void UnitTest::SingleMemberCharArrAcceptDef() {
}

void UnitTest::SingleMemberFloatArrAcceptDef() {
}

void UnitTest::SingleMemberDoubleArrAcceptDef() {
}

void UnitTest::SingleMemberBooleanArrAcceptDef() {
}

void UnitTest::SingleMemberStringArrAcceptDef() {
}

void UnitTest::SingleMemberClassArrAcceptDef() {
}

void UnitTest::SingleMemberEnumArrAcceptDef() {
}

void UnitTest::init$($Iterator* it) {
}

void UnitTest::init$($Set* s) {
}

void UnitTest::init$($Map* s) {
}

void UnitTest::init$($List* l) {
}

void UnitTest::init$($Collection* c) {
}

void UnitTest::init$($SortedSet* ss) {
}

void UnitTest::init$($SortedMap* sm) {
}

void UnitTest::init$($RandomAccess* r) {
}

void UnitTest::init$() {
}

void UnitTest::init$(int8_t b) {
}

void UnitTest::init$(int16_t s) {
}

void UnitTest::init$(int32_t i) {
}

void UnitTest::init$(int64_t l) {
}

void UnitTest::init$(char16_t c) {
}

void UnitTest::init$(float f) {
}

void UnitTest::init$(double d) {
}

void UnitTest::init$(bool b) {
}

void UnitTest::init$($String* s) {
}

void UnitTest::init$($Class* c) {
}

void UnitTest::init$($Enum* e) {
}

void UnitTest::init$(int8_t b, $Set* s) {
}

void UnitTest::init$(int16_t s, $Set* x) {
}

void UnitTest::init$(int32_t i, $Set* s) {
}

void UnitTest::init$(int64_t l, $Set* s) {
}

void UnitTest::init$(char16_t c, $Set* s) {
}

void UnitTest::init$(float f, $Set* s) {
}

void UnitTest::init$(double d, $Set* s) {
}

void UnitTest::init$(bool b, $Set* s) {
}

void UnitTest::init$($String* s, $Set* x) {
}

void UnitTest::init$($Class* c, $Set* s) {
}

void UnitTest::init$($Enum* e, $Set* s) {
}

void UnitTest::init$(int8_t b, $Map* m) {
}

void UnitTest::init$(int16_t s, $Map* m) {
}

void UnitTest::init$(int32_t i, $Map* m) {
}

void UnitTest::init$(int64_t l, $Map* m) {
}

void UnitTest::init$(char16_t c, $Map* m) {
}

void UnitTest::init$(float f, $Map* m) {
}

void UnitTest::init$(double d, $Map* m) {
}

void UnitTest::init$(bool b, $Map* m) {
}

void UnitTest::init$($String* s, $Map* m) {
}

void UnitTest::init$($Class* c, $Map* m) {
}

void UnitTest::init$($Enum* e, $Map* m) {
}

void UnitTest::init$($bytes* b) {
}

void UnitTest::init$($shorts* s) {
}

void UnitTest::init$($ints* i) {
}

void UnitTest::init$($longs* l) {
}

void UnitTest::init$($chars* c) {
}

void UnitTest::init$($floats* f) {
}

void UnitTest::init$($doubles* d) {
}

void UnitTest::init$($booleans* b) {
}

void UnitTest::init$($StringArray* s) {
}

void UnitTest::init$($ClassArray* c) {
}

void UnitTest::init$($EnumArray* e) {
}

void UnitTest::init$($bytes* b, $Set* s) {
}

void UnitTest::init$($shorts* s, $Set* x) {
}

void UnitTest::init$($ints* i, $Set* s) {
}

void UnitTest::init$($longs* l, $Set* s) {
}

void UnitTest::init$($chars* c, $Set* s) {
}

void UnitTest::init$($floats* f, $Set* s) {
}

void UnitTest::init$($doubles* d, $Set* s) {
}

void UnitTest::init$($booleans* b, $Set* s) {
}

void UnitTest::init$($StringArray* s, $Set* x) {
}

void UnitTest::init$($ClassArray* c, $Set* s) {
}

void UnitTest::init$($EnumArray* e, $Set* s) {
}

void UnitTest::init$($bytes* b, $Map* m) {
}

void UnitTest::init$($shorts* s, $Map* m) {
}

void UnitTest::init$($ints* i, $Map* m) {
}

void UnitTest::init$($longs* l, $Map* m) {
}

void UnitTest::init$($chars* c, $Map* m) {
}

void UnitTest::init$($floats* f, $Map* m) {
}

void UnitTest::init$($doubles* d, $Map* m) {
}

void UnitTest::init$($booleans* b, $Map* m) {
}

void UnitTest::init$($StringArray* s, $Map* m) {
}

void UnitTest::init$($ClassArray* c, $Map* m) {
}

void UnitTest::init$($EnumArray* e, $Map* m) {
}

void UnitTest::init$($bytes* b, $List* l) {
}

void UnitTest::init$($shorts* s, $List* l) {
}

void UnitTest::init$($ints* i, $List* l) {
}

void UnitTest::init$($longs* l, $List* x) {
}

void UnitTest::init$($chars* c, $List* l) {
}

void UnitTest::init$($floats* f, $List* l) {
}

void UnitTest::init$($doubles* d, $List* l) {
}

void UnitTest::init$($booleans* b, $List* l) {
}

void UnitTest::init$($StringArray* s, $List* l) {
}

void UnitTest::init$($ClassArray* c, $List* l) {
}

void UnitTest::init$($EnumArray* e, $List* l) {
}

void UnitTest::init$($bytes* b, $Collection* c) {
}

void UnitTest::init$($shorts* s, $Collection* c) {
}

void UnitTest::init$($ints* i, $Collection* c) {
}

void UnitTest::init$($longs* l, $Collection* c) {
}

void UnitTest::init$($chars* c, $Collection* x) {
}

void UnitTest::init$($floats* f, $Collection* c) {
}

void UnitTest::init$($doubles* d, $Collection* c) {
}

void UnitTest::init$($booleans* b, $Collection* c) {
}

void UnitTest::init$($StringArray* s, $Collection* c) {
}

void UnitTest::init$($ClassArray* c, $Collection* x) {
}

void UnitTest::init$($EnumArray* e, $Collection* c) {
}

void UnitTest::scalarTypesParam(int32_t x) {
}

void UnitTest::scalarTypesAcceptDefaultParam(int32_t x) {
}

void UnitTest::scalarTypesOverrideDefaultParam(int32_t x) {
}

void UnitTest::emptyArrayTypesParam(int32_t x) {
}

void UnitTest::singleElementArrayTypesParam(int32_t x) {
}

void UnitTest::twoElementArrayTypesParam(int32_t x) {
}

void UnitTest::arrayTypesAcceptDefaultParam(int32_t x) {
}

void UnitTest::arrayTypesOverrideDefaultParam(int32_t x) {
}

void UnitTest::markerParam(int32_t x) {
}

void UnitTest::SingleMemberByteParam(int32_t x) {
}

void UnitTest::SingleMemberShortParam(int32_t x) {
}

void UnitTest::SingleMemberIntParam(int32_t x) {
}

void UnitTest::SingleMemberLongParam(int32_t x) {
}

void UnitTest::SingleMemberCharParam(int32_t x) {
}

void UnitTest::SingleMemberFloatParam(int32_t x) {
}

void UnitTest::SingleMemberDoubleParam(int32_t x) {
}

void UnitTest::SingleMemberBooleanParam(int32_t x) {
}

void UnitTest::SingleMemberStringParam(int32_t x) {
}

void UnitTest::SingleMemberClassParam(int32_t x) {
}

void UnitTest::SingleMemberEnumParam(int32_t x) {
}

void UnitTest::SingleMemberByteOvrdDefParam(int32_t x) {
}

void UnitTest::SingleMemberShortOvrdDefParam(int32_t x) {
}

void UnitTest::SingleMemberIntOvrdDefParam(int32_t x) {
}

void UnitTest::SingleMemberLongOvrdDefParam(int32_t x) {
}

void UnitTest::SingleMemberCharOvrdDefParam(int32_t x) {
}

void UnitTest::SingleMemberFloatOvrdDefParam(int32_t x) {
}

void UnitTest::SingleMemberDoubleOvrdDefParam(int32_t x) {
}

void UnitTest::SingleMemberBooleanOvrdDefParam(int32_t x) {
}

void UnitTest::SingleMemberStringOvrdDefParam(int32_t x) {
}

void UnitTest::SingleMemberClassOvrdDefParam(int32_t x) {
}

void UnitTest::SingleMemberEnumOvrdDefParam(int32_t x) {
}

void UnitTest::SingleMemberByteAcceptDefParam(int32_t x) {
}

void UnitTest::SingleMemberShortAcceptDefParam(int32_t x) {
}

void UnitTest::SingleMemberIntAcceptDefParam(int32_t x) {
}

void UnitTest::SingleMemberLongAcceptDefParam(int32_t x) {
}

void UnitTest::SingleMemberCharAcceptDefParam(int32_t x) {
}

void UnitTest::SingleMemberFloatAcceptDefParam(int32_t x) {
}

void UnitTest::SingleMemberDoubleAcceptDefParam(int32_t x) {
}

void UnitTest::SingleMemberBooleanAcceptDefParam(int32_t x) {
}

void UnitTest::SingleMemberStringAcceptDefParam(int32_t x) {
}

void UnitTest::SingleMemberClassAcceptDefParam(int32_t x) {
}

void UnitTest::SingleMemberEnumAcceptDefParam(int32_t x) {
}

void UnitTest::SingleMemberByteArrEmptyParam(int32_t x) {
}

void UnitTest::SingleMemberShortArrEmptyParam(int32_t x) {
}

void UnitTest::SingleMemberIntArrEmptyParam(int32_t x) {
}

void UnitTest::SingleMemberLongArrEmptyParam(int32_t x) {
}

void UnitTest::SingleMemberCharArrEmptyParam(int32_t x) {
}

void UnitTest::SingleMemberFloatArrEmptyParam(int32_t x) {
}

void UnitTest::SingleMemberDoubleArrEmptyParam(int32_t x) {
}

void UnitTest::SingleMemberBooleanArrEmptyParam(int32_t x) {
}

void UnitTest::SingleMemberStringArrEmptyParam(int32_t x) {
}

void UnitTest::SingleMemberClassArrEmptyParam(int32_t x) {
}

void UnitTest::SingleMemberEnumArrEmptyParam(int32_t x) {
}

void UnitTest::SingleMemberByteArrOneParam(int32_t x) {
}

void UnitTest::SingleMemberShortArrOneParam(int32_t x) {
}

void UnitTest::SingleMemberIntArrOneParam(int32_t x) {
}

void UnitTest::SingleMemberLongArrOneParam(int32_t x) {
}

void UnitTest::SingleMemberCharArrOneParam(int32_t x) {
}

void UnitTest::SingleMemberFloatArrOneParam(int32_t x) {
}

void UnitTest::SingleMemberDoubleArrOneParam(int32_t x) {
}

void UnitTest::SingleMemberBooleanArrOneParam(int32_t x) {
}

void UnitTest::SingleMemberStringArrOneParam(int32_t x) {
}

void UnitTest::SingleMemberClassArrOneParam(int32_t x) {
}

void UnitTest::SingleMemberEnumArrOneParam(int32_t x) {
}

void UnitTest::SingleMemberByteArrTwoParam(int32_t x) {
}

void UnitTest::SingleMemberShortArrTwoParam(int32_t x) {
}

void UnitTest::SingleMemberIntArrTwoParam(int32_t x) {
}

void UnitTest::SingleMemberLongArrTwoParam(int32_t x) {
}

void UnitTest::SingleMemberCharArrTwoParam(int32_t x) {
}

void UnitTest::SingleMemberFloatArrTwoParam(int32_t x) {
}

void UnitTest::SingleMemberDoubleArrTwoParam(int32_t x) {
}

void UnitTest::SingleMemberBooleanArrTwoParam(int32_t x) {
}

void UnitTest::SingleMemberStringArrTwoParam(int32_t x) {
}

void UnitTest::SingleMemberClassArrTwoParam(int32_t x) {
}

void UnitTest::SingleMemberEnumArrTwoParam(int32_t x) {
}

void UnitTest::SingleMemberByteArrOvrdDefParam(int32_t x) {
}

void UnitTest::SingleMemberShortArrOvrdDefParam(int32_t x) {
}

void UnitTest::SingleMemberIntArrOvrdDefParam(int32_t x) {
}

void UnitTest::SingleMemberLongArrOvrdDefParam(int32_t x) {
}

void UnitTest::SingleMemberCharArrOvrdDefParam(int32_t x) {
}

void UnitTest::SingleMemberFloatArrOvrdDefParam(int32_t x) {
}

void UnitTest::SingleMemberDoubleArrOvrdDefParam(int32_t x) {
}

void UnitTest::SingleMemberBooleanArrOvrdDefParam(int32_t x) {
}

void UnitTest::SingleMemberStringArrOvrdDefParam(int32_t x) {
}

void UnitTest::SingleMemberClassArrOvrdDefParam(int32_t x) {
}

void UnitTest::SingleMemberEnumArrOvrdDefParam(int32_t x) {
}

void UnitTest::SingleMemberByteArrAcceptDefParam(int32_t x) {
}

void UnitTest::SingleMemberShortArrAcceptDefParam(int32_t x) {
}

void UnitTest::SingleMemberIntArrAcceptDefParam(int32_t x) {
}

void UnitTest::SingleMemberLongArrAcceptDefParam(int32_t x) {
}

void UnitTest::SingleMemberCharArrAcceptDefParam(int32_t x) {
}

void UnitTest::SingleMemberFloatArrAcceptDefParam(int32_t x) {
}

void UnitTest::SingleMemberDoubleArrAcceptDefParam(int32_t x) {
}

void UnitTest::SingleMemberBooleanArrAcceptDefParam(int32_t x) {
}

void UnitTest::SingleMemberStringArrAcceptDefParam(int32_t x) {
}

void UnitTest::SingleMemberClassArrAcceptDefParam(int32_t x) {
}

void UnitTest::SingleMemberEnumArrAcceptDefParam(int32_t x) {
}

void UnitTest::clinit$($Class* clazz) {
	$assignStatic(UnitTest::X, $new($ClassArray, 0));
	$assignStatic(UnitTest::Y, $new($ClassArray, {$Integer::TYPE}));
	UnitTest::numTests = 0;
	UnitTest::failCount = 0;
}

UnitTest::UnitTest() {
}

$Class* UnitTest::load$($String* name, bool initialize) {
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
	$CompoundAttribute markerFieldfieldAnnotations$$[] = {
		{"LUniTest/Marker;", nullptr},
		{}
	};
	$NamedAttribute SingleMemberByteFieldfieldAnnotations$$$namedAttribute[] = {
		{"value", 'B', "1"},
		{}
	};
	$CompoundAttribute SingleMemberByteFieldfieldAnnotations$$[] = {
		{"LUniTest/SingleMemberByte;", SingleMemberByteFieldfieldAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute SingleMemberShortFieldfieldAnnotations$$$namedAttribute[] = {
		{"value", 'S', "2"},
		{}
	};
	$CompoundAttribute SingleMemberShortFieldfieldAnnotations$$[] = {
		{"LUniTest/SingleMemberShort;", SingleMemberShortFieldfieldAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute SingleMemberIntFieldfieldAnnotations$$$namedAttribute[] = {
		{"value", 'I', "3"},
		{}
	};
	$CompoundAttribute SingleMemberIntFieldfieldAnnotations$$[] = {
		{"LUniTest/SingleMemberInt;", SingleMemberIntFieldfieldAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute SingleMemberLongFieldfieldAnnotations$$$namedAttribute[] = {
		{"value", 'J', "4"},
		{}
	};
	$CompoundAttribute SingleMemberLongFieldfieldAnnotations$$[] = {
		{"LUniTest/SingleMemberLong;", SingleMemberLongFieldfieldAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute SingleMemberCharFieldfieldAnnotations$$$namedAttribute[] = {
		{"value", 'C', "5"},
		{}
	};
	$CompoundAttribute SingleMemberCharFieldfieldAnnotations$$[] = {
		{"LUniTest/SingleMemberChar;", SingleMemberCharFieldfieldAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute SingleMemberFloatFieldfieldAnnotations$$$namedAttribute[] = {
		{"value", 'F', "6.0"},
		{}
	};
	$CompoundAttribute SingleMemberFloatFieldfieldAnnotations$$[] = {
		{"LUniTest/SingleMemberFloat;", SingleMemberFloatFieldfieldAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute SingleMemberDoubleFieldfieldAnnotations$$$namedAttribute[] = {
		{"value", 'D', "7.0"},
		{}
	};
	$CompoundAttribute SingleMemberDoubleFieldfieldAnnotations$$[] = {
		{"LUniTest/SingleMemberDouble;", SingleMemberDoubleFieldfieldAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute SingleMemberBooleanFieldfieldAnnotations$$$namedAttribute[] = {
		{"value", 'Z', "true"},
		{}
	};
	$CompoundAttribute SingleMemberBooleanFieldfieldAnnotations$$[] = {
		{"LUniTest/SingleMemberBoolean;", SingleMemberBooleanFieldfieldAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute SingleMemberStringFieldfieldAnnotations$$$namedAttribute[] = {
		{"value", 's', "custom"},
		{}
	};
	$CompoundAttribute SingleMemberStringFieldfieldAnnotations$$[] = {
		{"LUniTest/SingleMemberString;", SingleMemberStringFieldfieldAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute SingleMemberClassFieldfieldAnnotations$$$namedAttribute[] = {
		{"value", 'c', "Ljava/util/Map;"},
		{}
	};
	$CompoundAttribute SingleMemberClassFieldfieldAnnotations$$[] = {
		{"LUniTest/SingleMemberClass;", SingleMemberClassFieldfieldAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute SingleMemberEnumFieldfieldAnnotations$$$namedAttribute[] = {
		{"value", 'e', "LUniTest/Stooge; MOE"},
		{}
	};
	$CompoundAttribute SingleMemberEnumFieldfieldAnnotations$$[] = {
		{"LUniTest/SingleMemberEnum;", SingleMemberEnumFieldfieldAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute SingleMemberByteOvrdDefFieldfieldAnnotations$$$namedAttribute[] = {
		{"value", 'B', "1"},
		{}
	};
	$CompoundAttribute SingleMemberByteOvrdDefFieldfieldAnnotations$$[] = {
		{"LUniTest/SingleMemberByteWithDef;", SingleMemberByteOvrdDefFieldfieldAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute SingleMemberShortOvrdDefFieldfieldAnnotations$$$namedAttribute[] = {
		{"value", 'S', "2"},
		{}
	};
	$CompoundAttribute SingleMemberShortOvrdDefFieldfieldAnnotations$$[] = {
		{"LUniTest/SingleMemberShortWithDef;", SingleMemberShortOvrdDefFieldfieldAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute SingleMemberIntOvrdDefFieldfieldAnnotations$$$namedAttribute[] = {
		{"value", 'I', "3"},
		{}
	};
	$CompoundAttribute SingleMemberIntOvrdDefFieldfieldAnnotations$$[] = {
		{"LUniTest/SingleMemberIntWithDef;", SingleMemberIntOvrdDefFieldfieldAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute SingleMemberLongOvrdDefFieldfieldAnnotations$$$namedAttribute[] = {
		{"value", 'J', "4"},
		{}
	};
	$CompoundAttribute SingleMemberLongOvrdDefFieldfieldAnnotations$$[] = {
		{"LUniTest/SingleMemberLongWithDef;", SingleMemberLongOvrdDefFieldfieldAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute SingleMemberCharOvrdDefFieldfieldAnnotations$$$namedAttribute[] = {
		{"value", 'C', "5"},
		{}
	};
	$CompoundAttribute SingleMemberCharOvrdDefFieldfieldAnnotations$$[] = {
		{"LUniTest/SingleMemberCharWithDef;", SingleMemberCharOvrdDefFieldfieldAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute SingleMemberFloatOvrdDefFieldfieldAnnotations$$$namedAttribute[] = {
		{"value", 'F', "6.0"},
		{}
	};
	$CompoundAttribute SingleMemberFloatOvrdDefFieldfieldAnnotations$$[] = {
		{"LUniTest/SingleMemberFloatWithDef;", SingleMemberFloatOvrdDefFieldfieldAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute SingleMemberDoubleOvrdDefFieldfieldAnnotations$$$namedAttribute[] = {
		{"value", 'D', "7.0"},
		{}
	};
	$CompoundAttribute SingleMemberDoubleOvrdDefFieldfieldAnnotations$$[] = {
		{"LUniTest/SingleMemberDoubleWithDef;", SingleMemberDoubleOvrdDefFieldfieldAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute SingleMemberBooleanOvrdDefFieldfieldAnnotations$$$namedAttribute[] = {
		{"value", 'Z', "true"},
		{}
	};
	$CompoundAttribute SingleMemberBooleanOvrdDefFieldfieldAnnotations$$[] = {
		{"LUniTest/SingleMemberBooleanWithDef;", SingleMemberBooleanOvrdDefFieldfieldAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute SingleMemberStringOvrdDefFieldfieldAnnotations$$$namedAttribute[] = {
		{"value", 's', "custom"},
		{}
	};
	$CompoundAttribute SingleMemberStringOvrdDefFieldfieldAnnotations$$[] = {
		{"LUniTest/SingleMemberStringWithDef;", SingleMemberStringOvrdDefFieldfieldAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute SingleMemberClassOvrdDefFieldfieldAnnotations$$$namedAttribute[] = {
		{"value", 'c', "Ljava/util/Map;"},
		{}
	};
	$CompoundAttribute SingleMemberClassOvrdDefFieldfieldAnnotations$$[] = {
		{"LUniTest/SingleMemberClassWithDef;", SingleMemberClassOvrdDefFieldfieldAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute SingleMemberEnumOvrdDefFieldfieldAnnotations$$$namedAttribute[] = {
		{"value", 'e', "LUniTest/Stooge; MOE"},
		{}
	};
	$CompoundAttribute SingleMemberEnumOvrdDefFieldfieldAnnotations$$[] = {
		{"LUniTest/SingleMemberEnumWithDef;", SingleMemberEnumOvrdDefFieldfieldAnnotations$$$namedAttribute},
		{}
	};
	$CompoundAttribute SingleMemberByteAcceptDefFieldfieldAnnotations$$[] = {
		{"LUniTest/SingleMemberByteWithDef;", nullptr},
		{}
	};
	$CompoundAttribute SingleMemberShortAcceptDefFieldfieldAnnotations$$[] = {
		{"LUniTest/SingleMemberShortWithDef;", nullptr},
		{}
	};
	$CompoundAttribute SingleMemberIntAcceptDefFieldfieldAnnotations$$[] = {
		{"LUniTest/SingleMemberIntWithDef;", nullptr},
		{}
	};
	$CompoundAttribute SingleMemberLongAcceptDefFieldfieldAnnotations$$[] = {
		{"LUniTest/SingleMemberLongWithDef;", nullptr},
		{}
	};
	$CompoundAttribute SingleMemberCharAcceptDefFieldfieldAnnotations$$[] = {
		{"LUniTest/SingleMemberCharWithDef;", nullptr},
		{}
	};
	$CompoundAttribute SingleMemberFloatAcceptDefFieldfieldAnnotations$$[] = {
		{"LUniTest/SingleMemberFloatWithDef;", nullptr},
		{}
	};
	$CompoundAttribute SingleMemberDoubleAcceptDefFieldfieldAnnotations$$[] = {
		{"LUniTest/SingleMemberDoubleWithDef;", nullptr},
		{}
	};
	$CompoundAttribute SingleMemberBooleanAcceptDefFieldfieldAnnotations$$[] = {
		{"LUniTest/SingleMemberBooleanWithDef;", nullptr},
		{}
	};
	$CompoundAttribute SingleMemberStringAcceptDefFieldfieldAnnotations$$[] = {
		{"LUniTest/SingleMemberStringWithDef;", nullptr},
		{}
	};
	$CompoundAttribute SingleMemberClassAcceptDefFieldfieldAnnotations$$[] = {
		{"LUniTest/SingleMemberClassWithDef;", nullptr},
		{}
	};
	$CompoundAttribute SingleMemberEnumAcceptDefFieldfieldAnnotations$$[] = {
		{"LUniTest/SingleMemberEnumWithDef;", nullptr},
		{}
	};
	$Attribute $attribute$48[] = {
		{'-'}
	};
	$NamedAttribute SingleMemberByteArrEmptyFieldfieldAnnotations$$$namedAttribute[] = {
		{"value", '[', $attribute$48},
		{}
	};
	$CompoundAttribute SingleMemberByteArrEmptyFieldfieldAnnotations$$[] = {
		{"LUniTest/SingleMemberByteArray;", SingleMemberByteArrEmptyFieldfieldAnnotations$$$namedAttribute},
		{}
	};
	$Attribute $attribute$49[] = {
		{'-'}
	};
	$NamedAttribute SingleMemberShortArrEmptyFieldfieldAnnotations$$$namedAttribute[] = {
		{"value", '[', $attribute$49},
		{}
	};
	$CompoundAttribute SingleMemberShortArrEmptyFieldfieldAnnotations$$[] = {
		{"LUniTest/SingleMemberShortArray;", SingleMemberShortArrEmptyFieldfieldAnnotations$$$namedAttribute},
		{}
	};
	$Attribute $attribute$50[] = {
		{'-'}
	};
	$NamedAttribute SingleMemberIntArrEmptyFieldfieldAnnotations$$$namedAttribute[] = {
		{"value", '[', $attribute$50},
		{}
	};
	$CompoundAttribute SingleMemberIntArrEmptyFieldfieldAnnotations$$[] = {
		{"LUniTest/SingleMemberIntArray;", SingleMemberIntArrEmptyFieldfieldAnnotations$$$namedAttribute},
		{}
	};
	$Attribute $attribute$51[] = {
		{'-'}
	};
	$NamedAttribute SingleMemberLongArrEmptyFieldfieldAnnotations$$$namedAttribute[] = {
		{"value", '[', $attribute$51},
		{}
	};
	$CompoundAttribute SingleMemberLongArrEmptyFieldfieldAnnotations$$[] = {
		{"LUniTest/SingleMemberLongArray;", SingleMemberLongArrEmptyFieldfieldAnnotations$$$namedAttribute},
		{}
	};
	$Attribute $attribute$52[] = {
		{'-'}
	};
	$NamedAttribute SingleMemberCharArrEmptyFieldfieldAnnotations$$$namedAttribute[] = {
		{"value", '[', $attribute$52},
		{}
	};
	$CompoundAttribute SingleMemberCharArrEmptyFieldfieldAnnotations$$[] = {
		{"LUniTest/SingleMemberCharArray;", SingleMemberCharArrEmptyFieldfieldAnnotations$$$namedAttribute},
		{}
	};
	$Attribute $attribute$53[] = {
		{'-'}
	};
	$NamedAttribute SingleMemberFloatArrEmptyFieldfieldAnnotations$$$namedAttribute[] = {
		{"value", '[', $attribute$53},
		{}
	};
	$CompoundAttribute SingleMemberFloatArrEmptyFieldfieldAnnotations$$[] = {
		{"LUniTest/SingleMemberFloatArray;", SingleMemberFloatArrEmptyFieldfieldAnnotations$$$namedAttribute},
		{}
	};
	$Attribute $attribute$54[] = {
		{'-'}
	};
	$NamedAttribute SingleMemberDoubleArrEmptyFieldfieldAnnotations$$$namedAttribute[] = {
		{"value", '[', $attribute$54},
		{}
	};
	$CompoundAttribute SingleMemberDoubleArrEmptyFieldfieldAnnotations$$[] = {
		{"LUniTest/SingleMemberDoubleArray;", SingleMemberDoubleArrEmptyFieldfieldAnnotations$$$namedAttribute},
		{}
	};
	$Attribute $attribute$55[] = {
		{'-'}
	};
	$NamedAttribute SingleMemberBooleanArrEmptyFieldfieldAnnotations$$$namedAttribute[] = {
		{"value", '[', $attribute$55},
		{}
	};
	$CompoundAttribute SingleMemberBooleanArrEmptyFieldfieldAnnotations$$[] = {
		{"LUniTest/SingleMemberBooleanArray;", SingleMemberBooleanArrEmptyFieldfieldAnnotations$$$namedAttribute},
		{}
	};
	$Attribute $attribute$56[] = {
		{'-'}
	};
	$NamedAttribute SingleMemberStringArrEmptyFieldfieldAnnotations$$$namedAttribute[] = {
		{"value", '[', $attribute$56},
		{}
	};
	$CompoundAttribute SingleMemberStringArrEmptyFieldfieldAnnotations$$[] = {
		{"LUniTest/SingleMemberStringArray;", SingleMemberStringArrEmptyFieldfieldAnnotations$$$namedAttribute},
		{}
	};
	$Attribute $attribute$57[] = {
		{'-'}
	};
	$NamedAttribute SingleMemberClassArrEmptyFieldfieldAnnotations$$$namedAttribute[] = {
		{"value", '[', $attribute$57},
		{}
	};
	$CompoundAttribute SingleMemberClassArrEmptyFieldfieldAnnotations$$[] = {
		{"LUniTest/SingleMemberClassArray;", SingleMemberClassArrEmptyFieldfieldAnnotations$$$namedAttribute},
		{}
	};
	$Attribute $attribute$58[] = {
		{'-'}
	};
	$NamedAttribute SingleMemberEnumArrEmptyFieldfieldAnnotations$$$namedAttribute[] = {
		{"value", '[', $attribute$58},
		{}
	};
	$CompoundAttribute SingleMemberEnumArrEmptyFieldfieldAnnotations$$[] = {
		{"LUniTest/SingleMemberEnumArray;", SingleMemberEnumArrEmptyFieldfieldAnnotations$$$namedAttribute},
		{}
	};
	$Attribute $attribute$59[] = {
		{'B', "1"},
		{'-'}
	};
	$NamedAttribute SingleMemberByteArrOneFieldfieldAnnotations$$$namedAttribute[] = {
		{"value", '[', $attribute$59},
		{}
	};
	$CompoundAttribute SingleMemberByteArrOneFieldfieldAnnotations$$[] = {
		{"LUniTest/SingleMemberByteArray;", SingleMemberByteArrOneFieldfieldAnnotations$$$namedAttribute},
		{}
	};
	$Attribute $attribute$60[] = {
		{'S', "2"},
		{'-'}
	};
	$NamedAttribute SingleMemberShortArrOneFieldfieldAnnotations$$$namedAttribute[] = {
		{"value", '[', $attribute$60},
		{}
	};
	$CompoundAttribute SingleMemberShortArrOneFieldfieldAnnotations$$[] = {
		{"LUniTest/SingleMemberShortArray;", SingleMemberShortArrOneFieldfieldAnnotations$$$namedAttribute},
		{}
	};
	$Attribute $attribute$61[] = {
		{'I', "3"},
		{'-'}
	};
	$NamedAttribute SingleMemberIntArrOneFieldfieldAnnotations$$$namedAttribute[] = {
		{"value", '[', $attribute$61},
		{}
	};
	$CompoundAttribute SingleMemberIntArrOneFieldfieldAnnotations$$[] = {
		{"LUniTest/SingleMemberIntArray;", SingleMemberIntArrOneFieldfieldAnnotations$$$namedAttribute},
		{}
	};
	$Attribute $attribute$62[] = {
		{'J', "4"},
		{'-'}
	};
	$NamedAttribute SingleMemberLongArrOneFieldfieldAnnotations$$$namedAttribute[] = {
		{"value", '[', $attribute$62},
		{}
	};
	$CompoundAttribute SingleMemberLongArrOneFieldfieldAnnotations$$[] = {
		{"LUniTest/SingleMemberLongArray;", SingleMemberLongArrOneFieldfieldAnnotations$$$namedAttribute},
		{}
	};
	$Attribute $attribute$63[] = {
		{'C', "5"},
		{'-'}
	};
	$NamedAttribute SingleMemberCharArrOneFieldfieldAnnotations$$$namedAttribute[] = {
		{"value", '[', $attribute$63},
		{}
	};
	$CompoundAttribute SingleMemberCharArrOneFieldfieldAnnotations$$[] = {
		{"LUniTest/SingleMemberCharArray;", SingleMemberCharArrOneFieldfieldAnnotations$$$namedAttribute},
		{}
	};
	$Attribute $attribute$64[] = {
		{'F', "6.0"},
		{'-'}
	};
	$NamedAttribute SingleMemberFloatArrOneFieldfieldAnnotations$$$namedAttribute[] = {
		{"value", '[', $attribute$64},
		{}
	};
	$CompoundAttribute SingleMemberFloatArrOneFieldfieldAnnotations$$[] = {
		{"LUniTest/SingleMemberFloatArray;", SingleMemberFloatArrOneFieldfieldAnnotations$$$namedAttribute},
		{}
	};
	$Attribute $attribute$65[] = {
		{'D', "7.0"},
		{'-'}
	};
	$NamedAttribute SingleMemberDoubleArrOneFieldfieldAnnotations$$$namedAttribute[] = {
		{"value", '[', $attribute$65},
		{}
	};
	$CompoundAttribute SingleMemberDoubleArrOneFieldfieldAnnotations$$[] = {
		{"LUniTest/SingleMemberDoubleArray;", SingleMemberDoubleArrOneFieldfieldAnnotations$$$namedAttribute},
		{}
	};
	$Attribute $attribute$66[] = {
		{'Z', "true"},
		{'-'}
	};
	$NamedAttribute SingleMemberBooleanArrOneFieldfieldAnnotations$$$namedAttribute[] = {
		{"value", '[', $attribute$66},
		{}
	};
	$CompoundAttribute SingleMemberBooleanArrOneFieldfieldAnnotations$$[] = {
		{"LUniTest/SingleMemberBooleanArray;", SingleMemberBooleanArrOneFieldfieldAnnotations$$$namedAttribute},
		{}
	};
	$Attribute $attribute$67[] = {
		{'s', "custom"},
		{'-'}
	};
	$NamedAttribute SingleMemberStringArrOneFieldfieldAnnotations$$$namedAttribute[] = {
		{"value", '[', $attribute$67},
		{}
	};
	$CompoundAttribute SingleMemberStringArrOneFieldfieldAnnotations$$[] = {
		{"LUniTest/SingleMemberStringArray;", SingleMemberStringArrOneFieldfieldAnnotations$$$namedAttribute},
		{}
	};
	$Attribute $attribute$68[] = {
		{'c', "Ljava/util/Map;"},
		{'-'}
	};
	$NamedAttribute SingleMemberClassArrOneFieldfieldAnnotations$$$namedAttribute[] = {
		{"value", '[', $attribute$68},
		{}
	};
	$CompoundAttribute SingleMemberClassArrOneFieldfieldAnnotations$$[] = {
		{"LUniTest/SingleMemberClassArray;", SingleMemberClassArrOneFieldfieldAnnotations$$$namedAttribute},
		{}
	};
	$Attribute $attribute$69[] = {
		{'e', "LUniTest/Stooge; MOE"},
		{'-'}
	};
	$NamedAttribute SingleMemberEnumArrOneFieldfieldAnnotations$$$namedAttribute[] = {
		{"value", '[', $attribute$69},
		{}
	};
	$CompoundAttribute SingleMemberEnumArrOneFieldfieldAnnotations$$[] = {
		{"LUniTest/SingleMemberEnumArray;", SingleMemberEnumArrOneFieldfieldAnnotations$$$namedAttribute},
		{}
	};
	$Attribute $attribute$70[] = {
		{'B', "1"},
		{'B', "2"},
		{'-'}
	};
	$NamedAttribute SingleMemberByteArrTwoFieldfieldAnnotations$$$namedAttribute[] = {
		{"value", '[', $attribute$70},
		{}
	};
	$CompoundAttribute SingleMemberByteArrTwoFieldfieldAnnotations$$[] = {
		{"LUniTest/SingleMemberByteArray;", SingleMemberByteArrTwoFieldfieldAnnotations$$$namedAttribute},
		{}
	};
	$Attribute $attribute$71[] = {
		{'S', "2"},
		{'S', "3"},
		{'-'}
	};
	$NamedAttribute SingleMemberShortArrTwoFieldfieldAnnotations$$$namedAttribute[] = {
		{"value", '[', $attribute$71},
		{}
	};
	$CompoundAttribute SingleMemberShortArrTwoFieldfieldAnnotations$$[] = {
		{"LUniTest/SingleMemberShortArray;", SingleMemberShortArrTwoFieldfieldAnnotations$$$namedAttribute},
		{}
	};
	$Attribute $attribute$72[] = {
		{'I', "3"},
		{'I', "4"},
		{'-'}
	};
	$NamedAttribute SingleMemberIntArrTwoFieldfieldAnnotations$$$namedAttribute[] = {
		{"value", '[', $attribute$72},
		{}
	};
	$CompoundAttribute SingleMemberIntArrTwoFieldfieldAnnotations$$[] = {
		{"LUniTest/SingleMemberIntArray;", SingleMemberIntArrTwoFieldfieldAnnotations$$$namedAttribute},
		{}
	};
	$Attribute $attribute$73[] = {
		{'J', "4"},
		{'J', "5"},
		{'-'}
	};
	$NamedAttribute SingleMemberLongArrTwoFieldfieldAnnotations$$$namedAttribute[] = {
		{"value", '[', $attribute$73},
		{}
	};
	$CompoundAttribute SingleMemberLongArrTwoFieldfieldAnnotations$$[] = {
		{"LUniTest/SingleMemberLongArray;", SingleMemberLongArrTwoFieldfieldAnnotations$$$namedAttribute},
		{}
	};
	$Attribute $attribute$74[] = {
		{'C', "5"},
		{'C', "6"},
		{'-'}
	};
	$NamedAttribute SingleMemberCharArrTwoFieldfieldAnnotations$$$namedAttribute[] = {
		{"value", '[', $attribute$74},
		{}
	};
	$CompoundAttribute SingleMemberCharArrTwoFieldfieldAnnotations$$[] = {
		{"LUniTest/SingleMemberCharArray;", SingleMemberCharArrTwoFieldfieldAnnotations$$$namedAttribute},
		{}
	};
	$Attribute $attribute$75[] = {
		{'F', "6.0"},
		{'F', "7.0"},
		{'-'}
	};
	$NamedAttribute SingleMemberFloatArrTwoFieldfieldAnnotations$$$namedAttribute[] = {
		{"value", '[', $attribute$75},
		{}
	};
	$CompoundAttribute SingleMemberFloatArrTwoFieldfieldAnnotations$$[] = {
		{"LUniTest/SingleMemberFloatArray;", SingleMemberFloatArrTwoFieldfieldAnnotations$$$namedAttribute},
		{}
	};
	$Attribute $attribute$76[] = {
		{'D', "7.0"},
		{'D', "8.0"},
		{'-'}
	};
	$NamedAttribute SingleMemberDoubleArrTwoFieldfieldAnnotations$$$namedAttribute[] = {
		{"value", '[', $attribute$76},
		{}
	};
	$CompoundAttribute SingleMemberDoubleArrTwoFieldfieldAnnotations$$[] = {
		{"LUniTest/SingleMemberDoubleArray;", SingleMemberDoubleArrTwoFieldfieldAnnotations$$$namedAttribute},
		{}
	};
	$Attribute $attribute$77[] = {
		{'Z', "true"},
		{'Z', "false"},
		{'-'}
	};
	$NamedAttribute SingleMemberBooleanArrTwoFieldfieldAnnotations$$$namedAttribute[] = {
		{"value", '[', $attribute$77},
		{}
	};
	$CompoundAttribute SingleMemberBooleanArrTwoFieldfieldAnnotations$$[] = {
		{"LUniTest/SingleMemberBooleanArray;", SingleMemberBooleanArrTwoFieldfieldAnnotations$$$namedAttribute},
		{}
	};
	$Attribute $attribute$78[] = {
		{'s', "custom"},
		{'s', "paint"},
		{'-'}
	};
	$NamedAttribute SingleMemberStringArrTwoFieldfieldAnnotations$$$namedAttribute[] = {
		{"value", '[', $attribute$78},
		{}
	};
	$CompoundAttribute SingleMemberStringArrTwoFieldfieldAnnotations$$[] = {
		{"LUniTest/SingleMemberStringArray;", SingleMemberStringArrTwoFieldfieldAnnotations$$$namedAttribute},
		{}
	};
	$Attribute $attribute$79[] = {
		{'c', "Ljava/util/Map;"},
		{'c', "Ljava/util/Set;"},
		{'-'}
	};
	$NamedAttribute SingleMemberClassArrTwoFieldfieldAnnotations$$$namedAttribute[] = {
		{"value", '[', $attribute$79},
		{}
	};
	$CompoundAttribute SingleMemberClassArrTwoFieldfieldAnnotations$$[] = {
		{"LUniTest/SingleMemberClassArray;", SingleMemberClassArrTwoFieldfieldAnnotations$$$namedAttribute},
		{}
	};
	$Attribute $attribute$80[] = {
		{'e', "LUniTest/Stooge; MOE"},
		{'e', "LUniTest/Stooge; CURLY"},
		{'-'}
	};
	$NamedAttribute SingleMemberEnumArrTwoFieldfieldAnnotations$$$namedAttribute[] = {
		{"value", '[', $attribute$80},
		{}
	};
	$CompoundAttribute SingleMemberEnumArrTwoFieldfieldAnnotations$$[] = {
		{"LUniTest/SingleMemberEnumArray;", SingleMemberEnumArrTwoFieldfieldAnnotations$$$namedAttribute},
		{}
	};
	$Attribute $attribute$81[] = {
		{'B', "1"},
		{'-'}
	};
	$NamedAttribute SingleMemberByteArrOvrdDefFieldfieldAnnotations$$$namedAttribute[] = {
		{"value", '[', $attribute$81},
		{}
	};
	$CompoundAttribute SingleMemberByteArrOvrdDefFieldfieldAnnotations$$[] = {
		{"LUniTest/SingleMemberByteArrayDef;", SingleMemberByteArrOvrdDefFieldfieldAnnotations$$$namedAttribute},
		{}
	};
	$Attribute $attribute$82[] = {
		{'S', "2"},
		{'-'}
	};
	$NamedAttribute SingleMemberShortArrOvrdDefFieldfieldAnnotations$$$namedAttribute[] = {
		{"value", '[', $attribute$82},
		{}
	};
	$CompoundAttribute SingleMemberShortArrOvrdDefFieldfieldAnnotations$$[] = {
		{"LUniTest/SingleMemberShortArrayDef;", SingleMemberShortArrOvrdDefFieldfieldAnnotations$$$namedAttribute},
		{}
	};
	$Attribute $attribute$83[] = {
		{'I', "3"},
		{'-'}
	};
	$NamedAttribute SingleMemberIntArrOvrdDefFieldfieldAnnotations$$$namedAttribute[] = {
		{"value", '[', $attribute$83},
		{}
	};
	$CompoundAttribute SingleMemberIntArrOvrdDefFieldfieldAnnotations$$[] = {
		{"LUniTest/SingleMemberIntArrayDef;", SingleMemberIntArrOvrdDefFieldfieldAnnotations$$$namedAttribute},
		{}
	};
	$Attribute $attribute$84[] = {
		{'J', "4"},
		{'-'}
	};
	$NamedAttribute SingleMemberLongArrOvrdDefFieldfieldAnnotations$$$namedAttribute[] = {
		{"value", '[', $attribute$84},
		{}
	};
	$CompoundAttribute SingleMemberLongArrOvrdDefFieldfieldAnnotations$$[] = {
		{"LUniTest/SingleMemberLongArrayDef;", SingleMemberLongArrOvrdDefFieldfieldAnnotations$$$namedAttribute},
		{}
	};
	$Attribute $attribute$85[] = {
		{'C', "5"},
		{'-'}
	};
	$NamedAttribute SingleMemberCharArrOvrdDefFieldfieldAnnotations$$$namedAttribute[] = {
		{"value", '[', $attribute$85},
		{}
	};
	$CompoundAttribute SingleMemberCharArrOvrdDefFieldfieldAnnotations$$[] = {
		{"LUniTest/SingleMemberCharArrayDef;", SingleMemberCharArrOvrdDefFieldfieldAnnotations$$$namedAttribute},
		{}
	};
	$Attribute $attribute$86[] = {
		{'F', "6.0"},
		{'-'}
	};
	$NamedAttribute SingleMemberFloatArrOvrdDefFieldfieldAnnotations$$$namedAttribute[] = {
		{"value", '[', $attribute$86},
		{}
	};
	$CompoundAttribute SingleMemberFloatArrOvrdDefFieldfieldAnnotations$$[] = {
		{"LUniTest/SingleMemberFloatArrayDef;", SingleMemberFloatArrOvrdDefFieldfieldAnnotations$$$namedAttribute},
		{}
	};
	$Attribute $attribute$87[] = {
		{'D', "7.0"},
		{'-'}
	};
	$NamedAttribute SingleMemberDoubleArrOvrdDefFieldfieldAnnotations$$$namedAttribute[] = {
		{"value", '[', $attribute$87},
		{}
	};
	$CompoundAttribute SingleMemberDoubleArrOvrdDefFieldfieldAnnotations$$[] = {
		{"LUniTest/SingleMemberDoubleArrayDef;", SingleMemberDoubleArrOvrdDefFieldfieldAnnotations$$$namedAttribute},
		{}
	};
	$Attribute $attribute$88[] = {
		{'Z', "true"},
		{'-'}
	};
	$NamedAttribute SingleMemberBooleanArrOvrdDefFieldfieldAnnotations$$$namedAttribute[] = {
		{"value", '[', $attribute$88},
		{}
	};
	$CompoundAttribute SingleMemberBooleanArrOvrdDefFieldfieldAnnotations$$[] = {
		{"LUniTest/SingleMemberBooleanArrayDef;", SingleMemberBooleanArrOvrdDefFieldfieldAnnotations$$$namedAttribute},
		{}
	};
	$Attribute $attribute$89[] = {
		{'s', "custom"},
		{'-'}
	};
	$NamedAttribute SingleMemberStringArrOvrdDefFieldfieldAnnotations$$$namedAttribute[] = {
		{"value", '[', $attribute$89},
		{}
	};
	$CompoundAttribute SingleMemberStringArrOvrdDefFieldfieldAnnotations$$[] = {
		{"LUniTest/SingleMemberStringArrayDef;", SingleMemberStringArrOvrdDefFieldfieldAnnotations$$$namedAttribute},
		{}
	};
	$Attribute $attribute$90[] = {
		{'c', "Ljava/util/Map;"},
		{'-'}
	};
	$NamedAttribute SingleMemberClassArrOvrdDefFieldfieldAnnotations$$$namedAttribute[] = {
		{"value", '[', $attribute$90},
		{}
	};
	$CompoundAttribute SingleMemberClassArrOvrdDefFieldfieldAnnotations$$[] = {
		{"LUniTest/SingleMemberClassArrayDef;", SingleMemberClassArrOvrdDefFieldfieldAnnotations$$$namedAttribute},
		{}
	};
	$Attribute $attribute$91[] = {
		{'e', "LUniTest/Stooge; MOE"},
		{'-'}
	};
	$NamedAttribute SingleMemberEnumArrOvrdDefFieldfieldAnnotations$$$namedAttribute[] = {
		{"value", '[', $attribute$91},
		{}
	};
	$CompoundAttribute SingleMemberEnumArrOvrdDefFieldfieldAnnotations$$[] = {
		{"LUniTest/SingleMemberEnumArrayDef;", SingleMemberEnumArrOvrdDefFieldfieldAnnotations$$$namedAttribute},
		{}
	};
	$CompoundAttribute SingleMemberByteArrAcceptDefFieldfieldAnnotations$$[] = {
		{"LUniTest/SingleMemberByteArrayDef;", nullptr},
		{}
	};
	$CompoundAttribute SingleMemberShortArrAcceptDefFieldfieldAnnotations$$[] = {
		{"LUniTest/SingleMemberShortArrayDef;", nullptr},
		{}
	};
	$CompoundAttribute SingleMemberIntArrAcceptDefFieldfieldAnnotations$$[] = {
		{"LUniTest/SingleMemberIntArrayDef;", nullptr},
		{}
	};
	$CompoundAttribute SingleMemberLongArrAcceptDefFieldfieldAnnotations$$[] = {
		{"LUniTest/SingleMemberLongArrayDef;", nullptr},
		{}
	};
	$CompoundAttribute SingleMemberCharArrAcceptDefFieldfieldAnnotations$$[] = {
		{"LUniTest/SingleMemberCharArrayDef;", nullptr},
		{}
	};
	$CompoundAttribute SingleMemberFloatArrAcceptDefFieldfieldAnnotations$$[] = {
		{"LUniTest/SingleMemberFloatArrayDef;", nullptr},
		{}
	};
	$CompoundAttribute SingleMemberDoubleArrAcceptDefFieldfieldAnnotations$$[] = {
		{"LUniTest/SingleMemberDoubleArrayDef;", nullptr},
		{}
	};
	$CompoundAttribute SingleMemberBooleanArrAcceptDefFieldfieldAnnotations$$[] = {
		{"LUniTest/SingleMemberBooleanArrayDef;", nullptr},
		{}
	};
	$CompoundAttribute SingleMemberStringArrAcceptDefFieldfieldAnnotations$$[] = {
		{"LUniTest/SingleMemberStringArrayDef;", nullptr},
		{}
	};
	$CompoundAttribute SingleMemberClassArrAcceptDefFieldfieldAnnotations$$[] = {
		{"LUniTest/SingleMemberClassArrayDef;", nullptr},
		{}
	};
	$CompoundAttribute SingleMemberEnumArrAcceptDefFieldfieldAnnotations$$[] = {
		{"LUniTest/SingleMemberEnumArrayDef;", nullptr},
		{}
	};
	$FieldInfo fieldInfos$$[] = {
		{"X", "[Ljava/lang/Class;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(UnitTest, X)},
		{"Y", "[Ljava/lang/Class;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(UnitTest, Y)},
		{"numTests", "I", nullptr, $STATIC, $staticField(UnitTest, numTests)},
		{"failCount", "I", nullptr, $STATIC, $staticField(UnitTest, failCount)},
		{"scalarTypesField", "I", nullptr, $PUBLIC, $field(UnitTest, scalarTypesField), scalarTypesFieldfieldAnnotations$$},
		{"scalarTypesAcceptDefaultField", "I", nullptr, $PUBLIC, $field(UnitTest, scalarTypesAcceptDefaultField), scalarTypesAcceptDefaultFieldfieldAnnotations$$},
		{"scalarTypesOverrideDefaultField", "I", nullptr, $PUBLIC, $field(UnitTest, scalarTypesOverrideDefaultField), scalarTypesOverrideDefaultFieldfieldAnnotations$$},
		{"emptyArrayTypesField", "I", nullptr, $PUBLIC, $field(UnitTest, emptyArrayTypesField), emptyArrayTypesFieldfieldAnnotations$$},
		{"singleElementArrayTypesField", "I", nullptr, $PUBLIC, $field(UnitTest, singleElementArrayTypesField), singleElementArrayTypesFieldfieldAnnotations$$},
		{"twoElementArrayTypesField", "I", nullptr, $PUBLIC, $field(UnitTest, twoElementArrayTypesField), twoElementArrayTypesFieldfieldAnnotations$$},
		{"arrayTypesAcceptDefaultField", "I", nullptr, $PUBLIC, $field(UnitTest, arrayTypesAcceptDefaultField), arrayTypesAcceptDefaultFieldfieldAnnotations$$},
		{"arrayTypesOverrideDefaultField", "I", nullptr, $PUBLIC, $field(UnitTest, arrayTypesOverrideDefaultField), arrayTypesOverrideDefaultFieldfieldAnnotations$$},
		{"markerField", "I", nullptr, $PUBLIC, $field(UnitTest, markerField), markerFieldfieldAnnotations$$},
		{"SingleMemberByteField", "I", nullptr, $PUBLIC, $field(UnitTest, SingleMemberByteField), SingleMemberByteFieldfieldAnnotations$$},
		{"SingleMemberShortField", "I", nullptr, $PUBLIC, $field(UnitTest, SingleMemberShortField), SingleMemberShortFieldfieldAnnotations$$},
		{"SingleMemberIntField", "I", nullptr, $PUBLIC, $field(UnitTest, SingleMemberIntField), SingleMemberIntFieldfieldAnnotations$$},
		{"SingleMemberLongField", "I", nullptr, $PUBLIC, $field(UnitTest, SingleMemberLongField), SingleMemberLongFieldfieldAnnotations$$},
		{"SingleMemberCharField", "I", nullptr, $PUBLIC, $field(UnitTest, SingleMemberCharField), SingleMemberCharFieldfieldAnnotations$$},
		{"SingleMemberFloatField", "I", nullptr, $PUBLIC, $field(UnitTest, SingleMemberFloatField), SingleMemberFloatFieldfieldAnnotations$$},
		{"SingleMemberDoubleField", "I", nullptr, $PUBLIC, $field(UnitTest, SingleMemberDoubleField), SingleMemberDoubleFieldfieldAnnotations$$},
		{"SingleMemberBooleanField", "I", nullptr, $PUBLIC, $field(UnitTest, SingleMemberBooleanField), SingleMemberBooleanFieldfieldAnnotations$$},
		{"SingleMemberStringField", "I", nullptr, $PUBLIC, $field(UnitTest, SingleMemberStringField), SingleMemberStringFieldfieldAnnotations$$},
		{"SingleMemberClassField", "I", nullptr, $PUBLIC, $field(UnitTest, SingleMemberClassField), SingleMemberClassFieldfieldAnnotations$$},
		{"SingleMemberEnumField", "I", nullptr, $PUBLIC, $field(UnitTest, SingleMemberEnumField), SingleMemberEnumFieldfieldAnnotations$$},
		{"SingleMemberByteOvrdDefField", "I", nullptr, $PUBLIC, $field(UnitTest, SingleMemberByteOvrdDefField), SingleMemberByteOvrdDefFieldfieldAnnotations$$},
		{"SingleMemberShortOvrdDefField", "I", nullptr, $PUBLIC, $field(UnitTest, SingleMemberShortOvrdDefField), SingleMemberShortOvrdDefFieldfieldAnnotations$$},
		{"SingleMemberIntOvrdDefField", "I", nullptr, $PUBLIC, $field(UnitTest, SingleMemberIntOvrdDefField), SingleMemberIntOvrdDefFieldfieldAnnotations$$},
		{"SingleMemberLongOvrdDefField", "I", nullptr, $PUBLIC, $field(UnitTest, SingleMemberLongOvrdDefField), SingleMemberLongOvrdDefFieldfieldAnnotations$$},
		{"SingleMemberCharOvrdDefField", "I", nullptr, $PUBLIC, $field(UnitTest, SingleMemberCharOvrdDefField), SingleMemberCharOvrdDefFieldfieldAnnotations$$},
		{"SingleMemberFloatOvrdDefField", "I", nullptr, $PUBLIC, $field(UnitTest, SingleMemberFloatOvrdDefField), SingleMemberFloatOvrdDefFieldfieldAnnotations$$},
		{"SingleMemberDoubleOvrdDefField", "I", nullptr, $PUBLIC, $field(UnitTest, SingleMemberDoubleOvrdDefField), SingleMemberDoubleOvrdDefFieldfieldAnnotations$$},
		{"SingleMemberBooleanOvrdDefField", "I", nullptr, $PUBLIC, $field(UnitTest, SingleMemberBooleanOvrdDefField), SingleMemberBooleanOvrdDefFieldfieldAnnotations$$},
		{"SingleMemberStringOvrdDefField", "I", nullptr, $PUBLIC, $field(UnitTest, SingleMemberStringOvrdDefField), SingleMemberStringOvrdDefFieldfieldAnnotations$$},
		{"SingleMemberClassOvrdDefField", "I", nullptr, $PUBLIC, $field(UnitTest, SingleMemberClassOvrdDefField), SingleMemberClassOvrdDefFieldfieldAnnotations$$},
		{"SingleMemberEnumOvrdDefField", "I", nullptr, $PUBLIC, $field(UnitTest, SingleMemberEnumOvrdDefField), SingleMemberEnumOvrdDefFieldfieldAnnotations$$},
		{"SingleMemberByteAcceptDefField", "I", nullptr, $PUBLIC, $field(UnitTest, SingleMemberByteAcceptDefField), SingleMemberByteAcceptDefFieldfieldAnnotations$$},
		{"SingleMemberShortAcceptDefField", "I", nullptr, $PUBLIC, $field(UnitTest, SingleMemberShortAcceptDefField), SingleMemberShortAcceptDefFieldfieldAnnotations$$},
		{"SingleMemberIntAcceptDefField", "I", nullptr, $PUBLIC, $field(UnitTest, SingleMemberIntAcceptDefField), SingleMemberIntAcceptDefFieldfieldAnnotations$$},
		{"SingleMemberLongAcceptDefField", "I", nullptr, $PUBLIC, $field(UnitTest, SingleMemberLongAcceptDefField), SingleMemberLongAcceptDefFieldfieldAnnotations$$},
		{"SingleMemberCharAcceptDefField", "I", nullptr, $PUBLIC, $field(UnitTest, SingleMemberCharAcceptDefField), SingleMemberCharAcceptDefFieldfieldAnnotations$$},
		{"SingleMemberFloatAcceptDefField", "I", nullptr, $PUBLIC, $field(UnitTest, SingleMemberFloatAcceptDefField), SingleMemberFloatAcceptDefFieldfieldAnnotations$$},
		{"SingleMemberDoubleAcceptDefField", "I", nullptr, $PUBLIC, $field(UnitTest, SingleMemberDoubleAcceptDefField), SingleMemberDoubleAcceptDefFieldfieldAnnotations$$},
		{"SingleMemberBooleanAcceptDefField", "I", nullptr, $PUBLIC, $field(UnitTest, SingleMemberBooleanAcceptDefField), SingleMemberBooleanAcceptDefFieldfieldAnnotations$$},
		{"SingleMemberStringAcceptDefField", "I", nullptr, $PUBLIC, $field(UnitTest, SingleMemberStringAcceptDefField), SingleMemberStringAcceptDefFieldfieldAnnotations$$},
		{"SingleMemberClassAcceptDefField", "I", nullptr, $PUBLIC, $field(UnitTest, SingleMemberClassAcceptDefField), SingleMemberClassAcceptDefFieldfieldAnnotations$$},
		{"SingleMemberEnumAcceptDefField", "I", nullptr, $PUBLIC, $field(UnitTest, SingleMemberEnumAcceptDefField), SingleMemberEnumAcceptDefFieldfieldAnnotations$$},
		{"SingleMemberByteArrEmptyField", "I", nullptr, $PUBLIC, $field(UnitTest, SingleMemberByteArrEmptyField), SingleMemberByteArrEmptyFieldfieldAnnotations$$},
		{"SingleMemberShortArrEmptyField", "I", nullptr, $PUBLIC, $field(UnitTest, SingleMemberShortArrEmptyField), SingleMemberShortArrEmptyFieldfieldAnnotations$$},
		{"SingleMemberIntArrEmptyField", "I", nullptr, $PUBLIC, $field(UnitTest, SingleMemberIntArrEmptyField), SingleMemberIntArrEmptyFieldfieldAnnotations$$},
		{"SingleMemberLongArrEmptyField", "I", nullptr, $PUBLIC, $field(UnitTest, SingleMemberLongArrEmptyField), SingleMemberLongArrEmptyFieldfieldAnnotations$$},
		{"SingleMemberCharArrEmptyField", "I", nullptr, $PUBLIC, $field(UnitTest, SingleMemberCharArrEmptyField), SingleMemberCharArrEmptyFieldfieldAnnotations$$},
		{"SingleMemberFloatArrEmptyField", "I", nullptr, $PUBLIC, $field(UnitTest, SingleMemberFloatArrEmptyField), SingleMemberFloatArrEmptyFieldfieldAnnotations$$},
		{"SingleMemberDoubleArrEmptyField", "I", nullptr, $PUBLIC, $field(UnitTest, SingleMemberDoubleArrEmptyField), SingleMemberDoubleArrEmptyFieldfieldAnnotations$$},
		{"SingleMemberBooleanArrEmptyField", "I", nullptr, $PUBLIC, $field(UnitTest, SingleMemberBooleanArrEmptyField), SingleMemberBooleanArrEmptyFieldfieldAnnotations$$},
		{"SingleMemberStringArrEmptyField", "I", nullptr, $PUBLIC, $field(UnitTest, SingleMemberStringArrEmptyField), SingleMemberStringArrEmptyFieldfieldAnnotations$$},
		{"SingleMemberClassArrEmptyField", "I", nullptr, $PUBLIC, $field(UnitTest, SingleMemberClassArrEmptyField), SingleMemberClassArrEmptyFieldfieldAnnotations$$},
		{"SingleMemberEnumArrEmptyField", "I", nullptr, $PUBLIC, $field(UnitTest, SingleMemberEnumArrEmptyField), SingleMemberEnumArrEmptyFieldfieldAnnotations$$},
		{"SingleMemberByteArrOneField", "I", nullptr, $PUBLIC, $field(UnitTest, SingleMemberByteArrOneField), SingleMemberByteArrOneFieldfieldAnnotations$$},
		{"SingleMemberShortArrOneField", "I", nullptr, $PUBLIC, $field(UnitTest, SingleMemberShortArrOneField), SingleMemberShortArrOneFieldfieldAnnotations$$},
		{"SingleMemberIntArrOneField", "I", nullptr, $PUBLIC, $field(UnitTest, SingleMemberIntArrOneField), SingleMemberIntArrOneFieldfieldAnnotations$$},
		{"SingleMemberLongArrOneField", "I", nullptr, $PUBLIC, $field(UnitTest, SingleMemberLongArrOneField), SingleMemberLongArrOneFieldfieldAnnotations$$},
		{"SingleMemberCharArrOneField", "I", nullptr, $PUBLIC, $field(UnitTest, SingleMemberCharArrOneField), SingleMemberCharArrOneFieldfieldAnnotations$$},
		{"SingleMemberFloatArrOneField", "I", nullptr, $PUBLIC, $field(UnitTest, SingleMemberFloatArrOneField), SingleMemberFloatArrOneFieldfieldAnnotations$$},
		{"SingleMemberDoubleArrOneField", "I", nullptr, $PUBLIC, $field(UnitTest, SingleMemberDoubleArrOneField), SingleMemberDoubleArrOneFieldfieldAnnotations$$},
		{"SingleMemberBooleanArrOneField", "I", nullptr, $PUBLIC, $field(UnitTest, SingleMemberBooleanArrOneField), SingleMemberBooleanArrOneFieldfieldAnnotations$$},
		{"SingleMemberStringArrOneField", "I", nullptr, $PUBLIC, $field(UnitTest, SingleMemberStringArrOneField), SingleMemberStringArrOneFieldfieldAnnotations$$},
		{"SingleMemberClassArrOneField", "I", nullptr, $PUBLIC, $field(UnitTest, SingleMemberClassArrOneField), SingleMemberClassArrOneFieldfieldAnnotations$$},
		{"SingleMemberEnumArrOneField", "I", nullptr, $PUBLIC, $field(UnitTest, SingleMemberEnumArrOneField), SingleMemberEnumArrOneFieldfieldAnnotations$$},
		{"SingleMemberByteArrTwoField", "I", nullptr, $PUBLIC, $field(UnitTest, SingleMemberByteArrTwoField), SingleMemberByteArrTwoFieldfieldAnnotations$$},
		{"SingleMemberShortArrTwoField", "I", nullptr, $PUBLIC, $field(UnitTest, SingleMemberShortArrTwoField), SingleMemberShortArrTwoFieldfieldAnnotations$$},
		{"SingleMemberIntArrTwoField", "I", nullptr, $PUBLIC, $field(UnitTest, SingleMemberIntArrTwoField), SingleMemberIntArrTwoFieldfieldAnnotations$$},
		{"SingleMemberLongArrTwoField", "I", nullptr, $PUBLIC, $field(UnitTest, SingleMemberLongArrTwoField), SingleMemberLongArrTwoFieldfieldAnnotations$$},
		{"SingleMemberCharArrTwoField", "I", nullptr, $PUBLIC, $field(UnitTest, SingleMemberCharArrTwoField), SingleMemberCharArrTwoFieldfieldAnnotations$$},
		{"SingleMemberFloatArrTwoField", "I", nullptr, $PUBLIC, $field(UnitTest, SingleMemberFloatArrTwoField), SingleMemberFloatArrTwoFieldfieldAnnotations$$},
		{"SingleMemberDoubleArrTwoField", "I", nullptr, $PUBLIC, $field(UnitTest, SingleMemberDoubleArrTwoField), SingleMemberDoubleArrTwoFieldfieldAnnotations$$},
		{"SingleMemberBooleanArrTwoField", "I", nullptr, $PUBLIC, $field(UnitTest, SingleMemberBooleanArrTwoField), SingleMemberBooleanArrTwoFieldfieldAnnotations$$},
		{"SingleMemberStringArrTwoField", "I", nullptr, $PUBLIC, $field(UnitTest, SingleMemberStringArrTwoField), SingleMemberStringArrTwoFieldfieldAnnotations$$},
		{"SingleMemberClassArrTwoField", "I", nullptr, $PUBLIC, $field(UnitTest, SingleMemberClassArrTwoField), SingleMemberClassArrTwoFieldfieldAnnotations$$},
		{"SingleMemberEnumArrTwoField", "I", nullptr, $PUBLIC, $field(UnitTest, SingleMemberEnumArrTwoField), SingleMemberEnumArrTwoFieldfieldAnnotations$$},
		{"SingleMemberByteArrOvrdDefField", "I", nullptr, $PUBLIC, $field(UnitTest, SingleMemberByteArrOvrdDefField), SingleMemberByteArrOvrdDefFieldfieldAnnotations$$},
		{"SingleMemberShortArrOvrdDefField", "I", nullptr, $PUBLIC, $field(UnitTest, SingleMemberShortArrOvrdDefField), SingleMemberShortArrOvrdDefFieldfieldAnnotations$$},
		{"SingleMemberIntArrOvrdDefField", "I", nullptr, $PUBLIC, $field(UnitTest, SingleMemberIntArrOvrdDefField), SingleMemberIntArrOvrdDefFieldfieldAnnotations$$},
		{"SingleMemberLongArrOvrdDefField", "I", nullptr, $PUBLIC, $field(UnitTest, SingleMemberLongArrOvrdDefField), SingleMemberLongArrOvrdDefFieldfieldAnnotations$$},
		{"SingleMemberCharArrOvrdDefField", "I", nullptr, $PUBLIC, $field(UnitTest, SingleMemberCharArrOvrdDefField), SingleMemberCharArrOvrdDefFieldfieldAnnotations$$},
		{"SingleMemberFloatArrOvrdDefField", "I", nullptr, $PUBLIC, $field(UnitTest, SingleMemberFloatArrOvrdDefField), SingleMemberFloatArrOvrdDefFieldfieldAnnotations$$},
		{"SingleMemberDoubleArrOvrdDefField", "I", nullptr, $PUBLIC, $field(UnitTest, SingleMemberDoubleArrOvrdDefField), SingleMemberDoubleArrOvrdDefFieldfieldAnnotations$$},
		{"SingleMemberBooleanArrOvrdDefField", "I", nullptr, $PUBLIC, $field(UnitTest, SingleMemberBooleanArrOvrdDefField), SingleMemberBooleanArrOvrdDefFieldfieldAnnotations$$},
		{"SingleMemberStringArrOvrdDefField", "I", nullptr, $PUBLIC, $field(UnitTest, SingleMemberStringArrOvrdDefField), SingleMemberStringArrOvrdDefFieldfieldAnnotations$$},
		{"SingleMemberClassArrOvrdDefField", "I", nullptr, $PUBLIC, $field(UnitTest, SingleMemberClassArrOvrdDefField), SingleMemberClassArrOvrdDefFieldfieldAnnotations$$},
		{"SingleMemberEnumArrOvrdDefField", "I", nullptr, $PUBLIC, $field(UnitTest, SingleMemberEnumArrOvrdDefField), SingleMemberEnumArrOvrdDefFieldfieldAnnotations$$},
		{"SingleMemberByteArrAcceptDefField", "I", nullptr, $PUBLIC, $field(UnitTest, SingleMemberByteArrAcceptDefField), SingleMemberByteArrAcceptDefFieldfieldAnnotations$$},
		{"SingleMemberShortArrAcceptDefField", "I", nullptr, $PUBLIC, $field(UnitTest, SingleMemberShortArrAcceptDefField), SingleMemberShortArrAcceptDefFieldfieldAnnotations$$},
		{"SingleMemberIntArrAcceptDefField", "I", nullptr, $PUBLIC, $field(UnitTest, SingleMemberIntArrAcceptDefField), SingleMemberIntArrAcceptDefFieldfieldAnnotations$$},
		{"SingleMemberLongArrAcceptDefField", "I", nullptr, $PUBLIC, $field(UnitTest, SingleMemberLongArrAcceptDefField), SingleMemberLongArrAcceptDefFieldfieldAnnotations$$},
		{"SingleMemberCharArrAcceptDefField", "I", nullptr, $PUBLIC, $field(UnitTest, SingleMemberCharArrAcceptDefField), SingleMemberCharArrAcceptDefFieldfieldAnnotations$$},
		{"SingleMemberFloatArrAcceptDefField", "I", nullptr, $PUBLIC, $field(UnitTest, SingleMemberFloatArrAcceptDefField), SingleMemberFloatArrAcceptDefFieldfieldAnnotations$$},
		{"SingleMemberDoubleArrAcceptDefField", "I", nullptr, $PUBLIC, $field(UnitTest, SingleMemberDoubleArrAcceptDefField), SingleMemberDoubleArrAcceptDefFieldfieldAnnotations$$},
		{"SingleMemberBooleanArrAcceptDefField", "I", nullptr, $PUBLIC, $field(UnitTest, SingleMemberBooleanArrAcceptDefField), SingleMemberBooleanArrAcceptDefFieldfieldAnnotations$$},
		{"SingleMemberStringArrAcceptDefField", "I", nullptr, $PUBLIC, $field(UnitTest, SingleMemberStringArrAcceptDefField), SingleMemberStringArrAcceptDefFieldfieldAnnotations$$},
		{"SingleMemberClassArrAcceptDefField", "I", nullptr, $PUBLIC, $field(UnitTest, SingleMemberClassArrAcceptDefField), SingleMemberClassArrAcceptDefFieldfieldAnnotations$$},
		{"SingleMemberEnumArrAcceptDefField", "I", nullptr, $PUBLIC, $field(UnitTest, SingleMemberEnumArrAcceptDefField), SingleMemberEnumArrAcceptDefFieldfieldAnnotations$$},
		{}
	};
	$NamedAttribute init$methodAnnotations$$$namedAttribute$compoundAttribute$namedAttribute[] = {
		{"x", 'I', "1"},
		{"y", 'I', "2"},
		{}
	};
$CompoundAttribute init$methodAnnotations$$$namedAttribute$compoundAttribute = {
	"LUniTest/Point;", init$methodAnnotations$$$namedAttribute$compoundAttribute$namedAttribute
};
	$NamedAttribute init$methodAnnotations$$$namedAttribute[] = {
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
		{"a", '@', &init$methodAnnotations$$$namedAttribute$compoundAttribute},
		{}
	};
	$CompoundAttribute init$methodAnnotations$$[] = {
		{"LUniTest/ScalarTypes;", init$methodAnnotations$$$namedAttribute},
		{}
	};
	$CompoundAttribute init$methodAnnotations$$$1[] = {
		{"LUniTest/ScalarTypesWithDefault;", nullptr},
		{}
	};
	$NamedAttribute init$methodAnnotations$$$2$namedAttribute[] = {
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
	$CompoundAttribute init$methodAnnotations$$$2[] = {
		{"LUniTest/ScalarTypesWithDefault;", init$methodAnnotations$$$2$namedAttribute},
		{}
	};
	$Attribute $attribute$92[] = {
		{'-'}
	};
	$Attribute $attribute$93[] = {
		{'-'}
	};
	$Attribute $attribute$94[] = {
		{'-'}
	};
	$Attribute $attribute$95[] = {
		{'-'}
	};
	$Attribute $attribute$96[] = {
		{'-'}
	};
	$Attribute $attribute$97[] = {
		{'-'}
	};
	$Attribute $attribute$98[] = {
		{'-'}
	};
	$Attribute $attribute$99[] = {
		{'-'}
	};
	$Attribute $attribute$100[] = {
		{'-'}
	};
	$Attribute $attribute$101[] = {
		{'-'}
	};
	$Attribute $attribute$102[] = {
		{'-'}
	};
	$Attribute $attribute$103[] = {
		{'-'}
	};
	$NamedAttribute init$methodAnnotations$$$3$namedAttribute[] = {
		{"b", '[', $attribute$92},
		{"s", '[', $attribute$93},
		{"i", '[', $attribute$94},
		{"l", '[', $attribute$95},
		{"c", '[', $attribute$96},
		{"f", '[', $attribute$97},
		{"d", '[', $attribute$98},
		{"bool", '[', $attribute$99},
		{"str", '[', $attribute$100},
		{"cls", '[', $attribute$101},
		{"e", '[', $attribute$102},
		{"a", '[', $attribute$103},
		{}
	};
	$CompoundAttribute init$methodAnnotations$$$3[] = {
		{"LUniTest/ArrayTypes;", init$methodAnnotations$$$3$namedAttribute},
		{}
	};
	$Attribute $attribute$104[] = {
		{'B', "1"},
		{'-'}
	};
	$Attribute $attribute$105[] = {
		{'S', "2"},
		{'-'}
	};
	$Attribute $attribute$106[] = {
		{'I', "3"},
		{'-'}
	};
	$Attribute $attribute$107[] = {
		{'J', "4"},
		{'-'}
	};
	$Attribute $attribute$108[] = {
		{'C', "5"},
		{'-'}
	};
	$Attribute $attribute$109[] = {
		{'F', "6.0"},
		{'-'}
	};
	$Attribute $attribute$110[] = {
		{'D', "7.0"},
		{'-'}
	};
	$Attribute $attribute$111[] = {
		{'Z', "true"},
		{'-'}
	};
	$Attribute $attribute$112[] = {
		{'s', "custom"},
		{'-'}
	};
	$Attribute $attribute$113[] = {
		{'c', "Ljava/util/Map;"},
		{'-'}
	};
	$Attribute $attribute$114[] = {
		{'e', "LUniTest/Stooge; MOE"},
		{'-'}
	};
	$NamedAttribute init$methodAnnotations$$$4$namedAttribute$compoundAttribute$namedAttribute[] = {
		{"x", 'I', "1"},
		{"y", 'I', "2"},
		{}
	};
$CompoundAttribute init$methodAnnotations$$$4$namedAttribute$compoundAttribute = {
	"LUniTest/Point;", init$methodAnnotations$$$4$namedAttribute$compoundAttribute$namedAttribute
};
	$Attribute $attribute$115[] = {
		{'@', &init$methodAnnotations$$$4$namedAttribute$compoundAttribute},
		{'-'}
	};
	$NamedAttribute init$methodAnnotations$$$4$namedAttribute[] = {
		{"b", '[', $attribute$104},
		{"s", '[', $attribute$105},
		{"i", '[', $attribute$106},
		{"l", '[', $attribute$107},
		{"c", '[', $attribute$108},
		{"f", '[', $attribute$109},
		{"d", '[', $attribute$110},
		{"bool", '[', $attribute$111},
		{"str", '[', $attribute$112},
		{"cls", '[', $attribute$113},
		{"e", '[', $attribute$114},
		{"a", '[', $attribute$115},
		{}
	};
	$CompoundAttribute init$methodAnnotations$$$4[] = {
		{"LUniTest/ArrayTypes;", init$methodAnnotations$$$4$namedAttribute},
		{}
	};
	$Attribute $attribute$116[] = {
		{'B', "1"},
		{'B', "2"},
		{'-'}
	};
	$Attribute $attribute$117[] = {
		{'S', "2"},
		{'S', "3"},
		{'-'}
	};
	$Attribute $attribute$118[] = {
		{'I', "3"},
		{'I', "4"},
		{'-'}
	};
	$Attribute $attribute$119[] = {
		{'J', "4"},
		{'J', "5"},
		{'-'}
	};
	$Attribute $attribute$120[] = {
		{'C', "5"},
		{'C', "6"},
		{'-'}
	};
	$Attribute $attribute$121[] = {
		{'F', "6.0"},
		{'F', "7.0"},
		{'-'}
	};
	$Attribute $attribute$122[] = {
		{'D', "7.0"},
		{'D', "8.0"},
		{'-'}
	};
	$Attribute $attribute$123[] = {
		{'Z', "true"},
		{'Z', "false"},
		{'-'}
	};
	$Attribute $attribute$124[] = {
		{'s', "custom"},
		{'s', "paint"},
		{'-'}
	};
	$Attribute $attribute$125[] = {
		{'c', "Ljava/util/Map;"},
		{'c', "Ljava/util/Set;"},
		{'-'}
	};
	$Attribute $attribute$126[] = {
		{'e', "LUniTest/Stooge; MOE"},
		{'e', "LUniTest/Stooge; CURLY"},
		{'-'}
	};
	$NamedAttribute init$methodAnnotations$$$5$namedAttribute$compoundAttribute$namedAttribute[] = {
		{"x", 'I', "1"},
		{"y", 'I', "2"},
		{}
	};
$CompoundAttribute init$methodAnnotations$$$5$namedAttribute$compoundAttribute = {
	"LUniTest/Point;", init$methodAnnotations$$$5$namedAttribute$compoundAttribute$namedAttribute
};
	$NamedAttribute init$methodAnnotations$$$5$namedAttribute$compoundAttribute$namedAttribute$compoundAttribute$namedAttribute[] = {
		{"x", 'I', "3"},
		{"y", 'I', "4"},
		{}
	};
$CompoundAttribute init$methodAnnotations$$$5$namedAttribute$compoundAttribute$namedAttribute$compoundAttribute = {
	"LUniTest/Point;", init$methodAnnotations$$$5$namedAttribute$compoundAttribute$namedAttribute$compoundAttribute$namedAttribute
};
	$Attribute $attribute$127[] = {
		{'@', &init$methodAnnotations$$$5$namedAttribute$compoundAttribute},
		{'@', &init$methodAnnotations$$$5$namedAttribute$compoundAttribute$namedAttribute$compoundAttribute},
		{'-'}
	};
	$NamedAttribute init$methodAnnotations$$$5$namedAttribute[] = {
		{"b", '[', $attribute$116},
		{"s", '[', $attribute$117},
		{"i", '[', $attribute$118},
		{"l", '[', $attribute$119},
		{"c", '[', $attribute$120},
		{"f", '[', $attribute$121},
		{"d", '[', $attribute$122},
		{"bool", '[', $attribute$123},
		{"str", '[', $attribute$124},
		{"cls", '[', $attribute$125},
		{"e", '[', $attribute$126},
		{"a", '[', $attribute$127},
		{}
	};
	$CompoundAttribute init$methodAnnotations$$$5[] = {
		{"LUniTest/ArrayTypes;", init$methodAnnotations$$$5$namedAttribute},
		{}
	};
	$CompoundAttribute init$methodAnnotations$$$6[] = {
		{"LUniTest/ArrayTypesWithDefault;", nullptr},
		{}
	};
	$Attribute $attribute$128[] = {
		{'B', "1"},
		{'-'}
	};
	$Attribute $attribute$129[] = {
		{'S', "2"},
		{'-'}
	};
	$Attribute $attribute$130[] = {
		{'I', "3"},
		{'-'}
	};
	$Attribute $attribute$131[] = {
		{'J', "4"},
		{'-'}
	};
	$Attribute $attribute$132[] = {
		{'C', "5"},
		{'-'}
	};
	$Attribute $attribute$133[] = {
		{'F', "6.0"},
		{'-'}
	};
	$Attribute $attribute$134[] = {
		{'D', "7.0"},
		{'-'}
	};
	$Attribute $attribute$135[] = {
		{'Z', "true"},
		{'-'}
	};
	$Attribute $attribute$136[] = {
		{'s', "custom"},
		{'-'}
	};
	$Attribute $attribute$137[] = {
		{'c', "Ljava/util/Map;"},
		{'-'}
	};
	$Attribute $attribute$138[] = {
		{'e', "LUniTest/Stooge; MOE"},
		{'-'}
	};
	$NamedAttribute init$methodAnnotations$$$7$namedAttribute$compoundAttribute$namedAttribute[] = {
		{"x", 'I', "1"},
		{"y", 'I', "2"},
		{}
	};
$CompoundAttribute init$methodAnnotations$$$7$namedAttribute$compoundAttribute = {
	"LUniTest/Point;", init$methodAnnotations$$$7$namedAttribute$compoundAttribute$namedAttribute
};
	$Attribute $attribute$139[] = {
		{'@', &init$methodAnnotations$$$7$namedAttribute$compoundAttribute},
		{'-'}
	};
	$NamedAttribute init$methodAnnotations$$$7$namedAttribute[] = {
		{"b", '[', $attribute$128},
		{"s", '[', $attribute$129},
		{"i", '[', $attribute$130},
		{"l", '[', $attribute$131},
		{"c", '[', $attribute$132},
		{"f", '[', $attribute$133},
		{"d", '[', $attribute$134},
		{"bool", '[', $attribute$135},
		{"str", '[', $attribute$136},
		{"cls", '[', $attribute$137},
		{"e", '[', $attribute$138},
		{"a", '[', $attribute$139},
		{}
	};
	$CompoundAttribute init$methodAnnotations$$$7[] = {
		{"LUniTest/ArrayTypesWithDefault;", init$methodAnnotations$$$7$namedAttribute},
		{}
	};
	$CompoundAttribute init$methodAnnotations$$$8[] = {
		{"LUniTest/Marker;", nullptr},
		{}
	};
	$NamedAttribute init$methodAnnotations$$$9$namedAttribute[] = {
		{"value", 'B', "1"},
		{}
	};
	$CompoundAttribute init$methodAnnotations$$$9[] = {
		{"LUniTest/SingleMemberByte;", init$methodAnnotations$$$9$namedAttribute},
		{}
	};
	$NamedAttribute init$methodAnnotations$$$10$namedAttribute[] = {
		{"value", 'S', "2"},
		{}
	};
	$CompoundAttribute init$methodAnnotations$$$10[] = {
		{"LUniTest/SingleMemberShort;", init$methodAnnotations$$$10$namedAttribute},
		{}
	};
	$NamedAttribute init$methodAnnotations$$$11$namedAttribute[] = {
		{"value", 'I', "3"},
		{}
	};
	$CompoundAttribute init$methodAnnotations$$$11[] = {
		{"LUniTest/SingleMemberInt;", init$methodAnnotations$$$11$namedAttribute},
		{}
	};
	$NamedAttribute init$methodAnnotations$$$12$namedAttribute[] = {
		{"value", 'J', "4"},
		{}
	};
	$CompoundAttribute init$methodAnnotations$$$12[] = {
		{"LUniTest/SingleMemberLong;", init$methodAnnotations$$$12$namedAttribute},
		{}
	};
	$NamedAttribute init$methodAnnotations$$$13$namedAttribute[] = {
		{"value", 'C', "5"},
		{}
	};
	$CompoundAttribute init$methodAnnotations$$$13[] = {
		{"LUniTest/SingleMemberChar;", init$methodAnnotations$$$13$namedAttribute},
		{}
	};
	$NamedAttribute init$methodAnnotations$$$14$namedAttribute[] = {
		{"value", 'F', "6.0"},
		{}
	};
	$CompoundAttribute init$methodAnnotations$$$14[] = {
		{"LUniTest/SingleMemberFloat;", init$methodAnnotations$$$14$namedAttribute},
		{}
	};
	$NamedAttribute init$methodAnnotations$$$15$namedAttribute[] = {
		{"value", 'D', "7.0"},
		{}
	};
	$CompoundAttribute init$methodAnnotations$$$15[] = {
		{"LUniTest/SingleMemberDouble;", init$methodAnnotations$$$15$namedAttribute},
		{}
	};
	$NamedAttribute init$methodAnnotations$$$16$namedAttribute[] = {
		{"value", 'Z', "true"},
		{}
	};
	$CompoundAttribute init$methodAnnotations$$$16[] = {
		{"LUniTest/SingleMemberBoolean;", init$methodAnnotations$$$16$namedAttribute},
		{}
	};
	$NamedAttribute init$methodAnnotations$$$17$namedAttribute[] = {
		{"value", 's', "custom"},
		{}
	};
	$CompoundAttribute init$methodAnnotations$$$17[] = {
		{"LUniTest/SingleMemberString;", init$methodAnnotations$$$17$namedAttribute},
		{}
	};
	$NamedAttribute init$methodAnnotations$$$18$namedAttribute[] = {
		{"value", 'c', "Ljava/util/Map;"},
		{}
	};
	$CompoundAttribute init$methodAnnotations$$$18[] = {
		{"LUniTest/SingleMemberClass;", init$methodAnnotations$$$18$namedAttribute},
		{}
	};
	$NamedAttribute init$methodAnnotations$$$19$namedAttribute[] = {
		{"value", 'e', "LUniTest/Stooge; MOE"},
		{}
	};
	$CompoundAttribute init$methodAnnotations$$$19[] = {
		{"LUniTest/SingleMemberEnum;", init$methodAnnotations$$$19$namedAttribute},
		{}
	};
	$NamedAttribute init$methodAnnotations$$$20$namedAttribute[] = {
		{"value", 'B', "1"},
		{}
	};
	$CompoundAttribute init$methodAnnotations$$$20[] = {
		{"LUniTest/SingleMemberByteWithDef;", init$methodAnnotations$$$20$namedAttribute},
		{}
	};
	$NamedAttribute init$methodAnnotations$$$21$namedAttribute[] = {
		{"value", 'S', "2"},
		{}
	};
	$CompoundAttribute init$methodAnnotations$$$21[] = {
		{"LUniTest/SingleMemberShortWithDef;", init$methodAnnotations$$$21$namedAttribute},
		{}
	};
	$NamedAttribute init$methodAnnotations$$$22$namedAttribute[] = {
		{"value", 'I', "3"},
		{}
	};
	$CompoundAttribute init$methodAnnotations$$$22[] = {
		{"LUniTest/SingleMemberIntWithDef;", init$methodAnnotations$$$22$namedAttribute},
		{}
	};
	$NamedAttribute init$methodAnnotations$$$23$namedAttribute[] = {
		{"value", 'J', "4"},
		{}
	};
	$CompoundAttribute init$methodAnnotations$$$23[] = {
		{"LUniTest/SingleMemberLongWithDef;", init$methodAnnotations$$$23$namedAttribute},
		{}
	};
	$NamedAttribute init$methodAnnotations$$$24$namedAttribute[] = {
		{"value", 'C', "5"},
		{}
	};
	$CompoundAttribute init$methodAnnotations$$$24[] = {
		{"LUniTest/SingleMemberCharWithDef;", init$methodAnnotations$$$24$namedAttribute},
		{}
	};
	$NamedAttribute init$methodAnnotations$$$25$namedAttribute[] = {
		{"value", 'F', "6.0"},
		{}
	};
	$CompoundAttribute init$methodAnnotations$$$25[] = {
		{"LUniTest/SingleMemberFloatWithDef;", init$methodAnnotations$$$25$namedAttribute},
		{}
	};
	$NamedAttribute init$methodAnnotations$$$26$namedAttribute[] = {
		{"value", 'D', "7.0"},
		{}
	};
	$CompoundAttribute init$methodAnnotations$$$26[] = {
		{"LUniTest/SingleMemberDoubleWithDef;", init$methodAnnotations$$$26$namedAttribute},
		{}
	};
	$NamedAttribute init$methodAnnotations$$$27$namedAttribute[] = {
		{"value", 'Z', "true"},
		{}
	};
	$CompoundAttribute init$methodAnnotations$$$27[] = {
		{"LUniTest/SingleMemberBooleanWithDef;", init$methodAnnotations$$$27$namedAttribute},
		{}
	};
	$NamedAttribute init$methodAnnotations$$$28$namedAttribute[] = {
		{"value", 's', "custom"},
		{}
	};
	$CompoundAttribute init$methodAnnotations$$$28[] = {
		{"LUniTest/SingleMemberStringWithDef;", init$methodAnnotations$$$28$namedAttribute},
		{}
	};
	$NamedAttribute init$methodAnnotations$$$29$namedAttribute[] = {
		{"value", 'c', "Ljava/util/Map;"},
		{}
	};
	$CompoundAttribute init$methodAnnotations$$$29[] = {
		{"LUniTest/SingleMemberClassWithDef;", init$methodAnnotations$$$29$namedAttribute},
		{}
	};
	$NamedAttribute init$methodAnnotations$$$30$namedAttribute[] = {
		{"value", 'e', "LUniTest/Stooge; MOE"},
		{}
	};
	$CompoundAttribute init$methodAnnotations$$$30[] = {
		{"LUniTest/SingleMemberEnumWithDef;", init$methodAnnotations$$$30$namedAttribute},
		{}
	};
	$CompoundAttribute init$methodAnnotations$$$31[] = {
		{"LUniTest/SingleMemberByteWithDef;", nullptr},
		{}
	};
	$CompoundAttribute init$methodAnnotations$$$32[] = {
		{"LUniTest/SingleMemberShortWithDef;", nullptr},
		{}
	};
	$CompoundAttribute init$methodAnnotations$$$33[] = {
		{"LUniTest/SingleMemberIntWithDef;", nullptr},
		{}
	};
	$CompoundAttribute init$methodAnnotations$$$34[] = {
		{"LUniTest/SingleMemberLongWithDef;", nullptr},
		{}
	};
	$CompoundAttribute init$methodAnnotations$$$35[] = {
		{"LUniTest/SingleMemberCharWithDef;", nullptr},
		{}
	};
	$CompoundAttribute init$methodAnnotations$$$36[] = {
		{"LUniTest/SingleMemberFloatWithDef;", nullptr},
		{}
	};
	$CompoundAttribute init$methodAnnotations$$$37[] = {
		{"LUniTest/SingleMemberDoubleWithDef;", nullptr},
		{}
	};
	$CompoundAttribute init$methodAnnotations$$$38[] = {
		{"LUniTest/SingleMemberBooleanWithDef;", nullptr},
		{}
	};
	$CompoundAttribute init$methodAnnotations$$$39[] = {
		{"LUniTest/SingleMemberStringWithDef;", nullptr},
		{}
	};
	$CompoundAttribute init$methodAnnotations$$$40[] = {
		{"LUniTest/SingleMemberClassWithDef;", nullptr},
		{}
	};
	$CompoundAttribute init$methodAnnotations$$$41[] = {
		{"LUniTest/SingleMemberEnumWithDef;", nullptr},
		{}
	};
	$Attribute $attribute$140[] = {
		{'-'}
	};
	$NamedAttribute init$methodAnnotations$$$42$namedAttribute[] = {
		{"value", '[', $attribute$140},
		{}
	};
	$CompoundAttribute init$methodAnnotations$$$42[] = {
		{"LUniTest/SingleMemberByteArray;", init$methodAnnotations$$$42$namedAttribute},
		{}
	};
	$Attribute $attribute$141[] = {
		{'-'}
	};
	$NamedAttribute init$methodAnnotations$$$43$namedAttribute[] = {
		{"value", '[', $attribute$141},
		{}
	};
	$CompoundAttribute init$methodAnnotations$$$43[] = {
		{"LUniTest/SingleMemberShortArray;", init$methodAnnotations$$$43$namedAttribute},
		{}
	};
	$Attribute $attribute$142[] = {
		{'-'}
	};
	$NamedAttribute init$methodAnnotations$$$44$namedAttribute[] = {
		{"value", '[', $attribute$142},
		{}
	};
	$CompoundAttribute init$methodAnnotations$$$44[] = {
		{"LUniTest/SingleMemberIntArray;", init$methodAnnotations$$$44$namedAttribute},
		{}
	};
	$Attribute $attribute$143[] = {
		{'-'}
	};
	$NamedAttribute init$methodAnnotations$$$45$namedAttribute[] = {
		{"value", '[', $attribute$143},
		{}
	};
	$CompoundAttribute init$methodAnnotations$$$45[] = {
		{"LUniTest/SingleMemberLongArray;", init$methodAnnotations$$$45$namedAttribute},
		{}
	};
	$Attribute $attribute$144[] = {
		{'-'}
	};
	$NamedAttribute init$methodAnnotations$$$46$namedAttribute[] = {
		{"value", '[', $attribute$144},
		{}
	};
	$CompoundAttribute init$methodAnnotations$$$46[] = {
		{"LUniTest/SingleMemberCharArray;", init$methodAnnotations$$$46$namedAttribute},
		{}
	};
	$Attribute $attribute$145[] = {
		{'-'}
	};
	$NamedAttribute init$methodAnnotations$$$47$namedAttribute[] = {
		{"value", '[', $attribute$145},
		{}
	};
	$CompoundAttribute init$methodAnnotations$$$47[] = {
		{"LUniTest/SingleMemberFloatArray;", init$methodAnnotations$$$47$namedAttribute},
		{}
	};
	$Attribute $attribute$146[] = {
		{'-'}
	};
	$NamedAttribute init$methodAnnotations$$$48$namedAttribute[] = {
		{"value", '[', $attribute$146},
		{}
	};
	$CompoundAttribute init$methodAnnotations$$$48[] = {
		{"LUniTest/SingleMemberDoubleArray;", init$methodAnnotations$$$48$namedAttribute},
		{}
	};
	$Attribute $attribute$147[] = {
		{'-'}
	};
	$NamedAttribute init$methodAnnotations$$$49$namedAttribute[] = {
		{"value", '[', $attribute$147},
		{}
	};
	$CompoundAttribute init$methodAnnotations$$$49[] = {
		{"LUniTest/SingleMemberBooleanArray;", init$methodAnnotations$$$49$namedAttribute},
		{}
	};
	$Attribute $attribute$148[] = {
		{'-'}
	};
	$NamedAttribute init$methodAnnotations$$$50$namedAttribute[] = {
		{"value", '[', $attribute$148},
		{}
	};
	$CompoundAttribute init$methodAnnotations$$$50[] = {
		{"LUniTest/SingleMemberStringArray;", init$methodAnnotations$$$50$namedAttribute},
		{}
	};
	$Attribute $attribute$149[] = {
		{'-'}
	};
	$NamedAttribute init$methodAnnotations$$$51$namedAttribute[] = {
		{"value", '[', $attribute$149},
		{}
	};
	$CompoundAttribute init$methodAnnotations$$$51[] = {
		{"LUniTest/SingleMemberClassArray;", init$methodAnnotations$$$51$namedAttribute},
		{}
	};
	$Attribute $attribute$150[] = {
		{'-'}
	};
	$NamedAttribute init$methodAnnotations$$$52$namedAttribute[] = {
		{"value", '[', $attribute$150},
		{}
	};
	$CompoundAttribute init$methodAnnotations$$$52[] = {
		{"LUniTest/SingleMemberEnumArray;", init$methodAnnotations$$$52$namedAttribute},
		{}
	};
	$Attribute $attribute$151[] = {
		{'B', "1"},
		{'-'}
	};
	$NamedAttribute init$methodAnnotations$$$53$namedAttribute[] = {
		{"value", '[', $attribute$151},
		{}
	};
	$CompoundAttribute init$methodAnnotations$$$53[] = {
		{"LUniTest/SingleMemberByteArray;", init$methodAnnotations$$$53$namedAttribute},
		{}
	};
	$Attribute $attribute$152[] = {
		{'S', "2"},
		{'-'}
	};
	$NamedAttribute init$methodAnnotations$$$54$namedAttribute[] = {
		{"value", '[', $attribute$152},
		{}
	};
	$CompoundAttribute init$methodAnnotations$$$54[] = {
		{"LUniTest/SingleMemberShortArray;", init$methodAnnotations$$$54$namedAttribute},
		{}
	};
	$Attribute $attribute$153[] = {
		{'I', "3"},
		{'-'}
	};
	$NamedAttribute init$methodAnnotations$$$55$namedAttribute[] = {
		{"value", '[', $attribute$153},
		{}
	};
	$CompoundAttribute init$methodAnnotations$$$55[] = {
		{"LUniTest/SingleMemberIntArray;", init$methodAnnotations$$$55$namedAttribute},
		{}
	};
	$Attribute $attribute$154[] = {
		{'J', "4"},
		{'-'}
	};
	$NamedAttribute init$methodAnnotations$$$56$namedAttribute[] = {
		{"value", '[', $attribute$154},
		{}
	};
	$CompoundAttribute init$methodAnnotations$$$56[] = {
		{"LUniTest/SingleMemberLongArray;", init$methodAnnotations$$$56$namedAttribute},
		{}
	};
	$Attribute $attribute$155[] = {
		{'C', "5"},
		{'-'}
	};
	$NamedAttribute init$methodAnnotations$$$57$namedAttribute[] = {
		{"value", '[', $attribute$155},
		{}
	};
	$CompoundAttribute init$methodAnnotations$$$57[] = {
		{"LUniTest/SingleMemberCharArray;", init$methodAnnotations$$$57$namedAttribute},
		{}
	};
	$Attribute $attribute$156[] = {
		{'F', "6.0"},
		{'-'}
	};
	$NamedAttribute init$methodAnnotations$$$58$namedAttribute[] = {
		{"value", '[', $attribute$156},
		{}
	};
	$CompoundAttribute init$methodAnnotations$$$58[] = {
		{"LUniTest/SingleMemberFloatArray;", init$methodAnnotations$$$58$namedAttribute},
		{}
	};
	$Attribute $attribute$157[] = {
		{'D', "7.0"},
		{'-'}
	};
	$NamedAttribute init$methodAnnotations$$$59$namedAttribute[] = {
		{"value", '[', $attribute$157},
		{}
	};
	$CompoundAttribute init$methodAnnotations$$$59[] = {
		{"LUniTest/SingleMemberDoubleArray;", init$methodAnnotations$$$59$namedAttribute},
		{}
	};
	$Attribute $attribute$158[] = {
		{'Z', "true"},
		{'-'}
	};
	$NamedAttribute init$methodAnnotations$$$60$namedAttribute[] = {
		{"value", '[', $attribute$158},
		{}
	};
	$CompoundAttribute init$methodAnnotations$$$60[] = {
		{"LUniTest/SingleMemberBooleanArray;", init$methodAnnotations$$$60$namedAttribute},
		{}
	};
	$Attribute $attribute$159[] = {
		{'s', "custom"},
		{'-'}
	};
	$NamedAttribute init$methodAnnotations$$$61$namedAttribute[] = {
		{"value", '[', $attribute$159},
		{}
	};
	$CompoundAttribute init$methodAnnotations$$$61[] = {
		{"LUniTest/SingleMemberStringArray;", init$methodAnnotations$$$61$namedAttribute},
		{}
	};
	$Attribute $attribute$160[] = {
		{'c', "Ljava/util/Map;"},
		{'-'}
	};
	$NamedAttribute init$methodAnnotations$$$62$namedAttribute[] = {
		{"value", '[', $attribute$160},
		{}
	};
	$CompoundAttribute init$methodAnnotations$$$62[] = {
		{"LUniTest/SingleMemberClassArray;", init$methodAnnotations$$$62$namedAttribute},
		{}
	};
	$Attribute $attribute$161[] = {
		{'e', "LUniTest/Stooge; MOE"},
		{'-'}
	};
	$NamedAttribute init$methodAnnotations$$$63$namedAttribute[] = {
		{"value", '[', $attribute$161},
		{}
	};
	$CompoundAttribute init$methodAnnotations$$$63[] = {
		{"LUniTest/SingleMemberEnumArray;", init$methodAnnotations$$$63$namedAttribute},
		{}
	};
	$Attribute $attribute$162[] = {
		{'B', "1"},
		{'B', "2"},
		{'-'}
	};
	$NamedAttribute init$methodAnnotations$$$64$namedAttribute[] = {
		{"value", '[', $attribute$162},
		{}
	};
	$CompoundAttribute init$methodAnnotations$$$64[] = {
		{"LUniTest/SingleMemberByteArray;", init$methodAnnotations$$$64$namedAttribute},
		{}
	};
	$Attribute $attribute$163[] = {
		{'S', "2"},
		{'S', "3"},
		{'-'}
	};
	$NamedAttribute init$methodAnnotations$$$65$namedAttribute[] = {
		{"value", '[', $attribute$163},
		{}
	};
	$CompoundAttribute init$methodAnnotations$$$65[] = {
		{"LUniTest/SingleMemberShortArray;", init$methodAnnotations$$$65$namedAttribute},
		{}
	};
	$Attribute $attribute$164[] = {
		{'I', "3"},
		{'I', "4"},
		{'-'}
	};
	$NamedAttribute init$methodAnnotations$$$66$namedAttribute[] = {
		{"value", '[', $attribute$164},
		{}
	};
	$CompoundAttribute init$methodAnnotations$$$66[] = {
		{"LUniTest/SingleMemberIntArray;", init$methodAnnotations$$$66$namedAttribute},
		{}
	};
	$Attribute $attribute$165[] = {
		{'J', "4"},
		{'J', "5"},
		{'-'}
	};
	$NamedAttribute init$methodAnnotations$$$67$namedAttribute[] = {
		{"value", '[', $attribute$165},
		{}
	};
	$CompoundAttribute init$methodAnnotations$$$67[] = {
		{"LUniTest/SingleMemberLongArray;", init$methodAnnotations$$$67$namedAttribute},
		{}
	};
	$Attribute $attribute$166[] = {
		{'C', "5"},
		{'C', "6"},
		{'-'}
	};
	$NamedAttribute init$methodAnnotations$$$68$namedAttribute[] = {
		{"value", '[', $attribute$166},
		{}
	};
	$CompoundAttribute init$methodAnnotations$$$68[] = {
		{"LUniTest/SingleMemberCharArray;", init$methodAnnotations$$$68$namedAttribute},
		{}
	};
	$Attribute $attribute$167[] = {
		{'F', "6.0"},
		{'F', "7.0"},
		{'-'}
	};
	$NamedAttribute init$methodAnnotations$$$69$namedAttribute[] = {
		{"value", '[', $attribute$167},
		{}
	};
	$CompoundAttribute init$methodAnnotations$$$69[] = {
		{"LUniTest/SingleMemberFloatArray;", init$methodAnnotations$$$69$namedAttribute},
		{}
	};
	$Attribute $attribute$168[] = {
		{'D', "7.0"},
		{'D', "8.0"},
		{'-'}
	};
	$NamedAttribute init$methodAnnotations$$$70$namedAttribute[] = {
		{"value", '[', $attribute$168},
		{}
	};
	$CompoundAttribute init$methodAnnotations$$$70[] = {
		{"LUniTest/SingleMemberDoubleArray;", init$methodAnnotations$$$70$namedAttribute},
		{}
	};
	$Attribute $attribute$169[] = {
		{'Z', "true"},
		{'Z', "false"},
		{'-'}
	};
	$NamedAttribute init$methodAnnotations$$$71$namedAttribute[] = {
		{"value", '[', $attribute$169},
		{}
	};
	$CompoundAttribute init$methodAnnotations$$$71[] = {
		{"LUniTest/SingleMemberBooleanArray;", init$methodAnnotations$$$71$namedAttribute},
		{}
	};
	$Attribute $attribute$170[] = {
		{'s', "custom"},
		{'s', "paint"},
		{'-'}
	};
	$NamedAttribute init$methodAnnotations$$$72$namedAttribute[] = {
		{"value", '[', $attribute$170},
		{}
	};
	$CompoundAttribute init$methodAnnotations$$$72[] = {
		{"LUniTest/SingleMemberStringArray;", init$methodAnnotations$$$72$namedAttribute},
		{}
	};
	$Attribute $attribute$171[] = {
		{'c', "Ljava/util/Map;"},
		{'c', "Ljava/util/Set;"},
		{'-'}
	};
	$NamedAttribute init$methodAnnotations$$$73$namedAttribute[] = {
		{"value", '[', $attribute$171},
		{}
	};
	$CompoundAttribute init$methodAnnotations$$$73[] = {
		{"LUniTest/SingleMemberClassArray;", init$methodAnnotations$$$73$namedAttribute},
		{}
	};
	$Attribute $attribute$172[] = {
		{'e', "LUniTest/Stooge; MOE"},
		{'e', "LUniTest/Stooge; CURLY"},
		{'-'}
	};
	$NamedAttribute init$methodAnnotations$$$74$namedAttribute[] = {
		{"value", '[', $attribute$172},
		{}
	};
	$CompoundAttribute init$methodAnnotations$$$74[] = {
		{"LUniTest/SingleMemberEnumArray;", init$methodAnnotations$$$74$namedAttribute},
		{}
	};
	$Attribute $attribute$173[] = {
		{'B', "1"},
		{'-'}
	};
	$NamedAttribute init$methodAnnotations$$$75$namedAttribute[] = {
		{"value", '[', $attribute$173},
		{}
	};
	$CompoundAttribute init$methodAnnotations$$$75[] = {
		{"LUniTest/SingleMemberByteArrayDef;", init$methodAnnotations$$$75$namedAttribute},
		{}
	};
	$Attribute $attribute$174[] = {
		{'S', "2"},
		{'-'}
	};
	$NamedAttribute init$methodAnnotations$$$76$namedAttribute[] = {
		{"value", '[', $attribute$174},
		{}
	};
	$CompoundAttribute init$methodAnnotations$$$76[] = {
		{"LUniTest/SingleMemberShortArrayDef;", init$methodAnnotations$$$76$namedAttribute},
		{}
	};
	$Attribute $attribute$175[] = {
		{'I', "3"},
		{'-'}
	};
	$NamedAttribute init$methodAnnotations$$$77$namedAttribute[] = {
		{"value", '[', $attribute$175},
		{}
	};
	$CompoundAttribute init$methodAnnotations$$$77[] = {
		{"LUniTest/SingleMemberIntArrayDef;", init$methodAnnotations$$$77$namedAttribute},
		{}
	};
	$Attribute $attribute$176[] = {
		{'J', "4"},
		{'-'}
	};
	$NamedAttribute init$methodAnnotations$$$78$namedAttribute[] = {
		{"value", '[', $attribute$176},
		{}
	};
	$CompoundAttribute init$methodAnnotations$$$78[] = {
		{"LUniTest/SingleMemberLongArrayDef;", init$methodAnnotations$$$78$namedAttribute},
		{}
	};
	$Attribute $attribute$177[] = {
		{'C', "5"},
		{'-'}
	};
	$NamedAttribute init$methodAnnotations$$$79$namedAttribute[] = {
		{"value", '[', $attribute$177},
		{}
	};
	$CompoundAttribute init$methodAnnotations$$$79[] = {
		{"LUniTest/SingleMemberCharArrayDef;", init$methodAnnotations$$$79$namedAttribute},
		{}
	};
	$Attribute $attribute$178[] = {
		{'F', "6.0"},
		{'-'}
	};
	$NamedAttribute init$methodAnnotations$$$80$namedAttribute[] = {
		{"value", '[', $attribute$178},
		{}
	};
	$CompoundAttribute init$methodAnnotations$$$80[] = {
		{"LUniTest/SingleMemberFloatArrayDef;", init$methodAnnotations$$$80$namedAttribute},
		{}
	};
	$Attribute $attribute$179[] = {
		{'D', "7.0"},
		{'-'}
	};
	$NamedAttribute init$methodAnnotations$$$81$namedAttribute[] = {
		{"value", '[', $attribute$179},
		{}
	};
	$CompoundAttribute init$methodAnnotations$$$81[] = {
		{"LUniTest/SingleMemberDoubleArrayDef;", init$methodAnnotations$$$81$namedAttribute},
		{}
	};
	$Attribute $attribute$180[] = {
		{'Z', "true"},
		{'-'}
	};
	$NamedAttribute init$methodAnnotations$$$82$namedAttribute[] = {
		{"value", '[', $attribute$180},
		{}
	};
	$CompoundAttribute init$methodAnnotations$$$82[] = {
		{"LUniTest/SingleMemberBooleanArrayDef;", init$methodAnnotations$$$82$namedAttribute},
		{}
	};
	$Attribute $attribute$181[] = {
		{'s', "custom"},
		{'-'}
	};
	$NamedAttribute init$methodAnnotations$$$83$namedAttribute[] = {
		{"value", '[', $attribute$181},
		{}
	};
	$CompoundAttribute init$methodAnnotations$$$83[] = {
		{"LUniTest/SingleMemberStringArrayDef;", init$methodAnnotations$$$83$namedAttribute},
		{}
	};
	$Attribute $attribute$182[] = {
		{'c', "Ljava/util/Map;"},
		{'-'}
	};
	$NamedAttribute init$methodAnnotations$$$84$namedAttribute[] = {
		{"value", '[', $attribute$182},
		{}
	};
	$CompoundAttribute init$methodAnnotations$$$84[] = {
		{"LUniTest/SingleMemberClassArrayDef;", init$methodAnnotations$$$84$namedAttribute},
		{}
	};
	$Attribute $attribute$183[] = {
		{'e', "LUniTest/Stooge; MOE"},
		{'-'}
	};
	$NamedAttribute init$methodAnnotations$$$85$namedAttribute[] = {
		{"value", '[', $attribute$183},
		{}
	};
	$CompoundAttribute init$methodAnnotations$$$85[] = {
		{"LUniTest/SingleMemberEnumArrayDef;", init$methodAnnotations$$$85$namedAttribute},
		{}
	};
	$CompoundAttribute init$methodAnnotations$$$86[] = {
		{"LUniTest/SingleMemberByteArrayDef;", nullptr},
		{}
	};
	$CompoundAttribute init$methodAnnotations$$$87[] = {
		{"LUniTest/SingleMemberShortArrayDef;", nullptr},
		{}
	};
	$CompoundAttribute init$methodAnnotations$$$88[] = {
		{"LUniTest/SingleMemberIntArrayDef;", nullptr},
		{}
	};
	$CompoundAttribute init$methodAnnotations$$$89[] = {
		{"LUniTest/SingleMemberLongArrayDef;", nullptr},
		{}
	};
	$CompoundAttribute init$methodAnnotations$$$90[] = {
		{"LUniTest/SingleMemberCharArrayDef;", nullptr},
		{}
	};
	$CompoundAttribute init$methodAnnotations$$$91[] = {
		{"LUniTest/SingleMemberFloatArrayDef;", nullptr},
		{}
	};
	$CompoundAttribute init$methodAnnotations$$$92[] = {
		{"LUniTest/SingleMemberDoubleArrayDef;", nullptr},
		{}
	};
	$CompoundAttribute init$methodAnnotations$$$93[] = {
		{"LUniTest/SingleMemberBooleanArrayDef;", nullptr},
		{}
	};
	$CompoundAttribute init$methodAnnotations$$$94[] = {
		{"LUniTest/SingleMemberStringArrayDef;", nullptr},
		{}
	};
	$CompoundAttribute init$methodAnnotations$$$95[] = {
		{"LUniTest/SingleMemberClassArrayDef;", nullptr},
		{}
	};
	$CompoundAttribute init$methodAnnotations$$$96[] = {
		{"LUniTest/SingleMemberEnumArrayDef;", nullptr},
		{}
	};
	$NamedAttribute SingleMemberBooleanmethodAnnotations$$$namedAttribute[] = {
		{"value", 'Z', "true"},
		{}
	};
	$CompoundAttribute SingleMemberBooleanmethodAnnotations$$[] = {
		{"LUniTest/SingleMemberBoolean;", SingleMemberBooleanmethodAnnotations$$$namedAttribute},
		{}
	};
	$CompoundAttribute SingleMemberBooleanAcceptDefmethodAnnotations$$[] = {
		{"LUniTest/SingleMemberBooleanWithDef;", nullptr},
		{}
	};
	$ParameterAnnotation SingleMemberBooleanAcceptDefParammethodParamAnnotations$$[] = {
		{"LUniTest/SingleMemberBooleanWithDef;", nullptr, 0},
		{}
	};
	$CompoundAttribute SingleMemberBooleanArrAcceptDefmethodAnnotations$$[] = {
		{"LUniTest/SingleMemberBooleanArrayDef;", nullptr},
		{}
	};
	$ParameterAnnotation SingleMemberBooleanArrAcceptDefParammethodParamAnnotations$$[] = {
		{"LUniTest/SingleMemberBooleanArrayDef;", nullptr, 0},
		{}
	};
	$Attribute $attribute$184[] = {
		{'-'}
	};
	$NamedAttribute SingleMemberBooleanArrEmptymethodAnnotations$$$namedAttribute[] = {
		{"value", '[', $attribute$184},
		{}
	};
	$CompoundAttribute SingleMemberBooleanArrEmptymethodAnnotations$$[] = {
		{"LUniTest/SingleMemberBooleanArray;", SingleMemberBooleanArrEmptymethodAnnotations$$$namedAttribute},
		{}
	};
	$Attribute $attribute$185[] = {
		{'-'}
	};
	$NamedAttribute SingleMemberBooleanArrEmptyParammethodParamAnnotations$$$namedAttribute[] = {
		{"value", '[', $attribute$185},
		{}
	};
	$ParameterAnnotation SingleMemberBooleanArrEmptyParammethodParamAnnotations$$[] = {
		{"LUniTest/SingleMemberBooleanArray;", SingleMemberBooleanArrEmptyParammethodParamAnnotations$$$namedAttribute, 0},
		{}
	};
	$Attribute $attribute$186[] = {
		{'Z', "true"},
		{'-'}
	};
	$NamedAttribute SingleMemberBooleanArrOnemethodAnnotations$$$namedAttribute[] = {
		{"value", '[', $attribute$186},
		{}
	};
	$CompoundAttribute SingleMemberBooleanArrOnemethodAnnotations$$[] = {
		{"LUniTest/SingleMemberBooleanArray;", SingleMemberBooleanArrOnemethodAnnotations$$$namedAttribute},
		{}
	};
	$Attribute $attribute$187[] = {
		{'Z', "true"},
		{'-'}
	};
	$NamedAttribute SingleMemberBooleanArrOneParammethodParamAnnotations$$$namedAttribute[] = {
		{"value", '[', $attribute$187},
		{}
	};
	$ParameterAnnotation SingleMemberBooleanArrOneParammethodParamAnnotations$$[] = {
		{"LUniTest/SingleMemberBooleanArray;", SingleMemberBooleanArrOneParammethodParamAnnotations$$$namedAttribute, 0},
		{}
	};
	$Attribute $attribute$188[] = {
		{'Z', "true"},
		{'-'}
	};
	$NamedAttribute SingleMemberBooleanArrOvrdDefmethodAnnotations$$$namedAttribute[] = {
		{"value", '[', $attribute$188},
		{}
	};
	$CompoundAttribute SingleMemberBooleanArrOvrdDefmethodAnnotations$$[] = {
		{"LUniTest/SingleMemberBooleanArrayDef;", SingleMemberBooleanArrOvrdDefmethodAnnotations$$$namedAttribute},
		{}
	};
	$Attribute $attribute$189[] = {
		{'Z', "true"},
		{'-'}
	};
	$NamedAttribute SingleMemberBooleanArrOvrdDefParammethodParamAnnotations$$$namedAttribute[] = {
		{"value", '[', $attribute$189},
		{}
	};
	$ParameterAnnotation SingleMemberBooleanArrOvrdDefParammethodParamAnnotations$$[] = {
		{"LUniTest/SingleMemberBooleanArrayDef;", SingleMemberBooleanArrOvrdDefParammethodParamAnnotations$$$namedAttribute, 0},
		{}
	};
	$Attribute $attribute$190[] = {
		{'Z', "true"},
		{'Z', "false"},
		{'-'}
	};
	$NamedAttribute SingleMemberBooleanArrTwomethodAnnotations$$$namedAttribute[] = {
		{"value", '[', $attribute$190},
		{}
	};
	$CompoundAttribute SingleMemberBooleanArrTwomethodAnnotations$$[] = {
		{"LUniTest/SingleMemberBooleanArray;", SingleMemberBooleanArrTwomethodAnnotations$$$namedAttribute},
		{}
	};
	$Attribute $attribute$191[] = {
		{'Z', "true"},
		{'Z', "false"},
		{'-'}
	};
	$NamedAttribute SingleMemberBooleanArrTwoParammethodParamAnnotations$$$namedAttribute[] = {
		{"value", '[', $attribute$191},
		{}
	};
	$ParameterAnnotation SingleMemberBooleanArrTwoParammethodParamAnnotations$$[] = {
		{"LUniTest/SingleMemberBooleanArray;", SingleMemberBooleanArrTwoParammethodParamAnnotations$$$namedAttribute, 0},
		{}
	};
	$NamedAttribute SingleMemberBooleanOvrdDefmethodAnnotations$$$namedAttribute[] = {
		{"value", 'Z', "true"},
		{}
	};
	$CompoundAttribute SingleMemberBooleanOvrdDefmethodAnnotations$$[] = {
		{"LUniTest/SingleMemberBooleanWithDef;", SingleMemberBooleanOvrdDefmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute SingleMemberBooleanOvrdDefParammethodParamAnnotations$$$namedAttribute[] = {
		{"value", 'Z', "true"},
		{}
	};
	$ParameterAnnotation SingleMemberBooleanOvrdDefParammethodParamAnnotations$$[] = {
		{"LUniTest/SingleMemberBooleanWithDef;", SingleMemberBooleanOvrdDefParammethodParamAnnotations$$$namedAttribute, 0},
		{}
	};
	$NamedAttribute SingleMemberBooleanParammethodParamAnnotations$$$namedAttribute[] = {
		{"value", 'Z', "true"},
		{}
	};
	$ParameterAnnotation SingleMemberBooleanParammethodParamAnnotations$$[] = {
		{"LUniTest/SingleMemberBoolean;", SingleMemberBooleanParammethodParamAnnotations$$$namedAttribute, 0},
		{}
	};
	$NamedAttribute SingleMemberBytemethodAnnotations$$$namedAttribute[] = {
		{"value", 'B', "1"},
		{}
	};
	$CompoundAttribute SingleMemberBytemethodAnnotations$$[] = {
		{"LUniTest/SingleMemberByte;", SingleMemberBytemethodAnnotations$$$namedAttribute},
		{}
	};
	$CompoundAttribute SingleMemberByteAcceptDefmethodAnnotations$$[] = {
		{"LUniTest/SingleMemberByteWithDef;", nullptr},
		{}
	};
	$ParameterAnnotation SingleMemberByteAcceptDefParammethodParamAnnotations$$[] = {
		{"LUniTest/SingleMemberByteWithDef;", nullptr, 0},
		{}
	};
	$CompoundAttribute SingleMemberByteArrAcceptDefmethodAnnotations$$[] = {
		{"LUniTest/SingleMemberByteArrayDef;", nullptr},
		{}
	};
	$ParameterAnnotation SingleMemberByteArrAcceptDefParammethodParamAnnotations$$[] = {
		{"LUniTest/SingleMemberByteArrayDef;", nullptr, 0},
		{}
	};
	$Attribute $attribute$192[] = {
		{'-'}
	};
	$NamedAttribute SingleMemberByteArrEmptymethodAnnotations$$$namedAttribute[] = {
		{"value", '[', $attribute$192},
		{}
	};
	$CompoundAttribute SingleMemberByteArrEmptymethodAnnotations$$[] = {
		{"LUniTest/SingleMemberByteArray;", SingleMemberByteArrEmptymethodAnnotations$$$namedAttribute},
		{}
	};
	$Attribute $attribute$193[] = {
		{'-'}
	};
	$NamedAttribute SingleMemberByteArrEmptyParammethodParamAnnotations$$$namedAttribute[] = {
		{"value", '[', $attribute$193},
		{}
	};
	$ParameterAnnotation SingleMemberByteArrEmptyParammethodParamAnnotations$$[] = {
		{"LUniTest/SingleMemberByteArray;", SingleMemberByteArrEmptyParammethodParamAnnotations$$$namedAttribute, 0},
		{}
	};
	$Attribute $attribute$194[] = {
		{'B', "1"},
		{'-'}
	};
	$NamedAttribute SingleMemberByteArrOnemethodAnnotations$$$namedAttribute[] = {
		{"value", '[', $attribute$194},
		{}
	};
	$CompoundAttribute SingleMemberByteArrOnemethodAnnotations$$[] = {
		{"LUniTest/SingleMemberByteArray;", SingleMemberByteArrOnemethodAnnotations$$$namedAttribute},
		{}
	};
	$Attribute $attribute$195[] = {
		{'B', "1"},
		{'-'}
	};
	$NamedAttribute SingleMemberByteArrOneParammethodParamAnnotations$$$namedAttribute[] = {
		{"value", '[', $attribute$195},
		{}
	};
	$ParameterAnnotation SingleMemberByteArrOneParammethodParamAnnotations$$[] = {
		{"LUniTest/SingleMemberByteArray;", SingleMemberByteArrOneParammethodParamAnnotations$$$namedAttribute, 0},
		{}
	};
	$Attribute $attribute$196[] = {
		{'B', "1"},
		{'-'}
	};
	$NamedAttribute SingleMemberByteArrOvrdDefmethodAnnotations$$$namedAttribute[] = {
		{"value", '[', $attribute$196},
		{}
	};
	$CompoundAttribute SingleMemberByteArrOvrdDefmethodAnnotations$$[] = {
		{"LUniTest/SingleMemberByteArrayDef;", SingleMemberByteArrOvrdDefmethodAnnotations$$$namedAttribute},
		{}
	};
	$Attribute $attribute$197[] = {
		{'B', "1"},
		{'-'}
	};
	$NamedAttribute SingleMemberByteArrOvrdDefParammethodParamAnnotations$$$namedAttribute[] = {
		{"value", '[', $attribute$197},
		{}
	};
	$ParameterAnnotation SingleMemberByteArrOvrdDefParammethodParamAnnotations$$[] = {
		{"LUniTest/SingleMemberByteArrayDef;", SingleMemberByteArrOvrdDefParammethodParamAnnotations$$$namedAttribute, 0},
		{}
	};
	$Attribute $attribute$198[] = {
		{'B', "1"},
		{'B', "2"},
		{'-'}
	};
	$NamedAttribute SingleMemberByteArrTwomethodAnnotations$$$namedAttribute[] = {
		{"value", '[', $attribute$198},
		{}
	};
	$CompoundAttribute SingleMemberByteArrTwomethodAnnotations$$[] = {
		{"LUniTest/SingleMemberByteArray;", SingleMemberByteArrTwomethodAnnotations$$$namedAttribute},
		{}
	};
	$Attribute $attribute$199[] = {
		{'B', "1"},
		{'B', "2"},
		{'-'}
	};
	$NamedAttribute SingleMemberByteArrTwoParammethodParamAnnotations$$$namedAttribute[] = {
		{"value", '[', $attribute$199},
		{}
	};
	$ParameterAnnotation SingleMemberByteArrTwoParammethodParamAnnotations$$[] = {
		{"LUniTest/SingleMemberByteArray;", SingleMemberByteArrTwoParammethodParamAnnotations$$$namedAttribute, 0},
		{}
	};
	$NamedAttribute SingleMemberByteOvrdDefmethodAnnotations$$$namedAttribute[] = {
		{"value", 'B', "1"},
		{}
	};
	$CompoundAttribute SingleMemberByteOvrdDefmethodAnnotations$$[] = {
		{"LUniTest/SingleMemberByteWithDef;", SingleMemberByteOvrdDefmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute SingleMemberByteOvrdDefParammethodParamAnnotations$$$namedAttribute[] = {
		{"value", 'B', "1"},
		{}
	};
	$ParameterAnnotation SingleMemberByteOvrdDefParammethodParamAnnotations$$[] = {
		{"LUniTest/SingleMemberByteWithDef;", SingleMemberByteOvrdDefParammethodParamAnnotations$$$namedAttribute, 0},
		{}
	};
	$NamedAttribute SingleMemberByteParammethodParamAnnotations$$$namedAttribute[] = {
		{"value", 'B', "1"},
		{}
	};
	$ParameterAnnotation SingleMemberByteParammethodParamAnnotations$$[] = {
		{"LUniTest/SingleMemberByte;", SingleMemberByteParammethodParamAnnotations$$$namedAttribute, 0},
		{}
	};
	$NamedAttribute SingleMemberCharmethodAnnotations$$$namedAttribute[] = {
		{"value", 'C', "5"},
		{}
	};
	$CompoundAttribute SingleMemberCharmethodAnnotations$$[] = {
		{"LUniTest/SingleMemberChar;", SingleMemberCharmethodAnnotations$$$namedAttribute},
		{}
	};
	$CompoundAttribute SingleMemberCharAcceptDefmethodAnnotations$$[] = {
		{"LUniTest/SingleMemberCharWithDef;", nullptr},
		{}
	};
	$ParameterAnnotation SingleMemberCharAcceptDefParammethodParamAnnotations$$[] = {
		{"LUniTest/SingleMemberCharWithDef;", nullptr, 0},
		{}
	};
	$CompoundAttribute SingleMemberCharArrAcceptDefmethodAnnotations$$[] = {
		{"LUniTest/SingleMemberCharArrayDef;", nullptr},
		{}
	};
	$ParameterAnnotation SingleMemberCharArrAcceptDefParammethodParamAnnotations$$[] = {
		{"LUniTest/SingleMemberCharArrayDef;", nullptr, 0},
		{}
	};
	$Attribute $attribute$200[] = {
		{'-'}
	};
	$NamedAttribute SingleMemberCharArrEmptymethodAnnotations$$$namedAttribute[] = {
		{"value", '[', $attribute$200},
		{}
	};
	$CompoundAttribute SingleMemberCharArrEmptymethodAnnotations$$[] = {
		{"LUniTest/SingleMemberCharArray;", SingleMemberCharArrEmptymethodAnnotations$$$namedAttribute},
		{}
	};
	$Attribute $attribute$201[] = {
		{'-'}
	};
	$NamedAttribute SingleMemberCharArrEmptyParammethodParamAnnotations$$$namedAttribute[] = {
		{"value", '[', $attribute$201},
		{}
	};
	$ParameterAnnotation SingleMemberCharArrEmptyParammethodParamAnnotations$$[] = {
		{"LUniTest/SingleMemberCharArray;", SingleMemberCharArrEmptyParammethodParamAnnotations$$$namedAttribute, 0},
		{}
	};
	$Attribute $attribute$202[] = {
		{'C', "5"},
		{'-'}
	};
	$NamedAttribute SingleMemberCharArrOnemethodAnnotations$$$namedAttribute[] = {
		{"value", '[', $attribute$202},
		{}
	};
	$CompoundAttribute SingleMemberCharArrOnemethodAnnotations$$[] = {
		{"LUniTest/SingleMemberCharArray;", SingleMemberCharArrOnemethodAnnotations$$$namedAttribute},
		{}
	};
	$Attribute $attribute$203[] = {
		{'C', "5"},
		{'-'}
	};
	$NamedAttribute SingleMemberCharArrOneParammethodParamAnnotations$$$namedAttribute[] = {
		{"value", '[', $attribute$203},
		{}
	};
	$ParameterAnnotation SingleMemberCharArrOneParammethodParamAnnotations$$[] = {
		{"LUniTest/SingleMemberCharArray;", SingleMemberCharArrOneParammethodParamAnnotations$$$namedAttribute, 0},
		{}
	};
	$Attribute $attribute$204[] = {
		{'C', "5"},
		{'-'}
	};
	$NamedAttribute SingleMemberCharArrOvrdDefmethodAnnotations$$$namedAttribute[] = {
		{"value", '[', $attribute$204},
		{}
	};
	$CompoundAttribute SingleMemberCharArrOvrdDefmethodAnnotations$$[] = {
		{"LUniTest/SingleMemberCharArrayDef;", SingleMemberCharArrOvrdDefmethodAnnotations$$$namedAttribute},
		{}
	};
	$Attribute $attribute$205[] = {
		{'C', "5"},
		{'-'}
	};
	$NamedAttribute SingleMemberCharArrOvrdDefParammethodParamAnnotations$$$namedAttribute[] = {
		{"value", '[', $attribute$205},
		{}
	};
	$ParameterAnnotation SingleMemberCharArrOvrdDefParammethodParamAnnotations$$[] = {
		{"LUniTest/SingleMemberCharArrayDef;", SingleMemberCharArrOvrdDefParammethodParamAnnotations$$$namedAttribute, 0},
		{}
	};
	$Attribute $attribute$206[] = {
		{'C', "5"},
		{'C', "6"},
		{'-'}
	};
	$NamedAttribute SingleMemberCharArrTwomethodAnnotations$$$namedAttribute[] = {
		{"value", '[', $attribute$206},
		{}
	};
	$CompoundAttribute SingleMemberCharArrTwomethodAnnotations$$[] = {
		{"LUniTest/SingleMemberCharArray;", SingleMemberCharArrTwomethodAnnotations$$$namedAttribute},
		{}
	};
	$Attribute $attribute$207[] = {
		{'C', "5"},
		{'C', "6"},
		{'-'}
	};
	$NamedAttribute SingleMemberCharArrTwoParammethodParamAnnotations$$$namedAttribute[] = {
		{"value", '[', $attribute$207},
		{}
	};
	$ParameterAnnotation SingleMemberCharArrTwoParammethodParamAnnotations$$[] = {
		{"LUniTest/SingleMemberCharArray;", SingleMemberCharArrTwoParammethodParamAnnotations$$$namedAttribute, 0},
		{}
	};
	$NamedAttribute SingleMemberCharOvrdDefmethodAnnotations$$$namedAttribute[] = {
		{"value", 'C', "5"},
		{}
	};
	$CompoundAttribute SingleMemberCharOvrdDefmethodAnnotations$$[] = {
		{"LUniTest/SingleMemberCharWithDef;", SingleMemberCharOvrdDefmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute SingleMemberCharOvrdDefParammethodParamAnnotations$$$namedAttribute[] = {
		{"value", 'C', "5"},
		{}
	};
	$ParameterAnnotation SingleMemberCharOvrdDefParammethodParamAnnotations$$[] = {
		{"LUniTest/SingleMemberCharWithDef;", SingleMemberCharOvrdDefParammethodParamAnnotations$$$namedAttribute, 0},
		{}
	};
	$NamedAttribute SingleMemberCharParammethodParamAnnotations$$$namedAttribute[] = {
		{"value", 'C', "5"},
		{}
	};
	$ParameterAnnotation SingleMemberCharParammethodParamAnnotations$$[] = {
		{"LUniTest/SingleMemberChar;", SingleMemberCharParammethodParamAnnotations$$$namedAttribute, 0},
		{}
	};
	$NamedAttribute SingleMemberClassmethodAnnotations$$$namedAttribute[] = {
		{"value", 'c', "Ljava/util/Map;"},
		{}
	};
	$CompoundAttribute SingleMemberClassmethodAnnotations$$[] = {
		{"LUniTest/SingleMemberClass;", SingleMemberClassmethodAnnotations$$$namedAttribute},
		{}
	};
	$CompoundAttribute SingleMemberClassAcceptDefmethodAnnotations$$[] = {
		{"LUniTest/SingleMemberClassWithDef;", nullptr},
		{}
	};
	$ParameterAnnotation SingleMemberClassAcceptDefParammethodParamAnnotations$$[] = {
		{"LUniTest/SingleMemberClassWithDef;", nullptr, 0},
		{}
	};
	$CompoundAttribute SingleMemberClassArrAcceptDefmethodAnnotations$$[] = {
		{"LUniTest/SingleMemberClassArrayDef;", nullptr},
		{}
	};
	$ParameterAnnotation SingleMemberClassArrAcceptDefParammethodParamAnnotations$$[] = {
		{"LUniTest/SingleMemberClassArrayDef;", nullptr, 0},
		{}
	};
	$Attribute $attribute$208[] = {
		{'-'}
	};
	$NamedAttribute SingleMemberClassArrEmptymethodAnnotations$$$namedAttribute[] = {
		{"value", '[', $attribute$208},
		{}
	};
	$CompoundAttribute SingleMemberClassArrEmptymethodAnnotations$$[] = {
		{"LUniTest/SingleMemberClassArray;", SingleMemberClassArrEmptymethodAnnotations$$$namedAttribute},
		{}
	};
	$Attribute $attribute$209[] = {
		{'-'}
	};
	$NamedAttribute SingleMemberClassArrEmptyParammethodParamAnnotations$$$namedAttribute[] = {
		{"value", '[', $attribute$209},
		{}
	};
	$ParameterAnnotation SingleMemberClassArrEmptyParammethodParamAnnotations$$[] = {
		{"LUniTest/SingleMemberClassArray;", SingleMemberClassArrEmptyParammethodParamAnnotations$$$namedAttribute, 0},
		{}
	};
	$Attribute $attribute$210[] = {
		{'c', "Ljava/util/Map;"},
		{'-'}
	};
	$NamedAttribute SingleMemberClassArrOnemethodAnnotations$$$namedAttribute[] = {
		{"value", '[', $attribute$210},
		{}
	};
	$CompoundAttribute SingleMemberClassArrOnemethodAnnotations$$[] = {
		{"LUniTest/SingleMemberClassArray;", SingleMemberClassArrOnemethodAnnotations$$$namedAttribute},
		{}
	};
	$Attribute $attribute$211[] = {
		{'c', "Ljava/util/Map;"},
		{'-'}
	};
	$NamedAttribute SingleMemberClassArrOneParammethodParamAnnotations$$$namedAttribute[] = {
		{"value", '[', $attribute$211},
		{}
	};
	$ParameterAnnotation SingleMemberClassArrOneParammethodParamAnnotations$$[] = {
		{"LUniTest/SingleMemberClassArray;", SingleMemberClassArrOneParammethodParamAnnotations$$$namedAttribute, 0},
		{}
	};
	$Attribute $attribute$212[] = {
		{'c', "Ljava/util/Map;"},
		{'-'}
	};
	$NamedAttribute SingleMemberClassArrOvrdDefmethodAnnotations$$$namedAttribute[] = {
		{"value", '[', $attribute$212},
		{}
	};
	$CompoundAttribute SingleMemberClassArrOvrdDefmethodAnnotations$$[] = {
		{"LUniTest/SingleMemberClassArrayDef;", SingleMemberClassArrOvrdDefmethodAnnotations$$$namedAttribute},
		{}
	};
	$Attribute $attribute$213[] = {
		{'c', "Ljava/util/Map;"},
		{'-'}
	};
	$NamedAttribute SingleMemberClassArrOvrdDefParammethodParamAnnotations$$$namedAttribute[] = {
		{"value", '[', $attribute$213},
		{}
	};
	$ParameterAnnotation SingleMemberClassArrOvrdDefParammethodParamAnnotations$$[] = {
		{"LUniTest/SingleMemberClassArrayDef;", SingleMemberClassArrOvrdDefParammethodParamAnnotations$$$namedAttribute, 0},
		{}
	};
	$Attribute $attribute$214[] = {
		{'c', "Ljava/util/Map;"},
		{'c', "Ljava/util/Set;"},
		{'-'}
	};
	$NamedAttribute SingleMemberClassArrTwomethodAnnotations$$$namedAttribute[] = {
		{"value", '[', $attribute$214},
		{}
	};
	$CompoundAttribute SingleMemberClassArrTwomethodAnnotations$$[] = {
		{"LUniTest/SingleMemberClassArray;", SingleMemberClassArrTwomethodAnnotations$$$namedAttribute},
		{}
	};
	$Attribute $attribute$215[] = {
		{'c', "Ljava/util/Map;"},
		{'c', "Ljava/util/Set;"},
		{'-'}
	};
	$NamedAttribute SingleMemberClassArrTwoParammethodParamAnnotations$$$namedAttribute[] = {
		{"value", '[', $attribute$215},
		{}
	};
	$ParameterAnnotation SingleMemberClassArrTwoParammethodParamAnnotations$$[] = {
		{"LUniTest/SingleMemberClassArray;", SingleMemberClassArrTwoParammethodParamAnnotations$$$namedAttribute, 0},
		{}
	};
	$NamedAttribute SingleMemberClassOvrdDefmethodAnnotations$$$namedAttribute[] = {
		{"value", 'c', "Ljava/util/Map;"},
		{}
	};
	$CompoundAttribute SingleMemberClassOvrdDefmethodAnnotations$$[] = {
		{"LUniTest/SingleMemberClassWithDef;", SingleMemberClassOvrdDefmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute SingleMemberClassOvrdDefParammethodParamAnnotations$$$namedAttribute[] = {
		{"value", 'c', "Ljava/util/Map;"},
		{}
	};
	$ParameterAnnotation SingleMemberClassOvrdDefParammethodParamAnnotations$$[] = {
		{"LUniTest/SingleMemberClassWithDef;", SingleMemberClassOvrdDefParammethodParamAnnotations$$$namedAttribute, 0},
		{}
	};
	$NamedAttribute SingleMemberClassParammethodParamAnnotations$$$namedAttribute[] = {
		{"value", 'c', "Ljava/util/Map;"},
		{}
	};
	$ParameterAnnotation SingleMemberClassParammethodParamAnnotations$$[] = {
		{"LUniTest/SingleMemberClass;", SingleMemberClassParammethodParamAnnotations$$$namedAttribute, 0},
		{}
	};
	$NamedAttribute SingleMemberDoublemethodAnnotations$$$namedAttribute[] = {
		{"value", 'D', "7.0"},
		{}
	};
	$CompoundAttribute SingleMemberDoublemethodAnnotations$$[] = {
		{"LUniTest/SingleMemberDouble;", SingleMemberDoublemethodAnnotations$$$namedAttribute},
		{}
	};
	$CompoundAttribute SingleMemberDoubleAcceptDefmethodAnnotations$$[] = {
		{"LUniTest/SingleMemberDoubleWithDef;", nullptr},
		{}
	};
	$ParameterAnnotation SingleMemberDoubleAcceptDefParammethodParamAnnotations$$[] = {
		{"LUniTest/SingleMemberDoubleWithDef;", nullptr, 0},
		{}
	};
	$CompoundAttribute SingleMemberDoubleArrAcceptDefmethodAnnotations$$[] = {
		{"LUniTest/SingleMemberDoubleArrayDef;", nullptr},
		{}
	};
	$ParameterAnnotation SingleMemberDoubleArrAcceptDefParammethodParamAnnotations$$[] = {
		{"LUniTest/SingleMemberDoubleArrayDef;", nullptr, 0},
		{}
	};
	$Attribute $attribute$216[] = {
		{'-'}
	};
	$NamedAttribute SingleMemberDoubleArrEmptymethodAnnotations$$$namedAttribute[] = {
		{"value", '[', $attribute$216},
		{}
	};
	$CompoundAttribute SingleMemberDoubleArrEmptymethodAnnotations$$[] = {
		{"LUniTest/SingleMemberDoubleArray;", SingleMemberDoubleArrEmptymethodAnnotations$$$namedAttribute},
		{}
	};
	$Attribute $attribute$217[] = {
		{'-'}
	};
	$NamedAttribute SingleMemberDoubleArrEmptyParammethodParamAnnotations$$$namedAttribute[] = {
		{"value", '[', $attribute$217},
		{}
	};
	$ParameterAnnotation SingleMemberDoubleArrEmptyParammethodParamAnnotations$$[] = {
		{"LUniTest/SingleMemberDoubleArray;", SingleMemberDoubleArrEmptyParammethodParamAnnotations$$$namedAttribute, 0},
		{}
	};
	$Attribute $attribute$218[] = {
		{'D', "7.0"},
		{'-'}
	};
	$NamedAttribute SingleMemberDoubleArrOnemethodAnnotations$$$namedAttribute[] = {
		{"value", '[', $attribute$218},
		{}
	};
	$CompoundAttribute SingleMemberDoubleArrOnemethodAnnotations$$[] = {
		{"LUniTest/SingleMemberDoubleArray;", SingleMemberDoubleArrOnemethodAnnotations$$$namedAttribute},
		{}
	};
	$Attribute $attribute$219[] = {
		{'D', "7.0"},
		{'-'}
	};
	$NamedAttribute SingleMemberDoubleArrOneParammethodParamAnnotations$$$namedAttribute[] = {
		{"value", '[', $attribute$219},
		{}
	};
	$ParameterAnnotation SingleMemberDoubleArrOneParammethodParamAnnotations$$[] = {
		{"LUniTest/SingleMemberDoubleArray;", SingleMemberDoubleArrOneParammethodParamAnnotations$$$namedAttribute, 0},
		{}
	};
	$Attribute $attribute$220[] = {
		{'D', "7.0"},
		{'-'}
	};
	$NamedAttribute SingleMemberDoubleArrOvrdDefmethodAnnotations$$$namedAttribute[] = {
		{"value", '[', $attribute$220},
		{}
	};
	$CompoundAttribute SingleMemberDoubleArrOvrdDefmethodAnnotations$$[] = {
		{"LUniTest/SingleMemberDoubleArrayDef;", SingleMemberDoubleArrOvrdDefmethodAnnotations$$$namedAttribute},
		{}
	};
	$Attribute $attribute$221[] = {
		{'D', "7.0"},
		{'-'}
	};
	$NamedAttribute SingleMemberDoubleArrOvrdDefParammethodParamAnnotations$$$namedAttribute[] = {
		{"value", '[', $attribute$221},
		{}
	};
	$ParameterAnnotation SingleMemberDoubleArrOvrdDefParammethodParamAnnotations$$[] = {
		{"LUniTest/SingleMemberDoubleArrayDef;", SingleMemberDoubleArrOvrdDefParammethodParamAnnotations$$$namedAttribute, 0},
		{}
	};
	$Attribute $attribute$222[] = {
		{'D', "7.0"},
		{'D', "8.0"},
		{'-'}
	};
	$NamedAttribute SingleMemberDoubleArrTwomethodAnnotations$$$namedAttribute[] = {
		{"value", '[', $attribute$222},
		{}
	};
	$CompoundAttribute SingleMemberDoubleArrTwomethodAnnotations$$[] = {
		{"LUniTest/SingleMemberDoubleArray;", SingleMemberDoubleArrTwomethodAnnotations$$$namedAttribute},
		{}
	};
	$Attribute $attribute$223[] = {
		{'D', "7.0"},
		{'D', "8.0"},
		{'-'}
	};
	$NamedAttribute SingleMemberDoubleArrTwoParammethodParamAnnotations$$$namedAttribute[] = {
		{"value", '[', $attribute$223},
		{}
	};
	$ParameterAnnotation SingleMemberDoubleArrTwoParammethodParamAnnotations$$[] = {
		{"LUniTest/SingleMemberDoubleArray;", SingleMemberDoubleArrTwoParammethodParamAnnotations$$$namedAttribute, 0},
		{}
	};
	$NamedAttribute SingleMemberDoubleOvrdDefmethodAnnotations$$$namedAttribute[] = {
		{"value", 'D', "7.0"},
		{}
	};
	$CompoundAttribute SingleMemberDoubleOvrdDefmethodAnnotations$$[] = {
		{"LUniTest/SingleMemberDoubleWithDef;", SingleMemberDoubleOvrdDefmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute SingleMemberDoubleOvrdDefParammethodParamAnnotations$$$namedAttribute[] = {
		{"value", 'D', "7.0"},
		{}
	};
	$ParameterAnnotation SingleMemberDoubleOvrdDefParammethodParamAnnotations$$[] = {
		{"LUniTest/SingleMemberDoubleWithDef;", SingleMemberDoubleOvrdDefParammethodParamAnnotations$$$namedAttribute, 0},
		{}
	};
	$NamedAttribute SingleMemberDoubleParammethodParamAnnotations$$$namedAttribute[] = {
		{"value", 'D', "7.0"},
		{}
	};
	$ParameterAnnotation SingleMemberDoubleParammethodParamAnnotations$$[] = {
		{"LUniTest/SingleMemberDouble;", SingleMemberDoubleParammethodParamAnnotations$$$namedAttribute, 0},
		{}
	};
	$NamedAttribute SingleMemberEnummethodAnnotations$$$namedAttribute[] = {
		{"value", 'e', "LUniTest/Stooge; MOE"},
		{}
	};
	$CompoundAttribute SingleMemberEnummethodAnnotations$$[] = {
		{"LUniTest/SingleMemberEnum;", SingleMemberEnummethodAnnotations$$$namedAttribute},
		{}
	};
	$CompoundAttribute SingleMemberEnumAcceptDefmethodAnnotations$$[] = {
		{"LUniTest/SingleMemberEnumWithDef;", nullptr},
		{}
	};
	$ParameterAnnotation SingleMemberEnumAcceptDefParammethodParamAnnotations$$[] = {
		{"LUniTest/SingleMemberEnumWithDef;", nullptr, 0},
		{}
	};
	$CompoundAttribute SingleMemberEnumArrAcceptDefmethodAnnotations$$[] = {
		{"LUniTest/SingleMemberEnumArrayDef;", nullptr},
		{}
	};
	$ParameterAnnotation SingleMemberEnumArrAcceptDefParammethodParamAnnotations$$[] = {
		{"LUniTest/SingleMemberEnumArrayDef;", nullptr, 0},
		{}
	};
	$Attribute $attribute$224[] = {
		{'-'}
	};
	$NamedAttribute SingleMemberEnumArrEmptymethodAnnotations$$$namedAttribute[] = {
		{"value", '[', $attribute$224},
		{}
	};
	$CompoundAttribute SingleMemberEnumArrEmptymethodAnnotations$$[] = {
		{"LUniTest/SingleMemberEnumArray;", SingleMemberEnumArrEmptymethodAnnotations$$$namedAttribute},
		{}
	};
	$Attribute $attribute$225[] = {
		{'-'}
	};
	$NamedAttribute SingleMemberEnumArrEmptyParammethodParamAnnotations$$$namedAttribute[] = {
		{"value", '[', $attribute$225},
		{}
	};
	$ParameterAnnotation SingleMemberEnumArrEmptyParammethodParamAnnotations$$[] = {
		{"LUniTest/SingleMemberEnumArray;", SingleMemberEnumArrEmptyParammethodParamAnnotations$$$namedAttribute, 0},
		{}
	};
	$Attribute $attribute$226[] = {
		{'e', "LUniTest/Stooge; MOE"},
		{'-'}
	};
	$NamedAttribute SingleMemberEnumArrOnemethodAnnotations$$$namedAttribute[] = {
		{"value", '[', $attribute$226},
		{}
	};
	$CompoundAttribute SingleMemberEnumArrOnemethodAnnotations$$[] = {
		{"LUniTest/SingleMemberEnumArray;", SingleMemberEnumArrOnemethodAnnotations$$$namedAttribute},
		{}
	};
	$Attribute $attribute$227[] = {
		{'e', "LUniTest/Stooge; MOE"},
		{'-'}
	};
	$NamedAttribute SingleMemberEnumArrOneParammethodParamAnnotations$$$namedAttribute[] = {
		{"value", '[', $attribute$227},
		{}
	};
	$ParameterAnnotation SingleMemberEnumArrOneParammethodParamAnnotations$$[] = {
		{"LUniTest/SingleMemberEnumArray;", SingleMemberEnumArrOneParammethodParamAnnotations$$$namedAttribute, 0},
		{}
	};
	$Attribute $attribute$228[] = {
		{'e', "LUniTest/Stooge; MOE"},
		{'-'}
	};
	$NamedAttribute SingleMemberEnumArrOvrdDefmethodAnnotations$$$namedAttribute[] = {
		{"value", '[', $attribute$228},
		{}
	};
	$CompoundAttribute SingleMemberEnumArrOvrdDefmethodAnnotations$$[] = {
		{"LUniTest/SingleMemberEnumArrayDef;", SingleMemberEnumArrOvrdDefmethodAnnotations$$$namedAttribute},
		{}
	};
	$Attribute $attribute$229[] = {
		{'e', "LUniTest/Stooge; MOE"},
		{'-'}
	};
	$NamedAttribute SingleMemberEnumArrOvrdDefParammethodParamAnnotations$$$namedAttribute[] = {
		{"value", '[', $attribute$229},
		{}
	};
	$ParameterAnnotation SingleMemberEnumArrOvrdDefParammethodParamAnnotations$$[] = {
		{"LUniTest/SingleMemberEnumArrayDef;", SingleMemberEnumArrOvrdDefParammethodParamAnnotations$$$namedAttribute, 0},
		{}
	};
	$Attribute $attribute$230[] = {
		{'e', "LUniTest/Stooge; MOE"},
		{'e', "LUniTest/Stooge; CURLY"},
		{'-'}
	};
	$NamedAttribute SingleMemberEnumArrTwomethodAnnotations$$$namedAttribute[] = {
		{"value", '[', $attribute$230},
		{}
	};
	$CompoundAttribute SingleMemberEnumArrTwomethodAnnotations$$[] = {
		{"LUniTest/SingleMemberEnumArray;", SingleMemberEnumArrTwomethodAnnotations$$$namedAttribute},
		{}
	};
	$Attribute $attribute$231[] = {
		{'e', "LUniTest/Stooge; MOE"},
		{'e', "LUniTest/Stooge; CURLY"},
		{'-'}
	};
	$NamedAttribute SingleMemberEnumArrTwoParammethodParamAnnotations$$$namedAttribute[] = {
		{"value", '[', $attribute$231},
		{}
	};
	$ParameterAnnotation SingleMemberEnumArrTwoParammethodParamAnnotations$$[] = {
		{"LUniTest/SingleMemberEnumArray;", SingleMemberEnumArrTwoParammethodParamAnnotations$$$namedAttribute, 0},
		{}
	};
	$NamedAttribute SingleMemberEnumOvrdDefmethodAnnotations$$$namedAttribute[] = {
		{"value", 'e', "LUniTest/Stooge; MOE"},
		{}
	};
	$CompoundAttribute SingleMemberEnumOvrdDefmethodAnnotations$$[] = {
		{"LUniTest/SingleMemberEnumWithDef;", SingleMemberEnumOvrdDefmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute SingleMemberEnumOvrdDefParammethodParamAnnotations$$$namedAttribute[] = {
		{"value", 'e', "LUniTest/Stooge; MOE"},
		{}
	};
	$ParameterAnnotation SingleMemberEnumOvrdDefParammethodParamAnnotations$$[] = {
		{"LUniTest/SingleMemberEnumWithDef;", SingleMemberEnumOvrdDefParammethodParamAnnotations$$$namedAttribute, 0},
		{}
	};
	$NamedAttribute SingleMemberEnumParammethodParamAnnotations$$$namedAttribute[] = {
		{"value", 'e', "LUniTest/Stooge; MOE"},
		{}
	};
	$ParameterAnnotation SingleMemberEnumParammethodParamAnnotations$$[] = {
		{"LUniTest/SingleMemberEnum;", SingleMemberEnumParammethodParamAnnotations$$$namedAttribute, 0},
		{}
	};
	$NamedAttribute SingleMemberFloatmethodAnnotations$$$namedAttribute[] = {
		{"value", 'F', "6.0"},
		{}
	};
	$CompoundAttribute SingleMemberFloatmethodAnnotations$$[] = {
		{"LUniTest/SingleMemberFloat;", SingleMemberFloatmethodAnnotations$$$namedAttribute},
		{}
	};
	$CompoundAttribute SingleMemberFloatAcceptDefmethodAnnotations$$[] = {
		{"LUniTest/SingleMemberFloatWithDef;", nullptr},
		{}
	};
	$ParameterAnnotation SingleMemberFloatAcceptDefParammethodParamAnnotations$$[] = {
		{"LUniTest/SingleMemberFloatWithDef;", nullptr, 0},
		{}
	};
	$CompoundAttribute SingleMemberFloatArrAcceptDefmethodAnnotations$$[] = {
		{"LUniTest/SingleMemberFloatArrayDef;", nullptr},
		{}
	};
	$ParameterAnnotation SingleMemberFloatArrAcceptDefParammethodParamAnnotations$$[] = {
		{"LUniTest/SingleMemberFloatArrayDef;", nullptr, 0},
		{}
	};
	$Attribute $attribute$232[] = {
		{'-'}
	};
	$NamedAttribute SingleMemberFloatArrEmptymethodAnnotations$$$namedAttribute[] = {
		{"value", '[', $attribute$232},
		{}
	};
	$CompoundAttribute SingleMemberFloatArrEmptymethodAnnotations$$[] = {
		{"LUniTest/SingleMemberFloatArray;", SingleMemberFloatArrEmptymethodAnnotations$$$namedAttribute},
		{}
	};
	$Attribute $attribute$233[] = {
		{'-'}
	};
	$NamedAttribute SingleMemberFloatArrEmptyParammethodParamAnnotations$$$namedAttribute[] = {
		{"value", '[', $attribute$233},
		{}
	};
	$ParameterAnnotation SingleMemberFloatArrEmptyParammethodParamAnnotations$$[] = {
		{"LUniTest/SingleMemberFloatArray;", SingleMemberFloatArrEmptyParammethodParamAnnotations$$$namedAttribute, 0},
		{}
	};
	$Attribute $attribute$234[] = {
		{'F', "6.0"},
		{'-'}
	};
	$NamedAttribute SingleMemberFloatArrOnemethodAnnotations$$$namedAttribute[] = {
		{"value", '[', $attribute$234},
		{}
	};
	$CompoundAttribute SingleMemberFloatArrOnemethodAnnotations$$[] = {
		{"LUniTest/SingleMemberFloatArray;", SingleMemberFloatArrOnemethodAnnotations$$$namedAttribute},
		{}
	};
	$Attribute $attribute$235[] = {
		{'F', "6.0"},
		{'-'}
	};
	$NamedAttribute SingleMemberFloatArrOneParammethodParamAnnotations$$$namedAttribute[] = {
		{"value", '[', $attribute$235},
		{}
	};
	$ParameterAnnotation SingleMemberFloatArrOneParammethodParamAnnotations$$[] = {
		{"LUniTest/SingleMemberFloatArray;", SingleMemberFloatArrOneParammethodParamAnnotations$$$namedAttribute, 0},
		{}
	};
	$Attribute $attribute$236[] = {
		{'F', "6.0"},
		{'-'}
	};
	$NamedAttribute SingleMemberFloatArrOvrdDefmethodAnnotations$$$namedAttribute[] = {
		{"value", '[', $attribute$236},
		{}
	};
	$CompoundAttribute SingleMemberFloatArrOvrdDefmethodAnnotations$$[] = {
		{"LUniTest/SingleMemberFloatArrayDef;", SingleMemberFloatArrOvrdDefmethodAnnotations$$$namedAttribute},
		{}
	};
	$Attribute $attribute$237[] = {
		{'F', "6.0"},
		{'-'}
	};
	$NamedAttribute SingleMemberFloatArrOvrdDefParammethodParamAnnotations$$$namedAttribute[] = {
		{"value", '[', $attribute$237},
		{}
	};
	$ParameterAnnotation SingleMemberFloatArrOvrdDefParammethodParamAnnotations$$[] = {
		{"LUniTest/SingleMemberFloatArrayDef;", SingleMemberFloatArrOvrdDefParammethodParamAnnotations$$$namedAttribute, 0},
		{}
	};
	$Attribute $attribute$238[] = {
		{'F', "6.0"},
		{'F', "7.0"},
		{'-'}
	};
	$NamedAttribute SingleMemberFloatArrTwomethodAnnotations$$$namedAttribute[] = {
		{"value", '[', $attribute$238},
		{}
	};
	$CompoundAttribute SingleMemberFloatArrTwomethodAnnotations$$[] = {
		{"LUniTest/SingleMemberFloatArray;", SingleMemberFloatArrTwomethodAnnotations$$$namedAttribute},
		{}
	};
	$Attribute $attribute$239[] = {
		{'F', "6.0"},
		{'F', "7.0"},
		{'-'}
	};
	$NamedAttribute SingleMemberFloatArrTwoParammethodParamAnnotations$$$namedAttribute[] = {
		{"value", '[', $attribute$239},
		{}
	};
	$ParameterAnnotation SingleMemberFloatArrTwoParammethodParamAnnotations$$[] = {
		{"LUniTest/SingleMemberFloatArray;", SingleMemberFloatArrTwoParammethodParamAnnotations$$$namedAttribute, 0},
		{}
	};
	$NamedAttribute SingleMemberFloatOvrdDefmethodAnnotations$$$namedAttribute[] = {
		{"value", 'F', "6.0"},
		{}
	};
	$CompoundAttribute SingleMemberFloatOvrdDefmethodAnnotations$$[] = {
		{"LUniTest/SingleMemberFloatWithDef;", SingleMemberFloatOvrdDefmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute SingleMemberFloatOvrdDefParammethodParamAnnotations$$$namedAttribute[] = {
		{"value", 'F', "6.0"},
		{}
	};
	$ParameterAnnotation SingleMemberFloatOvrdDefParammethodParamAnnotations$$[] = {
		{"LUniTest/SingleMemberFloatWithDef;", SingleMemberFloatOvrdDefParammethodParamAnnotations$$$namedAttribute, 0},
		{}
	};
	$NamedAttribute SingleMemberFloatParammethodParamAnnotations$$$namedAttribute[] = {
		{"value", 'F', "6.0"},
		{}
	};
	$ParameterAnnotation SingleMemberFloatParammethodParamAnnotations$$[] = {
		{"LUniTest/SingleMemberFloat;", SingleMemberFloatParammethodParamAnnotations$$$namedAttribute, 0},
		{}
	};
	$NamedAttribute SingleMemberIntmethodAnnotations$$$namedAttribute[] = {
		{"value", 'I', "3"},
		{}
	};
	$CompoundAttribute SingleMemberIntmethodAnnotations$$[] = {
		{"LUniTest/SingleMemberInt;", SingleMemberIntmethodAnnotations$$$namedAttribute},
		{}
	};
	$CompoundAttribute SingleMemberIntAcceptDefmethodAnnotations$$[] = {
		{"LUniTest/SingleMemberIntWithDef;", nullptr},
		{}
	};
	$ParameterAnnotation SingleMemberIntAcceptDefParammethodParamAnnotations$$[] = {
		{"LUniTest/SingleMemberIntWithDef;", nullptr, 0},
		{}
	};
	$CompoundAttribute SingleMemberIntArrAcceptDefmethodAnnotations$$[] = {
		{"LUniTest/SingleMemberIntArrayDef;", nullptr},
		{}
	};
	$ParameterAnnotation SingleMemberIntArrAcceptDefParammethodParamAnnotations$$[] = {
		{"LUniTest/SingleMemberIntArrayDef;", nullptr, 0},
		{}
	};
	$Attribute $attribute$240[] = {
		{'-'}
	};
	$NamedAttribute SingleMemberIntArrEmptymethodAnnotations$$$namedAttribute[] = {
		{"value", '[', $attribute$240},
		{}
	};
	$CompoundAttribute SingleMemberIntArrEmptymethodAnnotations$$[] = {
		{"LUniTest/SingleMemberIntArray;", SingleMemberIntArrEmptymethodAnnotations$$$namedAttribute},
		{}
	};
	$Attribute $attribute$241[] = {
		{'-'}
	};
	$NamedAttribute SingleMemberIntArrEmptyParammethodParamAnnotations$$$namedAttribute[] = {
		{"value", '[', $attribute$241},
		{}
	};
	$ParameterAnnotation SingleMemberIntArrEmptyParammethodParamAnnotations$$[] = {
		{"LUniTest/SingleMemberIntArray;", SingleMemberIntArrEmptyParammethodParamAnnotations$$$namedAttribute, 0},
		{}
	};
	$Attribute $attribute$242[] = {
		{'I', "3"},
		{'-'}
	};
	$NamedAttribute SingleMemberIntArrOnemethodAnnotations$$$namedAttribute[] = {
		{"value", '[', $attribute$242},
		{}
	};
	$CompoundAttribute SingleMemberIntArrOnemethodAnnotations$$[] = {
		{"LUniTest/SingleMemberIntArray;", SingleMemberIntArrOnemethodAnnotations$$$namedAttribute},
		{}
	};
	$Attribute $attribute$243[] = {
		{'I', "3"},
		{'-'}
	};
	$NamedAttribute SingleMemberIntArrOneParammethodParamAnnotations$$$namedAttribute[] = {
		{"value", '[', $attribute$243},
		{}
	};
	$ParameterAnnotation SingleMemberIntArrOneParammethodParamAnnotations$$[] = {
		{"LUniTest/SingleMemberIntArray;", SingleMemberIntArrOneParammethodParamAnnotations$$$namedAttribute, 0},
		{}
	};
	$Attribute $attribute$244[] = {
		{'I', "3"},
		{'-'}
	};
	$NamedAttribute SingleMemberIntArrOvrdDefmethodAnnotations$$$namedAttribute[] = {
		{"value", '[', $attribute$244},
		{}
	};
	$CompoundAttribute SingleMemberIntArrOvrdDefmethodAnnotations$$[] = {
		{"LUniTest/SingleMemberIntArrayDef;", SingleMemberIntArrOvrdDefmethodAnnotations$$$namedAttribute},
		{}
	};
	$Attribute $attribute$245[] = {
		{'I', "3"},
		{'-'}
	};
	$NamedAttribute SingleMemberIntArrOvrdDefParammethodParamAnnotations$$$namedAttribute[] = {
		{"value", '[', $attribute$245},
		{}
	};
	$ParameterAnnotation SingleMemberIntArrOvrdDefParammethodParamAnnotations$$[] = {
		{"LUniTest/SingleMemberIntArrayDef;", SingleMemberIntArrOvrdDefParammethodParamAnnotations$$$namedAttribute, 0},
		{}
	};
	$Attribute $attribute$246[] = {
		{'I', "3"},
		{'I', "4"},
		{'-'}
	};
	$NamedAttribute SingleMemberIntArrTwomethodAnnotations$$$namedAttribute[] = {
		{"value", '[', $attribute$246},
		{}
	};
	$CompoundAttribute SingleMemberIntArrTwomethodAnnotations$$[] = {
		{"LUniTest/SingleMemberIntArray;", SingleMemberIntArrTwomethodAnnotations$$$namedAttribute},
		{}
	};
	$Attribute $attribute$247[] = {
		{'I', "3"},
		{'I', "4"},
		{'-'}
	};
	$NamedAttribute SingleMemberIntArrTwoParammethodParamAnnotations$$$namedAttribute[] = {
		{"value", '[', $attribute$247},
		{}
	};
	$ParameterAnnotation SingleMemberIntArrTwoParammethodParamAnnotations$$[] = {
		{"LUniTest/SingleMemberIntArray;", SingleMemberIntArrTwoParammethodParamAnnotations$$$namedAttribute, 0},
		{}
	};
	$NamedAttribute SingleMemberIntOvrdDefmethodAnnotations$$$namedAttribute[] = {
		{"value", 'I', "3"},
		{}
	};
	$CompoundAttribute SingleMemberIntOvrdDefmethodAnnotations$$[] = {
		{"LUniTest/SingleMemberIntWithDef;", SingleMemberIntOvrdDefmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute SingleMemberIntOvrdDefParammethodParamAnnotations$$$namedAttribute[] = {
		{"value", 'I', "3"},
		{}
	};
	$ParameterAnnotation SingleMemberIntOvrdDefParammethodParamAnnotations$$[] = {
		{"LUniTest/SingleMemberIntWithDef;", SingleMemberIntOvrdDefParammethodParamAnnotations$$$namedAttribute, 0},
		{}
	};
	$NamedAttribute SingleMemberIntParammethodParamAnnotations$$$namedAttribute[] = {
		{"value", 'I', "3"},
		{}
	};
	$ParameterAnnotation SingleMemberIntParammethodParamAnnotations$$[] = {
		{"LUniTest/SingleMemberInt;", SingleMemberIntParammethodParamAnnotations$$$namedAttribute, 0},
		{}
	};
	$NamedAttribute SingleMemberLongmethodAnnotations$$$namedAttribute[] = {
		{"value", 'J', "4"},
		{}
	};
	$CompoundAttribute SingleMemberLongmethodAnnotations$$[] = {
		{"LUniTest/SingleMemberLong;", SingleMemberLongmethodAnnotations$$$namedAttribute},
		{}
	};
	$CompoundAttribute SingleMemberLongAcceptDefmethodAnnotations$$[] = {
		{"LUniTest/SingleMemberLongWithDef;", nullptr},
		{}
	};
	$ParameterAnnotation SingleMemberLongAcceptDefParammethodParamAnnotations$$[] = {
		{"LUniTest/SingleMemberLongWithDef;", nullptr, 0},
		{}
	};
	$CompoundAttribute SingleMemberLongArrAcceptDefmethodAnnotations$$[] = {
		{"LUniTest/SingleMemberLongArrayDef;", nullptr},
		{}
	};
	$ParameterAnnotation SingleMemberLongArrAcceptDefParammethodParamAnnotations$$[] = {
		{"LUniTest/SingleMemberLongArrayDef;", nullptr, 0},
		{}
	};
	$Attribute $attribute$248[] = {
		{'-'}
	};
	$NamedAttribute SingleMemberLongArrEmptymethodAnnotations$$$namedAttribute[] = {
		{"value", '[', $attribute$248},
		{}
	};
	$CompoundAttribute SingleMemberLongArrEmptymethodAnnotations$$[] = {
		{"LUniTest/SingleMemberLongArray;", SingleMemberLongArrEmptymethodAnnotations$$$namedAttribute},
		{}
	};
	$Attribute $attribute$249[] = {
		{'-'}
	};
	$NamedAttribute SingleMemberLongArrEmptyParammethodParamAnnotations$$$namedAttribute[] = {
		{"value", '[', $attribute$249},
		{}
	};
	$ParameterAnnotation SingleMemberLongArrEmptyParammethodParamAnnotations$$[] = {
		{"LUniTest/SingleMemberLongArray;", SingleMemberLongArrEmptyParammethodParamAnnotations$$$namedAttribute, 0},
		{}
	};
	$Attribute $attribute$250[] = {
		{'J', "4"},
		{'-'}
	};
	$NamedAttribute SingleMemberLongArrOnemethodAnnotations$$$namedAttribute[] = {
		{"value", '[', $attribute$250},
		{}
	};
	$CompoundAttribute SingleMemberLongArrOnemethodAnnotations$$[] = {
		{"LUniTest/SingleMemberLongArray;", SingleMemberLongArrOnemethodAnnotations$$$namedAttribute},
		{}
	};
	$Attribute $attribute$251[] = {
		{'J', "4"},
		{'-'}
	};
	$NamedAttribute SingleMemberLongArrOneParammethodParamAnnotations$$$namedAttribute[] = {
		{"value", '[', $attribute$251},
		{}
	};
	$ParameterAnnotation SingleMemberLongArrOneParammethodParamAnnotations$$[] = {
		{"LUniTest/SingleMemberLongArray;", SingleMemberLongArrOneParammethodParamAnnotations$$$namedAttribute, 0},
		{}
	};
	$Attribute $attribute$252[] = {
		{'J', "4"},
		{'-'}
	};
	$NamedAttribute SingleMemberLongArrOvrdDefmethodAnnotations$$$namedAttribute[] = {
		{"value", '[', $attribute$252},
		{}
	};
	$CompoundAttribute SingleMemberLongArrOvrdDefmethodAnnotations$$[] = {
		{"LUniTest/SingleMemberLongArrayDef;", SingleMemberLongArrOvrdDefmethodAnnotations$$$namedAttribute},
		{}
	};
	$Attribute $attribute$253[] = {
		{'J', "4"},
		{'-'}
	};
	$NamedAttribute SingleMemberLongArrOvrdDefParammethodParamAnnotations$$$namedAttribute[] = {
		{"value", '[', $attribute$253},
		{}
	};
	$ParameterAnnotation SingleMemberLongArrOvrdDefParammethodParamAnnotations$$[] = {
		{"LUniTest/SingleMemberLongArrayDef;", SingleMemberLongArrOvrdDefParammethodParamAnnotations$$$namedAttribute, 0},
		{}
	};
	$Attribute $attribute$254[] = {
		{'J', "4"},
		{'J', "5"},
		{'-'}
	};
	$NamedAttribute SingleMemberLongArrTwomethodAnnotations$$$namedAttribute[] = {
		{"value", '[', $attribute$254},
		{}
	};
	$CompoundAttribute SingleMemberLongArrTwomethodAnnotations$$[] = {
		{"LUniTest/SingleMemberLongArray;", SingleMemberLongArrTwomethodAnnotations$$$namedAttribute},
		{}
	};
	$Attribute $attribute$255[] = {
		{'J', "4"},
		{'J', "5"},
		{'-'}
	};
	$NamedAttribute SingleMemberLongArrTwoParammethodParamAnnotations$$$namedAttribute[] = {
		{"value", '[', $attribute$255},
		{}
	};
	$ParameterAnnotation SingleMemberLongArrTwoParammethodParamAnnotations$$[] = {
		{"LUniTest/SingleMemberLongArray;", SingleMemberLongArrTwoParammethodParamAnnotations$$$namedAttribute, 0},
		{}
	};
	$NamedAttribute SingleMemberLongOvrdDefmethodAnnotations$$$namedAttribute[] = {
		{"value", 'J', "4"},
		{}
	};
	$CompoundAttribute SingleMemberLongOvrdDefmethodAnnotations$$[] = {
		{"LUniTest/SingleMemberLongWithDef;", SingleMemberLongOvrdDefmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute SingleMemberLongOvrdDefParammethodParamAnnotations$$$namedAttribute[] = {
		{"value", 'J', "4"},
		{}
	};
	$ParameterAnnotation SingleMemberLongOvrdDefParammethodParamAnnotations$$[] = {
		{"LUniTest/SingleMemberLongWithDef;", SingleMemberLongOvrdDefParammethodParamAnnotations$$$namedAttribute, 0},
		{}
	};
	$NamedAttribute SingleMemberLongParammethodParamAnnotations$$$namedAttribute[] = {
		{"value", 'J', "4"},
		{}
	};
	$ParameterAnnotation SingleMemberLongParammethodParamAnnotations$$[] = {
		{"LUniTest/SingleMemberLong;", SingleMemberLongParammethodParamAnnotations$$$namedAttribute, 0},
		{}
	};
	$NamedAttribute SingleMemberShortmethodAnnotations$$$namedAttribute[] = {
		{"value", 'S', "2"},
		{}
	};
	$CompoundAttribute SingleMemberShortmethodAnnotations$$[] = {
		{"LUniTest/SingleMemberShort;", SingleMemberShortmethodAnnotations$$$namedAttribute},
		{}
	};
	$CompoundAttribute SingleMemberShortAcceptDefmethodAnnotations$$[] = {
		{"LUniTest/SingleMemberShortWithDef;", nullptr},
		{}
	};
	$ParameterAnnotation SingleMemberShortAcceptDefParammethodParamAnnotations$$[] = {
		{"LUniTest/SingleMemberShortWithDef;", nullptr, 0},
		{}
	};
	$CompoundAttribute SingleMemberShortArrAcceptDefmethodAnnotations$$[] = {
		{"LUniTest/SingleMemberShortArrayDef;", nullptr},
		{}
	};
	$ParameterAnnotation SingleMemberShortArrAcceptDefParammethodParamAnnotations$$[] = {
		{"LUniTest/SingleMemberShortArrayDef;", nullptr, 0},
		{}
	};
	$Attribute $attribute$256[] = {
		{'-'}
	};
	$NamedAttribute SingleMemberShortArrEmptymethodAnnotations$$$namedAttribute[] = {
		{"value", '[', $attribute$256},
		{}
	};
	$CompoundAttribute SingleMemberShortArrEmptymethodAnnotations$$[] = {
		{"LUniTest/SingleMemberShortArray;", SingleMemberShortArrEmptymethodAnnotations$$$namedAttribute},
		{}
	};
	$Attribute $attribute$257[] = {
		{'-'}
	};
	$NamedAttribute SingleMemberShortArrEmptyParammethodParamAnnotations$$$namedAttribute[] = {
		{"value", '[', $attribute$257},
		{}
	};
	$ParameterAnnotation SingleMemberShortArrEmptyParammethodParamAnnotations$$[] = {
		{"LUniTest/SingleMemberShortArray;", SingleMemberShortArrEmptyParammethodParamAnnotations$$$namedAttribute, 0},
		{}
	};
	$Attribute $attribute$258[] = {
		{'S', "2"},
		{'-'}
	};
	$NamedAttribute SingleMemberShortArrOnemethodAnnotations$$$namedAttribute[] = {
		{"value", '[', $attribute$258},
		{}
	};
	$CompoundAttribute SingleMemberShortArrOnemethodAnnotations$$[] = {
		{"LUniTest/SingleMemberShortArray;", SingleMemberShortArrOnemethodAnnotations$$$namedAttribute},
		{}
	};
	$Attribute $attribute$259[] = {
		{'S', "2"},
		{'-'}
	};
	$NamedAttribute SingleMemberShortArrOneParammethodParamAnnotations$$$namedAttribute[] = {
		{"value", '[', $attribute$259},
		{}
	};
	$ParameterAnnotation SingleMemberShortArrOneParammethodParamAnnotations$$[] = {
		{"LUniTest/SingleMemberShortArray;", SingleMemberShortArrOneParammethodParamAnnotations$$$namedAttribute, 0},
		{}
	};
	$Attribute $attribute$260[] = {
		{'S', "2"},
		{'-'}
	};
	$NamedAttribute SingleMemberShortArrOvrdDefmethodAnnotations$$$namedAttribute[] = {
		{"value", '[', $attribute$260},
		{}
	};
	$CompoundAttribute SingleMemberShortArrOvrdDefmethodAnnotations$$[] = {
		{"LUniTest/SingleMemberShortArrayDef;", SingleMemberShortArrOvrdDefmethodAnnotations$$$namedAttribute},
		{}
	};
	$Attribute $attribute$261[] = {
		{'S', "2"},
		{'-'}
	};
	$NamedAttribute SingleMemberShortArrOvrdDefParammethodParamAnnotations$$$namedAttribute[] = {
		{"value", '[', $attribute$261},
		{}
	};
	$ParameterAnnotation SingleMemberShortArrOvrdDefParammethodParamAnnotations$$[] = {
		{"LUniTest/SingleMemberShortArrayDef;", SingleMemberShortArrOvrdDefParammethodParamAnnotations$$$namedAttribute, 0},
		{}
	};
	$Attribute $attribute$262[] = {
		{'S', "2"},
		{'S', "3"},
		{'-'}
	};
	$NamedAttribute SingleMemberShortArrTwomethodAnnotations$$$namedAttribute[] = {
		{"value", '[', $attribute$262},
		{}
	};
	$CompoundAttribute SingleMemberShortArrTwomethodAnnotations$$[] = {
		{"LUniTest/SingleMemberShortArray;", SingleMemberShortArrTwomethodAnnotations$$$namedAttribute},
		{}
	};
	$Attribute $attribute$263[] = {
		{'S', "2"},
		{'S', "3"},
		{'-'}
	};
	$NamedAttribute SingleMemberShortArrTwoParammethodParamAnnotations$$$namedAttribute[] = {
		{"value", '[', $attribute$263},
		{}
	};
	$ParameterAnnotation SingleMemberShortArrTwoParammethodParamAnnotations$$[] = {
		{"LUniTest/SingleMemberShortArray;", SingleMemberShortArrTwoParammethodParamAnnotations$$$namedAttribute, 0},
		{}
	};
	$NamedAttribute SingleMemberShortOvrdDefmethodAnnotations$$$namedAttribute[] = {
		{"value", 'S', "2"},
		{}
	};
	$CompoundAttribute SingleMemberShortOvrdDefmethodAnnotations$$[] = {
		{"LUniTest/SingleMemberShortWithDef;", SingleMemberShortOvrdDefmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute SingleMemberShortOvrdDefParammethodParamAnnotations$$$namedAttribute[] = {
		{"value", 'S', "2"},
		{}
	};
	$ParameterAnnotation SingleMemberShortOvrdDefParammethodParamAnnotations$$[] = {
		{"LUniTest/SingleMemberShortWithDef;", SingleMemberShortOvrdDefParammethodParamAnnotations$$$namedAttribute, 0},
		{}
	};
	$NamedAttribute SingleMemberShortParammethodParamAnnotations$$$namedAttribute[] = {
		{"value", 'S', "2"},
		{}
	};
	$ParameterAnnotation SingleMemberShortParammethodParamAnnotations$$[] = {
		{"LUniTest/SingleMemberShort;", SingleMemberShortParammethodParamAnnotations$$$namedAttribute, 0},
		{}
	};
	$NamedAttribute SingleMemberStringmethodAnnotations$$$namedAttribute[] = {
		{"value", 's', "custom"},
		{}
	};
	$CompoundAttribute SingleMemberStringmethodAnnotations$$[] = {
		{"LUniTest/SingleMemberString;", SingleMemberStringmethodAnnotations$$$namedAttribute},
		{}
	};
	$CompoundAttribute SingleMemberStringAcceptDefmethodAnnotations$$[] = {
		{"LUniTest/SingleMemberStringWithDef;", nullptr},
		{}
	};
	$ParameterAnnotation SingleMemberStringAcceptDefParammethodParamAnnotations$$[] = {
		{"LUniTest/SingleMemberStringWithDef;", nullptr, 0},
		{}
	};
	$CompoundAttribute SingleMemberStringArrAcceptDefmethodAnnotations$$[] = {
		{"LUniTest/SingleMemberStringArrayDef;", nullptr},
		{}
	};
	$ParameterAnnotation SingleMemberStringArrAcceptDefParammethodParamAnnotations$$[] = {
		{"LUniTest/SingleMemberStringArrayDef;", nullptr, 0},
		{}
	};
	$Attribute $attribute$264[] = {
		{'-'}
	};
	$NamedAttribute SingleMemberStringArrEmptymethodAnnotations$$$namedAttribute[] = {
		{"value", '[', $attribute$264},
		{}
	};
	$CompoundAttribute SingleMemberStringArrEmptymethodAnnotations$$[] = {
		{"LUniTest/SingleMemberStringArray;", SingleMemberStringArrEmptymethodAnnotations$$$namedAttribute},
		{}
	};
	$Attribute $attribute$265[] = {
		{'-'}
	};
	$NamedAttribute SingleMemberStringArrEmptyParammethodParamAnnotations$$$namedAttribute[] = {
		{"value", '[', $attribute$265},
		{}
	};
	$ParameterAnnotation SingleMemberStringArrEmptyParammethodParamAnnotations$$[] = {
		{"LUniTest/SingleMemberStringArray;", SingleMemberStringArrEmptyParammethodParamAnnotations$$$namedAttribute, 0},
		{}
	};
	$Attribute $attribute$266[] = {
		{'s', "custom"},
		{'-'}
	};
	$NamedAttribute SingleMemberStringArrOnemethodAnnotations$$$namedAttribute[] = {
		{"value", '[', $attribute$266},
		{}
	};
	$CompoundAttribute SingleMemberStringArrOnemethodAnnotations$$[] = {
		{"LUniTest/SingleMemberStringArray;", SingleMemberStringArrOnemethodAnnotations$$$namedAttribute},
		{}
	};
	$Attribute $attribute$267[] = {
		{'s', "custom"},
		{'-'}
	};
	$NamedAttribute SingleMemberStringArrOneParammethodParamAnnotations$$$namedAttribute[] = {
		{"value", '[', $attribute$267},
		{}
	};
	$ParameterAnnotation SingleMemberStringArrOneParammethodParamAnnotations$$[] = {
		{"LUniTest/SingleMemberStringArray;", SingleMemberStringArrOneParammethodParamAnnotations$$$namedAttribute, 0},
		{}
	};
	$Attribute $attribute$268[] = {
		{'s', "custom"},
		{'-'}
	};
	$NamedAttribute SingleMemberStringArrOvrdDefmethodAnnotations$$$namedAttribute[] = {
		{"value", '[', $attribute$268},
		{}
	};
	$CompoundAttribute SingleMemberStringArrOvrdDefmethodAnnotations$$[] = {
		{"LUniTest/SingleMemberStringArrayDef;", SingleMemberStringArrOvrdDefmethodAnnotations$$$namedAttribute},
		{}
	};
	$Attribute $attribute$269[] = {
		{'s', "custom"},
		{'-'}
	};
	$NamedAttribute SingleMemberStringArrOvrdDefParammethodParamAnnotations$$$namedAttribute[] = {
		{"value", '[', $attribute$269},
		{}
	};
	$ParameterAnnotation SingleMemberStringArrOvrdDefParammethodParamAnnotations$$[] = {
		{"LUniTest/SingleMemberStringArrayDef;", SingleMemberStringArrOvrdDefParammethodParamAnnotations$$$namedAttribute, 0},
		{}
	};
	$Attribute $attribute$270[] = {
		{'s', "custom"},
		{'s', "paint"},
		{'-'}
	};
	$NamedAttribute SingleMemberStringArrTwomethodAnnotations$$$namedAttribute[] = {
		{"value", '[', $attribute$270},
		{}
	};
	$CompoundAttribute SingleMemberStringArrTwomethodAnnotations$$[] = {
		{"LUniTest/SingleMemberStringArray;", SingleMemberStringArrTwomethodAnnotations$$$namedAttribute},
		{}
	};
	$Attribute $attribute$271[] = {
		{'s', "custom"},
		{'s', "paint"},
		{'-'}
	};
	$NamedAttribute SingleMemberStringArrTwoParammethodParamAnnotations$$$namedAttribute[] = {
		{"value", '[', $attribute$271},
		{}
	};
	$ParameterAnnotation SingleMemberStringArrTwoParammethodParamAnnotations$$[] = {
		{"LUniTest/SingleMemberStringArray;", SingleMemberStringArrTwoParammethodParamAnnotations$$$namedAttribute, 0},
		{}
	};
	$NamedAttribute SingleMemberStringOvrdDefmethodAnnotations$$$namedAttribute[] = {
		{"value", 's', "custom"},
		{}
	};
	$CompoundAttribute SingleMemberStringOvrdDefmethodAnnotations$$[] = {
		{"LUniTest/SingleMemberStringWithDef;", SingleMemberStringOvrdDefmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute SingleMemberStringOvrdDefParammethodParamAnnotations$$$namedAttribute[] = {
		{"value", 's', "custom"},
		{}
	};
	$ParameterAnnotation SingleMemberStringOvrdDefParammethodParamAnnotations$$[] = {
		{"LUniTest/SingleMemberStringWithDef;", SingleMemberStringOvrdDefParammethodParamAnnotations$$$namedAttribute, 0},
		{}
	};
	$NamedAttribute SingleMemberStringParammethodParamAnnotations$$$namedAttribute[] = {
		{"value", 's', "custom"},
		{}
	};
	$ParameterAnnotation SingleMemberStringParammethodParamAnnotations$$[] = {
		{"LUniTest/SingleMemberString;", SingleMemberStringParammethodParamAnnotations$$$namedAttribute, 0},
		{}
	};
	$CompoundAttribute arrayTypesAcceptDefaultMethodmethodAnnotations$$[] = {
		{"LUniTest/ArrayTypesWithDefault;", nullptr},
		{}
	};
	$ParameterAnnotation arrayTypesAcceptDefaultParammethodParamAnnotations$$[] = {
		{"LUniTest/ArrayTypesWithDefault;", nullptr, 0},
		{}
	};
	$Attribute $attribute$272[] = {
		{'B', "1"},
		{'-'}
	};
	$Attribute $attribute$273[] = {
		{'S', "2"},
		{'-'}
	};
	$Attribute $attribute$274[] = {
		{'I', "3"},
		{'-'}
	};
	$Attribute $attribute$275[] = {
		{'J', "4"},
		{'-'}
	};
	$Attribute $attribute$276[] = {
		{'C', "5"},
		{'-'}
	};
	$Attribute $attribute$277[] = {
		{'F', "6.0"},
		{'-'}
	};
	$Attribute $attribute$278[] = {
		{'D', "7.0"},
		{'-'}
	};
	$Attribute $attribute$279[] = {
		{'Z', "true"},
		{'-'}
	};
	$Attribute $attribute$280[] = {
		{'s', "custom"},
		{'-'}
	};
	$Attribute $attribute$281[] = {
		{'c', "Ljava/util/Map;"},
		{'-'}
	};
	$Attribute $attribute$282[] = {
		{'e', "LUniTest/Stooge; MOE"},
		{'-'}
	};
	$NamedAttribute arrayTypesOverrideDefaultMethodmethodAnnotations$$$namedAttribute$compoundAttribute$namedAttribute[] = {
		{"x", 'I', "1"},
		{"y", 'I', "2"},
		{}
	};
$CompoundAttribute arrayTypesOverrideDefaultMethodmethodAnnotations$$$namedAttribute$compoundAttribute = {
	"LUniTest/Point;", arrayTypesOverrideDefaultMethodmethodAnnotations$$$namedAttribute$compoundAttribute$namedAttribute
};
	$Attribute $attribute$283[] = {
		{'@', &arrayTypesOverrideDefaultMethodmethodAnnotations$$$namedAttribute$compoundAttribute},
		{'-'}
	};
	$NamedAttribute arrayTypesOverrideDefaultMethodmethodAnnotations$$$namedAttribute[] = {
		{"b", '[', $attribute$272},
		{"s", '[', $attribute$273},
		{"i", '[', $attribute$274},
		{"l", '[', $attribute$275},
		{"c", '[', $attribute$276},
		{"f", '[', $attribute$277},
		{"d", '[', $attribute$278},
		{"bool", '[', $attribute$279},
		{"str", '[', $attribute$280},
		{"cls", '[', $attribute$281},
		{"e", '[', $attribute$282},
		{"a", '[', $attribute$283},
		{}
	};
	$CompoundAttribute arrayTypesOverrideDefaultMethodmethodAnnotations$$[] = {
		{"LUniTest/ArrayTypesWithDefault;", arrayTypesOverrideDefaultMethodmethodAnnotations$$$namedAttribute},
		{}
	};
	$Attribute $attribute$284[] = {
		{'B', "1"},
		{'-'}
	};
	$Attribute $attribute$285[] = {
		{'S', "2"},
		{'-'}
	};
	$Attribute $attribute$286[] = {
		{'I', "3"},
		{'-'}
	};
	$Attribute $attribute$287[] = {
		{'J', "4"},
		{'-'}
	};
	$Attribute $attribute$288[] = {
		{'C', "5"},
		{'-'}
	};
	$Attribute $attribute$289[] = {
		{'F', "6.0"},
		{'-'}
	};
	$Attribute $attribute$290[] = {
		{'D', "7.0"},
		{'-'}
	};
	$Attribute $attribute$291[] = {
		{'Z', "true"},
		{'-'}
	};
	$Attribute $attribute$292[] = {
		{'s', "custom"},
		{'-'}
	};
	$Attribute $attribute$293[] = {
		{'c', "Ljava/util/Map;"},
		{'-'}
	};
	$Attribute $attribute$294[] = {
		{'e', "LUniTest/Stooge; MOE"},
		{'-'}
	};
	$NamedAttribute arrayTypesOverrideDefaultParammethodParamAnnotations$$$namedAttribute$compoundAttribute$namedAttribute[] = {
		{"x", 'I', "1"},
		{"y", 'I', "2"},
		{}
	};
$CompoundAttribute arrayTypesOverrideDefaultParammethodParamAnnotations$$$namedAttribute$compoundAttribute = {
	"LUniTest/Point;", arrayTypesOverrideDefaultParammethodParamAnnotations$$$namedAttribute$compoundAttribute$namedAttribute
};
	$Attribute $attribute$295[] = {
		{'@', &arrayTypesOverrideDefaultParammethodParamAnnotations$$$namedAttribute$compoundAttribute},
		{'-'}
	};
	$NamedAttribute arrayTypesOverrideDefaultParammethodParamAnnotations$$$namedAttribute[] = {
		{"b", '[', $attribute$284},
		{"s", '[', $attribute$285},
		{"i", '[', $attribute$286},
		{"l", '[', $attribute$287},
		{"c", '[', $attribute$288},
		{"f", '[', $attribute$289},
		{"d", '[', $attribute$290},
		{"bool", '[', $attribute$291},
		{"str", '[', $attribute$292},
		{"cls", '[', $attribute$293},
		{"e", '[', $attribute$294},
		{"a", '[', $attribute$295},
		{}
	};
	$ParameterAnnotation arrayTypesOverrideDefaultParammethodParamAnnotations$$[] = {
		{"LUniTest/ArrayTypesWithDefault;", arrayTypesOverrideDefaultParammethodParamAnnotations$$$namedAttribute, 0},
		{}
	};
	$Attribute $attribute$296[] = {
		{'-'}
	};
	$Attribute $attribute$297[] = {
		{'-'}
	};
	$Attribute $attribute$298[] = {
		{'-'}
	};
	$Attribute $attribute$299[] = {
		{'-'}
	};
	$Attribute $attribute$300[] = {
		{'-'}
	};
	$Attribute $attribute$301[] = {
		{'-'}
	};
	$Attribute $attribute$302[] = {
		{'-'}
	};
	$Attribute $attribute$303[] = {
		{'-'}
	};
	$Attribute $attribute$304[] = {
		{'-'}
	};
	$Attribute $attribute$305[] = {
		{'-'}
	};
	$Attribute $attribute$306[] = {
		{'-'}
	};
	$Attribute $attribute$307[] = {
		{'-'}
	};
	$NamedAttribute emptyArrayTypesMethodmethodAnnotations$$$namedAttribute[] = {
		{"b", '[', $attribute$296},
		{"s", '[', $attribute$297},
		{"i", '[', $attribute$298},
		{"l", '[', $attribute$299},
		{"c", '[', $attribute$300},
		{"f", '[', $attribute$301},
		{"d", '[', $attribute$302},
		{"bool", '[', $attribute$303},
		{"str", '[', $attribute$304},
		{"cls", '[', $attribute$305},
		{"e", '[', $attribute$306},
		{"a", '[', $attribute$307},
		{}
	};
	$CompoundAttribute emptyArrayTypesMethodmethodAnnotations$$[] = {
		{"LUniTest/ArrayTypes;", emptyArrayTypesMethodmethodAnnotations$$$namedAttribute},
		{}
	};
	$Attribute $attribute$308[] = {
		{'-'}
	};
	$Attribute $attribute$309[] = {
		{'-'}
	};
	$Attribute $attribute$310[] = {
		{'-'}
	};
	$Attribute $attribute$311[] = {
		{'-'}
	};
	$Attribute $attribute$312[] = {
		{'-'}
	};
	$Attribute $attribute$313[] = {
		{'-'}
	};
	$Attribute $attribute$314[] = {
		{'-'}
	};
	$Attribute $attribute$315[] = {
		{'-'}
	};
	$Attribute $attribute$316[] = {
		{'-'}
	};
	$Attribute $attribute$317[] = {
		{'-'}
	};
	$Attribute $attribute$318[] = {
		{'-'}
	};
	$Attribute $attribute$319[] = {
		{'-'}
	};
	$NamedAttribute emptyArrayTypesParammethodParamAnnotations$$$namedAttribute[] = {
		{"b", '[', $attribute$308},
		{"s", '[', $attribute$309},
		{"i", '[', $attribute$310},
		{"l", '[', $attribute$311},
		{"c", '[', $attribute$312},
		{"f", '[', $attribute$313},
		{"d", '[', $attribute$314},
		{"bool", '[', $attribute$315},
		{"str", '[', $attribute$316},
		{"cls", '[', $attribute$317},
		{"e", '[', $attribute$318},
		{"a", '[', $attribute$319},
		{}
	};
	$ParameterAnnotation emptyArrayTypesParammethodParamAnnotations$$[] = {
		{"LUniTest/ArrayTypes;", emptyArrayTypesParammethodParamAnnotations$$$namedAttribute, 0},
		{}
	};
	$CompoundAttribute markerMethodmethodAnnotations$$[] = {
		{"LUniTest/Marker;", nullptr},
		{}
	};
	$ParameterAnnotation markerParammethodParamAnnotations$$[] = {
		{"LUniTest/Marker;", nullptr, 0},
		{}
	};
	$CompoundAttribute scalarTypesAcceptDefaultMethodmethodAnnotations$$[] = {
		{"LUniTest/ScalarTypesWithDefault;", nullptr},
		{}
	};
	$ParameterAnnotation scalarTypesAcceptDefaultParammethodParamAnnotations$$[] = {
		{"LUniTest/ScalarTypesWithDefault;", nullptr, 0},
		{}
	};
	$NamedAttribute scalarTypesMethodmethodAnnotations$$$namedAttribute$compoundAttribute$namedAttribute[] = {
		{"x", 'I', "1"},
		{"y", 'I', "2"},
		{}
	};
$CompoundAttribute scalarTypesMethodmethodAnnotations$$$namedAttribute$compoundAttribute = {
	"LUniTest/Point;", scalarTypesMethodmethodAnnotations$$$namedAttribute$compoundAttribute$namedAttribute
};
	$NamedAttribute scalarTypesMethodmethodAnnotations$$$namedAttribute[] = {
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
		{"a", '@', &scalarTypesMethodmethodAnnotations$$$namedAttribute$compoundAttribute},
		{}
	};
	$CompoundAttribute scalarTypesMethodmethodAnnotations$$[] = {
		{"LUniTest/ScalarTypes;", scalarTypesMethodmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute scalarTypesOverrideDefaultMethodmethodAnnotations$$$namedAttribute[] = {
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
	$CompoundAttribute scalarTypesOverrideDefaultMethodmethodAnnotations$$[] = {
		{"LUniTest/ScalarTypesWithDefault;", scalarTypesOverrideDefaultMethodmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute scalarTypesOverrideDefaultParammethodParamAnnotations$$$namedAttribute[] = {
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
	$ParameterAnnotation scalarTypesOverrideDefaultParammethodParamAnnotations$$[] = {
		{"LUniTest/ScalarTypesWithDefault;", scalarTypesOverrideDefaultParammethodParamAnnotations$$$namedAttribute, 0},
		{}
	};
	$NamedAttribute scalarTypesParammethodParamAnnotations$$$namedAttribute$compoundAttribute$namedAttribute[] = {
		{"x", 'I', "1"},
		{"y", 'I', "2"},
		{}
	};
$CompoundAttribute scalarTypesParammethodParamAnnotations$$$namedAttribute$compoundAttribute = {
	"LUniTest/Point;", scalarTypesParammethodParamAnnotations$$$namedAttribute$compoundAttribute$namedAttribute
};
	$NamedAttribute scalarTypesParammethodParamAnnotations$$$namedAttribute[] = {
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
		{"a", '@', &scalarTypesParammethodParamAnnotations$$$namedAttribute$compoundAttribute},
		{}
	};
	$ParameterAnnotation scalarTypesParammethodParamAnnotations$$[] = {
		{"LUniTest/ScalarTypes;", scalarTypesParammethodParamAnnotations$$$namedAttribute, 0},
		{}
	};
	$Attribute $attribute$320[] = {
		{'B', "1"},
		{'-'}
	};
	$Attribute $attribute$321[] = {
		{'S', "2"},
		{'-'}
	};
	$Attribute $attribute$322[] = {
		{'I', "3"},
		{'-'}
	};
	$Attribute $attribute$323[] = {
		{'J', "4"},
		{'-'}
	};
	$Attribute $attribute$324[] = {
		{'C', "5"},
		{'-'}
	};
	$Attribute $attribute$325[] = {
		{'F', "6.0"},
		{'-'}
	};
	$Attribute $attribute$326[] = {
		{'D', "7.0"},
		{'-'}
	};
	$Attribute $attribute$327[] = {
		{'Z', "true"},
		{'-'}
	};
	$Attribute $attribute$328[] = {
		{'s', "custom"},
		{'-'}
	};
	$Attribute $attribute$329[] = {
		{'c', "Ljava/util/Map;"},
		{'-'}
	};
	$Attribute $attribute$330[] = {
		{'e', "LUniTest/Stooge; MOE"},
		{'-'}
	};
	$NamedAttribute singleElementArrayTypesMethodmethodAnnotations$$$namedAttribute$compoundAttribute$namedAttribute[] = {
		{"x", 'I', "1"},
		{"y", 'I', "2"},
		{}
	};
$CompoundAttribute singleElementArrayTypesMethodmethodAnnotations$$$namedAttribute$compoundAttribute = {
	"LUniTest/Point;", singleElementArrayTypesMethodmethodAnnotations$$$namedAttribute$compoundAttribute$namedAttribute
};
	$Attribute $attribute$331[] = {
		{'@', &singleElementArrayTypesMethodmethodAnnotations$$$namedAttribute$compoundAttribute},
		{'-'}
	};
	$NamedAttribute singleElementArrayTypesMethodmethodAnnotations$$$namedAttribute[] = {
		{"b", '[', $attribute$320},
		{"s", '[', $attribute$321},
		{"i", '[', $attribute$322},
		{"l", '[', $attribute$323},
		{"c", '[', $attribute$324},
		{"f", '[', $attribute$325},
		{"d", '[', $attribute$326},
		{"bool", '[', $attribute$327},
		{"str", '[', $attribute$328},
		{"cls", '[', $attribute$329},
		{"e", '[', $attribute$330},
		{"a", '[', $attribute$331},
		{}
	};
	$CompoundAttribute singleElementArrayTypesMethodmethodAnnotations$$[] = {
		{"LUniTest/ArrayTypes;", singleElementArrayTypesMethodmethodAnnotations$$$namedAttribute},
		{}
	};
	$Attribute $attribute$332[] = {
		{'B', "1"},
		{'-'}
	};
	$Attribute $attribute$333[] = {
		{'S', "2"},
		{'-'}
	};
	$Attribute $attribute$334[] = {
		{'I', "3"},
		{'-'}
	};
	$Attribute $attribute$335[] = {
		{'J', "4"},
		{'-'}
	};
	$Attribute $attribute$336[] = {
		{'C', "5"},
		{'-'}
	};
	$Attribute $attribute$337[] = {
		{'F', "6.0"},
		{'-'}
	};
	$Attribute $attribute$338[] = {
		{'D', "7.0"},
		{'-'}
	};
	$Attribute $attribute$339[] = {
		{'Z', "true"},
		{'-'}
	};
	$Attribute $attribute$340[] = {
		{'s', "custom"},
		{'-'}
	};
	$Attribute $attribute$341[] = {
		{'c', "Ljava/util/Map;"},
		{'-'}
	};
	$Attribute $attribute$342[] = {
		{'e', "LUniTest/Stooge; MOE"},
		{'-'}
	};
	$NamedAttribute singleElementArrayTypesParammethodParamAnnotations$$$namedAttribute$compoundAttribute$namedAttribute[] = {
		{"x", 'I', "1"},
		{"y", 'I', "2"},
		{}
	};
$CompoundAttribute singleElementArrayTypesParammethodParamAnnotations$$$namedAttribute$compoundAttribute = {
	"LUniTest/Point;", singleElementArrayTypesParammethodParamAnnotations$$$namedAttribute$compoundAttribute$namedAttribute
};
	$Attribute $attribute$343[] = {
		{'@', &singleElementArrayTypesParammethodParamAnnotations$$$namedAttribute$compoundAttribute},
		{'-'}
	};
	$NamedAttribute singleElementArrayTypesParammethodParamAnnotations$$$namedAttribute[] = {
		{"b", '[', $attribute$332},
		{"s", '[', $attribute$333},
		{"i", '[', $attribute$334},
		{"l", '[', $attribute$335},
		{"c", '[', $attribute$336},
		{"f", '[', $attribute$337},
		{"d", '[', $attribute$338},
		{"bool", '[', $attribute$339},
		{"str", '[', $attribute$340},
		{"cls", '[', $attribute$341},
		{"e", '[', $attribute$342},
		{"a", '[', $attribute$343},
		{}
	};
	$ParameterAnnotation singleElementArrayTypesParammethodParamAnnotations$$[] = {
		{"LUniTest/ArrayTypes;", singleElementArrayTypesParammethodParamAnnotations$$$namedAttribute, 0},
		{}
	};
	$Attribute $attribute$344[] = {
		{'B', "1"},
		{'B', "2"},
		{'-'}
	};
	$Attribute $attribute$345[] = {
		{'S', "2"},
		{'S', "3"},
		{'-'}
	};
	$Attribute $attribute$346[] = {
		{'I', "3"},
		{'I', "4"},
		{'-'}
	};
	$Attribute $attribute$347[] = {
		{'J', "4"},
		{'J', "5"},
		{'-'}
	};
	$Attribute $attribute$348[] = {
		{'C', "5"},
		{'C', "6"},
		{'-'}
	};
	$Attribute $attribute$349[] = {
		{'F', "6.0"},
		{'F', "7.0"},
		{'-'}
	};
	$Attribute $attribute$350[] = {
		{'D', "7.0"},
		{'D', "8.0"},
		{'-'}
	};
	$Attribute $attribute$351[] = {
		{'Z', "true"},
		{'Z', "false"},
		{'-'}
	};
	$Attribute $attribute$352[] = {
		{'s', "custom"},
		{'s', "paint"},
		{'-'}
	};
	$Attribute $attribute$353[] = {
		{'c', "Ljava/util/Map;"},
		{'c', "Ljava/util/Set;"},
		{'-'}
	};
	$Attribute $attribute$354[] = {
		{'e', "LUniTest/Stooge; MOE"},
		{'e', "LUniTest/Stooge; CURLY"},
		{'-'}
	};
	$NamedAttribute twoElementArrayTypesMethodmethodAnnotations$$$namedAttribute$compoundAttribute$namedAttribute[] = {
		{"x", 'I', "1"},
		{"y", 'I', "2"},
		{}
	};
$CompoundAttribute twoElementArrayTypesMethodmethodAnnotations$$$namedAttribute$compoundAttribute = {
	"LUniTest/Point;", twoElementArrayTypesMethodmethodAnnotations$$$namedAttribute$compoundAttribute$namedAttribute
};
	$NamedAttribute twoElementArrayTypesMethodmethodAnnotations$$$namedAttribute$compoundAttribute$namedAttribute$compoundAttribute$namedAttribute[] = {
		{"x", 'I', "3"},
		{"y", 'I', "4"},
		{}
	};
$CompoundAttribute twoElementArrayTypesMethodmethodAnnotations$$$namedAttribute$compoundAttribute$namedAttribute$compoundAttribute = {
	"LUniTest/Point;", twoElementArrayTypesMethodmethodAnnotations$$$namedAttribute$compoundAttribute$namedAttribute$compoundAttribute$namedAttribute
};
	$Attribute $attribute$355[] = {
		{'@', &twoElementArrayTypesMethodmethodAnnotations$$$namedAttribute$compoundAttribute},
		{'@', &twoElementArrayTypesMethodmethodAnnotations$$$namedAttribute$compoundAttribute$namedAttribute$compoundAttribute},
		{'-'}
	};
	$NamedAttribute twoElementArrayTypesMethodmethodAnnotations$$$namedAttribute[] = {
		{"b", '[', $attribute$344},
		{"s", '[', $attribute$345},
		{"i", '[', $attribute$346},
		{"l", '[', $attribute$347},
		{"c", '[', $attribute$348},
		{"f", '[', $attribute$349},
		{"d", '[', $attribute$350},
		{"bool", '[', $attribute$351},
		{"str", '[', $attribute$352},
		{"cls", '[', $attribute$353},
		{"e", '[', $attribute$354},
		{"a", '[', $attribute$355},
		{}
	};
	$CompoundAttribute twoElementArrayTypesMethodmethodAnnotations$$[] = {
		{"LUniTest/ArrayTypes;", twoElementArrayTypesMethodmethodAnnotations$$$namedAttribute},
		{}
	};
	$Attribute $attribute$356[] = {
		{'B', "1"},
		{'B', "2"},
		{'-'}
	};
	$Attribute $attribute$357[] = {
		{'S', "2"},
		{'S', "3"},
		{'-'}
	};
	$Attribute $attribute$358[] = {
		{'I', "3"},
		{'I', "4"},
		{'-'}
	};
	$Attribute $attribute$359[] = {
		{'J', "4"},
		{'J', "5"},
		{'-'}
	};
	$Attribute $attribute$360[] = {
		{'C', "5"},
		{'C', "6"},
		{'-'}
	};
	$Attribute $attribute$361[] = {
		{'F', "6.0"},
		{'F', "7.0"},
		{'-'}
	};
	$Attribute $attribute$362[] = {
		{'D', "7.0"},
		{'D', "8.0"},
		{'-'}
	};
	$Attribute $attribute$363[] = {
		{'Z', "true"},
		{'Z', "false"},
		{'-'}
	};
	$Attribute $attribute$364[] = {
		{'s', "custom"},
		{'s', "paint"},
		{'-'}
	};
	$Attribute $attribute$365[] = {
		{'c', "Ljava/util/Map;"},
		{'c', "Ljava/util/Set;"},
		{'-'}
	};
	$Attribute $attribute$366[] = {
		{'e', "LUniTest/Stooge; MOE"},
		{'e', "LUniTest/Stooge; CURLY"},
		{'-'}
	};
	$NamedAttribute twoElementArrayTypesParammethodParamAnnotations$$$namedAttribute$compoundAttribute$namedAttribute[] = {
		{"x", 'I', "1"},
		{"y", 'I', "2"},
		{}
	};
$CompoundAttribute twoElementArrayTypesParammethodParamAnnotations$$$namedAttribute$compoundAttribute = {
	"LUniTest/Point;", twoElementArrayTypesParammethodParamAnnotations$$$namedAttribute$compoundAttribute$namedAttribute
};
	$NamedAttribute twoElementArrayTypesParammethodParamAnnotations$$$namedAttribute$compoundAttribute$namedAttribute$compoundAttribute$namedAttribute[] = {
		{"x", 'I', "3"},
		{"y", 'I', "4"},
		{}
	};
$CompoundAttribute twoElementArrayTypesParammethodParamAnnotations$$$namedAttribute$compoundAttribute$namedAttribute$compoundAttribute = {
	"LUniTest/Point;", twoElementArrayTypesParammethodParamAnnotations$$$namedAttribute$compoundAttribute$namedAttribute$compoundAttribute$namedAttribute
};
	$Attribute $attribute$367[] = {
		{'@', &twoElementArrayTypesParammethodParamAnnotations$$$namedAttribute$compoundAttribute},
		{'@', &twoElementArrayTypesParammethodParamAnnotations$$$namedAttribute$compoundAttribute$namedAttribute$compoundAttribute},
		{'-'}
	};
	$NamedAttribute twoElementArrayTypesParammethodParamAnnotations$$$namedAttribute[] = {
		{"b", '[', $attribute$356},
		{"s", '[', $attribute$357},
		{"i", '[', $attribute$358},
		{"l", '[', $attribute$359},
		{"c", '[', $attribute$360},
		{"f", '[', $attribute$361},
		{"d", '[', $attribute$362},
		{"bool", '[', $attribute$363},
		{"str", '[', $attribute$364},
		{"cls", '[', $attribute$365},
		{"e", '[', $attribute$366},
		{"a", '[', $attribute$367},
		{}
	};
	$ParameterAnnotation twoElementArrayTypesParammethodParamAnnotations$$[] = {
		{"LUniTest/ArrayTypes;", twoElementArrayTypesParammethodParamAnnotations$$$namedAttribute, 0},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/Iterator;)V", nullptr, $PUBLIC, $method(UnitTest, init$, void, $Iterator*), nullptr, nullptr, init$methodAnnotations$$},
		{"<init>", "(Ljava/util/Set;)V", nullptr, $PUBLIC, $method(UnitTest, init$, void, $Set*), nullptr, nullptr, init$methodAnnotations$$$1},
		{"<init>", "(Ljava/util/Map;)V", nullptr, $PUBLIC, $method(UnitTest, init$, void, $Map*), nullptr, nullptr, init$methodAnnotations$$$2},
		{"<init>", "(Ljava/util/List;)V", nullptr, $PUBLIC, $method(UnitTest, init$, void, $List*), nullptr, nullptr, init$methodAnnotations$$$3},
		{"<init>", "(Ljava/util/Collection;)V", nullptr, $PUBLIC, $method(UnitTest, init$, void, $Collection*), nullptr, nullptr, init$methodAnnotations$$$4},
		{"<init>", "(Ljava/util/SortedSet;)V", nullptr, $PUBLIC, $method(UnitTest, init$, void, $SortedSet*), nullptr, nullptr, init$methodAnnotations$$$5},
		{"<init>", "(Ljava/util/SortedMap;)V", nullptr, $PUBLIC, $method(UnitTest, init$, void, $SortedMap*), nullptr, nullptr, init$methodAnnotations$$$6},
		{"<init>", "(Ljava/util/RandomAccess;)V", nullptr, $PUBLIC, $method(UnitTest, init$, void, $RandomAccess*), nullptr, nullptr, init$methodAnnotations$$$7},
		{"<init>", "()V", nullptr, $PUBLIC, $method(UnitTest, init$, void), nullptr, nullptr, init$methodAnnotations$$$8},
		{"<init>", "(B)V", nullptr, $PUBLIC, $method(UnitTest, init$, void, int8_t), nullptr, nullptr, init$methodAnnotations$$$9},
		{"<init>", "(S)V", nullptr, $PUBLIC, $method(UnitTest, init$, void, int16_t), nullptr, nullptr, init$methodAnnotations$$$10},
		{"<init>", "(I)V", nullptr, $PUBLIC, $method(UnitTest, init$, void, int32_t), nullptr, nullptr, init$methodAnnotations$$$11},
		{"<init>", "(J)V", nullptr, $PUBLIC, $method(UnitTest, init$, void, int64_t), nullptr, nullptr, init$methodAnnotations$$$12},
		{"<init>", "(C)V", nullptr, $PUBLIC, $method(UnitTest, init$, void, char16_t), nullptr, nullptr, init$methodAnnotations$$$13},
		{"<init>", "(F)V", nullptr, $PUBLIC, $method(UnitTest, init$, void, float), nullptr, nullptr, init$methodAnnotations$$$14},
		{"<init>", "(D)V", nullptr, $PUBLIC, $method(UnitTest, init$, void, double), nullptr, nullptr, init$methodAnnotations$$$15},
		{"<init>", "(Z)V", nullptr, $PUBLIC, $method(UnitTest, init$, void, bool), nullptr, nullptr, init$methodAnnotations$$$16},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(UnitTest, init$, void, $String*), nullptr, nullptr, init$methodAnnotations$$$17},
		{"<init>", "(Ljava/lang/Class;)V", nullptr, $PUBLIC, $method(UnitTest, init$, void, $Class*), nullptr, nullptr, init$methodAnnotations$$$18},
		{"<init>", "(Ljava/lang/Enum;)V", nullptr, $PUBLIC, $method(UnitTest, init$, void, $Enum*), nullptr, nullptr, init$methodAnnotations$$$19},
		{"<init>", "(BLjava/util/Set;)V", nullptr, $PUBLIC, $method(UnitTest, init$, void, int8_t, $Set*), nullptr, nullptr, init$methodAnnotations$$$20},
		{"<init>", "(SLjava/util/Set;)V", nullptr, $PUBLIC, $method(UnitTest, init$, void, int16_t, $Set*), nullptr, nullptr, init$methodAnnotations$$$21},
		{"<init>", "(ILjava/util/Set;)V", nullptr, $PUBLIC, $method(UnitTest, init$, void, int32_t, $Set*), nullptr, nullptr, init$methodAnnotations$$$22},
		{"<init>", "(JLjava/util/Set;)V", nullptr, $PUBLIC, $method(UnitTest, init$, void, int64_t, $Set*), nullptr, nullptr, init$methodAnnotations$$$23},
		{"<init>", "(CLjava/util/Set;)V", nullptr, $PUBLIC, $method(UnitTest, init$, void, char16_t, $Set*), nullptr, nullptr, init$methodAnnotations$$$24},
		{"<init>", "(FLjava/util/Set;)V", nullptr, $PUBLIC, $method(UnitTest, init$, void, float, $Set*), nullptr, nullptr, init$methodAnnotations$$$25},
		{"<init>", "(DLjava/util/Set;)V", nullptr, $PUBLIC, $method(UnitTest, init$, void, double, $Set*), nullptr, nullptr, init$methodAnnotations$$$26},
		{"<init>", "(ZLjava/util/Set;)V", nullptr, $PUBLIC, $method(UnitTest, init$, void, bool, $Set*), nullptr, nullptr, init$methodAnnotations$$$27},
		{"<init>", "(Ljava/lang/String;Ljava/util/Set;)V", nullptr, $PUBLIC, $method(UnitTest, init$, void, $String*, $Set*), nullptr, nullptr, init$methodAnnotations$$$28},
		{"<init>", "(Ljava/lang/Class;Ljava/util/Set;)V", nullptr, $PUBLIC, $method(UnitTest, init$, void, $Class*, $Set*), nullptr, nullptr, init$methodAnnotations$$$29},
		{"<init>", "(Ljava/lang/Enum;Ljava/util/Set;)V", nullptr, $PUBLIC, $method(UnitTest, init$, void, $Enum*, $Set*), nullptr, nullptr, init$methodAnnotations$$$30},
		{"<init>", "(BLjava/util/Map;)V", nullptr, $PUBLIC, $method(UnitTest, init$, void, int8_t, $Map*), nullptr, nullptr, init$methodAnnotations$$$31},
		{"<init>", "(SLjava/util/Map;)V", nullptr, $PUBLIC, $method(UnitTest, init$, void, int16_t, $Map*), nullptr, nullptr, init$methodAnnotations$$$32},
		{"<init>", "(ILjava/util/Map;)V", nullptr, $PUBLIC, $method(UnitTest, init$, void, int32_t, $Map*), nullptr, nullptr, init$methodAnnotations$$$33},
		{"<init>", "(JLjava/util/Map;)V", nullptr, $PUBLIC, $method(UnitTest, init$, void, int64_t, $Map*), nullptr, nullptr, init$methodAnnotations$$$34},
		{"<init>", "(CLjava/util/Map;)V", nullptr, $PUBLIC, $method(UnitTest, init$, void, char16_t, $Map*), nullptr, nullptr, init$methodAnnotations$$$35},
		{"<init>", "(FLjava/util/Map;)V", nullptr, $PUBLIC, $method(UnitTest, init$, void, float, $Map*), nullptr, nullptr, init$methodAnnotations$$$36},
		{"<init>", "(DLjava/util/Map;)V", nullptr, $PUBLIC, $method(UnitTest, init$, void, double, $Map*), nullptr, nullptr, init$methodAnnotations$$$37},
		{"<init>", "(ZLjava/util/Map;)V", nullptr, $PUBLIC, $method(UnitTest, init$, void, bool, $Map*), nullptr, nullptr, init$methodAnnotations$$$38},
		{"<init>", "(Ljava/lang/String;Ljava/util/Map;)V", nullptr, $PUBLIC, $method(UnitTest, init$, void, $String*, $Map*), nullptr, nullptr, init$methodAnnotations$$$39},
		{"<init>", "(Ljava/lang/Class;Ljava/util/Map;)V", nullptr, $PUBLIC, $method(UnitTest, init$, void, $Class*, $Map*), nullptr, nullptr, init$methodAnnotations$$$40},
		{"<init>", "(Ljava/lang/Enum;Ljava/util/Map;)V", nullptr, $PUBLIC, $method(UnitTest, init$, void, $Enum*, $Map*), nullptr, nullptr, init$methodAnnotations$$$41},
		{"<init>", "([B)V", nullptr, $PUBLIC, $method(UnitTest, init$, void, $bytes*), nullptr, nullptr, init$methodAnnotations$$$42},
		{"<init>", "([S)V", nullptr, $PUBLIC, $method(UnitTest, init$, void, $shorts*), nullptr, nullptr, init$methodAnnotations$$$43},
		{"<init>", "([I)V", nullptr, $PUBLIC, $method(UnitTest, init$, void, $ints*), nullptr, nullptr, init$methodAnnotations$$$44},
		{"<init>", "([J)V", nullptr, $PUBLIC, $method(UnitTest, init$, void, $longs*), nullptr, nullptr, init$methodAnnotations$$$45},
		{"<init>", "([C)V", nullptr, $PUBLIC, $method(UnitTest, init$, void, $chars*), nullptr, nullptr, init$methodAnnotations$$$46},
		{"<init>", "([F)V", nullptr, $PUBLIC, $method(UnitTest, init$, void, $floats*), nullptr, nullptr, init$methodAnnotations$$$47},
		{"<init>", "([D)V", nullptr, $PUBLIC, $method(UnitTest, init$, void, $doubles*), nullptr, nullptr, init$methodAnnotations$$$48},
		{"<init>", "([Z)V", nullptr, $PUBLIC, $method(UnitTest, init$, void, $booleans*), nullptr, nullptr, init$methodAnnotations$$$49},
		{"<init>", "([Ljava/lang/String;)V", nullptr, $PUBLIC, $method(UnitTest, init$, void, $StringArray*), nullptr, nullptr, init$methodAnnotations$$$50},
		{"<init>", "([Ljava/lang/Class;)V", nullptr, $PUBLIC, $method(UnitTest, init$, void, $ClassArray*), nullptr, nullptr, init$methodAnnotations$$$51},
		{"<init>", "([Ljava/lang/Enum;)V", nullptr, $PUBLIC, $method(UnitTest, init$, void, $EnumArray*), nullptr, nullptr, init$methodAnnotations$$$52},
		{"<init>", "([BLjava/util/Set;)V", nullptr, $PUBLIC, $method(UnitTest, init$, void, $bytes*, $Set*), nullptr, nullptr, init$methodAnnotations$$$53},
		{"<init>", "([SLjava/util/Set;)V", nullptr, $PUBLIC, $method(UnitTest, init$, void, $shorts*, $Set*), nullptr, nullptr, init$methodAnnotations$$$54},
		{"<init>", "([ILjava/util/Set;)V", nullptr, $PUBLIC, $method(UnitTest, init$, void, $ints*, $Set*), nullptr, nullptr, init$methodAnnotations$$$55},
		{"<init>", "([JLjava/util/Set;)V", nullptr, $PUBLIC, $method(UnitTest, init$, void, $longs*, $Set*), nullptr, nullptr, init$methodAnnotations$$$56},
		{"<init>", "([CLjava/util/Set;)V", nullptr, $PUBLIC, $method(UnitTest, init$, void, $chars*, $Set*), nullptr, nullptr, init$methodAnnotations$$$57},
		{"<init>", "([FLjava/util/Set;)V", nullptr, $PUBLIC, $method(UnitTest, init$, void, $floats*, $Set*), nullptr, nullptr, init$methodAnnotations$$$58},
		{"<init>", "([DLjava/util/Set;)V", nullptr, $PUBLIC, $method(UnitTest, init$, void, $doubles*, $Set*), nullptr, nullptr, init$methodAnnotations$$$59},
		{"<init>", "([ZLjava/util/Set;)V", nullptr, $PUBLIC, $method(UnitTest, init$, void, $booleans*, $Set*), nullptr, nullptr, init$methodAnnotations$$$60},
		{"<init>", "([Ljava/lang/String;Ljava/util/Set;)V", nullptr, $PUBLIC, $method(UnitTest, init$, void, $StringArray*, $Set*), nullptr, nullptr, init$methodAnnotations$$$61},
		{"<init>", "([Ljava/lang/Class;Ljava/util/Set;)V", nullptr, $PUBLIC, $method(UnitTest, init$, void, $ClassArray*, $Set*), nullptr, nullptr, init$methodAnnotations$$$62},
		{"<init>", "([Ljava/lang/Enum;Ljava/util/Set;)V", nullptr, $PUBLIC, $method(UnitTest, init$, void, $EnumArray*, $Set*), nullptr, nullptr, init$methodAnnotations$$$63},
		{"<init>", "([BLjava/util/Map;)V", nullptr, $PUBLIC, $method(UnitTest, init$, void, $bytes*, $Map*), nullptr, nullptr, init$methodAnnotations$$$64},
		{"<init>", "([SLjava/util/Map;)V", nullptr, $PUBLIC, $method(UnitTest, init$, void, $shorts*, $Map*), nullptr, nullptr, init$methodAnnotations$$$65},
		{"<init>", "([ILjava/util/Map;)V", nullptr, $PUBLIC, $method(UnitTest, init$, void, $ints*, $Map*), nullptr, nullptr, init$methodAnnotations$$$66},
		{"<init>", "([JLjava/util/Map;)V", nullptr, $PUBLIC, $method(UnitTest, init$, void, $longs*, $Map*), nullptr, nullptr, init$methodAnnotations$$$67},
		{"<init>", "([CLjava/util/Map;)V", nullptr, $PUBLIC, $method(UnitTest, init$, void, $chars*, $Map*), nullptr, nullptr, init$methodAnnotations$$$68},
		{"<init>", "([FLjava/util/Map;)V", nullptr, $PUBLIC, $method(UnitTest, init$, void, $floats*, $Map*), nullptr, nullptr, init$methodAnnotations$$$69},
		{"<init>", "([DLjava/util/Map;)V", nullptr, $PUBLIC, $method(UnitTest, init$, void, $doubles*, $Map*), nullptr, nullptr, init$methodAnnotations$$$70},
		{"<init>", "([ZLjava/util/Map;)V", nullptr, $PUBLIC, $method(UnitTest, init$, void, $booleans*, $Map*), nullptr, nullptr, init$methodAnnotations$$$71},
		{"<init>", "([Ljava/lang/String;Ljava/util/Map;)V", nullptr, $PUBLIC, $method(UnitTest, init$, void, $StringArray*, $Map*), nullptr, nullptr, init$methodAnnotations$$$72},
		{"<init>", "([Ljava/lang/Class;Ljava/util/Map;)V", nullptr, $PUBLIC, $method(UnitTest, init$, void, $ClassArray*, $Map*), nullptr, nullptr, init$methodAnnotations$$$73},
		{"<init>", "([Ljava/lang/Enum;Ljava/util/Map;)V", nullptr, $PUBLIC, $method(UnitTest, init$, void, $EnumArray*, $Map*), nullptr, nullptr, init$methodAnnotations$$$74},
		{"<init>", "([BLjava/util/List;)V", nullptr, $PUBLIC, $method(UnitTest, init$, void, $bytes*, $List*), nullptr, nullptr, init$methodAnnotations$$$75},
		{"<init>", "([SLjava/util/List;)V", nullptr, $PUBLIC, $method(UnitTest, init$, void, $shorts*, $List*), nullptr, nullptr, init$methodAnnotations$$$76},
		{"<init>", "([ILjava/util/List;)V", nullptr, $PUBLIC, $method(UnitTest, init$, void, $ints*, $List*), nullptr, nullptr, init$methodAnnotations$$$77},
		{"<init>", "([JLjava/util/List;)V", nullptr, $PUBLIC, $method(UnitTest, init$, void, $longs*, $List*), nullptr, nullptr, init$methodAnnotations$$$78},
		{"<init>", "([CLjava/util/List;)V", nullptr, $PUBLIC, $method(UnitTest, init$, void, $chars*, $List*), nullptr, nullptr, init$methodAnnotations$$$79},
		{"<init>", "([FLjava/util/List;)V", nullptr, $PUBLIC, $method(UnitTest, init$, void, $floats*, $List*), nullptr, nullptr, init$methodAnnotations$$$80},
		{"<init>", "([DLjava/util/List;)V", nullptr, $PUBLIC, $method(UnitTest, init$, void, $doubles*, $List*), nullptr, nullptr, init$methodAnnotations$$$81},
		{"<init>", "([ZLjava/util/List;)V", nullptr, $PUBLIC, $method(UnitTest, init$, void, $booleans*, $List*), nullptr, nullptr, init$methodAnnotations$$$82},
		{"<init>", "([Ljava/lang/String;Ljava/util/List;)V", nullptr, $PUBLIC, $method(UnitTest, init$, void, $StringArray*, $List*), nullptr, nullptr, init$methodAnnotations$$$83},
		{"<init>", "([Ljava/lang/Class;Ljava/util/List;)V", nullptr, $PUBLIC, $method(UnitTest, init$, void, $ClassArray*, $List*), nullptr, nullptr, init$methodAnnotations$$$84},
		{"<init>", "([Ljava/lang/Enum;Ljava/util/List;)V", nullptr, $PUBLIC, $method(UnitTest, init$, void, $EnumArray*, $List*), nullptr, nullptr, init$methodAnnotations$$$85},
		{"<init>", "([BLjava/util/Collection;)V", nullptr, $PUBLIC, $method(UnitTest, init$, void, $bytes*, $Collection*), nullptr, nullptr, init$methodAnnotations$$$86},
		{"<init>", "([SLjava/util/Collection;)V", nullptr, $PUBLIC, $method(UnitTest, init$, void, $shorts*, $Collection*), nullptr, nullptr, init$methodAnnotations$$$87},
		{"<init>", "([ILjava/util/Collection;)V", nullptr, $PUBLIC, $method(UnitTest, init$, void, $ints*, $Collection*), nullptr, nullptr, init$methodAnnotations$$$88},
		{"<init>", "([JLjava/util/Collection;)V", nullptr, $PUBLIC, $method(UnitTest, init$, void, $longs*, $Collection*), nullptr, nullptr, init$methodAnnotations$$$89},
		{"<init>", "([CLjava/util/Collection;)V", nullptr, $PUBLIC, $method(UnitTest, init$, void, $chars*, $Collection*), nullptr, nullptr, init$methodAnnotations$$$90},
		{"<init>", "([FLjava/util/Collection;)V", nullptr, $PUBLIC, $method(UnitTest, init$, void, $floats*, $Collection*), nullptr, nullptr, init$methodAnnotations$$$91},
		{"<init>", "([DLjava/util/Collection;)V", nullptr, $PUBLIC, $method(UnitTest, init$, void, $doubles*, $Collection*), nullptr, nullptr, init$methodAnnotations$$$92},
		{"<init>", "([ZLjava/util/Collection;)V", nullptr, $PUBLIC, $method(UnitTest, init$, void, $booleans*, $Collection*), nullptr, nullptr, init$methodAnnotations$$$93},
		{"<init>", "([Ljava/lang/String;Ljava/util/Collection;)V", nullptr, $PUBLIC, $method(UnitTest, init$, void, $StringArray*, $Collection*), nullptr, nullptr, init$methodAnnotations$$$94},
		{"<init>", "([Ljava/lang/Class;Ljava/util/Collection;)V", nullptr, $PUBLIC, $method(UnitTest, init$, void, $ClassArray*, $Collection*), nullptr, nullptr, init$methodAnnotations$$$95},
		{"<init>", "([Ljava/lang/Enum;Ljava/util/Collection;)V", nullptr, $PUBLIC, $method(UnitTest, init$, void, $EnumArray*, $Collection*), nullptr, nullptr, init$methodAnnotations$$$96},
		{"SingleMemberBoolean", "()V", nullptr, $PUBLIC, $virtualMethod(UnitTest, SingleMemberBoolean, void), nullptr, nullptr, SingleMemberBooleanmethodAnnotations$$},
		{"SingleMemberBooleanAcceptDef", "()V", nullptr, $PUBLIC, $virtualMethod(UnitTest, SingleMemberBooleanAcceptDef, void), nullptr, nullptr, SingleMemberBooleanAcceptDefmethodAnnotations$$},
		{"SingleMemberBooleanAcceptDefParam", "(I)V", nullptr, $PUBLIC, $virtualMethod(UnitTest, SingleMemberBooleanAcceptDefParam, void, int32_t), nullptr, nullptr, nullptr, nullptr, SingleMemberBooleanAcceptDefParammethodParamAnnotations$$},
		{"SingleMemberBooleanArrAcceptDef", "()V", nullptr, $PUBLIC, $virtualMethod(UnitTest, SingleMemberBooleanArrAcceptDef, void), nullptr, nullptr, SingleMemberBooleanArrAcceptDefmethodAnnotations$$},
		{"SingleMemberBooleanArrAcceptDefParam", "(I)V", nullptr, $PUBLIC, $virtualMethod(UnitTest, SingleMemberBooleanArrAcceptDefParam, void, int32_t), nullptr, nullptr, nullptr, nullptr, SingleMemberBooleanArrAcceptDefParammethodParamAnnotations$$},
		{"SingleMemberBooleanArrEmpty", "()V", nullptr, $PUBLIC, $virtualMethod(UnitTest, SingleMemberBooleanArrEmpty, void), nullptr, nullptr, SingleMemberBooleanArrEmptymethodAnnotations$$},
		{"SingleMemberBooleanArrEmptyParam", "(I)V", nullptr, $PUBLIC, $virtualMethod(UnitTest, SingleMemberBooleanArrEmptyParam, void, int32_t), nullptr, nullptr, nullptr, nullptr, SingleMemberBooleanArrEmptyParammethodParamAnnotations$$},
		{"SingleMemberBooleanArrOne", "()V", nullptr, $PUBLIC, $virtualMethod(UnitTest, SingleMemberBooleanArrOne, void), nullptr, nullptr, SingleMemberBooleanArrOnemethodAnnotations$$},
		{"SingleMemberBooleanArrOneParam", "(I)V", nullptr, $PUBLIC, $virtualMethod(UnitTest, SingleMemberBooleanArrOneParam, void, int32_t), nullptr, nullptr, nullptr, nullptr, SingleMemberBooleanArrOneParammethodParamAnnotations$$},
		{"SingleMemberBooleanArrOvrdDef", "()V", nullptr, $PUBLIC, $virtualMethod(UnitTest, SingleMemberBooleanArrOvrdDef, void), nullptr, nullptr, SingleMemberBooleanArrOvrdDefmethodAnnotations$$},
		{"SingleMemberBooleanArrOvrdDefParam", "(I)V", nullptr, $PUBLIC, $virtualMethod(UnitTest, SingleMemberBooleanArrOvrdDefParam, void, int32_t), nullptr, nullptr, nullptr, nullptr, SingleMemberBooleanArrOvrdDefParammethodParamAnnotations$$},
		{"SingleMemberBooleanArrTwo", "()V", nullptr, $PUBLIC, $virtualMethod(UnitTest, SingleMemberBooleanArrTwo, void), nullptr, nullptr, SingleMemberBooleanArrTwomethodAnnotations$$},
		{"SingleMemberBooleanArrTwoParam", "(I)V", nullptr, $PUBLIC, $virtualMethod(UnitTest, SingleMemberBooleanArrTwoParam, void, int32_t), nullptr, nullptr, nullptr, nullptr, SingleMemberBooleanArrTwoParammethodParamAnnotations$$},
		{"SingleMemberBooleanOvrdDef", "()V", nullptr, $PUBLIC, $virtualMethod(UnitTest, SingleMemberBooleanOvrdDef, void), nullptr, nullptr, SingleMemberBooleanOvrdDefmethodAnnotations$$},
		{"SingleMemberBooleanOvrdDefParam", "(I)V", nullptr, $PUBLIC, $virtualMethod(UnitTest, SingleMemberBooleanOvrdDefParam, void, int32_t), nullptr, nullptr, nullptr, nullptr, SingleMemberBooleanOvrdDefParammethodParamAnnotations$$},
		{"SingleMemberBooleanParam", "(I)V", nullptr, $PUBLIC, $virtualMethod(UnitTest, SingleMemberBooleanParam, void, int32_t), nullptr, nullptr, nullptr, nullptr, SingleMemberBooleanParammethodParamAnnotations$$},
		{"SingleMemberByte", "()V", nullptr, $PUBLIC, $virtualMethod(UnitTest, SingleMemberByte, void), nullptr, nullptr, SingleMemberBytemethodAnnotations$$},
		{"SingleMemberByteAcceptDef", "()V", nullptr, $PUBLIC, $virtualMethod(UnitTest, SingleMemberByteAcceptDef, void), nullptr, nullptr, SingleMemberByteAcceptDefmethodAnnotations$$},
		{"SingleMemberByteAcceptDefParam", "(I)V", nullptr, $PUBLIC, $virtualMethod(UnitTest, SingleMemberByteAcceptDefParam, void, int32_t), nullptr, nullptr, nullptr, nullptr, SingleMemberByteAcceptDefParammethodParamAnnotations$$},
		{"SingleMemberByteArrAcceptDef", "()V", nullptr, $PUBLIC, $virtualMethod(UnitTest, SingleMemberByteArrAcceptDef, void), nullptr, nullptr, SingleMemberByteArrAcceptDefmethodAnnotations$$},
		{"SingleMemberByteArrAcceptDefParam", "(I)V", nullptr, $PUBLIC, $virtualMethod(UnitTest, SingleMemberByteArrAcceptDefParam, void, int32_t), nullptr, nullptr, nullptr, nullptr, SingleMemberByteArrAcceptDefParammethodParamAnnotations$$},
		{"SingleMemberByteArrEmpty", "()V", nullptr, $PUBLIC, $virtualMethod(UnitTest, SingleMemberByteArrEmpty, void), nullptr, nullptr, SingleMemberByteArrEmptymethodAnnotations$$},
		{"SingleMemberByteArrEmptyParam", "(I)V", nullptr, $PUBLIC, $virtualMethod(UnitTest, SingleMemberByteArrEmptyParam, void, int32_t), nullptr, nullptr, nullptr, nullptr, SingleMemberByteArrEmptyParammethodParamAnnotations$$},
		{"SingleMemberByteArrOne", "()V", nullptr, $PUBLIC, $virtualMethod(UnitTest, SingleMemberByteArrOne, void), nullptr, nullptr, SingleMemberByteArrOnemethodAnnotations$$},
		{"SingleMemberByteArrOneParam", "(I)V", nullptr, $PUBLIC, $virtualMethod(UnitTest, SingleMemberByteArrOneParam, void, int32_t), nullptr, nullptr, nullptr, nullptr, SingleMemberByteArrOneParammethodParamAnnotations$$},
		{"SingleMemberByteArrOvrdDef", "()V", nullptr, $PUBLIC, $virtualMethod(UnitTest, SingleMemberByteArrOvrdDef, void), nullptr, nullptr, SingleMemberByteArrOvrdDefmethodAnnotations$$},
		{"SingleMemberByteArrOvrdDefParam", "(I)V", nullptr, $PUBLIC, $virtualMethod(UnitTest, SingleMemberByteArrOvrdDefParam, void, int32_t), nullptr, nullptr, nullptr, nullptr, SingleMemberByteArrOvrdDefParammethodParamAnnotations$$},
		{"SingleMemberByteArrTwo", "()V", nullptr, $PUBLIC, $virtualMethod(UnitTest, SingleMemberByteArrTwo, void), nullptr, nullptr, SingleMemberByteArrTwomethodAnnotations$$},
		{"SingleMemberByteArrTwoParam", "(I)V", nullptr, $PUBLIC, $virtualMethod(UnitTest, SingleMemberByteArrTwoParam, void, int32_t), nullptr, nullptr, nullptr, nullptr, SingleMemberByteArrTwoParammethodParamAnnotations$$},
		{"SingleMemberByteOvrdDef", "()V", nullptr, $PUBLIC, $virtualMethod(UnitTest, SingleMemberByteOvrdDef, void), nullptr, nullptr, SingleMemberByteOvrdDefmethodAnnotations$$},
		{"SingleMemberByteOvrdDefParam", "(I)V", nullptr, $PUBLIC, $virtualMethod(UnitTest, SingleMemberByteOvrdDefParam, void, int32_t), nullptr, nullptr, nullptr, nullptr, SingleMemberByteOvrdDefParammethodParamAnnotations$$},
		{"SingleMemberByteParam", "(I)V", nullptr, $PUBLIC, $virtualMethod(UnitTest, SingleMemberByteParam, void, int32_t), nullptr, nullptr, nullptr, nullptr, SingleMemberByteParammethodParamAnnotations$$},
		{"SingleMemberChar", "()V", nullptr, $PUBLIC, $virtualMethod(UnitTest, SingleMemberChar, void), nullptr, nullptr, SingleMemberCharmethodAnnotations$$},
		{"SingleMemberCharAcceptDef", "()V", nullptr, $PUBLIC, $virtualMethod(UnitTest, SingleMemberCharAcceptDef, void), nullptr, nullptr, SingleMemberCharAcceptDefmethodAnnotations$$},
		{"SingleMemberCharAcceptDefParam", "(I)V", nullptr, $PUBLIC, $virtualMethod(UnitTest, SingleMemberCharAcceptDefParam, void, int32_t), nullptr, nullptr, nullptr, nullptr, SingleMemberCharAcceptDefParammethodParamAnnotations$$},
		{"SingleMemberCharArrAcceptDef", "()V", nullptr, $PUBLIC, $virtualMethod(UnitTest, SingleMemberCharArrAcceptDef, void), nullptr, nullptr, SingleMemberCharArrAcceptDefmethodAnnotations$$},
		{"SingleMemberCharArrAcceptDefParam", "(I)V", nullptr, $PUBLIC, $virtualMethod(UnitTest, SingleMemberCharArrAcceptDefParam, void, int32_t), nullptr, nullptr, nullptr, nullptr, SingleMemberCharArrAcceptDefParammethodParamAnnotations$$},
		{"SingleMemberCharArrEmpty", "()V", nullptr, $PUBLIC, $virtualMethod(UnitTest, SingleMemberCharArrEmpty, void), nullptr, nullptr, SingleMemberCharArrEmptymethodAnnotations$$},
		{"SingleMemberCharArrEmptyParam", "(I)V", nullptr, $PUBLIC, $virtualMethod(UnitTest, SingleMemberCharArrEmptyParam, void, int32_t), nullptr, nullptr, nullptr, nullptr, SingleMemberCharArrEmptyParammethodParamAnnotations$$},
		{"SingleMemberCharArrOne", "()V", nullptr, $PUBLIC, $virtualMethod(UnitTest, SingleMemberCharArrOne, void), nullptr, nullptr, SingleMemberCharArrOnemethodAnnotations$$},
		{"SingleMemberCharArrOneParam", "(I)V", nullptr, $PUBLIC, $virtualMethod(UnitTest, SingleMemberCharArrOneParam, void, int32_t), nullptr, nullptr, nullptr, nullptr, SingleMemberCharArrOneParammethodParamAnnotations$$},
		{"SingleMemberCharArrOvrdDef", "()V", nullptr, $PUBLIC, $virtualMethod(UnitTest, SingleMemberCharArrOvrdDef, void), nullptr, nullptr, SingleMemberCharArrOvrdDefmethodAnnotations$$},
		{"SingleMemberCharArrOvrdDefParam", "(I)V", nullptr, $PUBLIC, $virtualMethod(UnitTest, SingleMemberCharArrOvrdDefParam, void, int32_t), nullptr, nullptr, nullptr, nullptr, SingleMemberCharArrOvrdDefParammethodParamAnnotations$$},
		{"SingleMemberCharArrTwo", "()V", nullptr, $PUBLIC, $virtualMethod(UnitTest, SingleMemberCharArrTwo, void), nullptr, nullptr, SingleMemberCharArrTwomethodAnnotations$$},
		{"SingleMemberCharArrTwoParam", "(I)V", nullptr, $PUBLIC, $virtualMethod(UnitTest, SingleMemberCharArrTwoParam, void, int32_t), nullptr, nullptr, nullptr, nullptr, SingleMemberCharArrTwoParammethodParamAnnotations$$},
		{"SingleMemberCharOvrdDef", "()V", nullptr, $PUBLIC, $virtualMethod(UnitTest, SingleMemberCharOvrdDef, void), nullptr, nullptr, SingleMemberCharOvrdDefmethodAnnotations$$},
		{"SingleMemberCharOvrdDefParam", "(I)V", nullptr, $PUBLIC, $virtualMethod(UnitTest, SingleMemberCharOvrdDefParam, void, int32_t), nullptr, nullptr, nullptr, nullptr, SingleMemberCharOvrdDefParammethodParamAnnotations$$},
		{"SingleMemberCharParam", "(I)V", nullptr, $PUBLIC, $virtualMethod(UnitTest, SingleMemberCharParam, void, int32_t), nullptr, nullptr, nullptr, nullptr, SingleMemberCharParammethodParamAnnotations$$},
		{"SingleMemberClass", "()V", nullptr, $PUBLIC, $virtualMethod(UnitTest, SingleMemberClass, void), nullptr, nullptr, SingleMemberClassmethodAnnotations$$},
		{"SingleMemberClassAcceptDef", "()V", nullptr, $PUBLIC, $virtualMethod(UnitTest, SingleMemberClassAcceptDef, void), nullptr, nullptr, SingleMemberClassAcceptDefmethodAnnotations$$},
		{"SingleMemberClassAcceptDefParam", "(I)V", nullptr, $PUBLIC, $virtualMethod(UnitTest, SingleMemberClassAcceptDefParam, void, int32_t), nullptr, nullptr, nullptr, nullptr, SingleMemberClassAcceptDefParammethodParamAnnotations$$},
		{"SingleMemberClassArrAcceptDef", "()V", nullptr, $PUBLIC, $virtualMethod(UnitTest, SingleMemberClassArrAcceptDef, void), nullptr, nullptr, SingleMemberClassArrAcceptDefmethodAnnotations$$},
		{"SingleMemberClassArrAcceptDefParam", "(I)V", nullptr, $PUBLIC, $virtualMethod(UnitTest, SingleMemberClassArrAcceptDefParam, void, int32_t), nullptr, nullptr, nullptr, nullptr, SingleMemberClassArrAcceptDefParammethodParamAnnotations$$},
		{"SingleMemberClassArrEmpty", "()V", nullptr, $PUBLIC, $virtualMethod(UnitTest, SingleMemberClassArrEmpty, void), nullptr, nullptr, SingleMemberClassArrEmptymethodAnnotations$$},
		{"SingleMemberClassArrEmptyParam", "(I)V", nullptr, $PUBLIC, $virtualMethod(UnitTest, SingleMemberClassArrEmptyParam, void, int32_t), nullptr, nullptr, nullptr, nullptr, SingleMemberClassArrEmptyParammethodParamAnnotations$$},
		{"SingleMemberClassArrOne", "()V", nullptr, $PUBLIC, $virtualMethod(UnitTest, SingleMemberClassArrOne, void), nullptr, nullptr, SingleMemberClassArrOnemethodAnnotations$$},
		{"SingleMemberClassArrOneParam", "(I)V", nullptr, $PUBLIC, $virtualMethod(UnitTest, SingleMemberClassArrOneParam, void, int32_t), nullptr, nullptr, nullptr, nullptr, SingleMemberClassArrOneParammethodParamAnnotations$$},
		{"SingleMemberClassArrOvrdDef", "()V", nullptr, $PUBLIC, $virtualMethod(UnitTest, SingleMemberClassArrOvrdDef, void), nullptr, nullptr, SingleMemberClassArrOvrdDefmethodAnnotations$$},
		{"SingleMemberClassArrOvrdDefParam", "(I)V", nullptr, $PUBLIC, $virtualMethod(UnitTest, SingleMemberClassArrOvrdDefParam, void, int32_t), nullptr, nullptr, nullptr, nullptr, SingleMemberClassArrOvrdDefParammethodParamAnnotations$$},
		{"SingleMemberClassArrTwo", "()V", nullptr, $PUBLIC, $virtualMethod(UnitTest, SingleMemberClassArrTwo, void), nullptr, nullptr, SingleMemberClassArrTwomethodAnnotations$$},
		{"SingleMemberClassArrTwoParam", "(I)V", nullptr, $PUBLIC, $virtualMethod(UnitTest, SingleMemberClassArrTwoParam, void, int32_t), nullptr, nullptr, nullptr, nullptr, SingleMemberClassArrTwoParammethodParamAnnotations$$},
		{"SingleMemberClassOvrdDef", "()V", nullptr, $PUBLIC, $virtualMethod(UnitTest, SingleMemberClassOvrdDef, void), nullptr, nullptr, SingleMemberClassOvrdDefmethodAnnotations$$},
		{"SingleMemberClassOvrdDefParam", "(I)V", nullptr, $PUBLIC, $virtualMethod(UnitTest, SingleMemberClassOvrdDefParam, void, int32_t), nullptr, nullptr, nullptr, nullptr, SingleMemberClassOvrdDefParammethodParamAnnotations$$},
		{"SingleMemberClassParam", "(I)V", nullptr, $PUBLIC, $virtualMethod(UnitTest, SingleMemberClassParam, void, int32_t), nullptr, nullptr, nullptr, nullptr, SingleMemberClassParammethodParamAnnotations$$},
		{"SingleMemberDouble", "()V", nullptr, $PUBLIC, $virtualMethod(UnitTest, SingleMemberDouble, void), nullptr, nullptr, SingleMemberDoublemethodAnnotations$$},
		{"SingleMemberDoubleAcceptDef", "()V", nullptr, $PUBLIC, $virtualMethod(UnitTest, SingleMemberDoubleAcceptDef, void), nullptr, nullptr, SingleMemberDoubleAcceptDefmethodAnnotations$$},
		{"SingleMemberDoubleAcceptDefParam", "(I)V", nullptr, $PUBLIC, $virtualMethod(UnitTest, SingleMemberDoubleAcceptDefParam, void, int32_t), nullptr, nullptr, nullptr, nullptr, SingleMemberDoubleAcceptDefParammethodParamAnnotations$$},
		{"SingleMemberDoubleArrAcceptDef", "()V", nullptr, $PUBLIC, $virtualMethod(UnitTest, SingleMemberDoubleArrAcceptDef, void), nullptr, nullptr, SingleMemberDoubleArrAcceptDefmethodAnnotations$$},
		{"SingleMemberDoubleArrAcceptDefParam", "(I)V", nullptr, $PUBLIC, $virtualMethod(UnitTest, SingleMemberDoubleArrAcceptDefParam, void, int32_t), nullptr, nullptr, nullptr, nullptr, SingleMemberDoubleArrAcceptDefParammethodParamAnnotations$$},
		{"SingleMemberDoubleArrEmpty", "()V", nullptr, $PUBLIC, $virtualMethod(UnitTest, SingleMemberDoubleArrEmpty, void), nullptr, nullptr, SingleMemberDoubleArrEmptymethodAnnotations$$},
		{"SingleMemberDoubleArrEmptyParam", "(I)V", nullptr, $PUBLIC, $virtualMethod(UnitTest, SingleMemberDoubleArrEmptyParam, void, int32_t), nullptr, nullptr, nullptr, nullptr, SingleMemberDoubleArrEmptyParammethodParamAnnotations$$},
		{"SingleMemberDoubleArrOne", "()V", nullptr, $PUBLIC, $virtualMethod(UnitTest, SingleMemberDoubleArrOne, void), nullptr, nullptr, SingleMemberDoubleArrOnemethodAnnotations$$},
		{"SingleMemberDoubleArrOneParam", "(I)V", nullptr, $PUBLIC, $virtualMethod(UnitTest, SingleMemberDoubleArrOneParam, void, int32_t), nullptr, nullptr, nullptr, nullptr, SingleMemberDoubleArrOneParammethodParamAnnotations$$},
		{"SingleMemberDoubleArrOvrdDef", "()V", nullptr, $PUBLIC, $virtualMethod(UnitTest, SingleMemberDoubleArrOvrdDef, void), nullptr, nullptr, SingleMemberDoubleArrOvrdDefmethodAnnotations$$},
		{"SingleMemberDoubleArrOvrdDefParam", "(I)V", nullptr, $PUBLIC, $virtualMethod(UnitTest, SingleMemberDoubleArrOvrdDefParam, void, int32_t), nullptr, nullptr, nullptr, nullptr, SingleMemberDoubleArrOvrdDefParammethodParamAnnotations$$},
		{"SingleMemberDoubleArrTwo", "()V", nullptr, $PUBLIC, $virtualMethod(UnitTest, SingleMemberDoubleArrTwo, void), nullptr, nullptr, SingleMemberDoubleArrTwomethodAnnotations$$},
		{"SingleMemberDoubleArrTwoParam", "(I)V", nullptr, $PUBLIC, $virtualMethod(UnitTest, SingleMemberDoubleArrTwoParam, void, int32_t), nullptr, nullptr, nullptr, nullptr, SingleMemberDoubleArrTwoParammethodParamAnnotations$$},
		{"SingleMemberDoubleOvrdDef", "()V", nullptr, $PUBLIC, $virtualMethod(UnitTest, SingleMemberDoubleOvrdDef, void), nullptr, nullptr, SingleMemberDoubleOvrdDefmethodAnnotations$$},
		{"SingleMemberDoubleOvrdDefParam", "(I)V", nullptr, $PUBLIC, $virtualMethod(UnitTest, SingleMemberDoubleOvrdDefParam, void, int32_t), nullptr, nullptr, nullptr, nullptr, SingleMemberDoubleOvrdDefParammethodParamAnnotations$$},
		{"SingleMemberDoubleParam", "(I)V", nullptr, $PUBLIC, $virtualMethod(UnitTest, SingleMemberDoubleParam, void, int32_t), nullptr, nullptr, nullptr, nullptr, SingleMemberDoubleParammethodParamAnnotations$$},
		{"SingleMemberEnum", "()V", nullptr, $PUBLIC, $virtualMethod(UnitTest, SingleMemberEnum, void), nullptr, nullptr, SingleMemberEnummethodAnnotations$$},
		{"SingleMemberEnumAcceptDef", "()V", nullptr, $PUBLIC, $virtualMethod(UnitTest, SingleMemberEnumAcceptDef, void), nullptr, nullptr, SingleMemberEnumAcceptDefmethodAnnotations$$},
		{"SingleMemberEnumAcceptDefParam", "(I)V", nullptr, $PUBLIC, $virtualMethod(UnitTest, SingleMemberEnumAcceptDefParam, void, int32_t), nullptr, nullptr, nullptr, nullptr, SingleMemberEnumAcceptDefParammethodParamAnnotations$$},
		{"SingleMemberEnumArrAcceptDef", "()V", nullptr, $PUBLIC, $virtualMethod(UnitTest, SingleMemberEnumArrAcceptDef, void), nullptr, nullptr, SingleMemberEnumArrAcceptDefmethodAnnotations$$},
		{"SingleMemberEnumArrAcceptDefParam", "(I)V", nullptr, $PUBLIC, $virtualMethod(UnitTest, SingleMemberEnumArrAcceptDefParam, void, int32_t), nullptr, nullptr, nullptr, nullptr, SingleMemberEnumArrAcceptDefParammethodParamAnnotations$$},
		{"SingleMemberEnumArrEmpty", "()V", nullptr, $PUBLIC, $virtualMethod(UnitTest, SingleMemberEnumArrEmpty, void), nullptr, nullptr, SingleMemberEnumArrEmptymethodAnnotations$$},
		{"SingleMemberEnumArrEmptyParam", "(I)V", nullptr, $PUBLIC, $virtualMethod(UnitTest, SingleMemberEnumArrEmptyParam, void, int32_t), nullptr, nullptr, nullptr, nullptr, SingleMemberEnumArrEmptyParammethodParamAnnotations$$},
		{"SingleMemberEnumArrOne", "()V", nullptr, $PUBLIC, $virtualMethod(UnitTest, SingleMemberEnumArrOne, void), nullptr, nullptr, SingleMemberEnumArrOnemethodAnnotations$$},
		{"SingleMemberEnumArrOneParam", "(I)V", nullptr, $PUBLIC, $virtualMethod(UnitTest, SingleMemberEnumArrOneParam, void, int32_t), nullptr, nullptr, nullptr, nullptr, SingleMemberEnumArrOneParammethodParamAnnotations$$},
		{"SingleMemberEnumArrOvrdDef", "()V", nullptr, $PUBLIC, $virtualMethod(UnitTest, SingleMemberEnumArrOvrdDef, void), nullptr, nullptr, SingleMemberEnumArrOvrdDefmethodAnnotations$$},
		{"SingleMemberEnumArrOvrdDefParam", "(I)V", nullptr, $PUBLIC, $virtualMethod(UnitTest, SingleMemberEnumArrOvrdDefParam, void, int32_t), nullptr, nullptr, nullptr, nullptr, SingleMemberEnumArrOvrdDefParammethodParamAnnotations$$},
		{"SingleMemberEnumArrTwo", "()V", nullptr, $PUBLIC, $virtualMethod(UnitTest, SingleMemberEnumArrTwo, void), nullptr, nullptr, SingleMemberEnumArrTwomethodAnnotations$$},
		{"SingleMemberEnumArrTwoParam", "(I)V", nullptr, $PUBLIC, $virtualMethod(UnitTest, SingleMemberEnumArrTwoParam, void, int32_t), nullptr, nullptr, nullptr, nullptr, SingleMemberEnumArrTwoParammethodParamAnnotations$$},
		{"SingleMemberEnumOvrdDef", "()V", nullptr, $PUBLIC, $virtualMethod(UnitTest, SingleMemberEnumOvrdDef, void), nullptr, nullptr, SingleMemberEnumOvrdDefmethodAnnotations$$},
		{"SingleMemberEnumOvrdDefParam", "(I)V", nullptr, $PUBLIC, $virtualMethod(UnitTest, SingleMemberEnumOvrdDefParam, void, int32_t), nullptr, nullptr, nullptr, nullptr, SingleMemberEnumOvrdDefParammethodParamAnnotations$$},
		{"SingleMemberEnumParam", "(I)V", nullptr, $PUBLIC, $virtualMethod(UnitTest, SingleMemberEnumParam, void, int32_t), nullptr, nullptr, nullptr, nullptr, SingleMemberEnumParammethodParamAnnotations$$},
		{"SingleMemberFloat", "()V", nullptr, $PUBLIC, $virtualMethod(UnitTest, SingleMemberFloat, void), nullptr, nullptr, SingleMemberFloatmethodAnnotations$$},
		{"SingleMemberFloatAcceptDef", "()V", nullptr, $PUBLIC, $virtualMethod(UnitTest, SingleMemberFloatAcceptDef, void), nullptr, nullptr, SingleMemberFloatAcceptDefmethodAnnotations$$},
		{"SingleMemberFloatAcceptDefParam", "(I)V", nullptr, $PUBLIC, $virtualMethod(UnitTest, SingleMemberFloatAcceptDefParam, void, int32_t), nullptr, nullptr, nullptr, nullptr, SingleMemberFloatAcceptDefParammethodParamAnnotations$$},
		{"SingleMemberFloatArrAcceptDef", "()V", nullptr, $PUBLIC, $virtualMethod(UnitTest, SingleMemberFloatArrAcceptDef, void), nullptr, nullptr, SingleMemberFloatArrAcceptDefmethodAnnotations$$},
		{"SingleMemberFloatArrAcceptDefParam", "(I)V", nullptr, $PUBLIC, $virtualMethod(UnitTest, SingleMemberFloatArrAcceptDefParam, void, int32_t), nullptr, nullptr, nullptr, nullptr, SingleMemberFloatArrAcceptDefParammethodParamAnnotations$$},
		{"SingleMemberFloatArrEmpty", "()V", nullptr, $PUBLIC, $virtualMethod(UnitTest, SingleMemberFloatArrEmpty, void), nullptr, nullptr, SingleMemberFloatArrEmptymethodAnnotations$$},
		{"SingleMemberFloatArrEmptyParam", "(I)V", nullptr, $PUBLIC, $virtualMethod(UnitTest, SingleMemberFloatArrEmptyParam, void, int32_t), nullptr, nullptr, nullptr, nullptr, SingleMemberFloatArrEmptyParammethodParamAnnotations$$},
		{"SingleMemberFloatArrOne", "()V", nullptr, $PUBLIC, $virtualMethod(UnitTest, SingleMemberFloatArrOne, void), nullptr, nullptr, SingleMemberFloatArrOnemethodAnnotations$$},
		{"SingleMemberFloatArrOneParam", "(I)V", nullptr, $PUBLIC, $virtualMethod(UnitTest, SingleMemberFloatArrOneParam, void, int32_t), nullptr, nullptr, nullptr, nullptr, SingleMemberFloatArrOneParammethodParamAnnotations$$},
		{"SingleMemberFloatArrOvrdDef", "()V", nullptr, $PUBLIC, $virtualMethod(UnitTest, SingleMemberFloatArrOvrdDef, void), nullptr, nullptr, SingleMemberFloatArrOvrdDefmethodAnnotations$$},
		{"SingleMemberFloatArrOvrdDefParam", "(I)V", nullptr, $PUBLIC, $virtualMethod(UnitTest, SingleMemberFloatArrOvrdDefParam, void, int32_t), nullptr, nullptr, nullptr, nullptr, SingleMemberFloatArrOvrdDefParammethodParamAnnotations$$},
		{"SingleMemberFloatArrTwo", "()V", nullptr, $PUBLIC, $virtualMethod(UnitTest, SingleMemberFloatArrTwo, void), nullptr, nullptr, SingleMemberFloatArrTwomethodAnnotations$$},
		{"SingleMemberFloatArrTwoParam", "(I)V", nullptr, $PUBLIC, $virtualMethod(UnitTest, SingleMemberFloatArrTwoParam, void, int32_t), nullptr, nullptr, nullptr, nullptr, SingleMemberFloatArrTwoParammethodParamAnnotations$$},
		{"SingleMemberFloatOvrdDef", "()V", nullptr, $PUBLIC, $virtualMethod(UnitTest, SingleMemberFloatOvrdDef, void), nullptr, nullptr, SingleMemberFloatOvrdDefmethodAnnotations$$},
		{"SingleMemberFloatOvrdDefParam", "(I)V", nullptr, $PUBLIC, $virtualMethod(UnitTest, SingleMemberFloatOvrdDefParam, void, int32_t), nullptr, nullptr, nullptr, nullptr, SingleMemberFloatOvrdDefParammethodParamAnnotations$$},
		{"SingleMemberFloatParam", "(I)V", nullptr, $PUBLIC, $virtualMethod(UnitTest, SingleMemberFloatParam, void, int32_t), nullptr, nullptr, nullptr, nullptr, SingleMemberFloatParammethodParamAnnotations$$},
		{"SingleMemberInt", "()V", nullptr, $PUBLIC, $virtualMethod(UnitTest, SingleMemberInt, void), nullptr, nullptr, SingleMemberIntmethodAnnotations$$},
		{"SingleMemberIntAcceptDef", "()V", nullptr, $PUBLIC, $virtualMethod(UnitTest, SingleMemberIntAcceptDef, void), nullptr, nullptr, SingleMemberIntAcceptDefmethodAnnotations$$},
		{"SingleMemberIntAcceptDefParam", "(I)V", nullptr, $PUBLIC, $virtualMethod(UnitTest, SingleMemberIntAcceptDefParam, void, int32_t), nullptr, nullptr, nullptr, nullptr, SingleMemberIntAcceptDefParammethodParamAnnotations$$},
		{"SingleMemberIntArrAcceptDef", "()V", nullptr, $PUBLIC, $virtualMethod(UnitTest, SingleMemberIntArrAcceptDef, void), nullptr, nullptr, SingleMemberIntArrAcceptDefmethodAnnotations$$},
		{"SingleMemberIntArrAcceptDefParam", "(I)V", nullptr, $PUBLIC, $virtualMethod(UnitTest, SingleMemberIntArrAcceptDefParam, void, int32_t), nullptr, nullptr, nullptr, nullptr, SingleMemberIntArrAcceptDefParammethodParamAnnotations$$},
		{"SingleMemberIntArrEmpty", "()V", nullptr, $PUBLIC, $virtualMethod(UnitTest, SingleMemberIntArrEmpty, void), nullptr, nullptr, SingleMemberIntArrEmptymethodAnnotations$$},
		{"SingleMemberIntArrEmptyParam", "(I)V", nullptr, $PUBLIC, $virtualMethod(UnitTest, SingleMemberIntArrEmptyParam, void, int32_t), nullptr, nullptr, nullptr, nullptr, SingleMemberIntArrEmptyParammethodParamAnnotations$$},
		{"SingleMemberIntArrOne", "()V", nullptr, $PUBLIC, $virtualMethod(UnitTest, SingleMemberIntArrOne, void), nullptr, nullptr, SingleMemberIntArrOnemethodAnnotations$$},
		{"SingleMemberIntArrOneParam", "(I)V", nullptr, $PUBLIC, $virtualMethod(UnitTest, SingleMemberIntArrOneParam, void, int32_t), nullptr, nullptr, nullptr, nullptr, SingleMemberIntArrOneParammethodParamAnnotations$$},
		{"SingleMemberIntArrOvrdDef", "()V", nullptr, $PUBLIC, $virtualMethod(UnitTest, SingleMemberIntArrOvrdDef, void), nullptr, nullptr, SingleMemberIntArrOvrdDefmethodAnnotations$$},
		{"SingleMemberIntArrOvrdDefParam", "(I)V", nullptr, $PUBLIC, $virtualMethod(UnitTest, SingleMemberIntArrOvrdDefParam, void, int32_t), nullptr, nullptr, nullptr, nullptr, SingleMemberIntArrOvrdDefParammethodParamAnnotations$$},
		{"SingleMemberIntArrTwo", "()V", nullptr, $PUBLIC, $virtualMethod(UnitTest, SingleMemberIntArrTwo, void), nullptr, nullptr, SingleMemberIntArrTwomethodAnnotations$$},
		{"SingleMemberIntArrTwoParam", "(I)V", nullptr, $PUBLIC, $virtualMethod(UnitTest, SingleMemberIntArrTwoParam, void, int32_t), nullptr, nullptr, nullptr, nullptr, SingleMemberIntArrTwoParammethodParamAnnotations$$},
		{"SingleMemberIntOvrdDef", "()V", nullptr, $PUBLIC, $virtualMethod(UnitTest, SingleMemberIntOvrdDef, void), nullptr, nullptr, SingleMemberIntOvrdDefmethodAnnotations$$},
		{"SingleMemberIntOvrdDefParam", "(I)V", nullptr, $PUBLIC, $virtualMethod(UnitTest, SingleMemberIntOvrdDefParam, void, int32_t), nullptr, nullptr, nullptr, nullptr, SingleMemberIntOvrdDefParammethodParamAnnotations$$},
		{"SingleMemberIntParam", "(I)V", nullptr, $PUBLIC, $virtualMethod(UnitTest, SingleMemberIntParam, void, int32_t), nullptr, nullptr, nullptr, nullptr, SingleMemberIntParammethodParamAnnotations$$},
		{"SingleMemberLong", "()V", nullptr, $PUBLIC, $virtualMethod(UnitTest, SingleMemberLong, void), nullptr, nullptr, SingleMemberLongmethodAnnotations$$},
		{"SingleMemberLongAcceptDef", "()V", nullptr, $PUBLIC, $virtualMethod(UnitTest, SingleMemberLongAcceptDef, void), nullptr, nullptr, SingleMemberLongAcceptDefmethodAnnotations$$},
		{"SingleMemberLongAcceptDefParam", "(I)V", nullptr, $PUBLIC, $virtualMethod(UnitTest, SingleMemberLongAcceptDefParam, void, int32_t), nullptr, nullptr, nullptr, nullptr, SingleMemberLongAcceptDefParammethodParamAnnotations$$},
		{"SingleMemberLongArrAcceptDef", "()V", nullptr, $PUBLIC, $virtualMethod(UnitTest, SingleMemberLongArrAcceptDef, void), nullptr, nullptr, SingleMemberLongArrAcceptDefmethodAnnotations$$},
		{"SingleMemberLongArrAcceptDefParam", "(I)V", nullptr, $PUBLIC, $virtualMethod(UnitTest, SingleMemberLongArrAcceptDefParam, void, int32_t), nullptr, nullptr, nullptr, nullptr, SingleMemberLongArrAcceptDefParammethodParamAnnotations$$},
		{"SingleMemberLongArrEmpty", "()V", nullptr, $PUBLIC, $virtualMethod(UnitTest, SingleMemberLongArrEmpty, void), nullptr, nullptr, SingleMemberLongArrEmptymethodAnnotations$$},
		{"SingleMemberLongArrEmptyParam", "(I)V", nullptr, $PUBLIC, $virtualMethod(UnitTest, SingleMemberLongArrEmptyParam, void, int32_t), nullptr, nullptr, nullptr, nullptr, SingleMemberLongArrEmptyParammethodParamAnnotations$$},
		{"SingleMemberLongArrOne", "()V", nullptr, $PUBLIC, $virtualMethod(UnitTest, SingleMemberLongArrOne, void), nullptr, nullptr, SingleMemberLongArrOnemethodAnnotations$$},
		{"SingleMemberLongArrOneParam", "(I)V", nullptr, $PUBLIC, $virtualMethod(UnitTest, SingleMemberLongArrOneParam, void, int32_t), nullptr, nullptr, nullptr, nullptr, SingleMemberLongArrOneParammethodParamAnnotations$$},
		{"SingleMemberLongArrOvrdDef", "()V", nullptr, $PUBLIC, $virtualMethod(UnitTest, SingleMemberLongArrOvrdDef, void), nullptr, nullptr, SingleMemberLongArrOvrdDefmethodAnnotations$$},
		{"SingleMemberLongArrOvrdDefParam", "(I)V", nullptr, $PUBLIC, $virtualMethod(UnitTest, SingleMemberLongArrOvrdDefParam, void, int32_t), nullptr, nullptr, nullptr, nullptr, SingleMemberLongArrOvrdDefParammethodParamAnnotations$$},
		{"SingleMemberLongArrTwo", "()V", nullptr, $PUBLIC, $virtualMethod(UnitTest, SingleMemberLongArrTwo, void), nullptr, nullptr, SingleMemberLongArrTwomethodAnnotations$$},
		{"SingleMemberLongArrTwoParam", "(I)V", nullptr, $PUBLIC, $virtualMethod(UnitTest, SingleMemberLongArrTwoParam, void, int32_t), nullptr, nullptr, nullptr, nullptr, SingleMemberLongArrTwoParammethodParamAnnotations$$},
		{"SingleMemberLongOvrdDef", "()V", nullptr, $PUBLIC, $virtualMethod(UnitTest, SingleMemberLongOvrdDef, void), nullptr, nullptr, SingleMemberLongOvrdDefmethodAnnotations$$},
		{"SingleMemberLongOvrdDefParam", "(I)V", nullptr, $PUBLIC, $virtualMethod(UnitTest, SingleMemberLongOvrdDefParam, void, int32_t), nullptr, nullptr, nullptr, nullptr, SingleMemberLongOvrdDefParammethodParamAnnotations$$},
		{"SingleMemberLongParam", "(I)V", nullptr, $PUBLIC, $virtualMethod(UnitTest, SingleMemberLongParam, void, int32_t), nullptr, nullptr, nullptr, nullptr, SingleMemberLongParammethodParamAnnotations$$},
		{"SingleMemberShort", "()V", nullptr, $PUBLIC, $virtualMethod(UnitTest, SingleMemberShort, void), nullptr, nullptr, SingleMemberShortmethodAnnotations$$},
		{"SingleMemberShortAcceptDef", "()V", nullptr, $PUBLIC, $virtualMethod(UnitTest, SingleMemberShortAcceptDef, void), nullptr, nullptr, SingleMemberShortAcceptDefmethodAnnotations$$},
		{"SingleMemberShortAcceptDefParam", "(I)V", nullptr, $PUBLIC, $virtualMethod(UnitTest, SingleMemberShortAcceptDefParam, void, int32_t), nullptr, nullptr, nullptr, nullptr, SingleMemberShortAcceptDefParammethodParamAnnotations$$},
		{"SingleMemberShortArrAcceptDef", "()V", nullptr, $PUBLIC, $virtualMethod(UnitTest, SingleMemberShortArrAcceptDef, void), nullptr, nullptr, SingleMemberShortArrAcceptDefmethodAnnotations$$},
		{"SingleMemberShortArrAcceptDefParam", "(I)V", nullptr, $PUBLIC, $virtualMethod(UnitTest, SingleMemberShortArrAcceptDefParam, void, int32_t), nullptr, nullptr, nullptr, nullptr, SingleMemberShortArrAcceptDefParammethodParamAnnotations$$},
		{"SingleMemberShortArrEmpty", "()V", nullptr, $PUBLIC, $virtualMethod(UnitTest, SingleMemberShortArrEmpty, void), nullptr, nullptr, SingleMemberShortArrEmptymethodAnnotations$$},
		{"SingleMemberShortArrEmptyParam", "(I)V", nullptr, $PUBLIC, $virtualMethod(UnitTest, SingleMemberShortArrEmptyParam, void, int32_t), nullptr, nullptr, nullptr, nullptr, SingleMemberShortArrEmptyParammethodParamAnnotations$$},
		{"SingleMemberShortArrOne", "()V", nullptr, $PUBLIC, $virtualMethod(UnitTest, SingleMemberShortArrOne, void), nullptr, nullptr, SingleMemberShortArrOnemethodAnnotations$$},
		{"SingleMemberShortArrOneParam", "(I)V", nullptr, $PUBLIC, $virtualMethod(UnitTest, SingleMemberShortArrOneParam, void, int32_t), nullptr, nullptr, nullptr, nullptr, SingleMemberShortArrOneParammethodParamAnnotations$$},
		{"SingleMemberShortArrOvrdDef", "()V", nullptr, $PUBLIC, $virtualMethod(UnitTest, SingleMemberShortArrOvrdDef, void), nullptr, nullptr, SingleMemberShortArrOvrdDefmethodAnnotations$$},
		{"SingleMemberShortArrOvrdDefParam", "(I)V", nullptr, $PUBLIC, $virtualMethod(UnitTest, SingleMemberShortArrOvrdDefParam, void, int32_t), nullptr, nullptr, nullptr, nullptr, SingleMemberShortArrOvrdDefParammethodParamAnnotations$$},
		{"SingleMemberShortArrTwo", "()V", nullptr, $PUBLIC, $virtualMethod(UnitTest, SingleMemberShortArrTwo, void), nullptr, nullptr, SingleMemberShortArrTwomethodAnnotations$$},
		{"SingleMemberShortArrTwoParam", "(I)V", nullptr, $PUBLIC, $virtualMethod(UnitTest, SingleMemberShortArrTwoParam, void, int32_t), nullptr, nullptr, nullptr, nullptr, SingleMemberShortArrTwoParammethodParamAnnotations$$},
		{"SingleMemberShortOvrdDef", "()V", nullptr, $PUBLIC, $virtualMethod(UnitTest, SingleMemberShortOvrdDef, void), nullptr, nullptr, SingleMemberShortOvrdDefmethodAnnotations$$},
		{"SingleMemberShortOvrdDefParam", "(I)V", nullptr, $PUBLIC, $virtualMethod(UnitTest, SingleMemberShortOvrdDefParam, void, int32_t), nullptr, nullptr, nullptr, nullptr, SingleMemberShortOvrdDefParammethodParamAnnotations$$},
		{"SingleMemberShortParam", "(I)V", nullptr, $PUBLIC, $virtualMethod(UnitTest, SingleMemberShortParam, void, int32_t), nullptr, nullptr, nullptr, nullptr, SingleMemberShortParammethodParamAnnotations$$},
		{"SingleMemberString", "()V", nullptr, $PUBLIC, $virtualMethod(UnitTest, SingleMemberString, void), nullptr, nullptr, SingleMemberStringmethodAnnotations$$},
		{"SingleMemberStringAcceptDef", "()V", nullptr, $PUBLIC, $virtualMethod(UnitTest, SingleMemberStringAcceptDef, void), nullptr, nullptr, SingleMemberStringAcceptDefmethodAnnotations$$},
		{"SingleMemberStringAcceptDefParam", "(I)V", nullptr, $PUBLIC, $virtualMethod(UnitTest, SingleMemberStringAcceptDefParam, void, int32_t), nullptr, nullptr, nullptr, nullptr, SingleMemberStringAcceptDefParammethodParamAnnotations$$},
		{"SingleMemberStringArrAcceptDef", "()V", nullptr, $PUBLIC, $virtualMethod(UnitTest, SingleMemberStringArrAcceptDef, void), nullptr, nullptr, SingleMemberStringArrAcceptDefmethodAnnotations$$},
		{"SingleMemberStringArrAcceptDefParam", "(I)V", nullptr, $PUBLIC, $virtualMethod(UnitTest, SingleMemberStringArrAcceptDefParam, void, int32_t), nullptr, nullptr, nullptr, nullptr, SingleMemberStringArrAcceptDefParammethodParamAnnotations$$},
		{"SingleMemberStringArrEmpty", "()V", nullptr, $PUBLIC, $virtualMethod(UnitTest, SingleMemberStringArrEmpty, void), nullptr, nullptr, SingleMemberStringArrEmptymethodAnnotations$$},
		{"SingleMemberStringArrEmptyParam", "(I)V", nullptr, $PUBLIC, $virtualMethod(UnitTest, SingleMemberStringArrEmptyParam, void, int32_t), nullptr, nullptr, nullptr, nullptr, SingleMemberStringArrEmptyParammethodParamAnnotations$$},
		{"SingleMemberStringArrOne", "()V", nullptr, $PUBLIC, $virtualMethod(UnitTest, SingleMemberStringArrOne, void), nullptr, nullptr, SingleMemberStringArrOnemethodAnnotations$$},
		{"SingleMemberStringArrOneParam", "(I)V", nullptr, $PUBLIC, $virtualMethod(UnitTest, SingleMemberStringArrOneParam, void, int32_t), nullptr, nullptr, nullptr, nullptr, SingleMemberStringArrOneParammethodParamAnnotations$$},
		{"SingleMemberStringArrOvrdDef", "()V", nullptr, $PUBLIC, $virtualMethod(UnitTest, SingleMemberStringArrOvrdDef, void), nullptr, nullptr, SingleMemberStringArrOvrdDefmethodAnnotations$$},
		{"SingleMemberStringArrOvrdDefParam", "(I)V", nullptr, $PUBLIC, $virtualMethod(UnitTest, SingleMemberStringArrOvrdDefParam, void, int32_t), nullptr, nullptr, nullptr, nullptr, SingleMemberStringArrOvrdDefParammethodParamAnnotations$$},
		{"SingleMemberStringArrTwo", "()V", nullptr, $PUBLIC, $virtualMethod(UnitTest, SingleMemberStringArrTwo, void), nullptr, nullptr, SingleMemberStringArrTwomethodAnnotations$$},
		{"SingleMemberStringArrTwoParam", "(I)V", nullptr, $PUBLIC, $virtualMethod(UnitTest, SingleMemberStringArrTwoParam, void, int32_t), nullptr, nullptr, nullptr, nullptr, SingleMemberStringArrTwoParammethodParamAnnotations$$},
		{"SingleMemberStringOvrdDef", "()V", nullptr, $PUBLIC, $virtualMethod(UnitTest, SingleMemberStringOvrdDef, void), nullptr, nullptr, SingleMemberStringOvrdDefmethodAnnotations$$},
		{"SingleMemberStringOvrdDefParam", "(I)V", nullptr, $PUBLIC, $virtualMethod(UnitTest, SingleMemberStringOvrdDefParam, void, int32_t), nullptr, nullptr, nullptr, nullptr, SingleMemberStringOvrdDefParammethodParamAnnotations$$},
		{"SingleMemberStringParam", "(I)V", nullptr, $PUBLIC, $virtualMethod(UnitTest, SingleMemberStringParam, void, int32_t), nullptr, nullptr, nullptr, nullptr, SingleMemberStringParammethodParamAnnotations$$},
		{"arrayTypesAcceptDefaultMethod", "()V", nullptr, $PUBLIC, $virtualMethod(UnitTest, arrayTypesAcceptDefaultMethod, void), nullptr, nullptr, arrayTypesAcceptDefaultMethodmethodAnnotations$$},
		{"arrayTypesAcceptDefaultParam", "(I)V", nullptr, $PUBLIC, $virtualMethod(UnitTest, arrayTypesAcceptDefaultParam, void, int32_t), nullptr, nullptr, nullptr, nullptr, arrayTypesAcceptDefaultParammethodParamAnnotations$$},
		{"arrayTypesOverrideDefaultMethod", "()V", nullptr, $PUBLIC, $virtualMethod(UnitTest, arrayTypesOverrideDefaultMethod, void), nullptr, nullptr, arrayTypesOverrideDefaultMethodmethodAnnotations$$},
		{"arrayTypesOverrideDefaultParam", "(I)V", nullptr, $PUBLIC, $virtualMethod(UnitTest, arrayTypesOverrideDefaultParam, void, int32_t), nullptr, nullptr, nullptr, nullptr, arrayTypesOverrideDefaultParammethodParamAnnotations$$},
		{"checkArrayTypes0", "(Ljava/lang/reflect/AnnotatedElement;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkArrayTypes0, void, $AnnotatedElement*)},
		{"checkArrayTypes0", "(LUniTest/ArrayTypes;Ljava/lang/reflect/AnnotatedElement;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkArrayTypes0, void, $ArrayTypes*, $AnnotatedElement*)},
		{"checkArrayTypes0Param", "(Ljava/lang/reflect/Method;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkArrayTypes0Param, void, $Method*)},
		{"checkArrayTypes1", "(Ljava/lang/reflect/AnnotatedElement;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkArrayTypes1, void, $AnnotatedElement*)},
		{"checkArrayTypes1", "(LUniTest/ArrayTypes;Ljava/lang/reflect/AnnotatedElement;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkArrayTypes1, void, $ArrayTypes*, $AnnotatedElement*)},
		{"checkArrayTypes1Param", "(Ljava/lang/reflect/Method;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkArrayTypes1Param, void, $Method*)},
		{"checkArrayTypes2", "(Ljava/lang/reflect/AnnotatedElement;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkArrayTypes2, void, $AnnotatedElement*)},
		{"checkArrayTypes2", "(LUniTest/ArrayTypes;Ljava/lang/reflect/AnnotatedElement;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkArrayTypes2, void, $ArrayTypes*, $AnnotatedElement*)},
		{"checkArrayTypes2Param", "(Ljava/lang/reflect/Method;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkArrayTypes2Param, void, $Method*)},
		{"checkArrayTypesAcceptDefault", "(Ljava/lang/reflect/AnnotatedElement;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkArrayTypesAcceptDefault, void, $AnnotatedElement*)},
		{"checkArrayTypesAcceptDefault", "(LUniTest/ArrayTypesWithDefault;Ljava/lang/reflect/AnnotatedElement;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkArrayTypesAcceptDefault, void, $ArrayTypesWithDefault*, $AnnotatedElement*)},
		{"checkArrayTypesAcceptDefaultParam", "(Ljava/lang/reflect/Method;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkArrayTypesAcceptDefaultParam, void, $Method*)},
		{"checkArrayTypesOverrideDefault", "(Ljava/lang/reflect/AnnotatedElement;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkArrayTypesOverrideDefault, void, $AnnotatedElement*)},
		{"checkArrayTypesOverrideDefault", "(LUniTest/ArrayTypesWithDefault;Ljava/lang/reflect/AnnotatedElement;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkArrayTypesOverrideDefault, void, $ArrayTypesWithDefault*, $AnnotatedElement*)},
		{"checkArrayTypesOverrideDefaultParam", "(Ljava/lang/reflect/Method;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkArrayTypesOverrideDefaultParam, void, $Method*)},
		{"checkDeclaredAnnotations", "(Ljava/lang/reflect/AnnotatedElement;ZZ)V", nullptr, $STATIC, $staticMethod(UnitTest, checkDeclaredAnnotations, void, $AnnotatedElement*, bool, bool)},
		{"checkEquals", "(Ljava/lang/reflect/AnnotatedElement;Ljava/lang/reflect/AnnotatedElement;Ljava/lang/Class;)V", "<T::Ljava/lang/annotation/Annotation;>(Ljava/lang/reflect/AnnotatedElement;Ljava/lang/reflect/AnnotatedElement;Ljava/lang/Class<TT;>;)V", $STATIC, $staticMethod(UnitTest, checkEquals, void, $AnnotatedElement*, $AnnotatedElement*, $Class*)},
		{"checkInheritence", "(Ljava/lang/reflect/AnnotatedElement;ZZ)V", nullptr, $STATIC, $staticMethod(UnitTest, checkInheritence, void, $AnnotatedElement*, bool, bool)},
		{"checkMarker", "(Ljava/lang/reflect/AnnotatedElement;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkMarker, void, $AnnotatedElement*)},
		{"checkMarker", "(LUniTest/Marker;Ljava/lang/reflect/AnnotatedElement;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkMarker, void, $Marker*, $AnnotatedElement*)},
		{"checkMarkerParam", "(Ljava/lang/reflect/Method;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkMarkerParam, void, $Method*)},
		{"checkScalarTypes", "(Ljava/lang/reflect/AnnotatedElement;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkScalarTypes, void, $AnnotatedElement*)},
		{"checkScalarTypes", "(LUniTest/ScalarTypes;Ljava/lang/reflect/AnnotatedElement;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkScalarTypes, void, $ScalarTypes*, $AnnotatedElement*), "java.lang.Exception"},
		{"checkScalarTypesAcceptDefault", "(Ljava/lang/reflect/AnnotatedElement;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkScalarTypesAcceptDefault, void, $AnnotatedElement*)},
		{"checkScalarTypesAcceptDefault", "(LUniTest/ScalarTypesWithDefault;Ljava/lang/reflect/AnnotatedElement;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkScalarTypesAcceptDefault, void, $ScalarTypesWithDefault*, $AnnotatedElement*)},
		{"checkScalarTypesAcceptDefaultParam", "(Ljava/lang/reflect/Method;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkScalarTypesAcceptDefaultParam, void, $Method*)},
		{"checkScalarTypesOverrideDefault", "(Ljava/lang/reflect/AnnotatedElement;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkScalarTypesOverrideDefault, void, $AnnotatedElement*)},
		{"checkScalarTypesOverrideDefault", "(LUniTest/ScalarTypesWithDefault;Ljava/lang/reflect/AnnotatedElement;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkScalarTypesOverrideDefault, void, $ScalarTypesWithDefault*, $AnnotatedElement*)},
		{"checkScalarTypesOverrideDefaultParam", "(Ljava/lang/reflect/Method;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkScalarTypesOverrideDefaultParam, void, $Method*)},
		{"checkScalarTypesParam", "(Ljava/lang/reflect/Method;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkScalarTypesParam, void, $Method*)},
		{"checkSerialization", "(Ljava/lang/reflect/AnnotatedElement;Ljava/lang/Class;)V", "<T::Ljava/lang/annotation/Annotation;>(Ljava/lang/reflect/AnnotatedElement;Ljava/lang/Class<TT;>;)V", $STATIC, $staticMethod(UnitTest, checkSerialization, void, $AnnotatedElement*, $Class*)},
		{"checkSingleMemberBoolean", "(Ljava/lang/reflect/AnnotatedElement;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberBoolean, void, $AnnotatedElement*)},
		{"checkSingleMemberBoolean", "(LUniTest/SingleMemberBoolean;Ljava/lang/reflect/AnnotatedElement;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberBoolean, void, $SingleMemberBoolean*, $AnnotatedElement*)},
		{"checkSingleMemberBooleanAcceptDef", "(Ljava/lang/reflect/AnnotatedElement;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberBooleanAcceptDef, void, $AnnotatedElement*)},
		{"checkSingleMemberBooleanAcceptDef", "(LUniTest/SingleMemberBooleanWithDef;Ljava/lang/reflect/AnnotatedElement;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberBooleanAcceptDef, void, $SingleMemberBooleanWithDef*, $AnnotatedElement*)},
		{"checkSingleMemberBooleanAcceptDefParam", "(Ljava/lang/reflect/Method;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberBooleanAcceptDefParam, void, $Method*)},
		{"checkSingleMemberBooleanArrAcceptDef", "(Ljava/lang/reflect/AnnotatedElement;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberBooleanArrAcceptDef, void, $AnnotatedElement*)},
		{"checkSingleMemberBooleanArrAcceptDef", "(LUniTest/SingleMemberBooleanArrayDef;Ljava/lang/reflect/AnnotatedElement;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberBooleanArrAcceptDef, void, $SingleMemberBooleanArrayDef*, $AnnotatedElement*)},
		{"checkSingleMemberBooleanArrAcceptDefParam", "(Ljava/lang/reflect/Method;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberBooleanArrAcceptDefParam, void, $Method*)},
		{"checkSingleMemberBooleanArrEmpty", "(Ljava/lang/reflect/AnnotatedElement;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberBooleanArrEmpty, void, $AnnotatedElement*)},
		{"checkSingleMemberBooleanArrEmpty", "(LUniTest/SingleMemberBooleanArray;Ljava/lang/reflect/AnnotatedElement;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberBooleanArrEmpty, void, $SingleMemberBooleanArray*, $AnnotatedElement*)},
		{"checkSingleMemberBooleanArrEmptyParam", "(Ljava/lang/reflect/Method;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberBooleanArrEmptyParam, void, $Method*)},
		{"checkSingleMemberBooleanArrOne", "(Ljava/lang/reflect/AnnotatedElement;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberBooleanArrOne, void, $AnnotatedElement*)},
		{"checkSingleMemberBooleanArrOne", "(LUniTest/SingleMemberBooleanArray;Ljava/lang/reflect/AnnotatedElement;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberBooleanArrOne, void, $SingleMemberBooleanArray*, $AnnotatedElement*)},
		{"checkSingleMemberBooleanArrOneParam", "(Ljava/lang/reflect/Method;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberBooleanArrOneParam, void, $Method*)},
		{"checkSingleMemberBooleanArrOvrdDef", "(Ljava/lang/reflect/AnnotatedElement;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberBooleanArrOvrdDef, void, $AnnotatedElement*)},
		{"checkSingleMemberBooleanArrOvrdDef", "(LUniTest/SingleMemberBooleanArrayDef;Ljava/lang/reflect/AnnotatedElement;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberBooleanArrOvrdDef, void, $SingleMemberBooleanArrayDef*, $AnnotatedElement*)},
		{"checkSingleMemberBooleanArrOvrdDefParam", "(Ljava/lang/reflect/Method;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberBooleanArrOvrdDefParam, void, $Method*)},
		{"checkSingleMemberBooleanArrTwo", "(Ljava/lang/reflect/AnnotatedElement;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberBooleanArrTwo, void, $AnnotatedElement*)},
		{"checkSingleMemberBooleanArrTwo", "(LUniTest/SingleMemberBooleanArray;Ljava/lang/reflect/AnnotatedElement;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberBooleanArrTwo, void, $SingleMemberBooleanArray*, $AnnotatedElement*)},
		{"checkSingleMemberBooleanArrTwoParam", "(Ljava/lang/reflect/Method;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberBooleanArrTwoParam, void, $Method*)},
		{"checkSingleMemberBooleanOvrdDef", "(Ljava/lang/reflect/AnnotatedElement;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberBooleanOvrdDef, void, $AnnotatedElement*)},
		{"checkSingleMemberBooleanOvrdDef", "(LUniTest/SingleMemberBooleanWithDef;Ljava/lang/reflect/AnnotatedElement;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberBooleanOvrdDef, void, $SingleMemberBooleanWithDef*, $AnnotatedElement*)},
		{"checkSingleMemberBooleanOvrdDefParam", "(Ljava/lang/reflect/Method;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberBooleanOvrdDefParam, void, $Method*)},
		{"checkSingleMemberBooleanParam", "(Ljava/lang/reflect/Method;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberBooleanParam, void, $Method*)},
		{"checkSingleMemberByte", "(Ljava/lang/reflect/AnnotatedElement;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberByte, void, $AnnotatedElement*)},
		{"checkSingleMemberByte", "(LUniTest/SingleMemberByte;Ljava/lang/reflect/AnnotatedElement;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberByte, void, $SingleMemberByte*, $AnnotatedElement*)},
		{"checkSingleMemberByteAcceptDef", "(Ljava/lang/reflect/AnnotatedElement;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberByteAcceptDef, void, $AnnotatedElement*)},
		{"checkSingleMemberByteAcceptDef", "(LUniTest/SingleMemberByteWithDef;Ljava/lang/reflect/AnnotatedElement;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberByteAcceptDef, void, $SingleMemberByteWithDef*, $AnnotatedElement*)},
		{"checkSingleMemberByteAcceptDefParam", "(Ljava/lang/reflect/Method;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberByteAcceptDefParam, void, $Method*)},
		{"checkSingleMemberByteArrAcceptDef", "(Ljava/lang/reflect/AnnotatedElement;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberByteArrAcceptDef, void, $AnnotatedElement*)},
		{"checkSingleMemberByteArrAcceptDef", "(LUniTest/SingleMemberByteArrayDef;Ljava/lang/reflect/AnnotatedElement;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberByteArrAcceptDef, void, $SingleMemberByteArrayDef*, $AnnotatedElement*)},
		{"checkSingleMemberByteArrAcceptDefParam", "(Ljava/lang/reflect/Method;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberByteArrAcceptDefParam, void, $Method*)},
		{"checkSingleMemberByteArrEmpty", "(Ljava/lang/reflect/AnnotatedElement;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberByteArrEmpty, void, $AnnotatedElement*)},
		{"checkSingleMemberByteArrEmpty", "(LUniTest/SingleMemberByteArray;Ljava/lang/reflect/AnnotatedElement;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberByteArrEmpty, void, $SingleMemberByteArray*, $AnnotatedElement*)},
		{"checkSingleMemberByteArrEmptyParam", "(Ljava/lang/reflect/Method;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberByteArrEmptyParam, void, $Method*)},
		{"checkSingleMemberByteArrOne", "(Ljava/lang/reflect/AnnotatedElement;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberByteArrOne, void, $AnnotatedElement*)},
		{"checkSingleMemberByteArrOne", "(LUniTest/SingleMemberByteArray;Ljava/lang/reflect/AnnotatedElement;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberByteArrOne, void, $SingleMemberByteArray*, $AnnotatedElement*)},
		{"checkSingleMemberByteArrOneParam", "(Ljava/lang/reflect/Method;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberByteArrOneParam, void, $Method*)},
		{"checkSingleMemberByteArrOvrdDef", "(Ljava/lang/reflect/AnnotatedElement;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberByteArrOvrdDef, void, $AnnotatedElement*)},
		{"checkSingleMemberByteArrOvrdDef", "(LUniTest/SingleMemberByteArrayDef;Ljava/lang/reflect/AnnotatedElement;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberByteArrOvrdDef, void, $SingleMemberByteArrayDef*, $AnnotatedElement*)},
		{"checkSingleMemberByteArrOvrdDefParam", "(Ljava/lang/reflect/Method;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberByteArrOvrdDefParam, void, $Method*)},
		{"checkSingleMemberByteArrTwo", "(Ljava/lang/reflect/AnnotatedElement;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberByteArrTwo, void, $AnnotatedElement*)},
		{"checkSingleMemberByteArrTwo", "(LUniTest/SingleMemberByteArray;Ljava/lang/reflect/AnnotatedElement;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberByteArrTwo, void, $SingleMemberByteArray*, $AnnotatedElement*)},
		{"checkSingleMemberByteArrTwoParam", "(Ljava/lang/reflect/Method;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberByteArrTwoParam, void, $Method*)},
		{"checkSingleMemberByteOvrdDef", "(Ljava/lang/reflect/AnnotatedElement;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberByteOvrdDef, void, $AnnotatedElement*)},
		{"checkSingleMemberByteOvrdDef", "(LUniTest/SingleMemberByteWithDef;Ljava/lang/reflect/AnnotatedElement;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberByteOvrdDef, void, $SingleMemberByteWithDef*, $AnnotatedElement*)},
		{"checkSingleMemberByteOvrdDefParam", "(Ljava/lang/reflect/Method;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberByteOvrdDefParam, void, $Method*)},
		{"checkSingleMemberByteParam", "(Ljava/lang/reflect/Method;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberByteParam, void, $Method*)},
		{"checkSingleMemberChar", "(Ljava/lang/reflect/AnnotatedElement;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberChar, void, $AnnotatedElement*)},
		{"checkSingleMemberChar", "(LUniTest/SingleMemberChar;Ljava/lang/reflect/AnnotatedElement;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberChar, void, $SingleMemberChar*, $AnnotatedElement*)},
		{"checkSingleMemberCharAcceptDef", "(Ljava/lang/reflect/AnnotatedElement;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberCharAcceptDef, void, $AnnotatedElement*)},
		{"checkSingleMemberCharAcceptDef", "(LUniTest/SingleMemberCharWithDef;Ljava/lang/reflect/AnnotatedElement;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberCharAcceptDef, void, $SingleMemberCharWithDef*, $AnnotatedElement*)},
		{"checkSingleMemberCharAcceptDefParam", "(Ljava/lang/reflect/Method;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberCharAcceptDefParam, void, $Method*)},
		{"checkSingleMemberCharArrAcceptDef", "(Ljava/lang/reflect/AnnotatedElement;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberCharArrAcceptDef, void, $AnnotatedElement*)},
		{"checkSingleMemberCharArrAcceptDef", "(LUniTest/SingleMemberCharArrayDef;Ljava/lang/reflect/AnnotatedElement;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberCharArrAcceptDef, void, $SingleMemberCharArrayDef*, $AnnotatedElement*)},
		{"checkSingleMemberCharArrAcceptDefParam", "(Ljava/lang/reflect/Method;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberCharArrAcceptDefParam, void, $Method*)},
		{"checkSingleMemberCharArrEmpty", "(Ljava/lang/reflect/AnnotatedElement;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberCharArrEmpty, void, $AnnotatedElement*)},
		{"checkSingleMemberCharArrEmpty", "(LUniTest/SingleMemberCharArray;Ljava/lang/reflect/AnnotatedElement;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberCharArrEmpty, void, $SingleMemberCharArray*, $AnnotatedElement*)},
		{"checkSingleMemberCharArrEmptyParam", "(Ljava/lang/reflect/Method;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberCharArrEmptyParam, void, $Method*)},
		{"checkSingleMemberCharArrOne", "(Ljava/lang/reflect/AnnotatedElement;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberCharArrOne, void, $AnnotatedElement*)},
		{"checkSingleMemberCharArrOne", "(LUniTest/SingleMemberCharArray;Ljava/lang/reflect/AnnotatedElement;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberCharArrOne, void, $SingleMemberCharArray*, $AnnotatedElement*)},
		{"checkSingleMemberCharArrOneParam", "(Ljava/lang/reflect/Method;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberCharArrOneParam, void, $Method*)},
		{"checkSingleMemberCharArrOvrdDef", "(Ljava/lang/reflect/AnnotatedElement;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberCharArrOvrdDef, void, $AnnotatedElement*)},
		{"checkSingleMemberCharArrOvrdDef", "(LUniTest/SingleMemberCharArrayDef;Ljava/lang/reflect/AnnotatedElement;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberCharArrOvrdDef, void, $SingleMemberCharArrayDef*, $AnnotatedElement*)},
		{"checkSingleMemberCharArrOvrdDefParam", "(Ljava/lang/reflect/Method;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberCharArrOvrdDefParam, void, $Method*)},
		{"checkSingleMemberCharArrTwo", "(Ljava/lang/reflect/AnnotatedElement;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberCharArrTwo, void, $AnnotatedElement*)},
		{"checkSingleMemberCharArrTwo", "(LUniTest/SingleMemberCharArray;Ljava/lang/reflect/AnnotatedElement;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberCharArrTwo, void, $SingleMemberCharArray*, $AnnotatedElement*)},
		{"checkSingleMemberCharArrTwoParam", "(Ljava/lang/reflect/Method;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberCharArrTwoParam, void, $Method*)},
		{"checkSingleMemberCharOvrdDef", "(Ljava/lang/reflect/AnnotatedElement;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberCharOvrdDef, void, $AnnotatedElement*)},
		{"checkSingleMemberCharOvrdDef", "(LUniTest/SingleMemberCharWithDef;Ljava/lang/reflect/AnnotatedElement;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberCharOvrdDef, void, $SingleMemberCharWithDef*, $AnnotatedElement*)},
		{"checkSingleMemberCharOvrdDefParam", "(Ljava/lang/reflect/Method;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberCharOvrdDefParam, void, $Method*)},
		{"checkSingleMemberCharParam", "(Ljava/lang/reflect/Method;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberCharParam, void, $Method*)},
		{"checkSingleMemberClass", "(Ljava/lang/reflect/AnnotatedElement;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberClass, void, $AnnotatedElement*)},
		{"checkSingleMemberClass", "(LUniTest/SingleMemberClass;Ljava/lang/reflect/AnnotatedElement;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberClass, void, $SingleMemberClass*, $AnnotatedElement*)},
		{"checkSingleMemberClassAcceptDef", "(Ljava/lang/reflect/AnnotatedElement;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberClassAcceptDef, void, $AnnotatedElement*)},
		{"checkSingleMemberClassAcceptDef", "(LUniTest/SingleMemberClassWithDef;Ljava/lang/reflect/AnnotatedElement;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberClassAcceptDef, void, $SingleMemberClassWithDef*, $AnnotatedElement*)},
		{"checkSingleMemberClassAcceptDefParam", "(Ljava/lang/reflect/Method;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberClassAcceptDefParam, void, $Method*)},
		{"checkSingleMemberClassArrAcceptDef", "(Ljava/lang/reflect/AnnotatedElement;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberClassArrAcceptDef, void, $AnnotatedElement*)},
		{"checkSingleMemberClassArrAcceptDef", "(LUniTest/SingleMemberClassArrayDef;Ljava/lang/reflect/AnnotatedElement;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberClassArrAcceptDef, void, $SingleMemberClassArrayDef*, $AnnotatedElement*)},
		{"checkSingleMemberClassArrAcceptDefParam", "(Ljava/lang/reflect/Method;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberClassArrAcceptDefParam, void, $Method*)},
		{"checkSingleMemberClassArrEmpty", "(Ljava/lang/reflect/AnnotatedElement;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberClassArrEmpty, void, $AnnotatedElement*)},
		{"checkSingleMemberClassArrEmpty", "(LUniTest/SingleMemberClassArray;Ljava/lang/reflect/AnnotatedElement;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberClassArrEmpty, void, $SingleMemberClassArray*, $AnnotatedElement*)},
		{"checkSingleMemberClassArrEmptyParam", "(Ljava/lang/reflect/Method;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberClassArrEmptyParam, void, $Method*)},
		{"checkSingleMemberClassArrOne", "(Ljava/lang/reflect/AnnotatedElement;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberClassArrOne, void, $AnnotatedElement*)},
		{"checkSingleMemberClassArrOne", "(LUniTest/SingleMemberClassArray;Ljava/lang/reflect/AnnotatedElement;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberClassArrOne, void, $SingleMemberClassArray*, $AnnotatedElement*)},
		{"checkSingleMemberClassArrOneParam", "(Ljava/lang/reflect/Method;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberClassArrOneParam, void, $Method*)},
		{"checkSingleMemberClassArrOvrdDef", "(Ljava/lang/reflect/AnnotatedElement;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberClassArrOvrdDef, void, $AnnotatedElement*)},
		{"checkSingleMemberClassArrOvrdDef", "(LUniTest/SingleMemberClassArrayDef;Ljava/lang/reflect/AnnotatedElement;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberClassArrOvrdDef, void, $SingleMemberClassArrayDef*, $AnnotatedElement*)},
		{"checkSingleMemberClassArrOvrdDefParam", "(Ljava/lang/reflect/Method;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberClassArrOvrdDefParam, void, $Method*)},
		{"checkSingleMemberClassArrTwo", "(Ljava/lang/reflect/AnnotatedElement;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberClassArrTwo, void, $AnnotatedElement*)},
		{"checkSingleMemberClassArrTwo", "(LUniTest/SingleMemberClassArray;Ljava/lang/reflect/AnnotatedElement;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberClassArrTwo, void, $SingleMemberClassArray*, $AnnotatedElement*)},
		{"checkSingleMemberClassArrTwoParam", "(Ljava/lang/reflect/Method;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberClassArrTwoParam, void, $Method*)},
		{"checkSingleMemberClassOvrdDef", "(Ljava/lang/reflect/AnnotatedElement;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberClassOvrdDef, void, $AnnotatedElement*)},
		{"checkSingleMemberClassOvrdDef", "(LUniTest/SingleMemberClassWithDef;Ljava/lang/reflect/AnnotatedElement;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberClassOvrdDef, void, $SingleMemberClassWithDef*, $AnnotatedElement*)},
		{"checkSingleMemberClassOvrdDefParam", "(Ljava/lang/reflect/Method;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberClassOvrdDefParam, void, $Method*)},
		{"checkSingleMemberClassParam", "(Ljava/lang/reflect/Method;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberClassParam, void, $Method*)},
		{"checkSingleMemberDouble", "(Ljava/lang/reflect/AnnotatedElement;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberDouble, void, $AnnotatedElement*)},
		{"checkSingleMemberDouble", "(LUniTest/SingleMemberDouble;Ljava/lang/reflect/AnnotatedElement;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberDouble, void, $SingleMemberDouble*, $AnnotatedElement*)},
		{"checkSingleMemberDoubleAcceptDef", "(Ljava/lang/reflect/AnnotatedElement;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberDoubleAcceptDef, void, $AnnotatedElement*)},
		{"checkSingleMemberDoubleAcceptDef", "(LUniTest/SingleMemberDoubleWithDef;Ljava/lang/reflect/AnnotatedElement;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberDoubleAcceptDef, void, $SingleMemberDoubleWithDef*, $AnnotatedElement*)},
		{"checkSingleMemberDoubleAcceptDefParam", "(Ljava/lang/reflect/Method;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberDoubleAcceptDefParam, void, $Method*)},
		{"checkSingleMemberDoubleArrAcceptDef", "(Ljava/lang/reflect/AnnotatedElement;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberDoubleArrAcceptDef, void, $AnnotatedElement*)},
		{"checkSingleMemberDoubleArrAcceptDef", "(LUniTest/SingleMemberDoubleArrayDef;Ljava/lang/reflect/AnnotatedElement;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberDoubleArrAcceptDef, void, $SingleMemberDoubleArrayDef*, $AnnotatedElement*)},
		{"checkSingleMemberDoubleArrAcceptDefParam", "(Ljava/lang/reflect/Method;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberDoubleArrAcceptDefParam, void, $Method*)},
		{"checkSingleMemberDoubleArrEmpty", "(Ljava/lang/reflect/AnnotatedElement;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberDoubleArrEmpty, void, $AnnotatedElement*)},
		{"checkSingleMemberDoubleArrEmpty", "(LUniTest/SingleMemberDoubleArray;Ljava/lang/reflect/AnnotatedElement;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberDoubleArrEmpty, void, $SingleMemberDoubleArray*, $AnnotatedElement*)},
		{"checkSingleMemberDoubleArrEmptyParam", "(Ljava/lang/reflect/Method;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberDoubleArrEmptyParam, void, $Method*)},
		{"checkSingleMemberDoubleArrOne", "(Ljava/lang/reflect/AnnotatedElement;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberDoubleArrOne, void, $AnnotatedElement*)},
		{"checkSingleMemberDoubleArrOne", "(LUniTest/SingleMemberDoubleArray;Ljava/lang/reflect/AnnotatedElement;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberDoubleArrOne, void, $SingleMemberDoubleArray*, $AnnotatedElement*)},
		{"checkSingleMemberDoubleArrOneParam", "(Ljava/lang/reflect/Method;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberDoubleArrOneParam, void, $Method*)},
		{"checkSingleMemberDoubleArrOvrdDef", "(Ljava/lang/reflect/AnnotatedElement;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberDoubleArrOvrdDef, void, $AnnotatedElement*)},
		{"checkSingleMemberDoubleArrOvrdDef", "(LUniTest/SingleMemberDoubleArrayDef;Ljava/lang/reflect/AnnotatedElement;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberDoubleArrOvrdDef, void, $SingleMemberDoubleArrayDef*, $AnnotatedElement*)},
		{"checkSingleMemberDoubleArrOvrdDefParam", "(Ljava/lang/reflect/Method;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberDoubleArrOvrdDefParam, void, $Method*)},
		{"checkSingleMemberDoubleArrTwo", "(Ljava/lang/reflect/AnnotatedElement;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberDoubleArrTwo, void, $AnnotatedElement*)},
		{"checkSingleMemberDoubleArrTwo", "(LUniTest/SingleMemberDoubleArray;Ljava/lang/reflect/AnnotatedElement;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberDoubleArrTwo, void, $SingleMemberDoubleArray*, $AnnotatedElement*)},
		{"checkSingleMemberDoubleArrTwoParam", "(Ljava/lang/reflect/Method;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberDoubleArrTwoParam, void, $Method*)},
		{"checkSingleMemberDoubleOvrdDef", "(Ljava/lang/reflect/AnnotatedElement;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberDoubleOvrdDef, void, $AnnotatedElement*)},
		{"checkSingleMemberDoubleOvrdDef", "(LUniTest/SingleMemberDoubleWithDef;Ljava/lang/reflect/AnnotatedElement;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberDoubleOvrdDef, void, $SingleMemberDoubleWithDef*, $AnnotatedElement*)},
		{"checkSingleMemberDoubleOvrdDefParam", "(Ljava/lang/reflect/Method;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberDoubleOvrdDefParam, void, $Method*)},
		{"checkSingleMemberDoubleParam", "(Ljava/lang/reflect/Method;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberDoubleParam, void, $Method*)},
		{"checkSingleMemberEnum", "(Ljava/lang/reflect/AnnotatedElement;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberEnum, void, $AnnotatedElement*)},
		{"checkSingleMemberEnum", "(LUniTest/SingleMemberEnum;Ljava/lang/reflect/AnnotatedElement;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberEnum, void, $SingleMemberEnum*, $AnnotatedElement*)},
		{"checkSingleMemberEnumAcceptDef", "(Ljava/lang/reflect/AnnotatedElement;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberEnumAcceptDef, void, $AnnotatedElement*)},
		{"checkSingleMemberEnumAcceptDef", "(LUniTest/SingleMemberEnumWithDef;Ljava/lang/reflect/AnnotatedElement;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberEnumAcceptDef, void, $SingleMemberEnumWithDef*, $AnnotatedElement*)},
		{"checkSingleMemberEnumAcceptDefParam", "(Ljava/lang/reflect/Method;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberEnumAcceptDefParam, void, $Method*)},
		{"checkSingleMemberEnumArrAcceptDef", "(Ljava/lang/reflect/AnnotatedElement;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberEnumArrAcceptDef, void, $AnnotatedElement*)},
		{"checkSingleMemberEnumArrAcceptDef", "(LUniTest/SingleMemberEnumArrayDef;Ljava/lang/reflect/AnnotatedElement;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberEnumArrAcceptDef, void, $SingleMemberEnumArrayDef*, $AnnotatedElement*)},
		{"checkSingleMemberEnumArrAcceptDefParam", "(Ljava/lang/reflect/Method;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberEnumArrAcceptDefParam, void, $Method*)},
		{"checkSingleMemberEnumArrEmpty", "(Ljava/lang/reflect/AnnotatedElement;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberEnumArrEmpty, void, $AnnotatedElement*)},
		{"checkSingleMemberEnumArrEmpty", "(LUniTest/SingleMemberEnumArray;Ljava/lang/reflect/AnnotatedElement;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberEnumArrEmpty, void, $SingleMemberEnumArray*, $AnnotatedElement*)},
		{"checkSingleMemberEnumArrEmptyParam", "(Ljava/lang/reflect/Method;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberEnumArrEmptyParam, void, $Method*)},
		{"checkSingleMemberEnumArrOne", "(Ljava/lang/reflect/AnnotatedElement;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberEnumArrOne, void, $AnnotatedElement*)},
		{"checkSingleMemberEnumArrOne", "(LUniTest/SingleMemberEnumArray;Ljava/lang/reflect/AnnotatedElement;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberEnumArrOne, void, $SingleMemberEnumArray*, $AnnotatedElement*)},
		{"checkSingleMemberEnumArrOneParam", "(Ljava/lang/reflect/Method;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberEnumArrOneParam, void, $Method*)},
		{"checkSingleMemberEnumArrOvrdDef", "(Ljava/lang/reflect/AnnotatedElement;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberEnumArrOvrdDef, void, $AnnotatedElement*)},
		{"checkSingleMemberEnumArrOvrdDef", "(LUniTest/SingleMemberEnumArrayDef;Ljava/lang/reflect/AnnotatedElement;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberEnumArrOvrdDef, void, $SingleMemberEnumArrayDef*, $AnnotatedElement*)},
		{"checkSingleMemberEnumArrOvrdDefParam", "(Ljava/lang/reflect/Method;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberEnumArrOvrdDefParam, void, $Method*)},
		{"checkSingleMemberEnumArrTwo", "(Ljava/lang/reflect/AnnotatedElement;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberEnumArrTwo, void, $AnnotatedElement*)},
		{"checkSingleMemberEnumArrTwo", "(LUniTest/SingleMemberEnumArray;Ljava/lang/reflect/AnnotatedElement;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberEnumArrTwo, void, $SingleMemberEnumArray*, $AnnotatedElement*)},
		{"checkSingleMemberEnumArrTwoParam", "(Ljava/lang/reflect/Method;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberEnumArrTwoParam, void, $Method*)},
		{"checkSingleMemberEnumOvrdDef", "(Ljava/lang/reflect/AnnotatedElement;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberEnumOvrdDef, void, $AnnotatedElement*)},
		{"checkSingleMemberEnumOvrdDef", "(LUniTest/SingleMemberEnumWithDef;Ljava/lang/reflect/AnnotatedElement;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberEnumOvrdDef, void, $SingleMemberEnumWithDef*, $AnnotatedElement*)},
		{"checkSingleMemberEnumOvrdDefParam", "(Ljava/lang/reflect/Method;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberEnumOvrdDefParam, void, $Method*)},
		{"checkSingleMemberEnumParam", "(Ljava/lang/reflect/Method;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberEnumParam, void, $Method*)},
		{"checkSingleMemberFloat", "(Ljava/lang/reflect/AnnotatedElement;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberFloat, void, $AnnotatedElement*)},
		{"checkSingleMemberFloat", "(LUniTest/SingleMemberFloat;Ljava/lang/reflect/AnnotatedElement;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberFloat, void, $SingleMemberFloat*, $AnnotatedElement*)},
		{"checkSingleMemberFloatAcceptDef", "(Ljava/lang/reflect/AnnotatedElement;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberFloatAcceptDef, void, $AnnotatedElement*)},
		{"checkSingleMemberFloatAcceptDef", "(LUniTest/SingleMemberFloatWithDef;Ljava/lang/reflect/AnnotatedElement;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberFloatAcceptDef, void, $SingleMemberFloatWithDef*, $AnnotatedElement*)},
		{"checkSingleMemberFloatAcceptDefParam", "(Ljava/lang/reflect/Method;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberFloatAcceptDefParam, void, $Method*)},
		{"checkSingleMemberFloatArrAcceptDef", "(Ljava/lang/reflect/AnnotatedElement;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberFloatArrAcceptDef, void, $AnnotatedElement*)},
		{"checkSingleMemberFloatArrAcceptDef", "(LUniTest/SingleMemberFloatArrayDef;Ljava/lang/reflect/AnnotatedElement;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberFloatArrAcceptDef, void, $SingleMemberFloatArrayDef*, $AnnotatedElement*)},
		{"checkSingleMemberFloatArrAcceptDefParam", "(Ljava/lang/reflect/Method;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberFloatArrAcceptDefParam, void, $Method*)},
		{"checkSingleMemberFloatArrEmpty", "(Ljava/lang/reflect/AnnotatedElement;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberFloatArrEmpty, void, $AnnotatedElement*)},
		{"checkSingleMemberFloatArrEmpty", "(LUniTest/SingleMemberFloatArray;Ljava/lang/reflect/AnnotatedElement;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberFloatArrEmpty, void, $SingleMemberFloatArray*, $AnnotatedElement*)},
		{"checkSingleMemberFloatArrEmptyParam", "(Ljava/lang/reflect/Method;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberFloatArrEmptyParam, void, $Method*)},
		{"checkSingleMemberFloatArrOne", "(Ljava/lang/reflect/AnnotatedElement;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberFloatArrOne, void, $AnnotatedElement*)},
		{"checkSingleMemberFloatArrOne", "(LUniTest/SingleMemberFloatArray;Ljava/lang/reflect/AnnotatedElement;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberFloatArrOne, void, $SingleMemberFloatArray*, $AnnotatedElement*)},
		{"checkSingleMemberFloatArrOneParam", "(Ljava/lang/reflect/Method;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberFloatArrOneParam, void, $Method*)},
		{"checkSingleMemberFloatArrOvrdDef", "(Ljava/lang/reflect/AnnotatedElement;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberFloatArrOvrdDef, void, $AnnotatedElement*)},
		{"checkSingleMemberFloatArrOvrdDef", "(LUniTest/SingleMemberFloatArrayDef;Ljava/lang/reflect/AnnotatedElement;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberFloatArrOvrdDef, void, $SingleMemberFloatArrayDef*, $AnnotatedElement*)},
		{"checkSingleMemberFloatArrOvrdDefParam", "(Ljava/lang/reflect/Method;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberFloatArrOvrdDefParam, void, $Method*)},
		{"checkSingleMemberFloatArrTwo", "(Ljava/lang/reflect/AnnotatedElement;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberFloatArrTwo, void, $AnnotatedElement*)},
		{"checkSingleMemberFloatArrTwo", "(LUniTest/SingleMemberFloatArray;Ljava/lang/reflect/AnnotatedElement;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberFloatArrTwo, void, $SingleMemberFloatArray*, $AnnotatedElement*)},
		{"checkSingleMemberFloatArrTwoParam", "(Ljava/lang/reflect/Method;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberFloatArrTwoParam, void, $Method*)},
		{"checkSingleMemberFloatOvrdDef", "(Ljava/lang/reflect/AnnotatedElement;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberFloatOvrdDef, void, $AnnotatedElement*)},
		{"checkSingleMemberFloatOvrdDef", "(LUniTest/SingleMemberFloatWithDef;Ljava/lang/reflect/AnnotatedElement;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberFloatOvrdDef, void, $SingleMemberFloatWithDef*, $AnnotatedElement*)},
		{"checkSingleMemberFloatOvrdDefParam", "(Ljava/lang/reflect/Method;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberFloatOvrdDefParam, void, $Method*)},
		{"checkSingleMemberFloatParam", "(Ljava/lang/reflect/Method;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberFloatParam, void, $Method*)},
		{"checkSingleMemberInt", "(Ljava/lang/reflect/AnnotatedElement;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberInt, void, $AnnotatedElement*)},
		{"checkSingleMemberInt", "(LUniTest/SingleMemberInt;Ljava/lang/reflect/AnnotatedElement;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberInt, void, $SingleMemberInt*, $AnnotatedElement*)},
		{"checkSingleMemberIntAcceptDef", "(Ljava/lang/reflect/AnnotatedElement;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberIntAcceptDef, void, $AnnotatedElement*)},
		{"checkSingleMemberIntAcceptDef", "(LUniTest/SingleMemberIntWithDef;Ljava/lang/reflect/AnnotatedElement;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberIntAcceptDef, void, $SingleMemberIntWithDef*, $AnnotatedElement*)},
		{"checkSingleMemberIntAcceptDefParam", "(Ljava/lang/reflect/Method;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberIntAcceptDefParam, void, $Method*)},
		{"checkSingleMemberIntArrAcceptDef", "(Ljava/lang/reflect/AnnotatedElement;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberIntArrAcceptDef, void, $AnnotatedElement*)},
		{"checkSingleMemberIntArrAcceptDef", "(LUniTest/SingleMemberIntArrayDef;Ljava/lang/reflect/AnnotatedElement;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberIntArrAcceptDef, void, $SingleMemberIntArrayDef*, $AnnotatedElement*)},
		{"checkSingleMemberIntArrAcceptDefParam", "(Ljava/lang/reflect/Method;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberIntArrAcceptDefParam, void, $Method*)},
		{"checkSingleMemberIntArrEmpty", "(Ljava/lang/reflect/AnnotatedElement;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberIntArrEmpty, void, $AnnotatedElement*)},
		{"checkSingleMemberIntArrEmpty", "(LUniTest/SingleMemberIntArray;Ljava/lang/reflect/AnnotatedElement;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberIntArrEmpty, void, $SingleMemberIntArray*, $AnnotatedElement*)},
		{"checkSingleMemberIntArrEmptyParam", "(Ljava/lang/reflect/Method;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberIntArrEmptyParam, void, $Method*)},
		{"checkSingleMemberIntArrOne", "(Ljava/lang/reflect/AnnotatedElement;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberIntArrOne, void, $AnnotatedElement*)},
		{"checkSingleMemberIntArrOne", "(LUniTest/SingleMemberIntArray;Ljava/lang/reflect/AnnotatedElement;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberIntArrOne, void, $SingleMemberIntArray*, $AnnotatedElement*)},
		{"checkSingleMemberIntArrOneParam", "(Ljava/lang/reflect/Method;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberIntArrOneParam, void, $Method*)},
		{"checkSingleMemberIntArrOvrdDef", "(Ljava/lang/reflect/AnnotatedElement;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberIntArrOvrdDef, void, $AnnotatedElement*)},
		{"checkSingleMemberIntArrOvrdDef", "(LUniTest/SingleMemberIntArrayDef;Ljava/lang/reflect/AnnotatedElement;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberIntArrOvrdDef, void, $SingleMemberIntArrayDef*, $AnnotatedElement*)},
		{"checkSingleMemberIntArrOvrdDefParam", "(Ljava/lang/reflect/Method;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberIntArrOvrdDefParam, void, $Method*)},
		{"checkSingleMemberIntArrTwo", "(Ljava/lang/reflect/AnnotatedElement;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberIntArrTwo, void, $AnnotatedElement*)},
		{"checkSingleMemberIntArrTwo", "(LUniTest/SingleMemberIntArray;Ljava/lang/reflect/AnnotatedElement;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberIntArrTwo, void, $SingleMemberIntArray*, $AnnotatedElement*)},
		{"checkSingleMemberIntArrTwoParam", "(Ljava/lang/reflect/Method;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberIntArrTwoParam, void, $Method*)},
		{"checkSingleMemberIntOvrdDef", "(Ljava/lang/reflect/AnnotatedElement;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberIntOvrdDef, void, $AnnotatedElement*)},
		{"checkSingleMemberIntOvrdDef", "(LUniTest/SingleMemberIntWithDef;Ljava/lang/reflect/AnnotatedElement;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberIntOvrdDef, void, $SingleMemberIntWithDef*, $AnnotatedElement*)},
		{"checkSingleMemberIntOvrdDefParam", "(Ljava/lang/reflect/Method;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberIntOvrdDefParam, void, $Method*)},
		{"checkSingleMemberIntParam", "(Ljava/lang/reflect/Method;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberIntParam, void, $Method*)},
		{"checkSingleMemberLong", "(Ljava/lang/reflect/AnnotatedElement;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberLong, void, $AnnotatedElement*)},
		{"checkSingleMemberLong", "(LUniTest/SingleMemberLong;Ljava/lang/reflect/AnnotatedElement;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberLong, void, $SingleMemberLong*, $AnnotatedElement*)},
		{"checkSingleMemberLongAcceptDef", "(Ljava/lang/reflect/AnnotatedElement;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberLongAcceptDef, void, $AnnotatedElement*)},
		{"checkSingleMemberLongAcceptDef", "(LUniTest/SingleMemberLongWithDef;Ljava/lang/reflect/AnnotatedElement;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberLongAcceptDef, void, $SingleMemberLongWithDef*, $AnnotatedElement*)},
		{"checkSingleMemberLongAcceptDefParam", "(Ljava/lang/reflect/Method;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberLongAcceptDefParam, void, $Method*)},
		{"checkSingleMemberLongArrAcceptDef", "(Ljava/lang/reflect/AnnotatedElement;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberLongArrAcceptDef, void, $AnnotatedElement*)},
		{"checkSingleMemberLongArrAcceptDef", "(LUniTest/SingleMemberLongArrayDef;Ljava/lang/reflect/AnnotatedElement;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberLongArrAcceptDef, void, $SingleMemberLongArrayDef*, $AnnotatedElement*)},
		{"checkSingleMemberLongArrAcceptDefParam", "(Ljava/lang/reflect/Method;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberLongArrAcceptDefParam, void, $Method*)},
		{"checkSingleMemberLongArrEmpty", "(Ljava/lang/reflect/AnnotatedElement;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberLongArrEmpty, void, $AnnotatedElement*)},
		{"checkSingleMemberLongArrEmpty", "(LUniTest/SingleMemberLongArray;Ljava/lang/reflect/AnnotatedElement;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberLongArrEmpty, void, $SingleMemberLongArray*, $AnnotatedElement*)},
		{"checkSingleMemberLongArrEmptyParam", "(Ljava/lang/reflect/Method;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberLongArrEmptyParam, void, $Method*)},
		{"checkSingleMemberLongArrOne", "(Ljava/lang/reflect/AnnotatedElement;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberLongArrOne, void, $AnnotatedElement*)},
		{"checkSingleMemberLongArrOne", "(LUniTest/SingleMemberLongArray;Ljava/lang/reflect/AnnotatedElement;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberLongArrOne, void, $SingleMemberLongArray*, $AnnotatedElement*)},
		{"checkSingleMemberLongArrOneParam", "(Ljava/lang/reflect/Method;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberLongArrOneParam, void, $Method*)},
		{"checkSingleMemberLongArrOvrdDef", "(Ljava/lang/reflect/AnnotatedElement;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberLongArrOvrdDef, void, $AnnotatedElement*)},
		{"checkSingleMemberLongArrOvrdDef", "(LUniTest/SingleMemberLongArrayDef;Ljava/lang/reflect/AnnotatedElement;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberLongArrOvrdDef, void, $SingleMemberLongArrayDef*, $AnnotatedElement*)},
		{"checkSingleMemberLongArrOvrdDefParam", "(Ljava/lang/reflect/Method;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberLongArrOvrdDefParam, void, $Method*)},
		{"checkSingleMemberLongArrTwo", "(Ljava/lang/reflect/AnnotatedElement;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberLongArrTwo, void, $AnnotatedElement*)},
		{"checkSingleMemberLongArrTwo", "(LUniTest/SingleMemberLongArray;Ljava/lang/reflect/AnnotatedElement;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberLongArrTwo, void, $SingleMemberLongArray*, $AnnotatedElement*)},
		{"checkSingleMemberLongArrTwoParam", "(Ljava/lang/reflect/Method;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberLongArrTwoParam, void, $Method*)},
		{"checkSingleMemberLongOvrdDef", "(Ljava/lang/reflect/AnnotatedElement;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberLongOvrdDef, void, $AnnotatedElement*)},
		{"checkSingleMemberLongOvrdDef", "(LUniTest/SingleMemberLongWithDef;Ljava/lang/reflect/AnnotatedElement;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberLongOvrdDef, void, $SingleMemberLongWithDef*, $AnnotatedElement*)},
		{"checkSingleMemberLongOvrdDefParam", "(Ljava/lang/reflect/Method;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberLongOvrdDefParam, void, $Method*)},
		{"checkSingleMemberLongParam", "(Ljava/lang/reflect/Method;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberLongParam, void, $Method*)},
		{"checkSingleMemberShort", "(Ljava/lang/reflect/AnnotatedElement;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberShort, void, $AnnotatedElement*)},
		{"checkSingleMemberShort", "(LUniTest/SingleMemberShort;Ljava/lang/reflect/AnnotatedElement;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberShort, void, $SingleMemberShort*, $AnnotatedElement*)},
		{"checkSingleMemberShortAcceptDef", "(Ljava/lang/reflect/AnnotatedElement;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberShortAcceptDef, void, $AnnotatedElement*)},
		{"checkSingleMemberShortAcceptDef", "(LUniTest/SingleMemberShortWithDef;Ljava/lang/reflect/AnnotatedElement;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberShortAcceptDef, void, $SingleMemberShortWithDef*, $AnnotatedElement*)},
		{"checkSingleMemberShortAcceptDefParam", "(Ljava/lang/reflect/Method;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberShortAcceptDefParam, void, $Method*)},
		{"checkSingleMemberShortArrAcceptDef", "(Ljava/lang/reflect/AnnotatedElement;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberShortArrAcceptDef, void, $AnnotatedElement*)},
		{"checkSingleMemberShortArrAcceptDef", "(LUniTest/SingleMemberShortArrayDef;Ljava/lang/reflect/AnnotatedElement;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberShortArrAcceptDef, void, $SingleMemberShortArrayDef*, $AnnotatedElement*)},
		{"checkSingleMemberShortArrAcceptDefParam", "(Ljava/lang/reflect/Method;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberShortArrAcceptDefParam, void, $Method*)},
		{"checkSingleMemberShortArrEmpty", "(Ljava/lang/reflect/AnnotatedElement;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberShortArrEmpty, void, $AnnotatedElement*)},
		{"checkSingleMemberShortArrEmpty", "(LUniTest/SingleMemberShortArray;Ljava/lang/reflect/AnnotatedElement;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberShortArrEmpty, void, $SingleMemberShortArray*, $AnnotatedElement*)},
		{"checkSingleMemberShortArrEmptyParam", "(Ljava/lang/reflect/Method;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberShortArrEmptyParam, void, $Method*)},
		{"checkSingleMemberShortArrOne", "(Ljava/lang/reflect/AnnotatedElement;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberShortArrOne, void, $AnnotatedElement*)},
		{"checkSingleMemberShortArrOne", "(LUniTest/SingleMemberShortArray;Ljava/lang/reflect/AnnotatedElement;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberShortArrOne, void, $SingleMemberShortArray*, $AnnotatedElement*)},
		{"checkSingleMemberShortArrOneParam", "(Ljava/lang/reflect/Method;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberShortArrOneParam, void, $Method*)},
		{"checkSingleMemberShortArrOvrdDef", "(Ljava/lang/reflect/AnnotatedElement;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberShortArrOvrdDef, void, $AnnotatedElement*)},
		{"checkSingleMemberShortArrOvrdDef", "(LUniTest/SingleMemberShortArrayDef;Ljava/lang/reflect/AnnotatedElement;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberShortArrOvrdDef, void, $SingleMemberShortArrayDef*, $AnnotatedElement*)},
		{"checkSingleMemberShortArrOvrdDefParam", "(Ljava/lang/reflect/Method;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberShortArrOvrdDefParam, void, $Method*)},
		{"checkSingleMemberShortArrTwo", "(Ljava/lang/reflect/AnnotatedElement;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberShortArrTwo, void, $AnnotatedElement*)},
		{"checkSingleMemberShortArrTwo", "(LUniTest/SingleMemberShortArray;Ljava/lang/reflect/AnnotatedElement;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberShortArrTwo, void, $SingleMemberShortArray*, $AnnotatedElement*)},
		{"checkSingleMemberShortArrTwoParam", "(Ljava/lang/reflect/Method;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberShortArrTwoParam, void, $Method*)},
		{"checkSingleMemberShortOvrdDef", "(Ljava/lang/reflect/AnnotatedElement;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberShortOvrdDef, void, $AnnotatedElement*)},
		{"checkSingleMemberShortOvrdDef", "(LUniTest/SingleMemberShortWithDef;Ljava/lang/reflect/AnnotatedElement;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberShortOvrdDef, void, $SingleMemberShortWithDef*, $AnnotatedElement*)},
		{"checkSingleMemberShortOvrdDefParam", "(Ljava/lang/reflect/Method;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberShortOvrdDefParam, void, $Method*)},
		{"checkSingleMemberShortParam", "(Ljava/lang/reflect/Method;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberShortParam, void, $Method*)},
		{"checkSingleMemberString", "(Ljava/lang/reflect/AnnotatedElement;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberString, void, $AnnotatedElement*)},
		{"checkSingleMemberString", "(LUniTest/SingleMemberString;Ljava/lang/reflect/AnnotatedElement;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberString, void, $SingleMemberString*, $AnnotatedElement*)},
		{"checkSingleMemberStringAcceptDef", "(Ljava/lang/reflect/AnnotatedElement;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberStringAcceptDef, void, $AnnotatedElement*)},
		{"checkSingleMemberStringAcceptDef", "(LUniTest/SingleMemberStringWithDef;Ljava/lang/reflect/AnnotatedElement;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberStringAcceptDef, void, $SingleMemberStringWithDef*, $AnnotatedElement*)},
		{"checkSingleMemberStringAcceptDefParam", "(Ljava/lang/reflect/Method;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberStringAcceptDefParam, void, $Method*)},
		{"checkSingleMemberStringArrAcceptDef", "(Ljava/lang/reflect/AnnotatedElement;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberStringArrAcceptDef, void, $AnnotatedElement*)},
		{"checkSingleMemberStringArrAcceptDef", "(LUniTest/SingleMemberStringArrayDef;Ljava/lang/reflect/AnnotatedElement;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberStringArrAcceptDef, void, $SingleMemberStringArrayDef*, $AnnotatedElement*)},
		{"checkSingleMemberStringArrAcceptDefParam", "(Ljava/lang/reflect/Method;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberStringArrAcceptDefParam, void, $Method*)},
		{"checkSingleMemberStringArrEmpty", "(Ljava/lang/reflect/AnnotatedElement;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberStringArrEmpty, void, $AnnotatedElement*)},
		{"checkSingleMemberStringArrEmpty", "(LUniTest/SingleMemberStringArray;Ljava/lang/reflect/AnnotatedElement;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberStringArrEmpty, void, $SingleMemberStringArray*, $AnnotatedElement*)},
		{"checkSingleMemberStringArrEmptyParam", "(Ljava/lang/reflect/Method;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberStringArrEmptyParam, void, $Method*)},
		{"checkSingleMemberStringArrOne", "(Ljava/lang/reflect/AnnotatedElement;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberStringArrOne, void, $AnnotatedElement*)},
		{"checkSingleMemberStringArrOne", "(LUniTest/SingleMemberStringArray;Ljava/lang/reflect/AnnotatedElement;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberStringArrOne, void, $SingleMemberStringArray*, $AnnotatedElement*)},
		{"checkSingleMemberStringArrOneParam", "(Ljava/lang/reflect/Method;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberStringArrOneParam, void, $Method*)},
		{"checkSingleMemberStringArrOvrdDef", "(Ljava/lang/reflect/AnnotatedElement;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberStringArrOvrdDef, void, $AnnotatedElement*)},
		{"checkSingleMemberStringArrOvrdDef", "(LUniTest/SingleMemberStringArrayDef;Ljava/lang/reflect/AnnotatedElement;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberStringArrOvrdDef, void, $SingleMemberStringArrayDef*, $AnnotatedElement*)},
		{"checkSingleMemberStringArrOvrdDefParam", "(Ljava/lang/reflect/Method;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberStringArrOvrdDefParam, void, $Method*)},
		{"checkSingleMemberStringArrTwo", "(Ljava/lang/reflect/AnnotatedElement;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberStringArrTwo, void, $AnnotatedElement*)},
		{"checkSingleMemberStringArrTwo", "(LUniTest/SingleMemberStringArray;Ljava/lang/reflect/AnnotatedElement;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberStringArrTwo, void, $SingleMemberStringArray*, $AnnotatedElement*)},
		{"checkSingleMemberStringArrTwoParam", "(Ljava/lang/reflect/Method;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberStringArrTwoParam, void, $Method*)},
		{"checkSingleMemberStringOvrdDef", "(Ljava/lang/reflect/AnnotatedElement;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberStringOvrdDef, void, $AnnotatedElement*)},
		{"checkSingleMemberStringOvrdDef", "(LUniTest/SingleMemberStringWithDef;Ljava/lang/reflect/AnnotatedElement;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberStringOvrdDef, void, $SingleMemberStringWithDef*, $AnnotatedElement*)},
		{"checkSingleMemberStringOvrdDefParam", "(Ljava/lang/reflect/Method;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberStringOvrdDefParam, void, $Method*)},
		{"checkSingleMemberStringParam", "(Ljava/lang/reflect/Method;)V", nullptr, $STATIC, $staticMethod(UnitTest, checkSingleMemberStringParam, void, $Method*)},
		{"checkUnequals", "(Ljava/lang/reflect/AnnotatedElement;Ljava/lang/reflect/AnnotatedElement;Ljava/lang/Class;)V", "<T::Ljava/lang/annotation/Annotation;>(Ljava/lang/reflect/AnnotatedElement;Ljava/lang/reflect/AnnotatedElement;Ljava/lang/Class<TT;>;)V", $STATIC, $staticMethod(UnitTest, checkUnequals, void, $AnnotatedElement*, $AnnotatedElement*, $Class*)},
		{"deepCopy", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC, $staticMethod(UnitTest, deepCopy, $Object*, Object$*)},
		{"emptyArrayTypesMethod", "()V", nullptr, $PUBLIC, $virtualMethod(UnitTest, emptyArrayTypesMethod, void), nullptr, nullptr, emptyArrayTypesMethodmethodAnnotations$$},
		{"emptyArrayTypesParam", "(I)V", nullptr, $PUBLIC, $virtualMethod(UnitTest, emptyArrayTypesParam, void, int32_t), nullptr, nullptr, nullptr, nullptr, emptyArrayTypesParammethodParamAnnotations$$},
		{"fail", "(Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(UnitTest, fail, void, $String*)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(UnitTest, main, void, $StringArray*), "java.lang.Exception"},
		{"markerMethod", "()V", nullptr, $PUBLIC, $virtualMethod(UnitTest, markerMethod, void), nullptr, nullptr, markerMethodmethodAnnotations$$},
		{"markerParam", "(I)V", nullptr, $PUBLIC, $virtualMethod(UnitTest, markerParam, void, int32_t), nullptr, nullptr, nullptr, nullptr, markerParammethodParamAnnotations$$},
		{"scalarTypesAcceptDefaultMethod", "()V", nullptr, $PUBLIC, $virtualMethod(UnitTest, scalarTypesAcceptDefaultMethod, void), nullptr, nullptr, scalarTypesAcceptDefaultMethodmethodAnnotations$$},
		{"scalarTypesAcceptDefaultParam", "(I)V", nullptr, $PUBLIC, $virtualMethod(UnitTest, scalarTypesAcceptDefaultParam, void, int32_t), nullptr, nullptr, nullptr, nullptr, scalarTypesAcceptDefaultParammethodParamAnnotations$$},
		{"scalarTypesMethod", "()V", nullptr, $PUBLIC, $virtualMethod(UnitTest, scalarTypesMethod, void), nullptr, nullptr, scalarTypesMethodmethodAnnotations$$},
		{"scalarTypesOverrideDefaultMethod", "()V", nullptr, $PUBLIC, $virtualMethod(UnitTest, scalarTypesOverrideDefaultMethod, void), nullptr, nullptr, scalarTypesOverrideDefaultMethodmethodAnnotations$$},
		{"scalarTypesOverrideDefaultParam", "(I)V", nullptr, $PUBLIC, $virtualMethod(UnitTest, scalarTypesOverrideDefaultParam, void, int32_t), nullptr, nullptr, nullptr, nullptr, scalarTypesOverrideDefaultParammethodParamAnnotations$$},
		{"scalarTypesParam", "(I)V", nullptr, $PUBLIC, $virtualMethod(UnitTest, scalarTypesParam, void, int32_t), nullptr, nullptr, nullptr, nullptr, scalarTypesParammethodParamAnnotations$$},
		{"singleElementArrayTypesMethod", "()V", nullptr, $PUBLIC, $virtualMethod(UnitTest, singleElementArrayTypesMethod, void), nullptr, nullptr, singleElementArrayTypesMethodmethodAnnotations$$},
		{"singleElementArrayTypesParam", "(I)V", nullptr, $PUBLIC, $virtualMethod(UnitTest, singleElementArrayTypesParam, void, int32_t), nullptr, nullptr, nullptr, nullptr, singleElementArrayTypesParammethodParamAnnotations$$},
		{"twoElementArrayTypesMethod", "()V", nullptr, $PUBLIC, $virtualMethod(UnitTest, twoElementArrayTypesMethod, void), nullptr, nullptr, twoElementArrayTypesMethodmethodAnnotations$$},
		{"twoElementArrayTypesParam", "(I)V", nullptr, $PUBLIC, $virtualMethod(UnitTest, twoElementArrayTypesParam, void, int32_t), nullptr, nullptr, nullptr, nullptr, twoElementArrayTypesParammethodParamAnnotations$$},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"UniTest.UnitTest$TestType", "UniTest.UnitTest", "TestType", $STATIC | $FINAL | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"UniTest.UnitTest",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"UniTest.UnitTest$TestType"
	};
	$loadClass(UnitTest, name, initialize, &classInfo$$, UnitTest::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(UnitTest);
	});
	return class$;
}

$Class* UnitTest::class$ = nullptr;

} // UniTest