#include <ReadAhead$StreamTokenizerMaker.h>
#include <ReadAhead.h>
#include <java/io/StreamTokenizer.h>
#include <jcpp.h>

using $StreamTokenizer = ::java::io::StreamTokenizer;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$Class* ReadAhead$StreamTokenizerMaker::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"create", "(Ljava/lang/String;I)Ljava/io/StreamTokenizer;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ReadAhead$StreamTokenizerMaker, create, $StreamTokenizer*, $String*, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"ReadAhead$StreamTokenizerMaker", "ReadAhead", "StreamTokenizerMaker", $PRIVATE | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"ReadAhead$StreamTokenizerMaker",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"ReadAhead"
	};
	$loadClass(ReadAhead$StreamTokenizerMaker, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ReadAhead$StreamTokenizerMaker);
	});
	return class$;
}

$Class* ReadAhead$StreamTokenizerMaker::class$ = nullptr;