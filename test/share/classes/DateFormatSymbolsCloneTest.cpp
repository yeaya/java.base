#include <DateFormatSymbolsCloneTest.h>

#include <java/text/DateFormatSymbols.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $DateFormatSymbols = ::java::text::DateFormatSymbols;

$FieldInfo _DateFormatSymbolsCloneTest_FieldInfo_[] = {
	{"value", "I", nullptr, $PRIVATE, $field(DateFormatSymbolsCloneTest, value)},
	{}
};

$MethodInfo _DateFormatSymbolsCloneTest_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DateFormatSymbolsCloneTest::*)()>(&DateFormatSymbolsCloneTest::init$))},
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&DateFormatSymbolsCloneTest::main))},
	{}
};

$ClassInfo _DateFormatSymbolsCloneTest_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"DateFormatSymbolsCloneTest",
	"java.text.DateFormatSymbols",
	nullptr,
	_DateFormatSymbolsCloneTest_FieldInfo_,
	_DateFormatSymbolsCloneTest_MethodInfo_
};

$Object* allocate$DateFormatSymbolsCloneTest($Class* clazz) {
	return $of($alloc(DateFormatSymbolsCloneTest));
}

void DateFormatSymbolsCloneTest::init$() {
	$DateFormatSymbols::init$();
	this->value = 1;
}

$Object* DateFormatSymbolsCloneTest::clone() {
	if (this->value == 0) {
		$throwNew($RuntimeException, "clone() should not be called from a DateFormatSymbols constructor"_s);
	}
	return $of($DateFormatSymbols::clone());
}

void DateFormatSymbolsCloneTest::main($StringArray* args) {
	$init(DateFormatSymbolsCloneTest);
	$new(DateFormatSymbolsCloneTest);
}

DateFormatSymbolsCloneTest::DateFormatSymbolsCloneTest() {
}

$Class* DateFormatSymbolsCloneTest::load$($String* name, bool initialize) {
	$loadClass(DateFormatSymbolsCloneTest, name, initialize, &_DateFormatSymbolsCloneTest_ClassInfo_, allocate$DateFormatSymbolsCloneTest);
	return class$;
}

$Class* DateFormatSymbolsCloneTest::class$ = nullptr;