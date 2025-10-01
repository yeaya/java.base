#include <AppendStringBuffer.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/StringBuffer.h>
#include <java/lang/StringBuilder.h>
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

$FieldInfo _AppendStringBuffer_FieldInfo_[] = {
	{"generator", "Ljava/util/Random;", nullptr, $PRIVATE | $STATIC, $staticField(AppendStringBuffer, generator)},
	{}
};

$MethodInfo _AppendStringBuffer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AppendStringBuffer::*)()>(&AppendStringBuffer::init$))},
	{"generateTestBuffer", "(II)Ljava/lang/StringBuffer;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$StringBuffer*(*)(int32_t,int32_t)>(&AppendStringBuffer::generateTestBuffer))},
	{"getRandomIndex", "(II)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)(int32_t,int32_t)>(&AppendStringBuffer::getRandomIndex))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&AppendStringBuffer::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _AppendStringBuffer_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"AppendStringBuffer",
	"java.lang.Object",
	nullptr,
	_AppendStringBuffer_FieldInfo_,
	_AppendStringBuffer_MethodInfo_
};

$Object* allocate$AppendStringBuffer($Class* clazz) {
	return $of($alloc(AppendStringBuffer));
}

$Random* AppendStringBuffer::generator = nullptr;

void AppendStringBuffer::init$() {
}

void AppendStringBuffer::main($StringArray* args) {
	$init(AppendStringBuffer);
	for (int32_t i = 0; i < 1000; ++i) {
		$var($StringBuffer, sb1, generateTestBuffer(10, 100));
		$var($StringBuffer, sb2, generateTestBuffer(10, 100));
		$var($StringBuffer, sb3, generateTestBuffer(10, 100));
		$var($String, s1, $nc(sb1)->toString());
		$var($String, s2, $nc(sb2)->toString());
		$var($String, s3, $nc(sb3)->toString());
		$var($String, concatResult, $new($String, $$str({s1, s2, s3})));
		$var($StringBuilder, test, $new($StringBuilder));
		test->append(sb1);
		test->append(sb2);
		test->append(sb3);
		if (!$nc($(test->toString()))->equals(concatResult)) {
			$throwNew($RuntimeException, "StringBuffer.append failure"_s);
		}
	}
}

int32_t AppendStringBuffer::getRandomIndex(int32_t constraint1, int32_t constraint2) {
	$init(AppendStringBuffer);
	int32_t range = constraint2 - constraint1;
	int32_t x = $nc(AppendStringBuffer::generator)->nextInt(range);
	return constraint1 + x;
}

$StringBuffer* AppendStringBuffer::generateTestBuffer(int32_t min, int32_t max) {
	$init(AppendStringBuffer);
	$var($StringBuffer, aNewStringBuffer, $new($StringBuffer, 120));
	int32_t aNewLength = getRandomIndex(min, max);
	for (int32_t y = 0; y < aNewLength; ++y) {
		int32_t achar = $nc(AppendStringBuffer::generator)->nextInt(30) + 30;
		char16_t test = (char16_t)(achar);
		aNewStringBuffer->append(test);
	}
	return aNewStringBuffer;
}

void clinit$AppendStringBuffer($Class* class$) {
	$assignStatic(AppendStringBuffer::generator, $new($Random));
}

AppendStringBuffer::AppendStringBuffer() {
}

$Class* AppendStringBuffer::load$($String* name, bool initialize) {
	$loadClass(AppendStringBuffer, name, initialize, &_AppendStringBuffer_ClassInfo_, clinit$AppendStringBuffer, allocate$AppendStringBuffer);
	return class$;
}

$Class* AppendStringBuffer::class$ = nullptr;