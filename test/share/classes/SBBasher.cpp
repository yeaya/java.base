#include <SBBasher.h>

#include <java/lang/Math.h>
#include <java/lang/StringBuffer.h>
#include <java/util/Random.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $StringBuffer = ::java::lang::StringBuffer;
using $Random = ::java::util::Random;

$FieldInfo _SBBasher_FieldInfo_[] = {
	{"generator", "Ljava/util/Random;", nullptr, $STATIC, $staticField(SBBasher, generator)},
	{}
};

$MethodInfo _SBBasher_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(SBBasher, init$, void)},
	{"Test1", "(Ljava/lang/String;)Z", nullptr, $PRIVATE, $method(SBBasher, Test1, bool, $String*)},
	{"Test2", "(Ljava/lang/String;)Z", nullptr, $PRIVATE, $method(SBBasher, Test2, bool, $String*)},
	{"Test3", "(Ljava/lang/String;)Z", nullptr, $PRIVATE, $method(SBBasher, Test3, bool, $String*)},
	{"generateTestString", "()Ljava/lang/String;", nullptr, $PRIVATE, $method(SBBasher, generateTestString, $String*)},
	{"getRandomIndex", "(II)I", nullptr, $PRIVATE, $method(SBBasher, getRandomIndex, int32_t, int32_t, int32_t)},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(SBBasher, main, void, $StringArray*), "java.lang.Exception"},
	{}
};

$ClassInfo _SBBasher_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"SBBasher",
	"java.lang.Object",
	nullptr,
	_SBBasher_FieldInfo_,
	_SBBasher_MethodInfo_
};

$Object* allocate$SBBasher($Class* clazz) {
	return $of($alloc(SBBasher));
}

$Random* SBBasher::generator = nullptr;

void SBBasher::init$() {
}

void SBBasher::main($StringArray* args) {
	$init(SBBasher);
	$useLocalCurrentObjectStackCache();
	$var(SBBasher, basher, $new(SBBasher));
	for (int32_t iterations = 0; iterations < 100; ++iterations) {
		$var($String, testString, basher->generateTestString());
		bool result = basher->Test1(testString);
		if (result == false) {
			$throwNew($RuntimeException, "Substring or replace failure."_s);
		}
	}
	for (int32_t iterations = 0; iterations < 100; ++iterations) {
		$var($String, testString, basher->generateTestString());
		bool result = basher->Test2(testString);
		if (result == false) {
			$throwNew($RuntimeException, "Insert or delete failure."_s);
		}
	}
	for (int32_t iterations = 0; iterations < 100; ++iterations) {
		$var($String, testString, basher->generateTestString());
		bool result = basher->Test3(testString);
		if (result == false) {
			$throwNew($RuntimeException, "Insert, delete or replace failure."_s);
		}
	}
}

int32_t SBBasher::getRandomIndex(int32_t constraint1, int32_t constraint2) {
	int32_t range = constraint2 - constraint1;
	int32_t x = $nc(SBBasher::generator)->nextInt();
	return constraint1 + $Math::abs($mod(x, range));
}

$String* SBBasher::generateTestString() {
	$var($StringBuffer, aNewString, $new($StringBuffer, 120));
	int32_t aNewLength = getRandomIndex(1, 100);
	for (int32_t y = 0; y < aNewLength; ++y) {
		int32_t achar = $nc(SBBasher::generator)->nextInt();
		char16_t test = (char16_t)(achar);
		aNewString->append(test);
	}
	return aNewString->toString();
}

bool SBBasher::Test1($String* before) {
	$useLocalCurrentObjectStackCache();
	$var($StringBuffer, bashed, $new($StringBuffer, before));
	$var($String, slice, nullptr);
	for (int32_t i = 0; i < 100; ++i) {
		int32_t startIndex = getRandomIndex(0, $nc(before)->length());
		int32_t endIndex = getRandomIndex(startIndex, $nc(before)->length());
		if (endIndex < bashed->length()) {
			$assign(slice, bashed->substring(startIndex, endIndex));
		} else {
			$assign(slice, bashed->substring(startIndex));
		}
		bashed->replace(startIndex, endIndex, slice);
	}
	$var($String, after, bashed->toString());
	if (!$nc(before)->equals(after)) {
		return false;
	} else {
		return true;
	}
}

bool SBBasher::Test2($String* before) {
	$useLocalCurrentObjectStackCache();
	$var($StringBuffer, bashed, $new($StringBuffer, before));
	$var($String, slice, nullptr);
	for (int32_t i = 0; i < 100; ++i) {
		int32_t startIndex = getRandomIndex(0, $nc(before)->length());
		int32_t endIndex = getRandomIndex(startIndex, $nc(before)->length());
		if (endIndex < bashed->length()) {
			$assign(slice, bashed->substring(startIndex, endIndex));
		} else {
			$assign(slice, bashed->substring(startIndex));
		}
		if ($nc(slice)->length() == 1) {
			bashed->deleteCharAt(startIndex);
		} else {
			bashed->delete$(startIndex, endIndex);
		}
		int32_t var$0 = startIndex;
		$var($chars, var$1, $nc(slice)->toCharArray());
		bashed->insert(var$0, var$1, 0, slice->length());
	}
	$var($String, after, bashed->toString());
	if (!$nc(before)->equals(after)) {
		return false;
	} else {
		return true;
	}
}

bool SBBasher::Test3($String* before) {
	$useLocalCurrentObjectStackCache();
	$var($StringBuffer, bashed1, $new($StringBuffer, before));
	$var($StringBuffer, bashed2, $new($StringBuffer, before));
	int32_t startIndex = getRandomIndex(0, bashed1->length());
	int32_t endIndex = getRandomIndex(startIndex, bashed2->length());
	$var($String, insertString, generateTestString());
	bashed1->delete$(startIndex, endIndex);
	bashed1->insert(startIndex, insertString);
	bashed2->replace(startIndex, endIndex, insertString);
	$var($String, result1, bashed1->toString());
	$var($String, result2, bashed2->toString());
	if (!$nc(result1)->equals(result2)) {
		return false;
	} else {
		return true;
	}
}

void clinit$SBBasher($Class* class$) {
	$assignStatic(SBBasher::generator, $new($Random));
}

SBBasher::SBBasher() {
}

$Class* SBBasher::load$($String* name, bool initialize) {
	$loadClass(SBBasher, name, initialize, &_SBBasher_ClassInfo_, clinit$SBBasher, allocate$SBBasher);
	return class$;
}

$Class* SBBasher::class$ = nullptr;