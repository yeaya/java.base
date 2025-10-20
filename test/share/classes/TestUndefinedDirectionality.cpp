#include <TestUndefinedDirectionality.h>

#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/Character.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef DIRECTIONALITY_UNDEFINED

using $PrintStream = ::java::io::PrintStream;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

$MethodInfo _TestUndefinedDirectionality_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TestUndefinedDirectionality::*)()>(&TestUndefinedDirectionality::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&TestUndefinedDirectionality::main))},
	{}
};

$ClassInfo _TestUndefinedDirectionality_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"TestUndefinedDirectionality",
	"java.lang.Object",
	nullptr,
	nullptr,
	_TestUndefinedDirectionality_MethodInfo_
};

$Object* allocate$TestUndefinedDirectionality($Class* clazz) {
	return $of($alloc(TestUndefinedDirectionality));
}

void TestUndefinedDirectionality::init$() {
}

void TestUndefinedDirectionality::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	int32_t failures = 0;
	for (int32_t ch = 0; ch <= 0x0000FFFF; ++ch) {
		if (!$Character::isDefined((char16_t)ch)) {
			int8_t direction = $Character::getDirectionality((char16_t)ch);
			if (direction != $Character::DIRECTIONALITY_UNDEFINED) {
				$init($System);
				$nc($System::err)->println($$str({"Fail: \\u"_s, $($Integer::toString(ch, 16))}));
				++failures;
			}
		}
	}
	if (failures != 0) {
		$throwNew($RuntimeException, "TestUndefinedDirectionality: failed."_s);
	} else {
		$init($System);
		$nc($System::out)->println("Passed."_s);
	}
}

TestUndefinedDirectionality::TestUndefinedDirectionality() {
}

$Class* TestUndefinedDirectionality::load$($String* name, bool initialize) {
	$loadClass(TestUndefinedDirectionality, name, initialize, &_TestUndefinedDirectionality_ClassInfo_, allocate$TestUndefinedDirectionality);
	return class$;
}

$Class* TestUndefinedDirectionality::class$ = nullptr;