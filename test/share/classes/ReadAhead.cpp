#include <ReadAhead.h>

#include <ReadAhead$1.h>
#include <ReadAhead$2.h>
#include <ReadAhead$StreamTokenizerMaker.h>
#include <java/io/StreamTokenizer.h>
#include <jcpp.h>

#undef TT_EOL
#undef TT_WORD

using $ReadAhead$1 = ::ReadAhead$1;
using $ReadAhead$2 = ::ReadAhead$2;
using $ReadAhead$StreamTokenizerMaker = ::ReadAhead$StreamTokenizerMaker;
using $StreamTokenizer = ::java::io::StreamTokenizer;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _ReadAhead_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(ReadAhead, init$, void)},
	{"fail", "(Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(ReadAhead, fail, void, $String*), "java.lang.Exception"},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(ReadAhead, main, void, $StringArray*), "java.lang.Exception"},
	{"test", "(Ljava/io/StreamTokenizer;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(ReadAhead, test, void, $StreamTokenizer*), "java.lang.Exception"},
	{"test", "(LReadAhead$StreamTokenizerMaker;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(ReadAhead, test, void, $ReadAhead$StreamTokenizerMaker*), "java.lang.Exception"},
	{}
};

$InnerClassInfo _ReadAhead_InnerClassesInfo_[] = {
	{"ReadAhead$StreamTokenizerMaker", "ReadAhead", "StreamTokenizerMaker", $PRIVATE | $STATIC | $INTERFACE | $ABSTRACT},
	{"ReadAhead$LimitedReader", "ReadAhead", "LimitedReader", $PRIVATE | $STATIC},
	{"ReadAhead$LimitedInputStream", "ReadAhead", "LimitedInputStream", $PRIVATE | $STATIC},
	{"ReadAhead$2", nullptr, nullptr, 0},
	{"ReadAhead$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ReadAhead_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"ReadAhead",
	"java.lang.Object",
	nullptr,
	nullptr,
	_ReadAhead_MethodInfo_,
	nullptr,
	nullptr,
	_ReadAhead_InnerClassesInfo_,
	nullptr,
	nullptr,
	"ReadAhead$StreamTokenizerMaker,ReadAhead$LimitedReader,ReadAhead$LimitedInputStream,ReadAhead$2,ReadAhead$1"
};

$Object* allocate$ReadAhead($Class* clazz) {
	return $of($alloc(ReadAhead));
}

void ReadAhead::init$() {
}

void ReadAhead::fail($String* why) {
	$throwNew($Exception, why);
}

void ReadAhead::test($StreamTokenizer* st) {
	$nc(st)->eolIsSignificant(true);
	int32_t tt = st->nextToken();
	if (tt != $StreamTokenizer::TT_WORD) {
		fail("expected TT_WORD"_s);
	}
	if (!$nc(st->sval)->equals("foo"_s)) {
		fail("expected word token \"foo\""_s);
	}
	tt = st->nextToken();
	if (tt != $StreamTokenizer::TT_EOL) {
		fail("expected TT_EOL"_s);
	}
}

void ReadAhead::test($ReadAhead$StreamTokenizerMaker* stm) {
	$useLocalCurrentObjectStackCache();
	test($($nc(stm)->create("foo\nx"_s, 4)));
	test($($nc(stm)->create("foo\r\nx"_s, 4)));
}

void ReadAhead::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	test(static_cast<$ReadAhead$StreamTokenizerMaker*>($$new($ReadAhead$1)));
	test(static_cast<$ReadAhead$StreamTokenizerMaker*>($$new($ReadAhead$2)));
}

ReadAhead::ReadAhead() {
}

$Class* ReadAhead::load$($String* name, bool initialize) {
	$loadClass(ReadAhead, name, initialize, &_ReadAhead_ClassInfo_, allocate$ReadAhead);
	return class$;
}

$Class* ReadAhead::class$ = nullptr;