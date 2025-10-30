#include <TestUndefinedNumeric.h>

#include <jcpp.h>

using $PrintStream = ::java::io::PrintStream;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

$FieldInfo _TestUndefinedNumeric_FieldInfo_[] = {
	{"endValue", "I", nullptr, $STATIC, $staticField(TestUndefinedNumeric, endValue)},
	{}
};

$MethodInfo _TestUndefinedNumeric_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TestUndefinedNumeric::*)()>(&TestUndefinedNumeric::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&TestUndefinedNumeric::main))},
	{}
};

$ClassInfo _TestUndefinedNumeric_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"TestUndefinedNumeric",
	"java.lang.Object",
	nullptr,
	_TestUndefinedNumeric_FieldInfo_,
	_TestUndefinedNumeric_MethodInfo_
};

$Object* allocate$TestUndefinedNumeric($Class* clazz) {
	return $of($alloc(TestUndefinedNumeric));
}

int32_t TestUndefinedNumeric::endValue = 0;

void TestUndefinedNumeric::init$() {
}

void TestUndefinedNumeric::main($StringArray* args) {
	$init(TestUndefinedNumeric);
	$useLocalCurrentObjectStackCache();
	for (int32_t ch = 0; ch <= 0x0000FFFF; ++ch) {
		bool var$0 = !$Character::isDefined((char16_t)ch);
		if (var$0 && $Character::getNumericValue((char16_t)ch) != -1) {
			$throwNew($RuntimeException, $$str({"Char value "_s, $($Integer::toHexString((char16_t)ch))}));
		}
	}
	$nc($System::out)->println("Passed."_s);
}

void clinit$TestUndefinedNumeric($Class* class$) {
	TestUndefinedNumeric::endValue = 0x0000FFFF;
}

TestUndefinedNumeric::TestUndefinedNumeric() {
}

$Class* TestUndefinedNumeric::load$($String* name, bool initialize) {
	$loadClass(TestUndefinedNumeric, name, initialize, &_TestUndefinedNumeric_ClassInfo_, clinit$TestUndefinedNumeric, allocate$TestUndefinedNumeric);
	return class$;
}

$Class* TestUndefinedNumeric::class$ = nullptr;