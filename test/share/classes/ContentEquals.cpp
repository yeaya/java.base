#include <ContentEquals.h>
#include <java/lang/StringBuffer.h>
#include <java/nio/CharBuffer.h>
#include <java/util/Random.h>
#include <jcpp.h>

#undef ITERATIONS
#undef STR_LEN

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $StringBuffer = ::java::lang::StringBuffer;
using $CharBuffer = ::java::nio::CharBuffer;
using $Random = ::java::util::Random;

$Random* ContentEquals::rnd = nullptr;

void ContentEquals::init$() {
}

void ContentEquals::main($StringArray* args) {
	$init(ContentEquals);
	testStringBuffer();
	testStringBuilder();
	testString();
	testCharSequence();
}

void ContentEquals::testStringBuffer() {
	$init(ContentEquals);
	$useLocalObjectStack();
	for (int32_t i = 0; i < ContentEquals::ITERATIONS; ++i) {
		int32_t length = $nc(ContentEquals::rnd)->nextInt(ContentEquals::STR_LEN) + 1;
		$var($StringBuffer, testStringBuffer, $new($StringBuffer));
		for (int32_t x = 0; x < length; ++x) {
			char16_t aChar = (char16_t)ContentEquals::rnd->nextInt();
			testStringBuffer->append(aChar);
		}
		$var($String, testString, testStringBuffer->toString());
		char16_t c = testStringBuffer->charAt(0);
		testStringBuffer->setCharAt(0, u'c');
		testStringBuffer->setCharAt(0, c);
		if (!testString->contentEquals(testStringBuffer)) {
			$throwNew($RuntimeException, "ContentsEqual failure"_s);
		}
	}
}

void ContentEquals::testStringBuilder() {
	$init(ContentEquals);
	$useLocalObjectStack();
	for (int32_t i = 0; i < ContentEquals::ITERATIONS; ++i) {
		int32_t length = $nc(ContentEquals::rnd)->nextInt(ContentEquals::STR_LEN) + 1;
		$var($StringBuilder, testStringBuilder, $new($StringBuilder));
		for (int32_t x = 0; x < length; ++x) {
			char16_t aChar = (char16_t)ContentEquals::rnd->nextInt();
			testStringBuilder->append(aChar);
		}
		$var($String, testString, testStringBuilder->toString());
		char16_t c = testStringBuilder->charAt(0);
		testStringBuilder->setCharAt(0, u'c');
		testStringBuilder->setCharAt(0, c);
		if (!testString->contentEquals(testStringBuilder)) {
			$throwNew($RuntimeException, "ContentsEqual failure"_s);
		}
	}
}

void ContentEquals::testString() {
	$init(ContentEquals);
	$useLocalObjectStack();
	for (int32_t i = 0; i < ContentEquals::ITERATIONS; ++i) {
		int32_t length = $nc(ContentEquals::rnd)->nextInt(ContentEquals::STR_LEN) + 1;
		$var($StringBuilder, testStringBuilder, $new($StringBuilder));
		for (int32_t x = 0; x < length; ++x) {
			char16_t aChar = (char16_t)ContentEquals::rnd->nextInt();
			testStringBuilder->append(aChar);
		}
		$var($String, testString, testStringBuilder->toString());
		char16_t c = testStringBuilder->charAt(0);
		testStringBuilder->setCharAt(0, u'c');
		testStringBuilder->setCharAt(0, c);
		if (!testString->contentEquals($(testStringBuilder->toString()))) {
			$throwNew($RuntimeException, "ContentsEqual failure"_s);
		}
	}
}

void ContentEquals::testCharSequence() {
	$init(ContentEquals);
	$useLocalObjectStack();
	for (int32_t i = 0; i < ContentEquals::ITERATIONS; ++i) {
		int32_t length = $nc(ContentEquals::rnd)->nextInt(ContentEquals::STR_LEN) + 1;
		$var($StringBuilder, testStringBuilder, $new($StringBuilder));
		for (int32_t x = 0; x < length; ++x) {
			char16_t aChar = (char16_t)ContentEquals::rnd->nextInt();
			testStringBuilder->append(aChar);
		}
		$var($String, testString, testStringBuilder->toString());
		char16_t c = testStringBuilder->charAt(0);
		testStringBuilder->setCharAt(0, u'c');
		testStringBuilder->setCharAt(0, c);
		$var($CharBuffer, buf, $CharBuffer::wrap($(testStringBuilder->toString())));
		if (!testString->contentEquals(buf)) {
			$throwNew($RuntimeException, "ContentsEqual failure"_s);
		}
	}
}

void ContentEquals::clinit$($Class* clazz) {
	$assignStatic(ContentEquals::rnd, $new($Random));
}

ContentEquals::ContentEquals() {
}

$Class* ContentEquals::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"rnd", "Ljava/util/Random;", nullptr, $PRIVATE | $STATIC, $staticField(ContentEquals, rnd)},
		{"ITERATIONS", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ContentEquals, ITERATIONS)},
		{"STR_LEN", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ContentEquals, STR_LEN)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ContentEquals, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(ContentEquals, main, void, $StringArray*), "java.lang.Exception"},
		{"testCharSequence", "()V", nullptr, $PUBLIC | $STATIC, $staticMethod(ContentEquals, testCharSequence, void), "java.lang.Exception"},
		{"testString", "()V", nullptr, $PUBLIC | $STATIC, $staticMethod(ContentEquals, testString, void), "java.lang.Exception"},
		{"testStringBuffer", "()V", nullptr, $PUBLIC | $STATIC, $staticMethod(ContentEquals, testStringBuffer, void), "java.lang.Exception"},
		{"testStringBuilder", "()V", nullptr, $PUBLIC | $STATIC, $staticMethod(ContentEquals, testStringBuilder, void), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"ContentEquals",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ContentEquals, name, initialize, &classInfo$$, ContentEquals::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(ContentEquals);
	});
	return class$;
}

$Class* ContentEquals::class$ = nullptr;