#include <QuoteTest.h>
#include <java/io/StreamTokenizer.h>
#include <java/io/StringReader.h>
#include <jcpp.h>

#undef TT_EOF

using $StreamTokenizer = ::java::io::StreamTokenizer;
using $StringReader = ::java::io::StringReader;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

$String* QuoteTest::testStr = nullptr;

void QuoteTest::init$() {
}

void QuoteTest::main($StringArray* args) {
	$init(QuoteTest);
	$useLocalObjectStack();
	$nc($System::err)->println($$str({"Parsing String: "_s, QuoteTest::testStr}));
	$var($StreamTokenizer, st, $new($StreamTokenizer, $$new($StringReader, QuoteTest::testStr)));
	bool foundToken = false;
	$var($String, matchStr, nullptr);
	while (st->nextToken() != $StreamTokenizer::TT_EOF) {
		switch (st->ttype) {
		case u'\"':
			foundToken = true;
			$assign(matchStr, st->toString());
			$System::err->println($$str({"Found token "_s, matchStr}));
			break;
		default:
			$System::err->println($$str({"Found token "_s, st}));
			break;
		}
	}
	if (!foundToken) {
		$throwNew($RuntimeException, "Test failed to recognize Quote type"_s);
	}
	if (!$nc(matchStr)->equals("Token[The test string], line 1"_s)) {
		$throwNew($RuntimeException, "Test failed parse quoted string"_s);
	}
}

void QuoteTest::clinit$($Class* clazz) {
	$assignStatic(QuoteTest::testStr, "token1 token2 \"The test string\" token4"_s);
}

QuoteTest::QuoteTest() {
}

$Class* QuoteTest::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"testStr", "Ljava/lang/String;", nullptr, $STATIC, $staticField(QuoteTest, testStr)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(QuoteTest, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(QuoteTest, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"QuoteTest",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(QuoteTest, name, initialize, &classInfo$$, QuoteTest::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(QuoteTest);
	});
	return class$;
}

$Class* QuoteTest::class$ = nullptr;