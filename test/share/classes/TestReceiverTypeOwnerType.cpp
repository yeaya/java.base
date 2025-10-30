#include <TestReceiverTypeOwnerType.h>

#include <TestReceiverTypeOwnerType$GenericInner.h>
#include <TestReceiverTypeOwnerType$Inner.h>
#include <java/lang/AssertionError.h>
#include <java/lang/reflect/AnnotatedParameterizedType.h>
#include <java/lang/reflect/AnnotatedType.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $TestReceiverTypeOwnerType$GenericInner = ::TestReceiverTypeOwnerType$GenericInner;
using $TestReceiverTypeOwnerType$Inner = ::TestReceiverTypeOwnerType$Inner;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AnnotatedParameterizedType = ::java::lang::reflect::AnnotatedParameterizedType;
using $AnnotatedType = ::java::lang::reflect::AnnotatedType;
using $Executable = ::java::lang::reflect::Executable;
using $Method = ::java::lang::reflect::Method;

$MethodInfo _TestReceiverTypeOwnerType_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TestReceiverTypeOwnerType::*)()>(&TestReceiverTypeOwnerType::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&TestReceiverTypeOwnerType::main)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _TestReceiverTypeOwnerType_InnerClassesInfo_[] = {
	{"TestReceiverTypeOwnerType$GenericInner", "TestReceiverTypeOwnerType", "GenericInner", $PUBLIC | $STATIC},
	{"TestReceiverTypeOwnerType$Inner", "TestReceiverTypeOwnerType", "Inner", $PUBLIC | $STATIC},
	{"TestReceiverTypeOwnerType$Nested", "TestReceiverTypeOwnerType", "Nested", $PUBLIC},
	{}
};

$ClassInfo _TestReceiverTypeOwnerType_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"TestReceiverTypeOwnerType",
	"java.lang.Object",
	nullptr,
	nullptr,
	_TestReceiverTypeOwnerType_MethodInfo_,
	"<T:Ljava/lang/Object;>Ljava/lang/Object;",
	nullptr,
	_TestReceiverTypeOwnerType_InnerClassesInfo_,
	nullptr,
	nullptr,
	"TestReceiverTypeOwnerType$GenericInner,TestReceiverTypeOwnerType$Inner,TestReceiverTypeOwnerType$Nested"
};

$Object* allocate$TestReceiverTypeOwnerType($Class* clazz) {
	return $of($alloc(TestReceiverTypeOwnerType));
}

void TestReceiverTypeOwnerType::init$() {
}

void TestReceiverTypeOwnerType::main($StringArray* args) {
	$load(TestReceiverTypeOwnerType);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($AnnotatedType, nested, $nc($($Class::forName($$str({$(TestReceiverTypeOwnerType::class$->getTypeName()), "$Nested"_s}))->getMethod("method"_s, $$new($ClassArray, 0))))->getAnnotatedReceiverType());
	if (!($instanceOf($AnnotatedParameterizedType, nested))) {
		$throwNew($AssertionError);
	} else if (!($instanceOf($AnnotatedParameterizedType, $($nc(nested)->getAnnotatedOwnerType())))) {
		$throwNew($AssertionError);
	}
	$load($TestReceiverTypeOwnerType$Inner);
	$var($AnnotatedType, inner, $nc($($TestReceiverTypeOwnerType$Inner::class$->getMethod("method"_s, $$new($ClassArray, 0))))->getAnnotatedReceiverType());
	if ($instanceOf($AnnotatedParameterizedType, inner)) {
		$throwNew($AssertionError);
	} else if ($instanceOf($AnnotatedParameterizedType, $($nc(inner)->getAnnotatedOwnerType()))) {
		$throwNew($AssertionError);
	}
	$load($TestReceiverTypeOwnerType$GenericInner);
	$var($AnnotatedType, nestedInner, $nc($($TestReceiverTypeOwnerType$GenericInner::class$->getMethod("method"_s, $$new($ClassArray, 0))))->getAnnotatedReceiverType());
	if (!($instanceOf($AnnotatedParameterizedType, nestedInner))) {
		$throwNew($AssertionError);
	} else if ($instanceOf($AnnotatedParameterizedType, $($nc(nestedInner)->getAnnotatedOwnerType()))) {
		$throwNew($AssertionError);
	}
}

TestReceiverTypeOwnerType::TestReceiverTypeOwnerType() {
}

$Class* TestReceiverTypeOwnerType::load$($String* name, bool initialize) {
	$loadClass(TestReceiverTypeOwnerType, name, initialize, &_TestReceiverTypeOwnerType_ClassInfo_, allocate$TestReceiverTypeOwnerType);
	return class$;
}

$Class* TestReceiverTypeOwnerType::class$ = nullptr;