#include <EnclosingMethodTests.h>
#include <EnclosingMethodTests$1.h>
#include <EnclosingMethodTests$1Local.h>
#include <EnclosingMethodTests$1StaticLocal.h>
#include <MethodDescriptor.h>
#include <java/lang/Cloneable.h>
#include <java/lang/annotation/Annotation.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $EnclosingMethodTests$1 = ::EnclosingMethodTests$1;
using $EnclosingMethodTests$1Local = ::EnclosingMethodTests$1Local;
using $EnclosingMethodTests$1StaticLocal = ::EnclosingMethodTests$1StaticLocal;
using $MethodDescriptor = ::MethodDescriptor;
using $ClassInfo = ::java::lang::ClassInfo;
using $Cloneable = ::java::lang::Cloneable;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $RuntimeException = ::java::lang::RuntimeException;
using $Method = ::java::lang::reflect::Method;

$Class* EnclosingMethodTests::anonymousClass = nullptr;

void EnclosingMethodTests::init$() {
}

$Class* EnclosingMethodTests::getLocalClass(Object$* o) {
	{
	}
	;
	$var($EnclosingMethodTests$1Local, l, $new($EnclosingMethodTests$1Local, this));
	return l->getClass();
}

int32_t EnclosingMethodTests::examine($Class* enclosedClass, $String* methodSig) {
	$init(EnclosingMethodTests);
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$var($Method, m, $nc(enclosedClass)->getEnclosingMethod());
	if (m == nullptr && methodSig == nullptr) {
		return 0;
	}
	$load($MethodDescriptor);
	if (m != nullptr && $$nc($$sure($MethodDescriptor, m->getAnnotation($MethodDescriptor::class$))->value())->equals(methodSig)) {
		return 0;
	} else {
		$nc($System::err)->println($$str({"\nUnexpected method value; expected:\t"_s, methodSig, "\ngot:\t"_s, m}));
		return 1;
	}
}

void EnclosingMethodTests::main($StringArray* argv) {
	$init(EnclosingMethodTests);
	int32_t failures = 0;
	{
	}
	;
	$load($EnclosingMethodTests$1StaticLocal);
	failures += examine($EnclosingMethodTests$1StaticLocal::class$, "public static void EnclosingMethodTests.main(java.lang.String[])"_s);
	failures += examine(($$new(EnclosingMethodTests))->getLocalClass(nullptr), "java.lang.Class EnclosingMethodTests.getLocalClass(Object o)"_s);
	failures += examine(EnclosingMethodTests::class$, nullptr);
	failures += examine(EnclosingMethodTests::anonymousClass, nullptr);
	if (failures > 0) {
		$throwNew($RuntimeException, "Test failed."_s);
	}
}

void EnclosingMethodTests::clinit$($Class* clazz) {
	{
		$var($Cloneable, c, $new($EnclosingMethodTests$1));
		$assignStatic(EnclosingMethodTests::anonymousClass, c->getClass());
	}
}

EnclosingMethodTests::EnclosingMethodTests() {
}

$Class* EnclosingMethodTests::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"anonymousClass", "Ljava/lang/Class;", "Ljava/lang/Class<*>;", $STATIC, $staticField(EnclosingMethodTests, anonymousClass)},
		{}
	};
	$NamedAttribute getLocalClassmethodAnnotations$$$namedAttribute[] = {
		{"value", 's', "java.lang.Class EnclosingMethodTests.getLocalClass(Object o)"},
		{}
	};
	$CompoundAttribute getLocalClassmethodAnnotations$$[] = {
		{"LMethodDescriptor;", getLocalClassmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute mainmethodAnnotations$$$namedAttribute[] = {
		{"value", 's', "public static void EnclosingMethodTests.main(java.lang.String[])"},
		{}
	};
	$CompoundAttribute mainmethodAnnotations$$[] = {
		{"LMethodDescriptor;", mainmethodAnnotations$$$namedAttribute},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(EnclosingMethodTests, init$, void)},
		{"examine", "(Ljava/lang/Class;Ljava/lang/String;)I", nullptr, $STATIC, $staticMethod(EnclosingMethodTests, examine, int32_t, $Class*, $String*)},
		{"getLocalClass", "(Ljava/lang/Object;)Ljava/lang/Class;", nullptr, 0, $virtualMethod(EnclosingMethodTests, getLocalClass, $Class*, Object$*), nullptr, nullptr, getLocalClassmethodAnnotations$$},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(EnclosingMethodTests, main, void, $StringArray*), nullptr, nullptr, mainmethodAnnotations$$},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"EnclosingMethodTests$1StaticLocal", nullptr, "StaticLocal", 0},
		{"EnclosingMethodTests$1Local", nullptr, "Local", 0},
		{"EnclosingMethodTests$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"EnclosingMethodTests",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"EnclosingMethodTests$1StaticLocal,EnclosingMethodTests$1Local,EnclosingMethodTests$1"
	};
	$loadClass(EnclosingMethodTests, name, initialize, &classInfo$$, EnclosingMethodTests::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(EnclosingMethodTests);
	});
	return class$;
}

$Class* EnclosingMethodTests::class$ = nullptr;