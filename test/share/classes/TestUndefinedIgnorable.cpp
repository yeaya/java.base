#include <TestUndefinedIgnorable.h>

#include <jcpp.h>

using $PrintStream = ::java::io::PrintStream;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

$FieldInfo _TestUndefinedIgnorable_FieldInfo_[] = {
	{"endValue", "I", nullptr, $STATIC, $staticField(TestUndefinedIgnorable, endValue)},
	{}
};

$MethodInfo _TestUndefinedIgnorable_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(TestUndefinedIgnorable, init$, void)},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(TestUndefinedIgnorable, main, void, $StringArray*)},
	{}
};

$ClassInfo _TestUndefinedIgnorable_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"TestUndefinedIgnorable",
	"java.lang.Object",
	nullptr,
	_TestUndefinedIgnorable_FieldInfo_,
	_TestUndefinedIgnorable_MethodInfo_
};

$Object* allocate$TestUndefinedIgnorable($Class* clazz) {
	return $of($alloc(TestUndefinedIgnorable));
}

int32_t TestUndefinedIgnorable::endValue = 0;

void TestUndefinedIgnorable::init$() {
}

void TestUndefinedIgnorable::main($StringArray* args) {
	$init(TestUndefinedIgnorable);
	$useLocalCurrentObjectStackCache();
	for (int32_t ch = 0; ch <= TestUndefinedIgnorable::endValue; ++ch) {
		bool var$0 = !$Character::isDefined((char16_t)ch);
		if (var$0 && $Character::isIdentifierIgnorable((char16_t)ch)) {
			$throwNew($RuntimeException, $$str({"Char value "_s, $($Integer::toHexString((char16_t)ch))}));
		}
	}
	$nc($System::out)->println("Passed."_s);
}

void clinit$TestUndefinedIgnorable($Class* class$) {
	TestUndefinedIgnorable::endValue = 0x0000FFFF;
}

TestUndefinedIgnorable::TestUndefinedIgnorable() {
}

$Class* TestUndefinedIgnorable::load$($String* name, bool initialize) {
	$loadClass(TestUndefinedIgnorable, name, initialize, &_TestUndefinedIgnorable_ClassInfo_, clinit$TestUndefinedIgnorable, allocate$TestUndefinedIgnorable);
	return class$;
}

$Class* TestUndefinedIgnorable::class$ = nullptr;