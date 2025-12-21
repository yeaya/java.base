#include <CompactStringsInitialCoder.h>

#include <java/lang/IllegalStateException.h>
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
	$useLocalCurrentObjectStackCache();
	test("B"_s, $$str({""_s, $$str(u'B')}));
	test(u"䉂"_s, $$str({""_s, $$str(u'䉂')}));
	test("B"_s, $$str({""_s, $$str(CompactStringsInitialCoder::charLatin1)}));
	test(u"䉂"_s, $$str({""_s, $$str(CompactStringsInitialCoder::charUTF16)}));
	test("B"_s, $$str({CompactStringsInitialCoder::strEmpty, $$str(u'B')}));
	test(u"䉂"_s, $$str({CompactStringsInitialCoder::strEmpty, $$str(u'䉂')}));
	test("BB"_s, $$str({CompactStringsInitialCoder::strLatin1, $$str(u'B')}));
	test(u"B䉂"_s, $$str({CompactStringsInitialCoder::strLatin1, $$str(u'䉂')}));
	test(u"䉂B"_s, $$str({CompactStringsInitialCoder::strUTF16, $$str(u'B')}));
	test(u"䉂䉂"_s, $$str({CompactStringsInitialCoder::strUTF16, $$str(u'䉂')}));
	test("BB"_s, $$str({"B"_s, $$str(CompactStringsInitialCoder::charLatin1)}));
	test(u"B䉂"_s, $$str({"B"_s, $$str(CompactStringsInitialCoder::charUTF16)}));
	test(u"䉂B"_s, $$str({u"䉂"_s, $$str(CompactStringsInitialCoder::charLatin1)}));
	test(u"䉂䉂"_s, $$str({u"䉂"_s, $$str(CompactStringsInitialCoder::charUTF16)}));
	test("BB"_s, $$str({""_s, $$str(CompactStringsInitialCoder::charLatin1), $$str(CompactStringsInitialCoder::charLatin1)}));
	test(u"B䉂"_s, $$str({""_s, $$str(CompactStringsInitialCoder::charLatin1), $$str(CompactStringsInitialCoder::charUTF16)}));
	test(u"䉂B"_s, $$str({""_s, $$str(CompactStringsInitialCoder::charUTF16), $$str(CompactStringsInitialCoder::charLatin1)}));
	test(u"䉂䉂"_s, $$str({""_s, $$str(CompactStringsInitialCoder::charUTF16), $$str(CompactStringsInitialCoder::charUTF16)}));
}

void CompactStringsInitialCoder::test($String* expected, $String* actual) {
	$init(CompactStringsInitialCoder);
	$useLocalCurrentObjectStackCache();
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
	$assignStatic(CompactStringsInitialCoder::strUTF16, u"䉂"_s);
	CompactStringsInitialCoder::charLatin1 = u'B';
	CompactStringsInitialCoder::charUTF16 = u'䉂';
}

CompactStringsInitialCoder::CompactStringsInitialCoder() {
}

$Class* CompactStringsInitialCoder::load$($String* name, bool initialize) {
	$loadClass(CompactStringsInitialCoder, name, initialize, &_CompactStringsInitialCoder_ClassInfo_, clinit$CompactStringsInitialCoder, allocate$CompactStringsInitialCoder);
	return class$;
}

$Class* CompactStringsInitialCoder::class$ = nullptr;