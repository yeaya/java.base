#include <EnclosingConstructorTests.h>
#include <ConstructorDescriptor.h>
#include <EnclosingConstructorTests$1.h>
#include <EnclosingConstructorTests$1Local.h>
#include <EnclosingConstructorTests$1StaticLocal.h>
#include <EnclosingConstructorTests$2Local.h>
#include <java/lang/Cloneable.h>
#include <java/lang/annotation/Annotation.h>
#include <java/lang/reflect/Constructor.h>
#include <jcpp.h>

using $ConstructorDescriptor = ::ConstructorDescriptor;
using $EnclosingConstructorTests$1 = ::EnclosingConstructorTests$1;
using $EnclosingConstructorTests$1Local = ::EnclosingConstructorTests$1Local;
using $EnclosingConstructorTests$1StaticLocal = ::EnclosingConstructorTests$1StaticLocal;
using $EnclosingConstructorTests$2Local = ::EnclosingConstructorTests$2Local;
using $ClassInfo = ::java::lang::ClassInfo;
using $Cloneable = ::java::lang::Cloneable;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $RuntimeException = ::java::lang::RuntimeException;
using $Constructor = ::java::lang::reflect::Constructor;

$Class* EnclosingConstructorTests::anonymousClass = nullptr;
$Class* EnclosingConstructorTests::localClass = nullptr;
$Class* EnclosingConstructorTests::anotherLocalClass = nullptr;

void EnclosingConstructorTests::init$() {
	{
	}
	;
	$var($EnclosingConstructorTests$1Local, l, $new($EnclosingConstructorTests$1Local, this));
	$assignStatic(EnclosingConstructorTests::localClass, l->getClass());
}

void EnclosingConstructorTests::init$(int32_t i) {
	{
	}
	;
	$var($EnclosingConstructorTests$2Local, l, $new($EnclosingConstructorTests$2Local, this));
	$assignStatic(EnclosingConstructorTests::anotherLocalClass, l->getClass());
}

int32_t EnclosingConstructorTests::examine($Class* enclosedClass, $String* constructorSig) {
	$init(EnclosingConstructorTests);
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$var($Constructor, c, $nc(enclosedClass)->getEnclosingConstructor());
	if (c == nullptr && constructorSig == nullptr) {
		return 0;
	}
	$load($ConstructorDescriptor);
	if (c != nullptr && $$nc($$sure($ConstructorDescriptor, c->getAnnotation($ConstructorDescriptor::class$))->value())->equals(constructorSig)) {
		return 0;
	} else {
		$nc($System::err)->println($$str({"\nUnexpected constructor value; expected:\t"_s, constructorSig, "\ngot:\t"_s, c}));
		return 1;
	}
}

void EnclosingConstructorTests::main($StringArray* argv) {
	$init(EnclosingConstructorTests);
	int32_t failures = 0;
	{
	}
	;
	$var(EnclosingConstructorTests, ect, $new(EnclosingConstructorTests));
	$assign(ect, $new(EnclosingConstructorTests, 5));
	$load($EnclosingConstructorTests$1StaticLocal);
	failures += examine($EnclosingConstructorTests$1StaticLocal::class$, nullptr);
	failures += examine(EnclosingConstructorTests::localClass, "EnclosingConstructorTests()"_s);
	failures += examine(EnclosingConstructorTests::anotherLocalClass, "private EnclosingConstructorTests(int)"_s);
	failures += examine(EnclosingConstructorTests::anonymousClass, nullptr);
	if (failures > 0) {
		$throwNew($RuntimeException, "Test failed."_s);
	}
}

void EnclosingConstructorTests::clinit$($Class* clazz) {
	{
		$var($Cloneable, c, $new($EnclosingConstructorTests$1));
		$assignStatic(EnclosingConstructorTests::anonymousClass, c->getClass());
	}
}

EnclosingConstructorTests::EnclosingConstructorTests() {
}

$Class* EnclosingConstructorTests::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"anonymousClass", "Ljava/lang/Class;", "Ljava/lang/Class<*>;", $STATIC, $staticField(EnclosingConstructorTests, anonymousClass)},
		{"localClass", "Ljava/lang/Class;", "Ljava/lang/Class<*>;", $STATIC, $staticField(EnclosingConstructorTests, localClass)},
		{"anotherLocalClass", "Ljava/lang/Class;", "Ljava/lang/Class<*>;", $STATIC, $staticField(EnclosingConstructorTests, anotherLocalClass)},
		{}
	};
	$NamedAttribute init$methodAnnotations$$$namedAttribute[] = {
		{"value", 's', "EnclosingConstructorTests()"},
		{}
	};
	$CompoundAttribute init$methodAnnotations$$[] = {
		{"LConstructorDescriptor;", init$methodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute init$methodAnnotations$$$1$namedAttribute[] = {
		{"value", 's', "private EnclosingConstructorTests(int)"},
		{}
	};
	$CompoundAttribute init$methodAnnotations$$$1[] = {
		{"LConstructorDescriptor;", init$methodAnnotations$$$1$namedAttribute},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(EnclosingConstructorTests, init$, void), nullptr, nullptr, init$methodAnnotations$$},
		{"<init>", "(I)V", nullptr, $PRIVATE, $method(EnclosingConstructorTests, init$, void, int32_t), nullptr, nullptr, init$methodAnnotations$$$1},
		{"examine", "(Ljava/lang/Class;Ljava/lang/String;)I", "(Ljava/lang/Class<*>;Ljava/lang/String;)I", $STATIC, $staticMethod(EnclosingConstructorTests, examine, int32_t, $Class*, $String*)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(EnclosingConstructorTests, main, void, $StringArray*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"EnclosingConstructorTests$1StaticLocal", nullptr, "StaticLocal", 0},
		{"EnclosingConstructorTests$2Local", nullptr, "Local", 0},
		{"EnclosingConstructorTests$1Local", nullptr, "Local", 0},
		{"EnclosingConstructorTests$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"EnclosingConstructorTests",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"EnclosingConstructorTests$1StaticLocal,EnclosingConstructorTests$2Local,EnclosingConstructorTests$1Local,EnclosingConstructorTests$1"
	};
	$loadClass(EnclosingConstructorTests, name, initialize, &classInfo$$, EnclosingConstructorTests::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(EnclosingConstructorTests);
	});
	return class$;
}

$Class* EnclosingConstructorTests::class$ = nullptr;