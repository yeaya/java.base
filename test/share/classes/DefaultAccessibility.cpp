#include <DefaultAccessibility.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Field.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ConstructorArray = $Array<::java::lang::reflect::Constructor>;
using $FieldArray = $Array<::java::lang::reflect::Field>;
using $MethodArray = $Array<::java::lang::reflect::Method>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $AccessibleObject = ::java::lang::reflect::AccessibleObject;
using $Constructor = ::java::lang::reflect::Constructor;
using $Field = ::java::lang::reflect::Field;
using $Method = ::java::lang::reflect::Method;

$FieldInfo _DefaultAccessibility_FieldInfo_[] = {
	{"f", "I", nullptr, $PRIVATE | $STATIC, $staticField(DefaultAccessibility, f)},
	{}
};

$MethodInfo _DefaultAccessibility_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(DefaultAccessibility::*)()>(&DefaultAccessibility::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC | $TRANSIENT, $method(static_cast<void(*)($StringArray*)>(&DefaultAccessibility::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _DefaultAccessibility_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"DefaultAccessibility",
	"java.lang.Object",
	nullptr,
	_DefaultAccessibility_FieldInfo_,
	_DefaultAccessibility_MethodInfo_
};

$Object* allocate$DefaultAccessibility($Class* clazz) {
	return $of($alloc(DefaultAccessibility));
}

int32_t DefaultAccessibility::f = 0;

void DefaultAccessibility::init$() {
}

void DefaultAccessibility::main($StringArray* args) {
	$init(DefaultAccessibility);
	$beforeCallerSensitive();
	$Class* daClass = $of(($$new(DefaultAccessibility)))->getClass();
	int32_t elementCount = 0;
	{
		$var($ConstructorArray, arr$, $nc(daClass)->getDeclaredConstructors());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($Constructor, ctor, arr$->get(i$));
			{
				++elementCount;
				if ($nc(ctor)->isAccessible()) {
					$throwNew($RuntimeException, $$str({"Unexpected accessibility for constructor "_s, ctor}));
				}
			}
		}
	}
	{
		$var($MethodArray, arr$, daClass->getDeclaredMethods());
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($Method, method, arr$->get(i$));
			{
				++elementCount;
				if ($nc(method)->isAccessible()) {
					$throwNew($RuntimeException, $$str({"Unexpected accessibility for method "_s, method}));
				}
			}
		}
	}
	{
		$var($FieldArray, arr$, daClass->getDeclaredFields());
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($Field, field, arr$->get(i$));
			{
				++elementCount;
				if ($nc(field)->isAccessible()) {
					$throwNew($RuntimeException, $$str({"Unexpected accessibility for field "_s, field}));
				}
			}
		}
	}
	if (elementCount < 3) {
		$throwNew($RuntimeException, $$str({"Expected at least three members; only found "_s, $$str(elementCount)}));
	}
}

void clinit$DefaultAccessibility($Class* class$) {
	DefaultAccessibility::f = 42;
}

DefaultAccessibility::DefaultAccessibility() {
}

$Class* DefaultAccessibility::load$($String* name, bool initialize) {
	$loadClass(DefaultAccessibility, name, initialize, &_DefaultAccessibility_ClassInfo_, clinit$DefaultAccessibility, allocate$DefaultAccessibility);
	return class$;
}

$Class* DefaultAccessibility::class$ = nullptr;