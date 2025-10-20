#include <TestUndefinedTitleCase.h>

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

$FieldInfo _TestUndefinedTitleCase_FieldInfo_[] = {
	{"endCharValue", "I", nullptr, $STATIC, $staticField(TestUndefinedTitleCase, endCharValue)},
	{}
};

$MethodInfo _TestUndefinedTitleCase_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TestUndefinedTitleCase::*)()>(&TestUndefinedTitleCase::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&TestUndefinedTitleCase::main))},
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
	$init($System);
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