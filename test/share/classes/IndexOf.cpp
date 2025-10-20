#include <IndexOf.h>

#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/StringBuffer.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Random.h>
#include <jcpp.h>

using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $StringBuffer = ::java::lang::StringBuffer;
using $Random = ::java::util::Random;

$FieldInfo _IndexOf_FieldInfo_[] = {
	{"generator", "Ljava/util/Random;", nullptr, $STATIC, $staticField(IndexOf, generator)},
	{"failure", "Z", nullptr, $PRIVATE | $STATIC, $staticField(IndexOf, failure)},
	{}
};

$MethodInfo _IndexOf_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(IndexOf::*)()>(&IndexOf::init$))},
	{"compareIndexOfLastIndexOf", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&IndexOf::compareIndexOfLastIndexOf))},
	{"compareStringStringBuffer", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&IndexOf::compareStringStringBuffer))},
	{"generateTestString", "(II)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$String*(*)(int32_t,int32_t)>(&IndexOf::generateTestString))},
	{"getRandomIndex", "(II)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)(int32_t,int32_t)>(&IndexOf::getRandomIndex))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&IndexOf::main)), "java.lang.Exception"},
	{"report", "(Ljava/lang/String;I)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($String*,int32_t)>(&IndexOf::report))},
	{"simpleTest", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&IndexOf::simpleTest))},
	{}
};

$ClassInfo _IndexOf_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"IndexOf",
	"java.lang.Object",
	nullptr,
	_IndexOf_FieldInfo_,
	_IndexOf_MethodInfo_
};

$Object* allocate$IndexOf($Class* clazz) {
	return $of($alloc(IndexOf));
}

$Random* IndexOf::generator = nullptr;
bool IndexOf::failure = false;

void IndexOf::init$() {
}

void IndexOf::main($StringArray* args) {
	$init(IndexOf);
	simpleTest();
	compareIndexOfLastIndexOf();
	compareStringStringBuffer();
	if (IndexOf::failure) {
		$throwNew($RuntimeException, "One or more BitSet failures."_s);
	}
}

void IndexOf::report($String* testName, int32_t failCount) {
	$init(IndexOf);
	$useLocalCurrentObjectStackCache();
	$init($System);
	$nc($System::err)->println($$str({testName, ": "_s, (failCount == 0 ? "Passed"_s : $$str({"Failed("_s, $$str(failCount), ")"_s}))}));
	if (failCount > 0) {
		IndexOf::failure = true;
	}
}

$String* IndexOf::generateTestString(int32_t min, int32_t max) {
	$init(IndexOf);
	$var($StringBuffer, aNewString, $new($StringBuffer, 120));
	int32_t aNewLength = getRandomIndex(min, max);
	for (int32_t y = 0; y < aNewLength; ++y) {
		int32_t achar = $nc(IndexOf::generator)->nextInt(30) + 30;
		char16_t test = (char16_t)(achar);
		aNewString->append(test);
	}
	return aNewString->toString();
}

int32_t IndexOf::getRandomIndex(int32_t constraint1, int32_t constraint2) {
	$init(IndexOf);
	int32_t range = constraint2 - constraint1;
	int32_t x = $nc(IndexOf::generator)->nextInt(range);
	return constraint1 + x;
}

void IndexOf::simpleTest() {
	$init(IndexOf);
	$useLocalCurrentObjectStackCache();
	int32_t failCount = 0;
	$var($String, sourceString, nullptr);
	$var($StringBuffer, sourceBuffer, nullptr);
	$var($String, targetString, nullptr);
	for (int32_t i = 0; i < 10000; ++i) {
		do {
			$assign(sourceString, generateTestString(99, 100));
			$assign(sourceBuffer, $new($StringBuffer, sourceString));
			$assign(targetString, generateTestString(10, 11));
		} while ($nc(sourceString)->indexOf(targetString) != -1);
		int32_t index1 = $nc(IndexOf::generator)->nextInt(90) + 5;
		$assign(sourceBuffer, $nc(sourceBuffer)->replace(index1, index1, targetString));
		if (sourceBuffer->indexOf(targetString) != index1) {
			++failCount;
		}
		if (sourceBuffer->indexOf(targetString, 5) != index1) {
			++failCount;
		}
		if (sourceBuffer->indexOf(targetString, 99) == index1) {
			++failCount;
		}
	}
	report("Basic Test                   "_s, failCount);
}

