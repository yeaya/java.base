#include <StringsAndBounds.h>
#include <A$B.h>
#include <A.h>
#include <Test.h>
#include <java/lang/reflect/Method.h>
#include <java/lang/reflect/Type.h>
#include <java/lang/reflect/WildcardType.h>
#include <jcpp.h>

using $A$B = ::A$B;
using $Test = ::Test;
using $MethodArray = $Array<::java::lang::reflect::Method>;
using $TypeArray = $Array<::java::lang::reflect::Type>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $Method = ::java::lang::reflect::Method;
using $Type = ::java::lang::reflect::Type;
using $WildcardType = ::java::lang::reflect::WildcardType;

void StringsAndBounds::init$() {
}

void StringsAndBounds::f($A$B* x) {
}

void StringsAndBounds::g(Object$* a) {
	return;
}

void StringsAndBounds::scanner($Class* clazz) {
	$useLocalObjectStack();
	$load(StringsAndBounds);
	$beforeCallerSensitive();
	$nc($System::out)->println($$str({"\n\nScanning "_s, $($nc(clazz)->getName())}));
	{
		$var($ClassArray, arr$, clazz->getDeclaredClasses());
		for (int32_t len$ = arr$->length, i$ = 0; i$ < len$; ++i$) {
			$Class* c = arr$->get(i$);
			{
				scanner(c);
			}
		}
	}
	{
		$var($MethodArray, arr$, clazz->getDeclaredMethods());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($Method, m, arr$->get(i$));
			{
				$System::out->println($$str({"\nMethod:\t"_s, $($nc(m)->toString())}));
				$System::out->println($$str({"\tReturn Type: "_s, $($$nc(m->getGenericReturnType())->toString())}));
				{
					$var($TypeArray, arr$, m->getGenericParameterTypes());
					for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
						$var($Type, p, arr$->get(i$));
						{
							if ($instanceOf($WildcardType, p)) {
								$var($TypeArray, upperBounds, $cast($WildcardType, p)->getUpperBounds());
								if ($nc(upperBounds)->length < 1 || upperBounds->get(0) == nullptr) {
									$throwNew($RuntimeException, $$str({"Malformed upper bounds: "_s, p}));
								}
							}
							$System::out->println($$str({"\tParameter: "_s, $($nc(p)->toString())}));
						}
					}
				}
			}
		}
	}
}

void StringsAndBounds::main($StringArray* argv) {
	$load(StringsAndBounds);
	scanner(StringsAndBounds::class$);
	$load($A$B);
	scanner($A$B::class$);
	$load($Test);
	scanner($Test::class$);
}

StringsAndBounds::StringsAndBounds() {
}

$Class* StringsAndBounds::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(StringsAndBounds, init$, void)},
		{"f", "(LA$B;)V", "(LA<Ljava/lang/String;>.B<Ljava/lang/Integer;>;)V", $PUBLIC, $virtualMethod(StringsAndBounds, f, void, $A$B*)},
		{"g", "(Ljava/lang/Object;)V", "<T:Ljava/lang/Object;>(TT;)V", $PUBLIC, $virtualMethod(StringsAndBounds, g, void, Object$*)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(StringsAndBounds, main, void, $StringArray*), "java.lang.Exception"},
		{"scanner", "(Ljava/lang/Class;)V", nullptr, $STATIC, $staticMethod(StringsAndBounds, scanner, void, $Class*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"StringsAndBounds",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(StringsAndBounds, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(StringsAndBounds);
	});
	return class$;
}

$Class* StringsAndBounds::class$ = nullptr;