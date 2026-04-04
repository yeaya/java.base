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

void TestReceiverTypeParameterizedMethod$Inner::init$($TestReceiverTypeParameterizedMethod* this$0) {
	$set(this, this$0, this$0);
}

void TestReceiverTypeParameterizedMethod$Inner::m() {
}

TestReceiverTypeParameterizedMethod$Inner::TestReceiverTypeParameterizedMethod$Inner() {
}

$Class* TestReceiverTypeParameterizedMethod$Inner::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "LTestReceiverTypeParameterizedMethod;", nullptr, $FINAL | $SYNTHETIC, $field(TestReceiverTypeParameterizedMethod$Inner, this$0)},
		{}
	};
	$NamedAttribute mmethodTypeAnnotations$$$namedAttribute[] = {
		{"value", 'I', "1"},
		{}
	};
	$NamedAttribute mmethodTypeAnnotations$$$namedAttribute$1[] = {
		{"value", 'I', "0"},
		{}
	};
	$TypeAnnotation mmethodTypeAnnotations$$[] = {
		{"LTestReceiverTypeParameterizedMethod$TypeAnnotation;", mmethodTypeAnnotations$$$namedAttribute, "METHOD_RECEIVER, location = (TYPE_ARGUMENT(0))"},
		{"LTestReceiverTypeParameterizedMethod$TypeAnnotation;", mmethodTypeAnnotations$$$namedAttribute$1, "METHOD_RECEIVER, location = (INNER_TYPE,TYPE_ARGUMENT(0))"},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LTestReceiverTypeParameterizedMethod;)V", nullptr, 0, $method(TestReceiverTypeParameterizedMethod$Inner, init$, void, $TestReceiverTypeParameterizedMethod*)},
		{"m", "()V", nullptr, 0, $virtualMethod(TestReceiverTypeParameterizedMethod$Inner, m, void), nullptr, nullptr, nullptr, mmethodTypeAnnotations$$},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"TestReceiverTypeParameterizedMethod$Inner", "TestReceiverTypeParameterizedMethod", "Inner", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"TestReceiverTypeParameterizedMethod$Inner",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"<S:Ljava/lang/Object;>Ljava/lang/Object;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"TestReceiverTypeParameterizedMethod"
	};
	$loadClass(TestReceiverTypeParameterizedMethod$Inner, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestReceiverTypeParameterizedMethod$Inner);
	});
	return class$;
}

$Class* TestReceiverTypeParameterizedMethod$Inner::class$ = nullptr;