void IndexOf::compareIndexOfLastIndexOf() {
	$init(IndexOf);
	$useLocalCurrentObjectStackCache();
	int32_t failCount = 0;
	$var($String, sourceString, nullptr);
	$var($StringBuffer, sourceBuffer, nullptr);
	$var($String, targetString, nullptr);
	for (int32_t i = 0; i < 10000; ++i) {
		do {
			$assign(sourceString, generateTestString(99, 100));
			$assign(sourceBuffer, $new($StringBuffer, sourceString));
			$assign(targetString, generateTestString(10, 11));
		} while ($nc(sourceString)->indexOf(targetString) != -1);
		int32_t index1 = $nc(IndexOf::generator)->nextInt(100);
		$assign(sourceBuffer, $nc(sourceBuffer)->replace(index1, index1, targetString));
		int32_t matches = 0;
		int32_t index2 = -1;
		while ((index2 = sourceBuffer->indexOf(targetString, index2 + 1)) != -1) {
			++matches;
		}
		if (matches > 1) {
			continue;
		}
		int32_t var$0 = sourceBuffer->indexOf(targetString);
		if (var$0 != sourceBuffer->lastIndexOf(targetString)) {
			++failCount;
		}
		$assign(sourceString, sourceBuffer->toString());
		int32_t var$1 = sourceString->indexOf(targetString);
		if (var$1 != sourceString->lastIndexOf(targetString)) {
			++failCount;
		}
	}
	report("IndexOf vs LastIndexOf       "_s, failCount);
}

void IndexOf::compareStringStringBuffer() {
	$init(IndexOf);
	$useLocalCurrentObjectStackCache();
	int32_t failCount = 0;
	for (int32_t x = 0; x < 10000; ++x) {
		$var($String, testString, generateTestString(1, 100));
		int32_t len = $nc(testString)->length();
		$var($StringBuffer, testBuffer, $new($StringBuffer, len));
		testBuffer->append(testString);
		if (!testString->equals($(testBuffer->toString()))) {
			$throwNew($RuntimeException, "Initial equality failure"_s);
		}
		int32_t x1 = 0;
		int32_t x2 = 1000;
		while (x2 > testString->length()) {
			x1 = $nc(IndexOf::generator)->nextInt(len);
			x2 = $nc(IndexOf::generator)->nextInt(100);
			x2 = x1 + x2;
		}
		$var($String, fragment, testString->substring(x1, x2));
		int32_t sAnswer = testString->indexOf(fragment);
		int32_t sbAnswer = testBuffer->indexOf(fragment);
		if (sAnswer != sbAnswer) {
			++failCount;
		}
		int32_t testIndex = getRandomIndex(-100, 100);
		sAnswer = testString->indexOf(fragment, testIndex);
		sbAnswer = testBuffer->indexOf(fragment, testIndex);
		if (sAnswer != sbAnswer) {
			++failCount;
		}
		sAnswer = testString->lastIndexOf(fragment);
		sbAnswer = testBuffer->lastIndexOf(fragment);
		if (sAnswer != sbAnswer) {
			++failCount;
		}
		testIndex = getRandomIndex(-100, 100);
		sAnswer = testString->lastIndexOf(fragment, testIndex);
		sbAnswer = testBuffer->lastIndexOf(fragment, testIndex);
		if (sAnswer != sbAnswer) {
			++failCount;
		}
	}
	report("String vs StringBuffer       "_s, failCount);
}

void clinit$IndexOf($Class* class$) {
	$assignStatic(IndexOf::generator, $new($Random));
	IndexOf::failure = false;
}

IndexOf::IndexOf() {
}

$Class* IndexOf::load$($String* name, bool initialize) {
	$loadClass(IndexOf, name, initialize, &_IndexOf_ClassInfo_, clinit$IndexOf, allocate$IndexOf);
	return class$;
}

$Class* IndexOf::class$ = nullptr;