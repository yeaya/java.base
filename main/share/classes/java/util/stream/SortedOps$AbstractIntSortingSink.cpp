#include <java/util/stream/SortedOps$AbstractIntSortingSink.h>
#include <java/util/stream/Sink$ChainedInt.h>
#include <java/util/stream/Sink.h>
#include <java/util/stream/SortedOps.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Sink = ::java::util::stream::Sink;
using $Sink$ChainedInt = ::java::util::stream::Sink$ChainedInt;

namespace java {
	namespace util {
		namespace stream {

void SortedOps$AbstractIntSortingSink::init$($Sink* downstream) {
	$Sink$ChainedInt::init$(downstream);
}

bool SortedOps$AbstractIntSortingSink::cancellationRequested() {
	this->cancellationRequestedCalled = true;
	return false;
}

SortedOps$AbstractIntSortingSink::SortedOps$AbstractIntSortingSink() {
}

$Class* SortedOps$AbstractIntSortingSink::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"cancellationRequestedCalled", "Z", nullptr, $PROTECTED, $field(SortedOps$AbstractIntSortingSink, cancellationRequestedCalled)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/stream/Sink;)V", "(Ljava/util/stream/Sink<-Ljava/lang/Integer;>;)V", 0, $method(SortedOps$AbstractIntSortingSink, init$, void, $Sink*)},
		{"cancellationRequested", "()Z", nullptr, $PUBLIC | $FINAL, $virtualMethod(SortedOps$AbstractIntSortingSink, cancellationRequested, bool)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.stream.SortedOps$AbstractIntSortingSink", "java.util.stream.SortedOps", "AbstractIntSortingSink", $PRIVATE | $STATIC | $ABSTRACT},
		{"java.util.stream.Sink$ChainedInt", "java.util.stream.Sink", "ChainedInt", $PUBLIC | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $ABSTRACT,
		"java.util.stream.SortedOps$AbstractIntSortingSink",
		"java.util.stream.Sink$ChainedInt",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljava/util/stream/Sink$ChainedInt<Ljava/lang/Integer;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.stream.SortedOps"
	};
	$loadClass(SortedOps$AbstractIntSortingSink, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(SortedOps$AbstractIntSortingSink));
	});
	return class$;
}

$Class* SortedOps$AbstractIntSortingSink::class$ = nullptr;

		} // stream
	} // util
} // java