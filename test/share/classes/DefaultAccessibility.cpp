#include <DefaultAccessibility.h>
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
using $Constructor = ::java::lang::reflect::Constructor;
using $Field = ::java::lang::reflect::Field;
using $Method = ::java::lang::reflect::Method;

int32_t DefaultAccessibility::f = 0;

void DefaultAccessibility::init$() {
}

void DefaultAccessibility::main($StringArray* args) {
	$init(DefaultAccessibility);
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$Class* daClass = ($$new(DefaultAccessibility))->getClass();
	int32_t elementCount = 0;
	{
		$var($ConstructorArray, arr$, daClass->getDeclaredConstructors());
		for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
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
		for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
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
		for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
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

void DefaultAccessibility::clinit$($Class* clazz) {
	DefaultAccessibility::f = 42;
}

DefaultAccessibility::DefaultAccessibility() {
}

$Class* DefaultAccessibility::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"f", "I", nullptr, $PRIVATE | $STATIC, $staticField(DefaultAccessibility, f)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(DefaultAccessibility, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC | $TRANSIENT, $staticMethod(DefaultAccessibility, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"DefaultAccessibility",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(DefaultAccessibility, name, initialize, &classInfo$$, DefaultAccessibility::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(DefaultAccessibility);
	});
	return class$;
}

$Class* DefaultAccessibility::class$ = nullptr;