#include <java/util/stream/SortedOps$AbstractLongSortingSink.h>
#include <java/util/stream/Sink$ChainedLong.h>
#include <java/util/stream/Sink.h>
#include <java/util/stream/SortedOps.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Sink = ::java::util::stream::Sink;
using $Sink$ChainedLong = ::java::util::stream::Sink$ChainedLong;

namespace java {
	namespace util {
		namespace stream {

void SortedOps$AbstractLongSortingSink::init$($Sink* downstream) {
	$Sink$ChainedLong::init$(downstream);
}

bool SortedOps$AbstractLongSortingSink::cancellationRequested() {
	this->cancellationRequestedCalled = true;
	return false;
}

SortedOps$AbstractLongSortingSink::SortedOps$AbstractLongSortingSink() {
}

$Class* SortedOps$AbstractLongSortingSink::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"cancellationRequestedCalled", "Z", nullptr, $PROTECTED, $field(SortedOps$AbstractLongSortingSink, cancellationRequestedCalled)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/stream/Sink;)V", "(Ljava/util/stream/Sink<-Ljava/lang/Long;>;)V", 0, $method(SortedOps$AbstractLongSortingSink, init$, void, $Sink*)},
		{"cancellationRequested", "()Z", nullptr, $PUBLIC | $FINAL, $virtualMethod(SortedOps$AbstractLongSortingSink, cancellationRequested, bool)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.stream.SortedOps$AbstractLongSortingSink", "java.util.stream.SortedOps", "AbstractLongSortingSink", $PRIVATE | $STATIC | $ABSTRACT},
		{"java.util.stream.Sink$ChainedLong", "java.util.stream.Sink", "ChainedLong", $PUBLIC | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $ABSTRACT,
		"java.util.stream.SortedOps$AbstractLongSortingSink",
		"java.util.stream.Sink$ChainedLong",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljava/util/stream/Sink$ChainedLong<Ljava/lang/Long;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.stream.SortedOps"
	};
	$loadClass(SortedOps$AbstractLongSortingSink, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(SortedOps$AbstractLongSortingSink));
	});
	return class$;
}

$Class* SortedOps$AbstractLongSortingSink::class$ = nullptr;

		} // stream
	} // util
} // java