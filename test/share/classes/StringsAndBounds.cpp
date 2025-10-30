#include <StringsAndBounds.h>

#include <A$B.h>
#include <A.h>
#include <Test.h>
#include <java/lang/reflect/Method.h>
#include <java/lang/reflect/Type.h>
#include <java/lang/reflect/WildcardType.h>
#include <jcpp.h>

using $A = ::A;
using $A$B = ::A$B;
using $Test = ::Test;
using $MethodArray = $Array<::java::lang::reflect::Method>;
using $TypeArray = $Array<::java::lang::reflect::Type>;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $Method = ::java::lang::reflect::Method;
using $Type = ::java::lang::reflect::Type;
using $WildcardType = ::java::lang::reflect::WildcardType;

$MethodInfo _StringsAndBounds_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(StringsAndBounds::*)()>(&StringsAndBounds::init$))},
	{"f", "(LA$B;)V", "(LA<Ljava/lang/String;>.B<Ljava/lang/Integer;>;)V", $PUBLIC},
	{"g", "(Ljava/lang/Object;)V", "<T:Ljava/lang/Object;>(TT;)V", $PUBLIC},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&StringsAndBounds::main)), "java.lang.Exception"},
	{"scanner", "(Ljava/lang/Class;)V", nullptr, $STATIC, $method(static_cast<void(*)($Class*)>(&StringsAndBounds::scanner))},
	{}
};

$ClassInfo _StringsAndBounds_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"StringsAndBounds",
	"java.lang.Object",
	nullptr,
	nullptr,
	_StringsAndBounds_MethodInfo_
};

$Object* allocate$StringsAndBounds($Class* clazz) {
	return $of($alloc(StringsAndBounds));
}

void StringsAndBounds::init$() {
}

void StringsAndBounds::f($A$B* x) {
}

void StringsAndBounds::g(Object$* a) {
	return;
}

void StringsAndBounds::scanner($Class* clazz) {
	$load(StringsAndBounds);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$nc($System::out)->println($$str({"\n\nScanning "_s, $($nc(clazz)->getName())}));
	{
		$var($ClassArray, arr$, $nc(clazz)->getDeclaredClasses());
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
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
				$nc($System::out)->println($$str({"\nMethod:\t"_s, $($nc(m)->toString())}));
				$nc($System::out)->println($$str({"\tReturn Type: "_s, $($nc($of($($nc(m)->getGenericReturnType())))->toString())}));
				{
					$var($TypeArray, arr$, $nc(m)->getGenericParameterTypes());
					int32_t len$ = arr$->length;
					int32_t i$ = 0;
					for (; i$ < len$; ++i$) {
						$var($Type, p, arr$->get(i$));
						{
							if ($instanceOf($WildcardType, p)) {
								$var($TypeArray, upperBounds, $nc(($cast($WildcardType, p)))->getUpperBounds());
								if ($nc(upperBounds)->length < 1 || $nc(upperBounds)->get(0) == nullptr) {
									$throwNew($RuntimeException, $$str({"Malformed upper bounds: "_s, p}));
								}
							}
							$nc($System::out)->println($$str({"\tParameter: "_s, $($nc($of(p))->toString())}));
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
	$loadClass(StringsAndBounds, name, initialize, &_StringsAndBounds_ClassInfo_, allocate$StringsAndBounds);
	return class$;
}

$Class* StringsAndBounds::class$ = nullptr;