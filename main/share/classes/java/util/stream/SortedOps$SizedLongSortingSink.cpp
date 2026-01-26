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

$FieldInfo _SortedOps$SizedLongSortingSink_FieldInfo_[] = {
	{"array", "[J", nullptr, $PRIVATE, $field(SortedOps$SizedLongSortingSink, array)},
	{"offset", "I", nullptr, $PRIVATE, $field(SortedOps$SizedLongSortingSink, offset)},
	{}
};

$MethodInfo _SortedOps$SizedLongSortingSink_MethodInfo_[] = {
	{"<init>", "(Ljava/util/stream/Sink;)V", "(Ljava/util/stream/Sink<-Ljava/lang/Long;>;)V", 0, $method(SortedOps$SizedLongSortingSink, init$, void, $Sink*)},
	{"accept", "(J)V", nullptr, $PUBLIC, $virtualMethod(SortedOps$SizedLongSortingSink, accept, void, int64_t)},
	{"begin", "(J)V", nullptr, $PUBLIC, $virtualMethod(SortedOps$SizedLongSortingSink, begin, void, int64_t)},
	{"end", "()V", nullptr, $PUBLIC, $virtualMethod(SortedOps$SizedLongSortingSink, end, void)},
	{}
};

$InnerClassInfo _SortedOps$SizedLongSortingSink_InnerClassesInfo_[] = {
	{"java.util.stream.SortedOps$SizedLongSortingSink", "java.util.stream.SortedOps", "SizedLongSortingSink", $PRIVATE | $STATIC | $FINAL},
	{"java.util.stream.SortedOps$AbstractLongSortingSink", "java.util.stream.SortedOps", "AbstractLongSortingSink", $PRIVATE | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _SortedOps$SizedLongSortingSink_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.stream.SortedOps$SizedLongSortingSink",
	"java.util.stream.SortedOps$AbstractLongSortingSink",
	nullptr,
	_SortedOps$SizedLongSortingSink_FieldInfo_,
	_SortedOps$SizedLongSortingSink_MethodInfo_,
	nullptr,
	nullptr,
	_SortedOps$SizedLongSortingSink_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.SortedOps"
};

$Object* allocate$SortedOps$SizedLongSortingSink($Class* clazz) {
	return $of($alloc(SortedOps$SizedLongSortingSink));
}

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
			$nc(this->downstream)->accept($nc(this->array)->get(i));
		}
	} else {
		for (int32_t i = 0; i < this->offset && !$nc(this->downstream)->cancellationRequested(); ++i) {
			$nc(this->downstream)->accept($nc(this->array)->get(i));
		}
	}
	$nc(this->downstream)->end();
	$set(this, array, nullptr);
}

void SortedOps$SizedLongSortingSink::accept(int64_t t) {
	$nc(this->array)->set(this->offset++, t);
}

SortedOps$SizedLongSortingSink::SortedOps$SizedLongSortingSink() {
}

$Class* SortedOps$SizedLongSortingSink::load$($String* name, bool initialize) {
	$loadClass(SortedOps$SizedLongSortingSink, name, initialize, &_SortedOps$SizedLongSortingSink_ClassInfo_, allocate$SortedOps$SizedLongSortingSink);
	return class$;
}

$Class* SortedOps$SizedLongSortingSink::class$ = nullptr;

		} // stream
	} // util
} // java