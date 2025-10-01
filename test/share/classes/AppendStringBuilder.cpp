#include <AppendStringBuilder.h>

#include <java/lang/AbstractStringBuilder.h>
#include <java/lang/Array.h>
#include <java/lang/CharSequence.h>
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

using $AbstractStringBuilder = ::java::lang::AbstractStringBuilder;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $StringBuffer = ::java::lang::StringBuffer;
using $Random = ::java::util::Random;

$FieldInfo _AppendStringBuilder_FieldInfo_[] = {
	{"generator", "Ljava/util/Random;", nullptr, $PRIVATE | $STATIC, $staticField(AppendStringBuilder, generator)},
	{}
};

$MethodInfo _AppendStringBuilder_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AppendStringBuilder::*)()>(&AppendStringBuilder::init$))},
	{"generateTestBuilder", "(II)Ljava/lang/StringBuilder;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$StringBuilder*(*)(int32_t,int32_t)>(&AppendStringBuilder::generateTestBuilder))},
	{"getRandomIndex", "(II)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)(int32_t,int32_t)>(&AppendStringBuilder::getRandomIndex))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&AppendStringBuilder::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _AppendStringBuilder_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"AppendStringBuilder",
	"java.lang.Object",
	nullptr,
	_AppendStringBuilder_FieldInfo_,
	_AppendStringBuilder_MethodInfo_
};

$Object* allocate$AppendStringBuilder($Class* clazz) {
	return $of($alloc(AppendStringBuilder));
}

$Random* AppendStringBuilder::generator = nullptr;

void AppendStringBuilder::init$() {
}

void AppendStringBuilder::main($StringArray* args) {
	$init(AppendStringBuilder);
	for (int32_t i = 0; i < 1000; ++i) {
		$var($StringBuilder, sb1, generateTestBuilder(10, 100));
		$var($StringBuilder, sb2, generateTestBuilder(10, 100));
		$var($StringBuilder, sb3, generateTestBuilder(10, 100));
		$var($String, s1, $nc(sb1)->toString());
		$var($String, s2, $nc(sb2)->toString());
		$var($String, s3, $nc(sb3)->toString());
		$var($String, concatResult, $new($String, $$str({s1, s2, s3})));
		$var($StringBuffer, test, $new($StringBuffer));
		test->append(static_cast<$CharSequence*>(sb1));
		test->append(static_cast<$CharSequence*>(sb2));
		test->append(static_cast<$CharSequence*>(sb3));
		if (!$nc($(test->toString()))->equals(concatResult)) {
			$throwNew($RuntimeException, "StringBuffer.append failure"_s);
		}
	}
}

int32_t AppendStringBuilder::getRandomIndex(int32_t constraint1, int32_t constraint2) {
	$init(AppendStringBuilder);
	int32_t range = constraint2 - constraint1;
	int32_t x = $nc(AppendStringBuilder::generator)->nextInt(range);
	return constraint1 + x;
}

$StringBuilder* AppendStringBuilder::generateTestBuilder(int32_t min, int32_t max) {
	$init(AppendStringBuilder);
	$var($StringBuilder, aNewStringBuilder, $new($StringBuilder, 120));
	int32_t aNewLength = getRandomIndex(min, max);
	for (int32_t y = 0; y < aNewLength; ++y) {
		int32_t achar = $nc(AppendStringBuilder::generator)->nextInt(30) + 30;
		char16_t test = (char16_t)(achar);
		aNewStringBuilder->append(test);
	}
	return aNewStringBuilder;
}

void clinit$AppendStringBuilder($Class* class$) {
	$assignStatic(AppendStringBuilder::generator, $new($Random));
}

AppendStringBuilder::AppendStringBuilder() {
}

$Class* AppendStringBuilder::load$($String* name, bool initialize) {
	$loadClass(AppendStringBuilder, name, initialize, &_AppendStringBuilder_ClassInfo_, clinit$AppendStringBuilder, allocate$AppendStringBuilder);
	return class$;
}

$Class* AppendStringBuilder::class$ = nullptr;