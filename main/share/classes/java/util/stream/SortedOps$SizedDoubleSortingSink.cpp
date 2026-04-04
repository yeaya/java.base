#include <java/util/stream/SortedOps$SizedDoubleSortingSink.h>
#include <java/util/Arrays.h>
#include <java/util/stream/Nodes.h>
#include <java/util/stream/Sink$ChainedDouble.h>
#include <java/util/stream/Sink.h>
#include <java/util/stream/SortedOps$AbstractDoubleSortingSink.h>
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
using $SortedOps$AbstractDoubleSortingSink = ::java::util::stream::SortedOps$AbstractDoubleSortingSink;

namespace java {
	namespace util {
		namespace stream {

void SortedOps$SizedDoubleSortingSink::init$($Sink* downstream) {
	$SortedOps$AbstractDoubleSortingSink::init$(downstream);
}

void SortedOps$SizedDoubleSortingSink::begin(int64_t size) {
	if (size >= $Nodes::MAX_ARRAY_SIZE) {
		$init($Nodes);
		$throwNew($IllegalArgumentException, $Nodes::BAD_SIZE);
	}
	$set(this, array, $new($doubles, (int32_t)size));
}

void SortedOps$SizedDoubleSortingSink::end() {
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

void SortedOps$SizedDoubleSortingSink::accept(double t) {
	$nc(this->array)->set(this->offset++, t);
}

SortedOps$SizedDoubleSortingSink::SortedOps$SizedDoubleSortingSink() {
}

$Class* SortedOps$SizedDoubleSortingSink::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"array", "[D", nullptr, $PRIVATE, $field(SortedOps$SizedDoubleSortingSink, array)},
		{"offset", "I", nullptr, $PRIVATE, $field(SortedOps$SizedDoubleSortingSink, offset)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/stream/Sink;)V", "(Ljava/util/stream/Sink<-Ljava/lang/Double;>;)V", 0, $method(SortedOps$SizedDoubleSortingSink, init$, void, $Sink*)},
		{"accept", "(D)V", nullptr, $PUBLIC, $virtualMethod(SortedOps$SizedDoubleSortingSink, accept, void, double)},
		{"begin", "(J)V", nullptr, $PUBLIC, $virtualMethod(SortedOps$SizedDoubleSortingSink, begin, void, int64_t)},
		{"end", "()V", nullptr, $PUBLIC, $virtualMethod(SortedOps$SizedDoubleSortingSink, end, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.stream.SortedOps$SizedDoubleSortingSink", "java.util.stream.SortedOps", "SizedDoubleSortingSink", $PRIVATE | $STATIC | $FINAL},
		{"java.util.stream.SortedOps$AbstractDoubleSortingSink", "java.util.stream.SortedOps", "AbstractDoubleSortingSink", $PRIVATE | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.util.stream.SortedOps$SizedDoubleSortingSink",
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
	$loadClass(SortedOps$SizedDoubleSortingSink, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(SortedOps$SizedDoubleSortingSink));
	});
	return class$;
}

$Class* SortedOps$SizedDoubleSortingSink::class$ = nullptr;

		} // stream
	} // util
} // java