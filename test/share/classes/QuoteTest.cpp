#include <QuoteTest.h>

#include <java/io/Reader.h>
#include <java/io/StreamTokenizer.h>
#include <java/io/StringReader.h>
#include <jcpp.h>

#undef TT_EOF

using $PrintStream = ::java::io::PrintStream;
using $Reader = ::java::io::Reader;
using $StreamTokenizer = ::java::io::StreamTokenizer;
using $StringReader = ::java::io::StringReader;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

$FieldInfo _QuoteTest_FieldInfo_[] = {
	{"testStr", "Ljava/lang/String;", nullptr, $STATIC, $staticField(QuoteTest, testStr)},
	{}
};

$MethodInfo _QuoteTest_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(QuoteTest::*)()>(&QuoteTest::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&QuoteTest::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _QuoteTest_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"QuoteTest",
	"java.lang.Object",
	nullptr,
	_QuoteTest_FieldInfo_,
	_QuoteTest_MethodInfo_
};

$Object* allocate$QuoteTest($Class* clazz) {
	return $of($alloc(QuoteTest));
}

$String* QuoteTest::testStr = nullptr;

void QuoteTest::init$() {
}

void QuoteTest::main($StringArray* args) {
	$init(QuoteTest);
	$useLocalCurrentObjectStackCache();
	$nc($System::err)->println($$str({"Parsing String: "_s, QuoteTest::testStr}));
	$var($StreamTokenizer, st, $new($StreamTokenizer, static_cast<$Reader*>($$new($StringReader, QuoteTest::testStr))));
	bool foundToken = false;
	$var($String, matchStr, nullptr);
	while (st->nextToken() != $StreamTokenizer::TT_EOF) {
		switch (st->ttype) {
		case u'\"':
			{
				foundToken = true;
				$assign(matchStr, st->toString());
				$nc($System::err)->println($$str({"Found token "_s, matchStr}));
				break;
			}
		default:
			{
				$nc($System::err)->println($$str({"Found token "_s, st}));
				break;
			}
		}
	}
	if (!foundToken) {
		$throwNew($RuntimeException, "Test failed to recognize Quote type"_s);
	}
	if (!$nc(matchStr)->equals("Token[The test string], line 1"_s)) {
		$throwNew($RuntimeException, "Test failed parse quoted string"_s);
	}
}

void clinit$QuoteTest($Class* class$) {
	$assignStatic(QuoteTest::testStr, "token1 token2 \"The test string\" token4"_s);
}

QuoteTest::QuoteTest() {
}

$Class* QuoteTest::load$($String* name, bool initialize) {
	$loadClass(QuoteTest, name, initialize, &_QuoteTest_ClassInfo_, clinit$QuoteTest, allocate$QuoteTest);
	return class$;
}

$Class* QuoteTest::class$ = nullptr;