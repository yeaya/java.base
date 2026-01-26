#include <TestUndefinedIdentifierStartPart.h>

#include <jcpp.h>

using $PrintStream = ::java::io::PrintStream;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

$FieldInfo _TestUndefinedIdentifierStartPart_FieldInfo_[] = {
	{"endValue", "I", nullptr, $STATIC, $staticField(TestUndefinedIdentifierStartPart, endValue)},
	{}
};

$MethodInfo _TestUndefinedIdentifierStartPart_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(TestUndefinedIdentifierStartPart, init$, void)},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(TestUndefinedIdentifierStartPart, main, void, $StringArray*)},
	{}
};

$ClassInfo _TestUndefinedIdentifierStartPart_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"TestUndefinedIdentifierStartPart",
	"java.lang.Object",
	nullptr,
	_TestUndefinedIdentifierStartPart_FieldInfo_,
	_TestUndefinedIdentifierStartPart_MethodInfo_
};

$Object* allocate$TestUndefinedIdentifierStartPart($Class* clazz) {
	return $of($alloc(TestUndefinedIdentifierStartPart));
}

int32_t TestUndefinedIdentifierStartPart::endValue = 0;

void TestUndefinedIdentifierStartPart::init$() {
}

void TestUndefinedIdentifierStartPart::main($StringArray* args) {
	$init(TestUndefinedIdentifierStartPart);
	$useLocalCurrentObjectStackCache();
	for (int32_t ch = 0; ch <= TestUndefinedIdentifierStartPart::endValue; ++ch) {
		bool var$0 = !$Character::isDefined((char16_t)ch);
		if (var$0) {
			bool var$3 = $Character::isJavaIdentifierStart((char16_t)ch);
			bool var$2 = var$3 || $Character::isJavaIdentifierPart((char16_t)ch);
			bool var$1 = var$2 || $Character::isUnicodeIdentifierStart((char16_t)ch);
			var$0 = (var$1 || $Character::isUnicodeIdentifierPart((char16_t)ch));
		}
		if (var$0) {
			$throwNew($RuntimeException, $$str({"Char value "_s, $($Integer::toHexString((char16_t)ch))}));
		}
	}
	$nc($System::out)->println("Passed"_s);
}

void clinit$TestUndefinedIdentifierStartPart($Class* class$) {
	TestUndefinedIdentifierStartPart::endValue = 0x0000FFFF;
}

TestUndefinedIdentifierStartPart::TestUndefinedIdentifierStartPart() {
}

$Class* TestUndefinedIdentifierStartPart::load$($String* name, bool initialize) {
	$loadClass(TestUndefinedIdentifierStartPart, name, initialize, &_TestUndefinedIdentifierStartPart_ClassInfo_, clinit$TestUndefinedIdentifierStartPart, allocate$TestUndefinedIdentifierStartPart);
	return class$;
}

$Class* TestUndefinedIdentifierStartPart::class$ = nullptr;