#include <TestReceiverTypeParameterizedConstructor$Inner$Inner2.h>

#include <TestReceiverTypeParameterizedConstructor$Inner.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NamedAttribute.h>
#include <java/lang/String.h>
#include <java/lang/TypeAnnotation.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $TestReceiverTypeParameterizedConstructor$Inner = ::TestReceiverTypeParameterizedConstructor$Inner;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $TypeAnnotation = ::java::lang::TypeAnnotation;

$NamedAttribute TestReceiverTypeParameterizedConstructor$Inner$Inner2_Attribute_var$0[] = {
	{"value", 'I', "1"},
	{}
};

$NamedAttribute TestReceiverTypeParameterizedConstructor$Inner$Inner2_Attribute_var$1[] = {
	{"value", 'I', "0"},
	{}
};

$TypeAnnotation _TestReceiverTypeParameterizedConstructor$Inner$Inner2_MethodTypeAnnotations_init$0[] = {
	{"LTestReceiverTypeParameterizedConstructor$TypeAnnotation;", TestReceiverTypeParameterizedConstructor$Inner$Inner2_Attribute_var$0, "METHOD_RECEIVER, location = (TYPE_ARGUMENT(0))"},
	{"LTestReceiverTypeParameterizedConstructor$TypeAnnotation;", TestReceiverTypeParameterizedConstructor$Inner$Inner2_Attribute_var$1, "METHOD_RECEIVER, location = (INNER_TYPE,TYPE_ARGUMENT(0))"},
	{}
};

$FieldInfo _TestReceiverTypeParameterizedConstructor$Inner$Inner2_FieldInfo_[] = {
	{"this$1", "LTestReceiverTypeParameterizedConstructor$Inner;", nullptr, $FINAL | $SYNTHETIC, $field(TestReceiverTypeParameterizedConstructor$Inner$Inner2, this$1)},
	{}
};

$MethodInfo _TestReceiverTypeParameterizedConstructor$Inner$Inner2_MethodInfo_[] = {
	{"<init>", "(LTestReceiverTypeParameterizedConstructor$Inner;)V", nullptr, 0, $method(static_cast<void(TestReceiverTypeParameterizedConstructor$Inner$Inner2::*)($TestReceiverTypeParameterizedConstructor$Inner*)>(&TestReceiverTypeParameterizedConstructor$Inner$Inner2::init$)), nullptr, nullptr, nullptr, _TestReceiverTypeParameterizedConstructor$Inner$Inner2_MethodTypeAnnotations_init$0},
	{}
};

$InnerClassInfo _TestReceiverTypeParameterizedConstructor$Inner$Inner2_InnerClassesInfo_[] = {
	{"TestReceiverTypeParameterizedConstructor$Inner", "TestReceiverTypeParameterizedConstructor", "Inner", 0},
	{"TestReceiverTypeParameterizedConstructor$Inner$Inner2", "TestReceiverTypeParameterizedConstructor$Inner", "Inner2", 0},
	{}
};

$ClassInfo _TestReceiverTypeParameterizedConstructor$Inner$Inner2_ClassInfo_ = {
	$ACC_SUPER,
	"TestReceiverTypeParameterizedConstructor$Inner$Inner2",
	"java.lang.Object",
	nullptr,
	_TestReceiverTypeParameterizedConstructor$Inner$Inner2_FieldInfo_,
	_TestReceiverTypeParameterizedConstructor$Inner$Inner2_MethodInfo_,
	nullptr,
	nullptr,
	_TestReceiverTypeParameterizedConstructor$Inner$Inner2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"TestReceiverTypeParameterizedConstructor"
};

$Object* allocate$TestReceiverTypeParameterizedConstructor$Inner$Inner2($Class* clazz) {
	return $of($alloc(TestReceiverTypeParameterizedConstructor$Inner$Inner2));
}

void TestReceiverTypeParameterizedConstructor$Inner$Inner2::init$($TestReceiverTypeParameterizedConstructor$Inner* this$1) {
	$set(this, this$1, this$1);
}

TestReceiverTypeParameterizedConstructor$Inner$Inner2::TestReceiverTypeParameterizedConstructor$Inner$Inner2() {
}

$Class* TestReceiverTypeParameterizedConstructor$Inner$Inner2::load$($String* name, bool initialize) {
	$loadClass(TestReceiverTypeParameterizedConstructor$Inner$Inner2, name, initialize, &_TestReceiverTypeParameterizedConstructor$Inner$Inner2_ClassInfo_, allocate$TestReceiverTypeParameterizedConstructor$Inner$Inner2);
	return class$;
}

$Class* TestReceiverTypeParameterizedConstructor$Inner$Inner2::class$ = nullptr;