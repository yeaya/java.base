#include <DateFormatSymbolsCloneTest.h>
#include <java/text/DateFormatSymbols.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $DateFormatSymbols = ::java::text::DateFormatSymbols;

void DateFormatSymbolsCloneTest::init$() {
	$DateFormatSymbols::init$();
	this->value = 1;
}

$Object* DateFormatSymbolsCloneTest::clone() {
	if (this->value == 0) {
		$throwNew($RuntimeException, "clone() should not be called from a DateFormatSymbols constructor"_s);
	}
	return $DateFormatSymbols::clone();
}

void DateFormatSymbolsCloneTest::main($StringArray* args) {
	$init(DateFormatSymbolsCloneTest);
	$new(DateFormatSymbolsCloneTest);
}

DateFormatSymbolsCloneTest::DateFormatSymbolsCloneTest() {
}

$Class* DateFormatSymbolsCloneTest::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"value", "I", nullptr, $PRIVATE, $field(DateFormatSymbolsCloneTest, value)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(DateFormatSymbolsCloneTest, init$, void)},
		{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(DateFormatSymbolsCloneTest, clone, $Object*)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(DateFormatSymbolsCloneTest, main, void, $StringArray*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"DateFormatSymbolsCloneTest",
		"java.text.DateFormatSymbols",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(DateFormatSymbolsCloneTest, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(DateFormatSymbolsCloneTest));
	});
	return class$;
}

$Class* DateFormatSymbolsCloneTest::class$ = nullptr;