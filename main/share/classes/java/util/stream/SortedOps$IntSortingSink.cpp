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

$FieldInfo _SortedOps$IntSortingSink_FieldInfo_[] = {
	{"b", "Ljava/util/stream/SpinedBuffer$OfInt;", nullptr, $PRIVATE, $field(SortedOps$IntSortingSink, b)},
	{}
};

$MethodInfo _SortedOps$IntSortingSink_MethodInfo_[] = {
	{"<init>", "(Ljava/util/stream/Sink;)V", "(Ljava/util/stream/Sink<-Ljava/lang/Integer;>;)V", 0, $method(SortedOps$IntSortingSink, init$, void, $Sink*)},
	{"accept", "(I)V", nullptr, $PUBLIC, $virtualMethod(SortedOps$IntSortingSink, accept, void, int32_t)},
	{"begin", "(J)V", nullptr, $PUBLIC, $virtualMethod(SortedOps$IntSortingSink, begin, void, int64_t)},
	{"end", "()V", nullptr, $PUBLIC, $virtualMethod(SortedOps$IntSortingSink, end, void)},
	{}
};

$InnerClassInfo _SortedOps$IntSortingSink_InnerClassesInfo_[] = {
	{"java.util.stream.SortedOps$IntSortingSink", "java.util.stream.SortedOps", "IntSortingSink", $PRIVATE | $STATIC | $FINAL},
	{"java.util.stream.SortedOps$AbstractIntSortingSink", "java.util.stream.SortedOps", "AbstractIntSortingSink", $PRIVATE | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _SortedOps$IntSortingSink_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.stream.SortedOps$IntSortingSink",
	"java.util.stream.SortedOps$AbstractIntSortingSink",
	nullptr,
	_SortedOps$IntSortingSink_FieldInfo_,
	_SortedOps$IntSortingSink_MethodInfo_,
	nullptr,
	nullptr,
	_SortedOps$IntSortingSink_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.SortedOps"
};

$Object* allocate$SortedOps$IntSortingSink($Class* clazz) {
	return $of($alloc(SortedOps$IntSortingSink));
}

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
	$useLocalCurrentObjectStackCache();
	$var($ints, ints, $cast($ints, $nc(this->b)->asPrimitiveArray()));
	$Arrays::sort(ints);
	$nc(this->downstream)->begin($nc(ints)->length);
	if (!this->cancellationRequestedCalled) {
		{
			$var($ints, arr$, ints);
			int32_t len$ = $nc(arr$)->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				int32_t anInt = arr$->get(i$);
				$nc(this->downstream)->accept(anInt);
			}
		}
	} else {
		{
			$var($ints, arr$, ints);
			int32_t len$ = $nc(arr$)->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				int32_t anInt = arr$->get(i$);
				{
					if ($nc(this->downstream)->cancellationRequested()) {
						break;
					}
					$nc(this->downstream)->accept(anInt);
				}
			}
		}
	}
	$nc(this->downstream)->end();
}

void SortedOps$IntSortingSink::accept(int32_t t) {
	$nc(this->b)->accept(t);
}

SortedOps$IntSortingSink::SortedOps$IntSortingSink() {
}

$Class* SortedOps$IntSortingSink::load$($String* name, bool initialize) {
	$loadClass(SortedOps$IntSortingSink, name, initialize, &_SortedOps$IntSortingSink_ClassInfo_, allocate$SortedOps$IntSortingSink);
	return class$;
}

$Class* SortedOps$IntSortingSink::class$ = nullptr;

		} // stream
	} // util
} // java