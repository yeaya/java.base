#include <IntegerMinValue.h>
#include <java/lang/IllegalStateException.h>
#include <jcpp.h>

#undef MIN_VALUE

using $ClassInfo = ::java::lang::ClassInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;

void IntegerMinValue::init$() {
}

void IntegerMinValue::test() {
	$useLocalObjectStack();
	int32_t i = $Integer::MIN_VALUE;
	$var($String, s, $str({""_s, $$str(i)}));
	if (!"-2147483648"_s->equals(s)) {
		$throwNew($IllegalStateException, $$str({"Failed: "_s, s}));
	}
	$nc($System::out)->println(s);
}

void IntegerMinValue::main($StringArray* strArr) {
	$var(IntegerMinValue, t, $new(IntegerMinValue));
	for (int32_t i = 0; i < 100000; ++i) {
		t->test();
	}
}

IntegerMinValue::IntegerMinValue() {
}

$Class* IntegerMinValue::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(IntegerMinValue, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(IntegerMinValue, main, void, $StringArray*)},
		{"test", "()V", nullptr, $PUBLIC, $virtualMethod(IntegerMinValue, test, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"IntegerMinValue",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(IntegerMinValue, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(IntegerMinValue);
	});
	return class$;
}

$Class* IntegerMinValue::class$ = nullptr;