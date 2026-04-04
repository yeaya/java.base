#include <java/util/stream/SortedOps$SizedIntSortingSink.h>
#include <java/util/Arrays.h>
#include <java/util/stream/Nodes.h>
#include <java/util/stream/Sink$ChainedInt.h>
#include <java/util/stream/Sink.h>
#include <java/util/stream/SortedOps$AbstractIntSortingSink.h>
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
using $SortedOps$AbstractIntSortingSink = ::java::util::stream::SortedOps$AbstractIntSortingSink;

namespace java {
	namespace util {
		namespace stream {

void SortedOps$SizedIntSortingSink::init$($Sink* downstream) {
	$SortedOps$AbstractIntSortingSink::init$(downstream);
}

void SortedOps$SizedIntSortingSink::begin(int64_t size) {
	if (size >= $Nodes::MAX_ARRAY_SIZE) {
		$init($Nodes);
		$throwNew($IllegalArgumentException, $Nodes::BAD_SIZE);
	}
	$set(this, array, $new($ints, (int32_t)size));
}

void SortedOps$SizedIntSortingSink::end() {
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

void SortedOps$SizedIntSortingSink::accept(int32_t t) {
	$nc(this->array)->set(this->offset++, t);
}

SortedOps$SizedIntSortingSink::SortedOps$SizedIntSortingSink() {
}

$Class* SortedOps$SizedIntSortingSink::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"array", "[I", nullptr, $PRIVATE, $field(SortedOps$SizedIntSortingSink, array)},
		{"offset", "I", nullptr, $PRIVATE, $field(SortedOps$SizedIntSortingSink, offset)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/stream/Sink;)V", "(Ljava/util/stream/Sink<-Ljava/lang/Integer;>;)V", 0, $method(SortedOps$SizedIntSortingSink, init$, void, $Sink*)},
		{"accept", "(I)V", nullptr, $PUBLIC, $virtualMethod(SortedOps$SizedIntSortingSink, accept, void, int32_t)},
		{"begin", "(J)V", nullptr, $PUBLIC, $virtualMethod(SortedOps$SizedIntSortingSink, begin, void, int64_t)},
		{"end", "()V", nullptr, $PUBLIC, $virtualMethod(SortedOps$SizedIntSortingSink, end, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.stream.SortedOps$SizedIntSortingSink", "java.util.stream.SortedOps", "SizedIntSortingSink", $PRIVATE | $STATIC | $FINAL},
		{"java.util.stream.SortedOps$AbstractIntSortingSink", "java.util.stream.SortedOps", "AbstractIntSortingSink", $PRIVATE | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.util.stream.SortedOps$SizedIntSortingSink",
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
	$loadClass(SortedOps$SizedIntSortingSink, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(SortedOps$SizedIntSortingSink));
	});
	return class$;
}

$Class* SortedOps$SizedIntSortingSink::class$ = nullptr;

		} // stream
	} // util
} // java