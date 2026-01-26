#include <java/util/stream/SortedOps$LongSortingSink.h>

#include <java/util/Arrays.h>
#include <java/util/stream/Nodes.h>
#include <java/util/stream/Sink$ChainedLong.h>
#include <java/util/stream/Sink.h>
#include <java/util/stream/SortedOps$AbstractLongSortingSink.h>
#include <java/util/stream/SortedOps.h>
#include <java/util/stream/SpinedBuffer$OfLong.h>
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
using $SpinedBuffer$OfLong = ::java::util::stream::SpinedBuffer$OfLong;

namespace java {
	namespace util {
		namespace stream {

$FieldInfo _SortedOps$LongSortingSink_FieldInfo_[] = {
	{"b", "Ljava/util/stream/SpinedBuffer$OfLong;", nullptr, $PRIVATE, $field(SortedOps$LongSortingSink, b)},
	{}
};

$MethodInfo _SortedOps$LongSortingSink_MethodInfo_[] = {
	{"<init>", "(Ljava/util/stream/Sink;)V", "(Ljava/util/stream/Sink<-Ljava/lang/Long;>;)V", 0, $method(SortedOps$LongSortingSink, init$, void, $Sink*)},
	{"accept", "(J)V", nullptr, $PUBLIC, $virtualMethod(SortedOps$LongSortingSink, accept, void, int64_t)},
	{"begin", "(J)V", nullptr, $PUBLIC, $virtualMethod(SortedOps$LongSortingSink, begin, void, int64_t)},
	{"end", "()V", nullptr, $PUBLIC, $virtualMethod(SortedOps$LongSortingSink, end, void)},
	{}
};

$InnerClassInfo _SortedOps$LongSortingSink_InnerClassesInfo_[] = {
	{"java.util.stream.SortedOps$LongSortingSink", "java.util.stream.SortedOps", "LongSortingSink", $PRIVATE | $STATIC | $FINAL},
	{"java.util.stream.SortedOps$AbstractLongSortingSink", "java.util.stream.SortedOps", "AbstractLongSortingSink", $PRIVATE | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _SortedOps$LongSortingSink_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.stream.SortedOps$LongSortingSink",
	"java.util.stream.SortedOps$AbstractLongSortingSink",
	nullptr,
	_SortedOps$LongSortingSink_FieldInfo_,
	_SortedOps$LongSortingSink_MethodInfo_,
	nullptr,
	nullptr,
	_SortedOps$LongSortingSink_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.SortedOps"
};

$Object* allocate$SortedOps$LongSortingSink($Class* clazz) {
	return $of($alloc(SortedOps$LongSortingSink));
}

void SortedOps$LongSortingSink::init$($Sink* sink) {
	$SortedOps$AbstractLongSortingSink::init$(sink);
}

void SortedOps$LongSortingSink::begin(int64_t size) {
	if (size >= $Nodes::MAX_ARRAY_SIZE) {
		$init($Nodes);
		$throwNew($IllegalArgumentException, $Nodes::BAD_SIZE);
	}
	$set(this, b, (size > 0) ? $new($SpinedBuffer$OfLong, (int32_t)size) : $new($SpinedBuffer$OfLong));
}

void SortedOps$LongSortingSink::end() {
	$useLocalCurrentObjectStackCache();
	$var($longs, longs, $cast($longs, $nc(this->b)->asPrimitiveArray()));
	$Arrays::sort(longs);
	$nc(this->downstream)->begin($nc(longs)->length);
	if (!this->cancellationRequestedCalled) {
		{
			$var($longs, arr$, longs);
			int32_t len$ = $nc(arr$)->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				int64_t aLong = arr$->get(i$);
				$nc(this->downstream)->accept(aLong);
			}
		}
	} else {
		{
			$var($longs, arr$, longs);
			int32_t len$ = $nc(arr$)->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				int64_t aLong = arr$->get(i$);
				{
					if ($nc(this->downstream)->cancellationRequested()) {
						break;
					}
					$nc(this->downstream)->accept(aLong);
				}
			}
		}
	}
	$nc(this->downstream)->end();
}

void SortedOps$LongSortingSink::accept(int64_t t) {
	$nc(this->b)->accept(t);
}

SortedOps$LongSortingSink::SortedOps$LongSortingSink() {
}

$Class* SortedOps$LongSortingSink::load$($String* name, bool initialize) {
	$loadClass(SortedOps$LongSortingSink, name, initialize, &_SortedOps$LongSortingSink_ClassInfo_, allocate$SortedOps$LongSortingSink);
	return class$;
}

$Class* SortedOps$LongSortingSink::class$ = nullptr;

		} // stream
	} // util
} // java