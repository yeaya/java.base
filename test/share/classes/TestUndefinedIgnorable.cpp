#include <TestUndefinedIgnorable.h>

#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/Character.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TestUndefinedIgnorable::*)()>(&TestUndefinedIgnorable::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&TestUndefinedIgnorable::main))},
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
	$init($System);
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