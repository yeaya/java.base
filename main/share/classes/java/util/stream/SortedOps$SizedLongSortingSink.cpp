#include <java/util/stream/SortedOps$SizedLongSortingSink.h>
#include <java/util/Arrays.h>
#include <java/util/stream/Nodes.h>
#include <java/util/stream/Sink$ChainedLong.h>
#include <java/util/stream/Sink.h>
#include <java/util/stream/SortedOps$AbstractLongSortingSink.h>
#include <java/util/stream/SortedOps.h>
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
using $SortedOps$AbstractLongSortingSink = ::java::util::stream::SortedOps$AbstractLongSortingSink;

namespace java {
	namespace util {
		namespace stream {

void SortedOps$SizedLongSortingSink::init$($Sink* downstream) {
	$SortedOps$AbstractLongSortingSink::init$(downstream);
}

void SortedOps$SizedLongSortingSink::begin(int64_t size) {
	if (size >= $Nodes::MAX_ARRAY_SIZE) {
		$init($Nodes);
		$throwNew($IllegalArgumentException, $Nodes::BAD_SIZE);
	}
	$set(this, array, $new($longs, (int32_t)size));
}

void SortedOps$SizedLongSortingSink::end() {
	$Arrays::sort(this->array, 0, this->offset);
	$nc(this->downstream)->begin(this->offset);
	if (!this->cancellationRequestedCalled) {
		for (int32_t i = 0; i < this->offset; ++i) {
			this->downstream->accept($nc(this->array)->get(i));
		}
	} else {
		for (int32_t i = 0; i < this->offset && !this->downstream->cancellationRequested(); ++i) {
			this->downstream->accept($nc(this->array)->get(i));
		}
	}
	this->downstream->end();
	$set(this, array, nullptr);
}

void SortedOps$SizedLongSortingSink::accept(int64_t t) {
	$nc(this->array)->set(this->offset++, t);
}

SortedOps$SizedLongSortingSink::SortedOps$SizedLongSortingSink() {
}

$Class* SortedOps$SizedLongSortingSink::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"array", "[J", nullptr, $PRIVATE, $field(SortedOps$SizedLongSortingSink, array)},
		{"offset", "I", nullptr, $PRIVATE, $field(SortedOps$SizedLongSortingSink, offset)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/stream/Sink;)V", "(Ljava/util/stream/Sink<-Ljava/lang/Long;>;)V", 0, $method(SortedOps$SizedLongSortingSink, init$, void, $Sink*)},
		{"accept", "(J)V", nullptr, $PUBLIC, $virtualMethod(SortedOps$SizedLongSortingSink, accept, void, int64_t)},
		{"begin", "(J)V", nullptr, $PUBLIC, $virtualMethod(SortedOps$SizedLongSortingSink, begin, void, int64_t)},
		{"end", "()V", nullptr, $PUBLIC, $virtualMethod(SortedOps$SizedLongSortingSink, end, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.stream.SortedOps$SizedLongSortingSink", "java.util.stream.SortedOps", "SizedLongSortingSink", $PRIVATE | $STATIC | $FINAL},
		{"java.util.stream.SortedOps$AbstractLongSortingSink", "java.util.stream.SortedOps", "AbstractLongSortingSink", $PRIVATE | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.util.stream.SortedOps$SizedLongSortingSink",
		"java.util.stream.SortedOps$AbstractLongSortingSink",
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
	$loadClass(SortedOps$SizedLongSortingSink, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(SortedOps$SizedLongSortingSink));
	});
	return class$;
}

$Class* SortedOps$SizedLongSortingSink::class$ = nullptr;

		} // stream
	} // util
} // java