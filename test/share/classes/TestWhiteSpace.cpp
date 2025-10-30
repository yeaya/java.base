#include <TestWhiteSpace.h>

#include <jcpp.h>

using $PrintStream = ::java::io::PrintStream;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

$MethodInfo _TestWhiteSpace_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TestWhiteSpace::*)()>(&TestWhiteSpace::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&TestWhiteSpace::main))},
	{}
};

$ClassInfo _TestWhiteSpace_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"TestWhiteSpace",
	"java.lang.Object",
	nullptr,
	nullptr,
	_TestWhiteSpace_MethodInfo_
};

$Object* allocate$TestWhiteSpace($Class* clazz) {
	return $of($alloc(TestWhiteSpace));
}

void TestWhiteSpace::init$() {
}

void TestWhiteSpace::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($chars, whiteSpace, $new($chars, {
		(char16_t)0xA0,
		(char16_t)0x2007,
		(char16_t)0x202F
	}));
	for (int32_t x = 0; x < whiteSpace->length; ++x) {
		if ($Character::isWhitespace(whiteSpace->get(x))) {
			$throwNew($RuntimeException, $$str({"Invalid whitespace: \\u"_s, $($Integer::toString((int32_t)whiteSpace->get(x), 16))}));
		}
	}
	$nc($System::out)->println("Passed."_s);
}

TestWhiteSpace::TestWhiteSpace() {
}

$Class* TestWhiteSpace::load$($String* name, bool initialize) {
	$loadClass(TestWhiteSpace, name, initialize, &_TestWhiteSpace_ClassInfo_, allocate$TestWhiteSpace);
	return class$;
}

$Class* TestWhiteSpace::class$ = nullptr;