#include <TestReceiverTypeParameterizedMethod$Inner.h>

#include <TestReceiverTypeParameterizedMethod.h>
#include <jcpp.h>

using $TestReceiverTypeParameterizedMethod = ::TestReceiverTypeParameterizedMethod;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $TypeAnnotation = ::java::lang::TypeAnnotation;

$NamedAttribute TestReceiverTypeParameterizedMethod$Inner_Attribute_var$0[] = {
	{"value", 'I', "1"},
	{}
};

$NamedAttribute TestReceiverTypeParameterizedMethod$Inner_Attribute_var$1[] = {
	{"value", 'I', "0"},
	{}
};

$TypeAnnotation _TestReceiverTypeParameterizedMethod$Inner_MethodTypeAnnotations_m1[] = {
	{"LTestReceiverTypeParameterizedMethod$TypeAnnotation;", TestReceiverTypeParameterizedMethod$Inner_Attribute_var$0, "METHOD_RECEIVER, location = (TYPE_ARGUMENT(0))"},
	{"LTestReceiverTypeParameterizedMethod$TypeAnnotation;", TestReceiverTypeParameterizedMethod$Inner_Attribute_var$1, "METHOD_RECEIVER, location = (INNER_TYPE,TYPE_ARGUMENT(0))"},
	{}
};

$FieldInfo _TestReceiverTypeParameterizedMethod$Inner_FieldInfo_[] = {
	{"this$0", "LTestReceiverTypeParameterizedMethod;", nullptr, $FINAL | $SYNTHETIC, $field(TestReceiverTypeParameterizedMethod$Inner, this$0)},
	{}
};

$MethodInfo _TestReceiverTypeParameterizedMethod$Inner_MethodInfo_[] = {
	{"<init>", "(LTestReceiverTypeParameterizedMethod;)V", nullptr, 0, $method(static_cast<void(TestReceiverTypeParameterizedMethod$Inner::*)($TestReceiverTypeParameterizedMethod*)>(&TestReceiverTypeParameterizedMethod$Inner::init$))},
	{"m", "()V", nullptr, 0, nullptr, nullptr, nullptr, nullptr, _TestReceiverTypeParameterizedMethod$Inner_MethodTypeAnnotations_m1},
	{}
};

$InnerClassInfo _TestReceiverTypeParameterizedMethod$Inner_InnerClassesInfo_[] = {
	{"TestReceiverTypeParameterizedMethod$Inner", "TestReceiverTypeParameterizedMethod", "Inner", 0},
	{}
};

$ClassInfo _TestReceiverTypeParameterizedMethod$Inner_ClassInfo_ = {
	$ACC_SUPER,
	"TestReceiverTypeParameterizedMethod$Inner",
	"java.lang.Object",
	nullptr,
	_TestReceiverTypeParameterizedMethod$Inner_FieldInfo_,
	_TestReceiverTypeParameterizedMethod$Inner_MethodInfo_,
	"<S:Ljava/lang/Object;>Ljava/lang/Object;",
	nullptr,
	_TestReceiverTypeParameterizedMethod$Inner_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"TestReceiverTypeParameterizedMethod"
};

$Object* allocate$TestReceiverTypeParameterizedMethod$Inner($Class* clazz) {
	return $of($alloc(TestReceiverTypeParameterizedMethod$Inner));
}

void TestReceiverTypeParameterizedMethod$Inner::init$($TestReceiverTypeParameterizedMethod* this$0) {
	$set(this, this$0, this$0);
}

void TestReceiverTypeParameterizedMethod$Inner::m() {
}

TestReceiverTypeParameterizedMethod$Inner::TestReceiverTypeParameterizedMethod$Inner() {
}

$Class* TestReceiverTypeParameterizedMethod$Inner::load$($String* name, bool initialize) {
	$loadClass(TestReceiverTypeParameterizedMethod$Inner, name, initialize, &_TestReceiverTypeParameterizedMethod$Inner_ClassInfo_, allocate$TestReceiverTypeParameterizedMethod$Inner);
	return class$;
}

$Class* TestReceiverTypeParameterizedMethod$Inner::class$ = nullptr;