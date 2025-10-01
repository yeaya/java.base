#include <TestClassNested.h>

#include <Outer$Inner.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NamedAttribute.h>
#include <java/lang/String.h>
#include <java/lang/TypeAnnotation.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $Outer$InnerArray = $Array<Outer$Inner>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $TypeAnnotation = ::java::lang::TypeAnnotation;

$NamedAttribute TestClassNested_Attribute_var$0[] = {
	{"value", 's', "array"},
	{}
};

$NamedAttribute TestClassNested_Attribute_var$1[] = {
	{"value", 's', "Inner"},
	{}
};

$NamedAttribute TestClassNested_Attribute_var$2[] = {
	{"value", 's', "Outer"},
	{}
};

$TypeAnnotation _TestClassNested_MethodTypeAnnotations_foo1[] = {
	{"LTypeAnno;", TestClassNested_Attribute_var$0, "METHOD_RETURN"},
	{"LTypeAnno;", TestClassNested_Attribute_var$1, "METHOD_RETURN, location = (ARRAY,INNER_TYPE)"},
	{"LTypeAnno;", TestClassNested_Attribute_var$2, "METHOD_RETURN, location = (ARRAY)"},
	{}
};

$MethodInfo _TestClassNested_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(TestClassNested::*)()>(&TestClassNested::init$))},
	{"foo", "()[LOuter$Inner;", nullptr, $PUBLIC, nullptr, nullptr, nullptr, nullptr, _TestClassNested_MethodTypeAnnotations_foo1},
	{}
};

$ClassInfo _TestClassNested_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"TestClassNested",
	"java.lang.Object",
	nullptr,
	nullptr,
	_TestClassNested_MethodInfo_
};

$Object* allocate$TestClassNested($Class* clazz) {
	return $of($alloc(TestClassNested));
}

void TestClassNested::init$() {
}

$Outer$InnerArray* TestClassNested::foo() {
	return nullptr;
}

TestClassNested::TestClassNested() {
}

$Class* TestClassNested::load$($String* name, bool initialize) {
	$loadClass(TestClassNested, name, initialize, &_TestClassNested_ClassInfo_, allocate$TestClassNested);
	return class$;
}

$Class* TestClassNested::class$ = nullptr;