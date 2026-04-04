#include <ReadAhead$2.h>
#include <ReadAhead$LimitedReader.h>
#include <ReadAhead.h>
#include <java/io/StreamTokenizer.h>
#include <jcpp.h>

using $ReadAhead$LimitedReader = ::ReadAhead$LimitedReader;
using $StreamTokenizer = ::java::io::StreamTokenizer;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void ReadAhead$2::init$() {
}

$StreamTokenizer* ReadAhead$2::create($String* input, int32_t limit) {
	return $new($StreamTokenizer, $$new($ReadAhead$LimitedReader, input, limit));
}

ReadAhead$2::ReadAhead$2() {
}

$Class* ReadAhead$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(ReadAhead$2, init$, void)},
		{"create", "(Ljava/lang/String;I)Ljava/io/StreamTokenizer;", nullptr, $PUBLIC, $virtualMethod(ReadAhead$2, create, $StreamTokenizer*, $String*, int32_t)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"ReadAhead",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"ReadAhead$2", nullptr, nullptr, 0},
		{"ReadAhead$StreamTokenizerMaker", "ReadAhead", "StreamTokenizerMaker", $PRIVATE | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"ReadAhead$2",
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
	$loadClass(ReadAhead$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ReadAhead$2);
	});
	return class$;
}

$Class* ReadAhead$2::class$ = nullptr;