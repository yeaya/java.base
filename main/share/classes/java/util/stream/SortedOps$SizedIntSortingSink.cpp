#include <java/util/stream/SortedOps$SizedIntSortingSink.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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
using $Sink$ChainedInt = ::java::util::stream::Sink$ChainedInt;
using $SortedOps = ::java::util::stream::SortedOps;
using $SortedOps$AbstractIntSortingSink = ::java::util::stream::SortedOps$AbstractIntSortingSink;

namespace java {
	namespace util {
		namespace stream {

$FieldInfo _SortedOps$SizedIntSortingSink_FieldInfo_[] = {
	{"array", "[I", nullptr, $PRIVATE, $field(SortedOps$SizedIntSortingSink, array)},
	{"offset", "I", nullptr, $PRIVATE, $field(SortedOps$SizedIntSortingSink, offset)},
	{}
};

$MethodInfo _SortedOps$SizedIntSortingSink_MethodInfo_[] = {
	{"<init>", "(Ljava/util/stream/Sink;)V", "(Ljava/util/stream/Sink<-Ljava/lang/Integer;>;)V", 0, $method(static_cast<void(SortedOps$SizedIntSortingSink::*)($Sink*)>(&SortedOps$SizedIntSortingSink::init$))},
	{"accept", "(I)V", nullptr, $PUBLIC},
	{"begin", "(J)V", nullptr, $PUBLIC},
	{"end", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _SortedOps$SizedIntSortingSink_InnerClassesInfo_[] = {
	{"java.util.stream.SortedOps$SizedIntSortingSink", "java.util.stream.SortedOps", "SizedIntSortingSink", $PRIVATE | $STATIC | $FINAL},
	{"java.util.stream.SortedOps$AbstractIntSortingSink", "java.util.stream.SortedOps", "AbstractIntSortingSink", $PRIVATE | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _SortedOps$SizedIntSortingSink_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.stream.SortedOps$SizedIntSortingSink",
	"java.util.stream.SortedOps$AbstractIntSortingSink",
	nullptr,
	_SortedOps$SizedIntSortingSink_FieldInfo_,
	_SortedOps$SizedIntSortingSink_MethodInfo_,
	nullptr,
	nullptr,
	_SortedOps$SizedIntSortingSink_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.SortedOps"
};

$Object* allocate$SortedOps$SizedIntSortingSink($Class* clazz) {
	return $of($alloc(SortedOps$SizedIntSortingSink));
}

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

void SortedOps$SizedIntSortingSink::accept(int32_t t) {
	$nc(this->array)->set(this->offset++, t);
}

SortedOps$SizedIntSortingSink::SortedOps$SizedIntSortingSink() {
}

$Class* SortedOps$SizedIntSortingSink::load$($String* name, bool initialize) {
	$loadClass(SortedOps$SizedIntSortingSink, name, initialize, &_SortedOps$SizedIntSortingSink_ClassInfo_, allocate$SortedOps$SizedIntSortingSink);
	return class$;
}

$Class* SortedOps$SizedIntSortingSink::class$ = nullptr;

		} // stream
	} // util
} // java