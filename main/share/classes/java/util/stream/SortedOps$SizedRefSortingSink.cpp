#include <java/util/stream/SortedOps$SizedRefSortingSink.h>
#include <java/util/Arrays.h>
#include <java/util/Comparator.h>
#include <java/util/stream/Nodes.h>
#include <java/util/stream/Sink$ChainedReference.h>
#include <java/util/stream/Sink.h>
#include <java/util/stream/SortedOps$AbstractRefSortingSink.h>
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
using $Comparator = ::java::util::Comparator;
using $Nodes = ::java::util::stream::Nodes;
using $Sink = ::java::util::stream::Sink;
using $SortedOps$AbstractRefSortingSink = ::java::util::stream::SortedOps$AbstractRefSortingSink;

namespace java {
	namespace util {
		namespace stream {

void SortedOps$SizedRefSortingSink::init$($Sink* sink, $Comparator* comparator) {
	$SortedOps$AbstractRefSortingSink::init$(sink, comparator);
}

void SortedOps$SizedRefSortingSink::begin(int64_t size) {
	if (size >= $Nodes::MAX_ARRAY_SIZE) {
		$init($Nodes);
		$throwNew($IllegalArgumentException, $Nodes::BAD_SIZE);
	}
	$set(this, array, $new($ObjectArray, (int32_t)size));
}

void SortedOps$SizedRefSortingSink::end() {
	$Arrays::sort(this->array, 0, this->offset, this->comparator);
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

void SortedOps$SizedRefSortingSink::accept(Object$* t) {
	$nc(this->array)->set(this->offset++, t);
}

SortedOps$SizedRefSortingSink::SortedOps$SizedRefSortingSink() {
}

$Class* SortedOps$SizedRefSortingSink::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"array", "[Ljava/lang/Object;", "[TT;", $PRIVATE, $field(SortedOps$SizedRefSortingSink, array)},
		{"offset", "I", nullptr, $PRIVATE, $field(SortedOps$SizedRefSortingSink, offset)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/stream/Sink;Ljava/util/Comparator;)V", "(Ljava/util/stream/Sink<-TT;>;Ljava/util/Comparator<-TT;>;)V", 0, $method(SortedOps$SizedRefSortingSink, init$, void, $Sink*, $Comparator*)},
		{"accept", "(Ljava/lang/Object;)V", "(TT;)V", $PUBLIC, $virtualMethod(SortedOps$SizedRefSortingSink, accept, void, Object$*)},
		{"begin", "(J)V", nullptr, $PUBLIC, $virtualMethod(SortedOps$SizedRefSortingSink, begin, void, int64_t)},
		{"end", "()V", nullptr, $PUBLIC, $virtualMethod(SortedOps$SizedRefSortingSink, end, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.stream.SortedOps$SizedRefSortingSink", "java.util.stream.SortedOps", "SizedRefSortingSink", $PRIVATE | $STATIC | $FINAL},
		{"java.util.stream.SortedOps$AbstractRefSortingSink", "java.util.stream.SortedOps", "AbstractRefSortingSink", $PRIVATE | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.util.stream.SortedOps$SizedRefSortingSink",
		"java.util.stream.SortedOps$AbstractRefSortingSink",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"<T:Ljava/lang/Object;>Ljava/util/stream/SortedOps$AbstractRefSortingSink<TT;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.stream.SortedOps"
	};
	$loadClass(SortedOps$SizedRefSortingSink, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SortedOps$SizedRefSortingSink);
	});
	return class$;
}

$Class* SortedOps$SizedRefSortingSink::class$ = nullptr;

		} // stream
	} // util
} // java