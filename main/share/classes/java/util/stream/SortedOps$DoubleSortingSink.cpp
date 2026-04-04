#include <java/util/stream/SortedOps$DoubleSortingSink.h>
#include <java/util/Arrays.h>
#include <java/util/stream/Nodes.h>
#include <java/util/stream/Sink$ChainedDouble.h>
#include <java/util/stream/Sink.h>
#include <java/util/stream/SortedOps$AbstractDoubleSortingSink.h>
#include <java/util/stream/SortedOps.h>
#include <java/util/stream/SpinedBuffer$OfDouble.h>
#include <jcpp.h>

#undef BAD_SIZE
#undef MAX_ARRAY_SIZE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Arrays = ::java::util::Arrays;
using $Nodes = ::java::util::stream::Nodes;
using $Sink = ::java::util::stream::Sink;
using $SortedOps$AbstractDoubleSortingSink = ::java::util::stream::SortedOps$AbstractDoubleSortingSink;
using $SpinedBuffer$OfDouble = ::java::util::stream::SpinedBuffer$OfDouble;

namespace java {
	namespace util {
		namespace stream {

void SortedOps$DoubleSortingSink::init$($Sink* sink) {
	$SortedOps$AbstractDoubleSortingSink::init$(sink);
}

void SortedOps$DoubleSortingSink::begin(int64_t size) {
	if (size >= $Nodes::MAX_ARRAY_SIZE) {
		$init($Nodes);
		$throwNew($IllegalArgumentException, $Nodes::BAD_SIZE);
	}
	$set(this, b, (size > 0) ? $new($SpinedBuffer$OfDouble, (int32_t)size) : $new($SpinedBuffer$OfDouble));
}

void SortedOps$DoubleSortingSink::end() {
	$useLocalObjectStack();
	$var($doubles, doubles, $cast($doubles, $nc(this->b)->asPrimitiveArray()));
	$Arrays::sort(doubles);
	$nc(this->downstream)->begin($nc(doubles)->length);
	if (!this->cancellationRequestedCalled) {
		$var($doubles, arr$, doubles);
		for (int32_t len$ = arr$->length, i$ = 0; i$ < len$; ++i$) {
			double aDouble = arr$->get(i$);
			this->downstream->accept(aDouble);
		}
	} else {
		$var($doubles, arr$, doubles);
		for (int32_t len$ = arr$->length, i$ = 0; i$ < len$; ++i$) {
			double aDouble = arr$->get(i$);
			{
				if (this->downstream->cancellationRequested()) {
					break;
				}
				this->downstream->accept(aDouble);
			}
		}
	}
	this->downstream->end();
}

void SortedOps$DoubleSortingSink::accept(double t) {
	$nc(this->b)->accept(t);
}

SortedOps$DoubleSortingSink::SortedOps$DoubleSortingSink() {
}

$Class* SortedOps$DoubleSortingSink::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"b", "Ljava/util/stream/SpinedBuffer$OfDouble;", nullptr, $PRIVATE, $field(SortedOps$DoubleSortingSink, b)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/stream/Sink;)V", "(Ljava/util/stream/Sink<-Ljava/lang/Double;>;)V", 0, $method(SortedOps$DoubleSortingSink, init$, void, $Sink*)},
		{"accept", "(D)V", nullptr, $PUBLIC, $virtualMethod(SortedOps$DoubleSortingSink, accept, void, double)},
		{"begin", "(J)V", nullptr, $PUBLIC, $virtualMethod(SortedOps$DoubleSortingSink, begin, void, int64_t)},
		{"end", "()V", nullptr, $PUBLIC, $virtualMethod(SortedOps$DoubleSortingSink, end, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.stream.SortedOps$DoubleSortingSink", "java.util.stream.SortedOps", "DoubleSortingSink", $PRIVATE | $STATIC | $FINAL},
		{"java.util.stream.SortedOps$AbstractDoubleSortingSink", "java.util.stream.SortedOps", "AbstractDoubleSortingSink", $PRIVATE | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.util.stream.SortedOps$DoubleSortingSink",
		"java.util.stream.SortedOps$AbstractDoubleSortingSink",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.stream.SortedOps"
	};
	$loadClass(SortedOps$DoubleSortingSink, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(SortedOps$DoubleSortingSink));
	});
	return class$;
}

$Class* SortedOps$DoubleSortingSink::class$ = nullptr;

		} // stream
	} // util
} // java