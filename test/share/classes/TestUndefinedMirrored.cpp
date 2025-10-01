#include <TestUndefinedMirrored.h>

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

$FieldInfo _TestUndefinedMirrored_FieldInfo_[] = {
	{"endValue", "I", nullptr, $STATIC, $staticField(TestUndefinedMirrored, endValue)},
	{}
};

$MethodInfo _TestUndefinedMirrored_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TestUndefinedMirrored::*)()>(&TestUndefinedMirrored::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&TestUndefinedMirrored::main))},
	{}
};

$ClassInfo _TestUndefinedMirrored_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"TestUndefinedMirrored",
	"java.lang.Object",
	nullptr,
	_TestUndefinedMirrored_FieldInfo_,
	_TestUndefinedMirrored_MethodInfo_
};

$Object* allocate$TestUndefinedMirrored($Class* clazz) {
	return $of($alloc(TestUndefinedMirrored));
}

int32_t TestUndefinedMirrored::endValue = 0;

void TestUndefinedMirrored::init$() {
}

void TestUndefinedMirrored::main($StringArray* args) {
	$init(TestUndefinedMirrored);
	for (int32_t ch = 0; ch <= TestUndefinedMirrored::endValue; ++ch) {
		bool var$0 = !$Character::isDefined((char16_t)ch);
		if (var$0 && $Character::isMirrored((char16_t)ch)) {
			$throwNew($RuntimeException, $$str({"Char value "_s, $($Integer::toHexString((char16_t)ch))}));
		}
	}
	$init($System);
	$nc($System::out)->println("Passed."_s);
}

void clinit$TestUndefinedMirrored($Class* class$) {
	TestUndefinedMirrored::endValue = 0x0000FFFF;
}

TestUndefinedMirrored::TestUndefinedMirrored() {
}

$Class* TestUndefinedMirrored::load$($String* name, bool initialize) {
	$loadClass(TestUndefinedMirrored, name, initialize, &_TestUndefinedMirrored_ClassInfo_, clinit$TestUndefinedMirrored, allocate$TestUndefinedMirrored);
	return class$;
}

$Class* TestUndefinedMirrored::class$ = nullptr;