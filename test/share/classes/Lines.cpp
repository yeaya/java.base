#include <Lines.h>

#include <java/io/BufferedReader.h>
#include <java/io/Reader.h>
#include <java/io/StringReader.h>
#include <java/util/Iterator.h>
#include <java/util/stream/Stream.h>
#include <jcpp.h>

using $BufferedReader = ::java::io::BufferedReader;
using $PrintStream = ::java::io::PrintStream;
using $Reader = ::java::io::Reader;
using $StringReader = ::java::io::StringReader;
using $ClassInfo = ::java::lang::ClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $Iterator = ::java::util::Iterator;
using $Stream = ::java::util::stream::Stream;

$MethodInfo _Lines_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(Lines, init$, void)},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC | $TRANSIENT, $staticMethod(Lines, main, void, $StringArray*)},
	{"testLines", "()V", nullptr, $STATIC, $staticMethod(Lines, testLines, void)},
	{"testString", "(Ljava/lang/String;)V", nullptr, $STATIC, $staticMethod(Lines, testString, void, $String*)},
	{}
};

$ClassInfo _Lines_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Lines",
	"java.lang.Object",
	nullptr,
	nullptr,
	_Lines_MethodInfo_
};

$Object* allocate$Lines($Class* clazz) {
	return $of($alloc(Lines));
}

void Lines::init$() {
}

void Lines::main($StringArray* arg) {
	testLines();
}

void Lines::testLines() {
	testString(""_s);
	testString(" "_s);
	testString("\n"_s);
	testString("\n\n\n"_s);
	testString("\r\r\r"_s);
	testString("\r\n\r\n\r\n"_s);
	testString("\n\r\r\n"_s);
	testString("abc\ndef\nghi\n"_s);
	testString("abc\ndef\nghi"_s);
	testString("abc\rdef\rghi\r"_s);
	testString("abc\rdef\rghi"_s);
	testString("abc\r\ndef\r\nghi\r\n"_s);
	testString("abc\r\ndef\r\nghi"_s);
	testString(u"\u00822"_s);
	testString(u"\u00822\n"_s);
	testString(u"\u00822\n\u00822\n\u00822\n"_s);
	testString(u"\u00822\r\u00822\r\u00822\r"_s);
	testString(u"\u00822\r\n\u00822\r\n\u00822\r\n"_s);
	testString(u"\u00822\n\u00822\r\u00822\r\n"_s);
	testString(u"abc\u00822\ndef\u00822\nghi\u00822\n"_s);
	testString(u"abc\u00822\ndef\u00822\nghi\u00822"_s);
	testString(u"abc\u00822\rdef\u00822\rghi\u00822\r"_s);
	testString(u"abc\u00822\rdef\u00822\rghi\u00822"_s);
	testString(u"abc\u00822\r\ndef\u00822\r\nghi\u00822\r\n"_s);
	testString(u"abc\u00822\r\ndef\u00822\r\nghi\u00822"_s);
	testString(u"\u00822\n\n\n"_s);
}

void Lines::testString($String* string) {
	$useLocalCurrentObjectStackCache();
	$var($Stream, lines, $nc(string)->lines());
	$var($Stream, brLines, $$new($BufferedReader, $$new($StringReader, string))->lines());
	$var($Iterator, iterator, lines->iterator());
	$var($Iterator, brIterator, $nc(brLines)->iterator());
	int32_t count = 0;
	while (true) {
		bool var$0 = $nc(iterator)->hasNext();
		if (!(var$0 && $nc(brIterator)->hasNext())) {
			break;
		}
		{
			++count;
			$var($String, line, $cast($String, iterator->next()));
			$var($String, brLine, $cast($String, brIterator->next()));
			if (!$nc(line)->equals(brLine)) {
				$var($String, replace, $(string->replaceAll("\n"_s, "\\n"_s))->replaceAll("\r"_s, "\\r"_s));
				$nc($System::err)->format("Mismatch at line %d of \"%s\"%n"_s, $$new($ObjectArray, {
					$($of($Integer::valueOf(count))),
					$of(replace)
				}));
				$throwNew($RuntimeException);
			}
		}
	}
	bool var$1 = $nc(iterator)->hasNext();
	if (var$1 || $nc(brIterator)->hasNext()) {
		$nc($System::err)->format("Mismatch after line %d of \"%s\"%n"_s, $$new($ObjectArray, {
			$($of($Integer::valueOf(count))),
			$of(string)
		}));
		$throwNew($RuntimeException);
	}
}

Lines::Lines() {
}

$Class* Lines::load$($String* name, bool initialize) {
	$loadClass(Lines, name, initialize, &_Lines_ClassInfo_, allocate$Lines);
	return class$;
}

$Class* Lines::class$ = nullptr;