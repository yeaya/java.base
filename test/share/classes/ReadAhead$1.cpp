#include <ReadAhead$1.h>
#include <ReadAhead$LimitedInputStream.h>
#include <ReadAhead.h>
#include <java/io/StreamTokenizer.h>
#include <jcpp.h>

using $ReadAhead$LimitedInputStream = ::ReadAhead$LimitedInputStream;
using $StreamTokenizer = ::java::io::StreamTokenizer;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void ReadAhead$1::init$() {
}

$StreamTokenizer* ReadAhead$1::create($String* input, int32_t limit) {
	return $new($StreamTokenizer, $$new($ReadAhead$LimitedInputStream, input, limit));
}

ReadAhead$1::ReadAhead$1() {
}

$Class* ReadAhead$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(ReadAhead$1, init$, void)},
		{"create", "(Ljava/lang/String;I)Ljava/io/StreamTokenizer;", nullptr, $PUBLIC, $virtualMethod(ReadAhead$1, create, $StreamTokenizer*, $String*, int32_t)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"ReadAhead",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"ReadAhead$1", nullptr, nullptr, 0},
		{"ReadAhead$StreamTokenizerMaker", "ReadAhead", "StreamTokenizerMaker", $PRIVATE | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"ReadAhead$1",
		"java.lang.Object",
		"ReadAhead$StreamTokenizerMaker",
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"ReadAhead"
	};
	$loadClass(ReadAhead$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ReadAhead$1);
	});
	return class$;
}

$Class* ReadAhead$1::class$ = nullptr;