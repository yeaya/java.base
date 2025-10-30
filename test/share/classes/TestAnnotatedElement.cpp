#include <TestAnnotatedElement.h>

#include <java/lang/SuppressWarnings.h>
#include <java/lang/annotation/Annotation.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/lang/reflect/TypeVariable.h>
#include <jcpp.h>

using $AnnotationArray = $Array<::java::lang::annotation::Annotation>;
using $TypeVariableArray = $Array<::java::lang::reflect::TypeVariable>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $RuntimeException = ::java::lang::RuntimeException;
using $SuppressWarnings = ::java::lang::SuppressWarnings;
using $Annotation = ::java::lang::annotation::Annotation;
using $AnnotatedElement = ::java::lang::reflect::AnnotatedElement;
using $Constructor = ::java::lang::reflect::Constructor;
using $Method = ::java::lang::reflect::Method;
using $TypeVariable = ::java::lang::reflect::TypeVariable;

$MethodInfo _TestAnnotatedElement_MethodInfo_[] = {
	{"<init>", "()V", "<C:Ljava/lang/Object;>()V", $PRIVATE, $method(static_cast<void(TestAnnotatedElement::*)()>(&TestAnnotatedElement::init$))},
	{"m", "(Ljava/lang/Object;)Ljava/lang/Object;", "<B:Ljava/lang/Object;>(TB;)TB;", $PRIVATE | $STATIC, $method(static_cast<$Object*(*)(Object$*)>(&TestAnnotatedElement::m))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC | $TRANSIENT, $method(static_cast<void(*)($StringArray*)>(&TestAnnotatedElement::main)), "java.lang.ReflectiveOperationException"},
	{"testTypeVariable", "([Ljava/lang/reflect/TypeVariable;)I", "([Ljava/lang/reflect/TypeVariable<*>;)I", $PRIVATE | $STATIC, $method(static_cast<int32_t(*)($TypeVariableArray*)>(&TestAnnotatedElement::testTypeVariable))},
	{}
};

$ClassInfo _TestAnnotatedElement_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"TestAnnotatedElement",
	"java.lang.Object",
	nullptr,
	nullptr,
	_TestAnnotatedElement_MethodInfo_,
	"<A:Ljava/lang/Object;>Ljava/lang/Object;"
};

$Object* allocate$TestAnnotatedElement($Class* clazz) {
	return $of($alloc(TestAnnotatedElement));
}

$Object* TestAnnotatedElement::m(Object$* b) {
	return $of(nullptr);
}

void TestAnnotatedElement::init$() {
}

void TestAnnotatedElement::main($StringArray* argv) {
	$load(TestAnnotatedElement);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	int32_t errors = 0;
	$Class* clazz = TestAnnotatedElement::class$;
	errors += testTypeVariable($($nc(clazz)->getTypeParameters()));
	errors += testTypeVariable($($nc($($nc(clazz)->getDeclaredConstructor($$new($ClassArray, 0))))->getTypeParameters()));
	errors += testTypeVariable($($nc($($nc(clazz)->getDeclaredMethod("m"_s, $$new($ClassArray, {$Object::class$}))))->getTypeParameters()));
	if (errors > 0) {
		$throwNew($RuntimeException, $$str({$$str(errors), " failures"_s}));
	}
}

int32_t TestAnnotatedElement::testTypeVariable($TypeVariableArray* typeVars) {
	$useLocalCurrentObjectStackCache();
	int32_t errors = 0;
	if ($nc(typeVars)->length == 0) {
		return ++errors;
	}
	{
		$var($TypeVariableArray, arr$, typeVars);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($TypeVariable, typeVar, arr$->get(i$));
			{
				try {
					$nc(typeVar)->getAnnotation(nullptr);
					++errors;
				} catch ($NullPointerException& npe) {
				}
				$load($SuppressWarnings);
				if ($nc(typeVar)->getAnnotation($SuppressWarnings::class$) != nullptr) {
					++errors;
				}
				try {
					$nc(typeVar)->isAnnotationPresent(nullptr);
					++errors;
				} catch ($NullPointerException& npe) {
				}
				if ($nc(typeVar)->isAnnotationPresent($SuppressWarnings::class$)) {
					++errors;
				}
				if ($nc($($nc(typeVar)->getAnnotations()))->length != 0) {
					++errors;
				}
				if ($nc($($nc(typeVar)->getDeclaredAnnotations()))->length != 0) {
					++errors;
				}
			}
		}
	}
	return errors;
}

TestAnnotatedElement::TestAnnotatedElement() {
}

$Class* TestAnnotatedElement::load$($String* name, bool initialize) {
	$loadClass(TestAnnotatedElement, name, initialize, &_TestAnnotatedElement_ClassInfo_, allocate$TestAnnotatedElement);
	return class$;
}

$Class* TestAnnotatedElement::class$ = nullptr;