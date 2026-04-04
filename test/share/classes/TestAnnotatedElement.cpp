#include <TestAnnotatedElement.h>
#include <java/lang/SuppressWarnings.h>
#include <java/lang/annotation/Annotation.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/lang/reflect/TypeVariable.h>
#include <jcpp.h>

using $TypeVariableArray = $Array<::java::lang::reflect::TypeVariable>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $RuntimeException = ::java::lang::RuntimeException;
using $SuppressWarnings = ::java::lang::SuppressWarnings;
using $TypeVariable = ::java::lang::reflect::TypeVariable;

$Object* TestAnnotatedElement::m(Object$* b) {
	return nullptr;
}

void TestAnnotatedElement::init$() {
}

void TestAnnotatedElement::main($StringArray* argv) {
	$useLocalObjectStack();
	$load(TestAnnotatedElement);
	$beforeCallerSensitive();
	int32_t errors = 0;
	$Class* clazz = TestAnnotatedElement::class$;
	errors += testTypeVariable($(clazz->getTypeParameters()));
	errors += testTypeVariable($($$nc(clazz->getDeclaredConstructor($$new($ClassArray, 0)))->getTypeParameters()));
	errors += testTypeVariable($($$nc(clazz->getDeclaredMethod("m"_s, $$new($ClassArray, {$Object::class$})))->getTypeParameters()));
	if (errors > 0) {
		$throwNew($RuntimeException, $$str({$$str(errors), " failures"_s}));
	}
}

int32_t TestAnnotatedElement::testTypeVariable($TypeVariableArray* typeVars) {
	$useLocalObjectStack();
	int32_t errors = 0;
	if ($nc(typeVars)->length == 0) {
		return ++errors;
	}
	{
		$var($TypeVariableArray, arr$, typeVars);
		for (int32_t len$ = arr$->length, i$ = 0; i$ < len$; ++i$) {
			$var($TypeVariable, typeVar, arr$->get(i$));
			{
				try {
					$nc(typeVar)->getAnnotation(nullptr);
					++errors;
				} catch ($NullPointerException& npe) {
					;
				}
				$load($SuppressWarnings);
				if ($nc(typeVar)->getAnnotation($SuppressWarnings::class$) != nullptr) {
					++errors;
				}
				try {
					typeVar->isAnnotationPresent(nullptr);
					++errors;
				} catch ($NullPointerException& npe) {
					;
				}
				if (typeVar->isAnnotationPresent($SuppressWarnings::class$)) {
					++errors;
				}
				if ($nc($(typeVar->getAnnotations()))->length != 0) {
					++errors;
				}
				if ($nc($(typeVar->getDeclaredAnnotations()))->length != 0) {
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
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", "<C:Ljava/lang/Object;>()V", $PRIVATE, $method(TestAnnotatedElement, init$, void)},
		{"m", "(Ljava/lang/Object;)Ljava/lang/Object;", "<B:Ljava/lang/Object;>(TB;)TB;", $PRIVATE | $STATIC, $staticMethod(TestAnnotatedElement, m, $Object*, Object$*)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC | $TRANSIENT, $staticMethod(TestAnnotatedElement, main, void, $StringArray*), "java.lang.ReflectiveOperationException"},
		{"testTypeVariable", "([Ljava/lang/reflect/TypeVariable;)I", "([Ljava/lang/reflect/TypeVariable<*>;)I", $PRIVATE | $STATIC, $staticMethod(TestAnnotatedElement, testTypeVariable, int32_t, $TypeVariableArray*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"TestAnnotatedElement",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		"<A:Ljava/lang/Object;>Ljava/lang/Object;"
	};
	$loadClass(TestAnnotatedElement, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestAnnotatedElement);
	});
	return class$;
}

$Class* TestAnnotatedElement::class$ = nullptr;