#include <TestUndefinedTitleCase.h>

#include <jcpp.h>

using $PrintStream = ::java::io::PrintStream;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

$FieldInfo _TestUndefinedTitleCase_FieldInfo_[] = {
	{"endCharValue", "I", nullptr, $STATIC, $staticField(TestUndefinedTitleCase, endCharValue)},
	{}
};

$MethodInfo _TestUndefinedTitleCase_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(TestUndefinedTitleCase, init$, void)},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(TestUndefinedTitleCase, main, void, $StringArray*)},
	{}
};

$ClassInfo _TestUndefinedTitleCase_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"TestUndefinedTitleCase",
	"java.lang.Object",
	nullptr,
	_TestUndefinedTitleCase_FieldInfo_,
	_TestUndefinedTitleCase_MethodInfo_
};

$Object* allocate$TestUndefinedTitleCase($Class* clazz) {
	return $of($alloc(TestUndefinedTitleCase));
}

int32_t TestUndefinedTitleCase::endCharValue = 0;

void TestUndefinedTitleCase::init$() {
}

void TestUndefinedTitleCase::main($StringArray* args) {
	$init(TestUndefinedTitleCase);
	$useLocalCurrentObjectStackCache();
	for (int32_t ch = 0; ch <= TestUndefinedTitleCase::endCharValue; ++ch) {
		bool var$0 = !$Character::isDefined((char16_t)ch);
		if (var$0 && $Character::toTitleCase((char16_t)ch) != (char16_t)ch) {
			$throwNew($RuntimeException, $$str({"Char value "_s, $($Integer::toHexString((char16_t)ch))}));
		}
	}
	$nc($System::out)->println("Passed"_s);
}

void clinit$TestUndefinedTitleCase($Class* class$) {
	TestUndefinedTitleCase::endCharValue = 0x0000FFFF;
}

TestUndefinedTitleCase::TestUndefinedTitleCase() {
}

$Class* TestUndefinedTitleCase::load$($String* name, bool initialize) {
	$loadClass(TestUndefinedTitleCase, name, initialize, &_TestUndefinedTitleCase_ClassInfo_, clinit$TestUndefinedTitleCase, allocate$TestUndefinedTitleCase);
	return class$;
}

$Class* TestUndefinedTitleCase::class$ = nullptr;