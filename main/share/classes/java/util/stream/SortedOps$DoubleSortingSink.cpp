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

$FieldInfo _SortedOps$DoubleSortingSink_FieldInfo_[] = {
	{"b", "Ljava/util/stream/SpinedBuffer$OfDouble;", nullptr, $PRIVATE, $field(SortedOps$DoubleSortingSink, b)},
	{}
};

$MethodInfo _SortedOps$DoubleSortingSink_MethodInfo_[] = {
	{"<init>", "(Ljava/util/stream/Sink;)V", "(Ljava/util/stream/Sink<-Ljava/lang/Double;>;)V", 0, $method(SortedOps$DoubleSortingSink, init$, void, $Sink*)},
	{"accept", "(D)V", nullptr, $PUBLIC, $virtualMethod(SortedOps$DoubleSortingSink, accept, void, double)},
	{"begin", "(J)V", nullptr, $PUBLIC, $virtualMethod(SortedOps$DoubleSortingSink, begin, void, int64_t)},
	{"end", "()V", nullptr, $PUBLIC, $virtualMethod(SortedOps$DoubleSortingSink, end, void)},
	{}
};

$InnerClassInfo _SortedOps$DoubleSortingSink_InnerClassesInfo_[] = {
	{"java.util.stream.SortedOps$DoubleSortingSink", "java.util.stream.SortedOps", "DoubleSortingSink", $PRIVATE | $STATIC | $FINAL},
	{"java.util.stream.SortedOps$AbstractDoubleSortingSink", "java.util.stream.SortedOps", "AbstractDoubleSortingSink", $PRIVATE | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _SortedOps$DoubleSortingSink_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.stream.SortedOps$DoubleSortingSink",
	"java.util.stream.SortedOps$AbstractDoubleSortingSink",
	nullptr,
	_SortedOps$DoubleSortingSink_FieldInfo_,
	_SortedOps$DoubleSortingSink_MethodInfo_,
	nullptr,
	nullptr,
	_SortedOps$DoubleSortingSink_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.SortedOps"
};

$Object* allocate$SortedOps$DoubleSortingSink($Class* clazz) {
	return $of($alloc(SortedOps$DoubleSortingSink));
}

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
	$useLocalCurrentObjectStackCache();
	$var($doubles, doubles, $cast($doubles, $nc(this->b)->asPrimitiveArray()));
	$Arrays::sort(doubles);
	$nc(this->downstream)->begin($nc(doubles)->length);
	if (!this->cancellationRequestedCalled) {
		{
			$var($doubles, arr$, doubles);
			int32_t len$ = $nc(arr$)->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				double aDouble = arr$->get(i$);
				$nc(this->downstream)->accept(aDouble);
			}
		}
	} else {
		{
			$var($doubles, arr$, doubles);
			int32_t len$ = $nc(arr$)->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				double aDouble = arr$->get(i$);
				{
					if ($nc(this->downstream)->cancellationRequested()) {
						break;
					}
					$nc(this->downstream)->accept(aDouble);
				}
			}
		}
	}
	$nc(this->downstream)->end();
}

void SortedOps$DoubleSortingSink::accept(double t) {
	$nc(this->b)->accept(t);
}

SortedOps$DoubleSortingSink::SortedOps$DoubleSortingSink() {
}

$Class* SortedOps$DoubleSortingSink::load$($String* name, bool initialize) {
	$loadClass(SortedOps$DoubleSortingSink, name, initialize, &_SortedOps$DoubleSortingSink_ClassInfo_, allocate$SortedOps$DoubleSortingSink);
	return class$;
}

$Class* SortedOps$DoubleSortingSink::class$ = nullptr;

		} // stream
	} // util
} // java