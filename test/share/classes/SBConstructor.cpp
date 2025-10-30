#include <SBConstructor.h>

#include <java/lang/StringBuffer.h>
#include <java/util/Random.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $StringBuffer = ::java::lang::StringBuffer;
using $Random = ::java::util::Random;

$FieldInfo _SBConstructor_FieldInfo_[] = {
	{"rnd", "Ljava/util/Random;", nullptr, $PRIVATE | $STATIC, $staticField(SBConstructor, rnd)},
	{}
};

$MethodInfo _SBConstructor_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SBConstructor::*)()>(&SBConstructor::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&SBConstructor::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _SBConstructor_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"SBConstructor",
	"java.lang.Object",
	nullptr,
	_SBConstructor_FieldInfo_,
	_SBConstructor_MethodInfo_
};

$Object* allocate$SBConstructor($Class* clazz) {
	return $of($alloc(SBConstructor));
}

$Random* SBConstructor::rnd = nullptr;

void SBConstructor::init$() {
}

void SBConstructor::main($StringArray* argvs) {
	$init(SBConstructor);
	$useLocalCurrentObjectStackCache();
	for (int32_t i = 0; i < 1000; ++i) {
		int32_t length = $nc(SBConstructor::rnd)->nextInt(20) + 1;
		$var($StringBuffer, testStringBuffer, $new($StringBuffer));
		$var($StringBuilder, testStringBuilder, $new($StringBuilder));
		for (int32_t x = 0; x < length; ++x) {
			char16_t aChar = (char16_t)$nc(SBConstructor::rnd)->nextInt();
			testStringBuffer->append(aChar);
			testStringBuilder->append(aChar);
		}
		$var($String, testString1, $new($String, testStringBuffer));
		$var($String, testString2, $new($String, testStringBuilder));
		if (!testString1->equals(testString2)) {
			$throwNew($RuntimeException, "Test failure"_s);
		}
	}
}

void clinit$SBConstructor($Class* class$) {
	$assignStatic(SBConstructor::rnd, $new($Random));
}

SBConstructor::SBConstructor() {
}

$Class* SBConstructor::load$($String* name, bool initialize) {
	$loadClass(SBConstructor, name, initialize, &_SBConstructor_ClassInfo_, clinit$SBConstructor, allocate$SBConstructor);
	return class$;
}

$Class* SBConstructor::class$ = nullptr;