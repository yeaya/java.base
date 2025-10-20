#include <OrderUnitTest.h>

#include <Case1B.h>
#include <Case2B.h>
#include <Foo4OrderUnitTest.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/annotation/Annotation.h>
#include <java/lang/reflect/AnnotatedElement.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/GenericDeclaration.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $Case1B = ::Case1B;
using $Case2B = ::Case2B;
using $Foo4OrderUnitTest = ::Foo4OrderUnitTest;
using $Foo4OrderUnitTestArray = $Array<Foo4OrderUnitTest>;
using $AnnotationArray = $Array<::java::lang::annotation::Annotation>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $Annotation = ::java::lang::annotation::Annotation;
using $AnnotatedElement = ::java::lang::reflect::AnnotatedElement;
using $GenericDeclaration = ::java::lang::reflect::GenericDeclaration;

$MethodInfo _OrderUnitTest_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(OrderUnitTest::*)()>(&OrderUnitTest::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&OrderUnitTest::main))},
	{"testOrder", "(Ljava/lang/reflect/AnnotatedElement;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($AnnotatedElement*)>(&OrderUnitTest::testOrder))},
	{}
};

$ClassInfo _OrderUnitTest_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"OrderUnitTest",
	"java.lang.Object",
	nullptr,
	nullptr,
	_OrderUnitTest_MethodInfo_
};

$Object* allocate$OrderUnitTest($Class* clazz) {
	return $of($alloc(OrderUnitTest));
}

void OrderUnitTest::init$() {
}

void OrderUnitTest::main($StringArray* args) {
	$load($Case1B);
	testOrder($Case1B::class$);
	$load($Case2B);
	testOrder($Case2B::class$);
}

void OrderUnitTest::testOrder($AnnotatedElement* e) {
	$useLocalCurrentObjectStackCache();
	$var($AnnotationArray, decl, $nc(e)->getDeclaredAnnotations());
	$load($Foo4OrderUnitTest);
	$var($Foo4OrderUnitTestArray, declByType, $fcast($Foo4OrderUnitTestArray, e->getDeclaredAnnotationsByType($Foo4OrderUnitTest::class$)));
	bool var$0 = $instanceOf($Foo4OrderUnitTest, $nc(decl)->get(0)) != $nc($nc(declByType)->get(0))->isDirect();
	if (var$0 || $instanceOf($Foo4OrderUnitTest, $nc(decl)->get(1)) != $nc($nc(declByType)->get(1))->isDirect()) {
		$throwNew($RuntimeException, "Order of directly / indirectly present annotations from getDeclaredAnnotationsByType does not match order from getDeclaredAnnotations."_s);
	}
}

OrderUnitTest::OrderUnitTest() {
}

$Class* OrderUnitTest::load$($String* name, bool initialize) {
	$loadClass(OrderUnitTest, name, initialize, &_OrderUnitTest_ClassInfo_, allocate$OrderUnitTest);
	return class$;
}

$Class* OrderUnitTest::class$ = nullptr;