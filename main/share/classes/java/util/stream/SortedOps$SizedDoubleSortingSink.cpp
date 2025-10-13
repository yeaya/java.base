#include <java/util/stream/SortedOps$SizedDoubleSortingSink.h>

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
using $Sink$ChainedDouble = ::java::util::stream::Sink$ChainedDouble;
using $SortedOps = ::java::util::stream::SortedOps;
using $SortedOps$AbstractDoubleSortingSink = ::java::util::stream::SortedOps$AbstractDoubleSortingSink;

namespace java {
	namespace util {
		namespace stream {

$FieldInfo _SortedOps$SizedDoubleSortingSink_FieldInfo_[] = {
	{"array", "[D", nullptr, $PRIVATE, $field(SortedOps$SizedDoubleSortingSink, array)},
	{"offset", "I", nullptr, $PRIVATE, $field(SortedOps$SizedDoubleSortingSink, offset)},
	{}
};

$MethodInfo _SortedOps$SizedDoubleSortingSink_MethodInfo_[] = {
	{"<init>", "(Ljava/util/stream/Sink;)V", "(Ljava/util/stream/Sink<-Ljava/lang/Double;>;)V", 0, $method(static_cast<void(SortedOps$SizedDoubleSortingSink::*)($Sink*)>(&SortedOps$SizedDoubleSortingSink::init$))},
	{"accept", "(D)V", nullptr, $PUBLIC},
	{"begin", "(J)V", nullptr, $PUBLIC},
	{"end", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _SortedOps$SizedDoubleSortingSink_InnerClassesInfo_[] = {
	{"java.util.stream.SortedOps$SizedDoubleSortingSink", "java.util.stream.SortedOps", "SizedDoubleSortingSink", $PRIVATE | $STATIC | $FINAL},
	{"java.util.stream.SortedOps$AbstractDoubleSortingSink", "java.util.stream.SortedOps", "AbstractDoubleSortingSink", $PRIVATE | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _SortedOps$SizedDoubleSortingSink_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.stream.SortedOps$SizedDoubleSortingSink",
	"java.util.stream.SortedOps$AbstractDoubleSortingSink",
	nullptr,
	_SortedOps$SizedDoubleSortingSink_FieldInfo_,
	_SortedOps$SizedDoubleSortingSink_MethodInfo_,
	nullptr,
	nullptr,
	_SortedOps$SizedDoubleSortingSink_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.SortedOps"
};

$Object* allocate$SortedOps$SizedDoubleSortingSink($Class* clazz) {
	return $of($alloc(SortedOps$SizedDoubleSortingSink));
}

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

void SortedOps$SizedDoubleSortingSink::accept(double t) {
	$nc(this->array)->set(this->offset++, t);
}

SortedOps$SizedDoubleSortingSink::SortedOps$SizedDoubleSortingSink() {
}

$Class* SortedOps$SizedDoubleSortingSink::load$($String* name, bool initialize) {
	$loadClass(SortedOps$SizedDoubleSortingSink, name, initialize, &_SortedOps$SizedDoubleSortingSink_ClassInfo_, allocate$SortedOps$SizedDoubleSortingSink);
	return class$;
}

$Class* SortedOps$SizedDoubleSortingSink::class$ = nullptr;

		} // stream
	} // util
} // java