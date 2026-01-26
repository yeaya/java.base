#include <TestReceiverTypeParameterizedConstructor$Inner.h>

#include <TestReceiverTypeParameterizedConstructor.h>
#include <jcpp.h>

using $TestReceiverTypeParameterizedConstructor = ::TestReceiverTypeParameterizedConstructor;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $TypeAnnotation = ::java::lang::TypeAnnotation;

$NamedAttribute TestReceiverTypeParameterizedConstructor$Inner_Attribute_var$0[] = {
	{"value", 'I', "0"},
	{}
};

$TypeAnnotation _TestReceiverTypeParameterizedConstructor$Inner_MethodTypeAnnotations_init$0[] = {
	{"LTestReceiverTypeParameterizedConstructor$TypeAnnotation;", TestReceiverTypeParameterizedConstructor$Inner_Attribute_var$0, "METHOD_RECEIVER, location = (TYPE_ARGUMENT(0))"},
	{}
};

$FieldInfo _TestReceiverTypeParameterizedConstructor$Inner_FieldInfo_[] = {
	{"this$0", "LTestReceiverTypeParameterizedConstructor;", nullptr, $FINAL | $SYNTHETIC, $field(TestReceiverTypeParameterizedConstructor$Inner, this$0)},
	{}
};

$MethodInfo _TestReceiverTypeParameterizedConstructor$Inner_MethodInfo_[] = {
	{"<init>", "(LTestReceiverTypeParameterizedConstructor;)V", nullptr, 0, $method(TestReceiverTypeParameterizedConstructor$Inner, init$, void, $TestReceiverTypeParameterizedConstructor*), nullptr, nullptr, nullptr, _TestReceiverTypeParameterizedConstructor$Inner_MethodTypeAnnotations_init$0},
	{}
};

$InnerClassInfo _TestReceiverTypeParameterizedConstructor$Inner_InnerClassesInfo_[] = {
	{"TestReceiverTypeParameterizedConstructor$Inner", "TestReceiverTypeParameterizedConstructor", "Inner", 0},
	{"TestReceiverTypeParameterizedConstructor$Inner$Inner2", "TestReceiverTypeParameterizedConstructor$Inner", "Inner2", 0},
	{}
};

$ClassInfo _TestReceiverTypeParameterizedConstructor$Inner_ClassInfo_ = {
	$ACC_SUPER,
	"TestReceiverTypeParameterizedConstructor$Inner",
	"java.lang.Object",
	nullptr,
	_TestReceiverTypeParameterizedConstructor$Inner_FieldInfo_,
	_TestReceiverTypeParameterizedConstructor$Inner_MethodInfo_,
	"<S:Ljava/lang/Object;>Ljava/lang/Object;",
	nullptr,
	_TestReceiverTypeParameterizedConstructor$Inner_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"TestReceiverTypeParameterizedConstructor"
};

$Object* allocate$TestReceiverTypeParameterizedConstructor$Inner($Class* clazz) {
	return $of($alloc(TestReceiverTypeParameterizedConstructor$Inner));
}

void TestReceiverTypeParameterizedConstructor$Inner::init$($TestReceiverTypeParameterizedConstructor* this$0) {
	$set(this, this$0, this$0);
}

TestReceiverTypeParameterizedConstructor$Inner::TestReceiverTypeParameterizedConstructor$Inner() {
}

$Class* TestReceiverTypeParameterizedConstructor$Inner::load$($String* name, bool initialize) {
	$loadClass(TestReceiverTypeParameterizedConstructor$Inner, name, initialize, &_TestReceiverTypeParameterizedConstructor$Inner_ClassInfo_, allocate$TestReceiverTypeParameterizedConstructor$Inner);
	return class$;
}

$Class* TestReceiverTypeParameterizedConstructor$Inner::class$ = nullptr;