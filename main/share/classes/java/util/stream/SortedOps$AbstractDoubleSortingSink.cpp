#include <java/util/stream/SortedOps$AbstractDoubleSortingSink.h>
#include <java/util/stream/Sink$ChainedDouble.h>
#include <java/util/stream/Sink.h>
#include <java/util/stream/SortedOps.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Sink = ::java::util::stream::Sink;
using $Sink$ChainedDouble = ::java::util::stream::Sink$ChainedDouble;

namespace java {
	namespace util {
		namespace stream {

void SortedOps$AbstractDoubleSortingSink::init$($Sink* downstream) {
	$Sink$ChainedDouble::init$(downstream);
}

bool SortedOps$AbstractDoubleSortingSink::cancellationRequested() {
	this->cancellationRequestedCalled = true;
	return false;
}

SortedOps$AbstractDoubleSortingSink::SortedOps$AbstractDoubleSortingSink() {
}

$Class* SortedOps$AbstractDoubleSortingSink::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"cancellationRequestedCalled", "Z", nullptr, $PROTECTED, $field(SortedOps$AbstractDoubleSortingSink, cancellationRequestedCalled)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/stream/Sink;)V", "(Ljava/util/stream/Sink<-Ljava/lang/Double;>;)V", 0, $method(SortedOps$AbstractDoubleSortingSink, init$, void, $Sink*)},
		{"cancellationRequested", "()Z", nullptr, $PUBLIC | $FINAL, $virtualMethod(SortedOps$AbstractDoubleSortingSink, cancellationRequested, bool)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.stream.SortedOps$AbstractDoubleSortingSink", "java.util.stream.SortedOps", "AbstractDoubleSortingSink", $PRIVATE | $STATIC | $ABSTRACT},
		{"java.util.stream.Sink$ChainedDouble", "java.util.stream.Sink", "ChainedDouble", $PUBLIC | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $ABSTRACT,
		"java.util.stream.SortedOps$AbstractDoubleSortingSink",
		"java.util.stream.Sink$ChainedDouble",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljava/util/stream/Sink$ChainedDouble<Ljava/lang/Double;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.stream.SortedOps"
	};
	$loadClass(SortedOps$AbstractDoubleSortingSink, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(SortedOps$AbstractDoubleSortingSink));
	});
	return class$;
}

$Class* SortedOps$AbstractDoubleSortingSink::class$ = nullptr;

		} // stream
	} // util
} // java