#include <java/util/stream/SortedOps$IntSortingSink.h>
#include <java/util/Arrays.h>
#include <java/util/stream/Nodes.h>
#include <java/util/stream/Sink$ChainedInt.h>
#include <java/util/stream/Sink.h>
#include <java/util/stream/SortedOps$AbstractIntSortingSink.h>
#include <java/util/stream/SortedOps.h>
#include <java/util/stream/SpinedBuffer$OfInt.h>
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
using $SortedOps$AbstractIntSortingSink = ::java::util::stream::SortedOps$AbstractIntSortingSink;
using $SpinedBuffer$OfInt = ::java::util::stream::SpinedBuffer$OfInt;

namespace java {
	namespace util {
		namespace stream {

void SortedOps$IntSortingSink::init$($Sink* sink) {
	$SortedOps$AbstractIntSortingSink::init$(sink);
}

void SortedOps$IntSortingSink::begin(int64_t size) {
	if (size >= $Nodes::MAX_ARRAY_SIZE) {
		$init($Nodes);
		$throwNew($IllegalArgumentException, $Nodes::BAD_SIZE);
	}
	$set(this, b, (size > 0) ? $new($SpinedBuffer$OfInt, (int32_t)size) : $new($SpinedBuffer$OfInt));
}

void SortedOps$IntSortingSink::end() {
	$useLocalObjectStack();
	$var($ints, ints, $cast($ints, $nc(this->b)->asPrimitiveArray()));
	$Arrays::sort(ints);
	$nc(this->downstream)->begin($nc(ints)->length);
	if (!this->cancellationRequestedCalled) {
		$var($ints, arr$, ints);
		for (int32_t len$ = arr$->length, i$ = 0; i$ < len$; ++i$) {
			int32_t anInt = arr$->get(i$);
			this->downstream->accept(anInt);
		}
	} else {
		$var($ints, arr$, ints);
		for (int32_t len$ = arr$->length, i$ = 0; i$ < len$; ++i$) {
			int32_t anInt = arr$->get(i$);
			{
				if (this->downstream->cancellationRequested()) {
					break;
				}
				this->downstream->accept(anInt);
			}
		}
	}
	this->downstream->end();
}

void SortedOps$IntSortingSink::accept(int32_t t) {
	$nc(this->b)->accept(t);
}

SortedOps$IntSortingSink::SortedOps$IntSortingSink() {
}

$Class* SortedOps$IntSortingSink::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"b", "Ljava/util/stream/SpinedBuffer$OfInt;", nullptr, $PRIVATE, $field(SortedOps$IntSortingSink, b)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/stream/Sink;)V", "(Ljava/util/stream/Sink<-Ljava/lang/Integer;>;)V", 0, $method(SortedOps$IntSortingSink, init$, void, $Sink*)},
		{"accept", "(I)V", nullptr, $PUBLIC, $virtualMethod(SortedOps$IntSortingSink, accept, void, int32_t)},
		{"begin", "(J)V", nullptr, $PUBLIC, $virtualMethod(SortedOps$IntSortingSink, begin, void, int64_t)},
		{"end", "()V", nullptr, $PUBLIC, $virtualMethod(SortedOps$IntSortingSink, end, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.stream.SortedOps$IntSortingSink", "java.util.stream.SortedOps", "IntSortingSink", $PRIVATE | $STATIC | $FINAL},
		{"java.util.stream.SortedOps$AbstractIntSortingSink", "java.util.stream.SortedOps", "AbstractIntSortingSink", $PRIVATE | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.util.stream.SortedOps$IntSortingSink",
		"java.util.stream.SortedOps$AbstractIntSortingSink",
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
	$loadClass(SortedOps$IntSortingSink, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(SortedOps$IntSortingSink));
	});
	return class$;
}

$Class* SortedOps$IntSortingSink::class$ = nullptr;

		} // stream
	} // util
} // java