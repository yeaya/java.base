#include <EnclosingMethodTests.h>

#include <EnclosingMethodTests$1.h>
#include <EnclosingMethodTests$1Local.h>
#include <EnclosingMethodTests$1StaticLocal.h>
#include <MethodDescriptor.h>
#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Cloneable.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NamedAttribute.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/annotation/Annotation.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $EnclosingMethodTests$1 = ::EnclosingMethodTests$1;
using $EnclosingMethodTests$1Local = ::EnclosingMethodTests$1Local;
using $EnclosingMethodTests$1StaticLocal = ::EnclosingMethodTests$1StaticLocal;
using $MethodDescriptor = ::MethodDescriptor;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Cloneable = ::java::lang::Cloneable;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $RuntimeException = ::java::lang::RuntimeException;
using $Annotation = ::java::lang::annotation::Annotation;
using $Method = ::java::lang::reflect::Method;

$NamedAttribute EnclosingMethodTests_Attribute_var$0[] = {
	{"value", 's', "java.lang.Class EnclosingMethodTests.getLocalClass(Object o)"},
	{}
};

$CompoundAttribute _EnclosingMethodTests_MethodAnnotations_getLocalClass2[] = {
	{"LMethodDescriptor;", EnclosingMethodTests_Attribute_var$0},
	{}
};

$NamedAttribute EnclosingMethodTests_Attribute_var$1[] = {
	{"value", 's', "public static void EnclosingMethodTests.main(java.lang.String[])"},
	{}
};

$CompoundAttribute _EnclosingMethodTests_MethodAnnotations_main3[] = {
	{"LMethodDescriptor;", EnclosingMethodTests_Attribute_var$1},
	{}
};

$FieldInfo _EnclosingMethodTests_FieldInfo_[] = {
	{"anonymousClass", "Ljava/lang/Class;", "Ljava/lang/Class<*>;", $STATIC, $staticField(EnclosingMethodTests, anonymousClass)},
	{}
};

$MethodInfo _EnclosingMethodTests_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(EnclosingMethodTests::*)()>(&EnclosingMethodTests::init$))},
	{"examine", "(Ljava/lang/Class;Ljava/lang/String;)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($Class*,$String*)>(&EnclosingMethodTests::examine))},
	{"getLocalClass", "(Ljava/lang/Object;)Ljava/lang/Class;", nullptr, 0, nullptr, nullptr, nullptr, _EnclosingMethodTests_MethodAnnotations_getLocalClass2},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&EnclosingMethodTests::main)), nullptr, nullptr, _EnclosingMethodTests_MethodAnnotations_main3},
	{}
};

$InnerClassInfo _EnclosingMethodTests_InnerClassesInfo_[] = {
	{"EnclosingMethodTests$1StaticLocal", nullptr, "StaticLocal", 0},
	{"EnclosingMethodTests$1Local", nullptr, "Local", 0},
	{"EnclosingMethodTests$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _EnclosingMethodTests_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"EnclosingMethodTests",
	"java.lang.Object",
	nullptr,
	_EnclosingMethodTests_FieldInfo_,
	_EnclosingMethodTests_MethodInfo_,
	nullptr,
	nullptr,
	_EnclosingMethodTests_InnerClassesInfo_,
	nullptr,
	nullptr,
	"EnclosingMethodTests$1StaticLocal,EnclosingMethodTests$1Local,EnclosingMethodTests$1"
};

$Object* allocate$EnclosingMethodTests($Class* clazz) {
	return $of($alloc(EnclosingMethodTests));
}

$Class* EnclosingMethodTests::anonymousClass = nullptr;

void EnclosingMethodTests::init$() {
}

$Class* EnclosingMethodTests::getLocalClass(Object$* o) {
	{
	}
	$var($EnclosingMethodTests$1Local, l, $new($EnclosingMethodTests$1Local, this));
	return $of(l)->getClass();
}

int32_t EnclosingMethodTests::examine($Class* enclosedClass, $String* methodSig) {
	$init(EnclosingMethodTests);
	$beforeCallerSensitive();
	$var($Method, m, $nc(enclosedClass)->getEnclosingMethod());
	if (m == nullptr && methodSig == nullptr) {
		return 0;
	}
	$load($MethodDescriptor);
	if (m != nullptr && $nc($($nc(($cast($MethodDescriptor, $(m->getAnnotation($MethodDescriptor::class$)))))->value()))->equals(methodSig)) {
		return 0;
	} else {
		$init($System);
		$nc($System::err)->println($$str({"\nUnexpected method value; expected:\t"_s, methodSig, "\ngot:\t"_s, m}));
		return 1;
	}
}

void EnclosingMethodTests::main($StringArray* argv) {
	$init(EnclosingMethodTests);
	int32_t failures = 0;
	{
	}
	$load($EnclosingMethodTests$1StaticLocal);
	failures += examine($EnclosingMethodTests$1StaticLocal::class$, "public static void EnclosingMethodTests.main(java.lang.String[])"_s);
	failures += examine(($$new(EnclosingMethodTests))->getLocalClass(nullptr), "java.lang.Class EnclosingMethodTests.getLocalClass(Object o)"_s);
	failures += examine(EnclosingMethodTests::class$, nullptr);
	failures += examine(EnclosingMethodTests::anonymousClass, nullptr);
	if (failures > 0) {
		$throwNew($RuntimeException, "Test failed."_s);
	}
}

void clinit$EnclosingMethodTests($Class* class$) {
	{
		$var($Cloneable, c, $new($EnclosingMethodTests$1));
		$assignStatic(EnclosingMethodTests::anonymousClass, $of(c)->getClass());
	}
}

EnclosingMethodTests::EnclosingMethodTests() {
}

$Class* EnclosingMethodTests::load$($String* name, bool initialize) {
	$loadClass(EnclosingMethodTests, name, initialize, &_EnclosingMethodTests_ClassInfo_, clinit$EnclosingMethodTests, allocate$EnclosingMethodTests);
	return class$;
}

$Class* EnclosingMethodTests::class$ = nullptr;