#include <CompactStringsInitialCoder.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/StringBuilder.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $MethodInfo = ::java::lang::MethodInfo;

$FieldInfo _CompactStringsInitialCoder_FieldInfo_[] = {
	{"strEmpty", "Ljava/lang/String;", nullptr, $STATIC, $staticField(CompactStringsInitialCoder, strEmpty)},
	{"strLatin1", "Ljava/lang/String;", nullptr, $STATIC, $staticField(CompactStringsInitialCoder, strLatin1)},
	{"strUTF16", "Ljava/lang/String;", nullptr, $STATIC, $staticField(CompactStringsInitialCoder, strUTF16)},
	{"charLatin1", "C", nullptr, $STATIC, $staticField(CompactStringsInitialCoder, charLatin1)},
	{"charUTF16", "C", nullptr, $STATIC, $staticField(CompactStringsInitialCoder, charUTF16)},
	{}
};

$MethodInfo _CompactStringsInitialCoder_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CompactStringsInitialCoder::*)()>(&CompactStringsInitialCoder::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&CompactStringsInitialCoder::main)), "java.lang.Exception"},
	{"test", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($String*,$String*)>(&CompactStringsInitialCoder::test))},
	{}
};

$ClassInfo _CompactStringsInitialCoder_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"CompactStringsInitialCoder",
	"java.lang.Object",
	nullptr,
	_CompactStringsInitialCoder_FieldInfo_,
	_CompactStringsInitialCoder_MethodInfo_
};

$Object* allocate$CompactStringsInitialCoder($Class* clazz) {
	return $of($alloc(CompactStringsInitialCoder));
}

$String* CompactStringsInitialCoder::strEmpty = nullptr;
$String* CompactStringsInitialCoder::strLatin1 = nullptr;
$String* CompactStringsInitialCoder::strUTF16 = nullptr;
char16_t CompactStringsInitialCoder::charLatin1 = 0;
char16_t CompactStringsInitialCoder::charUTF16 = 0;

void CompactStringsInitialCoder::init$() {
}

void CompactStringsInitialCoder::main($StringArray* args) {
	$init(CompactStringsInitialCoder);
	test("B"_s, $$str({""_s, $$str(u'B')}));
	test(u"\u4242"_s, $$str({""_s, $$str((char16_t)0x4242)}));
	test("B"_s, $$str({""_s, $$str(CompactStringsInitialCoder::charLatin1)}));
	test(u"\u4242"_s, $$str({""_s, $$str(CompactStringsInitialCoder::charUTF16)}));
	test("B"_s, $$str({CompactStringsInitialCoder::strEmpty, $$str(u'B')}));
	test(u"\u4242"_s, $$str({CompactStringsInitialCoder::strEmpty, $$str((char16_t)0x4242)}));
	test("BB"_s, $$str({CompactStringsInitialCoder::strLatin1, $$str(u'B')}));
	test(u"B\u4242"_s, $$str({CompactStringsInitialCoder::strLatin1, $$str((char16_t)0x4242)}));
	test(u"\u4242B"_s, $$str({CompactStringsInitialCoder::strUTF16, $$str(u'B')}));
	test(u"\u4242\u4242"_s, $$str({CompactStringsInitialCoder::strUTF16, $$str((char16_t)0x4242)}));
	test("BB"_s, $$str({"B"_s, $$str(CompactStringsInitialCoder::charLatin1)}));
	test(u"B\u4242"_s, $$str({"B"_s, $$str(CompactStringsInitialCoder::charUTF16)}));
	test(u"\u4242B"_s, $$str({u"\u4242"_s, $$str(CompactStringsInitialCoder::charLatin1)}));
	test(u"\u4242\u4242"_s, $$str({u"\u4242"_s, $$str(CompactStringsInitialCoder::charUTF16)}));
	test("BB"_s, $$str({""_s, $$str(CompactStringsInitialCoder::charLatin1), $$str(CompactStringsInitialCoder::charLatin1)}));
	test(u"B\u4242"_s, $$str({""_s, $$str(CompactStringsInitialCoder::charLatin1), $$str(CompactStringsInitialCoder::charUTF16)}));
	test(u"\u4242B"_s, $$str({""_s, $$str(CompactStringsInitialCoder::charUTF16), $$str(CompactStringsInitialCoder::charLatin1)}));
	test(u"\u4242\u4242"_s, $$str({""_s, $$str(CompactStringsInitialCoder::charUTF16), $$str(CompactStringsInitialCoder::charUTF16)}));
}

void CompactStringsInitialCoder::test($String* expected, $String* actual) {
	$init(CompactStringsInitialCoder);
	if (!$nc(expected)->equals(actual)) {
		$var($StringBuilder, sb, $new($StringBuilder));
		sb->append("Expected = "_s);
		sb->append(expected);
		sb->append(", actual = "_s);
		sb->append(actual);
		$throwNew($IllegalStateException, $(sb->toString()));
	}
}

void clinit$CompactStringsInitialCoder($Class* class$) {
	$assignStatic(CompactStringsInitialCoder::strEmpty, ""_s);
	$assignStatic(CompactStringsInitialCoder::strLatin1, "B"_s);
	$assignStatic(CompactStringsInitialCoder::strUTF16, u"\u4242"_s);
	CompactStringsInitialCoder::charLatin1 = u'B';
	CompactStringsInitialCoder::charUTF16 = (char16_t)0x4242;
}

CompactStringsInitialCoder::CompactStringsInitialCoder() {
}

$Class* CompactStringsInitialCoder::load$($String* name, bool initialize) {
	$loadClass(CompactStringsInitialCoder, name, initialize, &_CompactStringsInitialCoder_ClassInfo_, clinit$CompactStringsInitialCoder, allocate$CompactStringsInitialCoder);
	return class$;
}

$Class* CompactStringsInitialCoder::class$ = nullptr;