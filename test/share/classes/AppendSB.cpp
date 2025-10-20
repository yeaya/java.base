#include <AppendSB.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/StringBuffer.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Random.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $StringBuffer = ::java::lang::StringBuffer;
using $Random = ::java::util::Random;

$FieldInfo _AppendSB_FieldInfo_[] = {
	{"generator", "Ljava/util/Random;", nullptr, $PRIVATE | $STATIC, $staticField(AppendSB, generator)},
	{}
};

$MethodInfo _AppendSB_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AppendSB::*)()>(&AppendSB::init$))},
	{"generateTestBuffer", "(II)Ljava/lang/StringBuffer;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$StringBuffer*(*)(int32_t,int32_t)>(&AppendSB::generateTestBuffer))},
	{"getRandomIndex", "(II)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)(int32_t,int32_t)>(&AppendSB::getRandomIndex))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&AppendSB::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _AppendSB_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"AppendSB",
	"java.lang.Object",
	nullptr,
	_AppendSB_FieldInfo_,
	_AppendSB_MethodInfo_
};

$Object* allocate$AppendSB($Class* clazz) {
	return $of($alloc(AppendSB));
}

$Random* AppendSB::generator = nullptr;

void AppendSB::init$() {
}

void AppendSB::main($StringArray* args) {
	$init(AppendSB);
	$useLocalCurrentObjectStackCache();
	for (int32_t i = 0; i < 1000; ++i) {
		$var($StringBuffer, sb1, generateTestBuffer(10, 100));
		$var($StringBuffer, sb2, generateTestBuffer(10, 100));
		$var($StringBuffer, sb3, generateTestBuffer(10, 100));
		$var($String, s1, $nc(sb1)->toString());
		$var($String, s2, $nc(sb2)->toString());
		$var($String, s3, $nc(sb3)->toString());
		$var($String, concatResult, $new($String, $$str({s1, s2, s3})));
		$var($StringBuffer, test, $new($StringBuffer));
		test->append(sb1);
		test->append(sb2);
		test->append(sb3);
		if (!$nc($(test->toString()))->equals(concatResult)) {
			$throwNew($RuntimeException, "StringBuffer.append failure"_s);
		}
	}
}

int32_t AppendSB::getRandomIndex(int32_t constraint1, int32_t constraint2) {
	$init(AppendSB);
	int32_t range = constraint2 - constraint1;
	int32_t x = $nc(AppendSB::generator)->nextInt(range);
	return constraint1 + x;
}

$StringBuffer* AppendSB::generateTestBuffer(int32_t min, int32_t max) {
	$init(AppendSB);
	$var($StringBuffer, aNewStringBuffer, $new($StringBuffer, 120));
	int32_t aNewLength = getRandomIndex(min, max);
	for (int32_t y = 0; y < aNewLength; ++y) {
		int32_t achar = $nc(AppendSB::generator)->nextInt(30) + 30;
		char16_t test = (char16_t)(achar);
		aNewStringBuffer->append(test);
	}
	return aNewStringBuffer;
}

void clinit$AppendSB($Class* class$) {
	$assignStatic(AppendSB::generator, $new($Random));
}

AppendSB::AppendSB() {
}

$Class* AppendSB::load$($String* name, bool initialize) {
	$loadClass(AppendSB, name, initialize, &_AppendSB_ClassInfo_, clinit$AppendSB, allocate$AppendSB);
	return class$;
}

$Class* AppendSB::class$ = nullptr;