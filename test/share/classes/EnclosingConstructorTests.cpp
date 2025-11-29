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
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Cloneable = ::java::lang::Cloneable;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $RuntimeException = ::java::lang::RuntimeException;
using $Constructor = ::java::lang::reflect::Constructor;

$NamedAttribute EnclosingConstructorTests_Attribute_var$0[] = {
	{"value", 's', "EnclosingConstructorTests()"},
	{}
};

$CompoundAttribute _EnclosingConstructorTests_MethodAnnotations_init$0[] = {
	{"LConstructorDescriptor;", EnclosingConstructorTests_Attribute_var$0},
	{}
};

$NamedAttribute EnclosingConstructorTests_Attribute_var$1[] = {
	{"value", 's', "private EnclosingConstructorTests(int)"},
	{}
};

$CompoundAttribute _EnclosingConstructorTests_MethodAnnotations_init$1[] = {
	{"LConstructorDescriptor;", EnclosingConstructorTests_Attribute_var$1},
	{}
};

$FieldInfo _EnclosingConstructorTests_FieldInfo_[] = {
	{"anonymousClass", "Ljava/lang/Class;", "Ljava/lang/Class<*>;", $STATIC, $staticField(EnclosingConstructorTests, anonymousClass)},
	{"localClass", "Ljava/lang/Class;", "Ljava/lang/Class<*>;", $STATIC, $staticField(EnclosingConstructorTests, localClass)},
	{"anotherLocalClass", "Ljava/lang/Class;", "Ljava/lang/Class<*>;", $STATIC, $staticField(EnclosingConstructorTests, anotherLocalClass)},
	{}
};

$MethodInfo _EnclosingConstructorTests_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(EnclosingConstructorTests::*)()>(&EnclosingConstructorTests::init$)), nullptr, nullptr, _EnclosingConstructorTests_MethodAnnotations_init$0},
	{"<init>", "(I)V", nullptr, $PRIVATE, $method(static_cast<void(EnclosingConstructorTests::*)(int32_t)>(&EnclosingConstructorTests::init$)), nullptr, nullptr, _EnclosingConstructorTests_MethodAnnotations_init$1},
	{"examine", "(Ljava/lang/Class;Ljava/lang/String;)I", "(Ljava/lang/Class<*>;Ljava/lang/String;)I", $STATIC, $method(static_cast<int32_t(*)($Class*,$String*)>(&EnclosingConstructorTests::examine))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&EnclosingConstructorTests::main))},
	{}
};

$InnerClassInfo _EnclosingConstructorTests_InnerClassesInfo_[] = {
	{"EnclosingConstructorTests$1StaticLocal", nullptr, "StaticLocal", 0},
	{"EnclosingConstructorTests$2Local", nullptr, "Local", 0},
	{"EnclosingConstructorTests$1Local", nullptr, "Local", 0},
	{"EnclosingConstructorTests$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _EnclosingConstructorTests_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"EnclosingConstructorTests",
	"java.lang.Object",
	nullptr,
	_EnclosingConstructorTests_FieldInfo_,
	_EnclosingConstructorTests_MethodInfo_,
	nullptr,
	nullptr,
	_EnclosingConstructorTests_InnerClassesInfo_,
	nullptr,
	nullptr,
	"EnclosingConstructorTests$1StaticLocal,EnclosingConstructorTests$2Local,EnclosingConstructorTests$1Local,EnclosingConstructorTests$1"
};

$Object* allocate$EnclosingConstructorTests($Class* clazz) {
	return $of($alloc(EnclosingConstructorTests));
}

$Class* EnclosingConstructorTests::anonymousClass = nullptr;
$Class* EnclosingConstructorTests::localClass = nullptr;
$Class* EnclosingConstructorTests::anotherLocalClass = nullptr;

void EnclosingConstructorTests::init$() {
	{
	}
	$var($EnclosingConstructorTests$1Local, l, $new($EnclosingConstructorTests$1Local, this));
	$assignStatic(EnclosingConstructorTests::localClass, $of(l)->getClass());
}

void EnclosingConstructorTests::init$(int32_t i) {
	{
	}
	$var($EnclosingConstructorTests$2Local, l, $new($EnclosingConstructorTests$2Local, this));
	$assignStatic(EnclosingConstructorTests::anotherLocalClass, $of(l)->getClass());
}

int32_t EnclosingConstructorTests::examine($Class* enclosedClass, $String* constructorSig) {
	$init(EnclosingConstructorTests);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($Constructor, c, $nc(enclosedClass)->getEnclosingConstructor());
	if (c == nullptr && constructorSig == nullptr) {
		return 0;
	}
	$load($ConstructorDescriptor);
	if (c != nullptr && $nc($($nc(($cast($ConstructorDescriptor, $(c->getAnnotation($ConstructorDescriptor::class$)))))->value()))->equals(constructorSig)) {
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

void clinit$EnclosingConstructorTests($Class* class$) {
	{
		$var($Cloneable, c, $new($EnclosingConstructorTests$1));
		$assignStatic(EnclosingConstructorTests::anonymousClass, $of(c)->getClass());
	}
}

EnclosingConstructorTests::EnclosingConstructorTests() {
}

$Class* EnclosingConstructorTests::load$($String* name, bool initialize) {
	$loadClass(EnclosingConstructorTests, name, initialize, &_EnclosingConstructorTests_ClassInfo_, clinit$EnclosingConstructorTests, allocate$EnclosingConstructorTests);
	return class$;
}

$Class* EnclosingConstructorTests::class$ = nullptr;