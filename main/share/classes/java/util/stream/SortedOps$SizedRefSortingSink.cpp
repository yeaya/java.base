#include <java/util/stream/SortedOps$SizedRefSortingSink.h>

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
#include <java/util/Comparator.h>
#include <java/util/stream/Nodes.h>
#include <java/util/stream/Sink$ChainedReference.h>
#include <java/util/stream/Sink.h>
#include <java/util/stream/SortedOps$AbstractRefSortingSink.h>
#include <java/util/stream/SortedOps.h>
#include <jcpp.h>

#undef MAX_ARRAY_SIZE
#undef BAD_SIZE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Arrays = ::java::util::Arrays;
using $Comparator = ::java::util::Comparator;
using $Consumer = ::java::util::function::Consumer;
using $Nodes = ::java::util::stream::Nodes;
using $Sink = ::java::util::stream::Sink;
using $Sink$ChainedReference = ::java::util::stream::Sink$ChainedReference;
using $SortedOps = ::java::util::stream::SortedOps;
using $SortedOps$AbstractRefSortingSink = ::java::util::stream::SortedOps$AbstractRefSortingSink;

namespace java {
	namespace util {
		namespace stream {

$FieldInfo _SortedOps$SizedRefSortingSink_FieldInfo_[] = {
	{"array", "[Ljava/lang/Object;", "[TT;", $PRIVATE, $field(SortedOps$SizedRefSortingSink, array)},
	{"offset", "I", nullptr, $PRIVATE, $field(SortedOps$SizedRefSortingSink, offset)},
	{}
};

$MethodInfo _SortedOps$SizedRefSortingSink_MethodInfo_[] = {
	{"<init>", "(Ljava/util/stream/Sink;Ljava/util/Comparator;)V", "(Ljava/util/stream/Sink<-TT;>;Ljava/util/Comparator<-TT;>;)V", 0, $method(static_cast<void(SortedOps$SizedRefSortingSink::*)($Sink*,$Comparator*)>(&SortedOps$SizedRefSortingSink::init$))},
	{"accept", "(Ljava/lang/Object;)V", "(TT;)V", $PUBLIC},
	{"begin", "(J)V", nullptr, $PUBLIC},
	{"end", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _SortedOps$SizedRefSortingSink_InnerClassesInfo_[] = {
	{"java.util.stream.SortedOps$SizedRefSortingSink", "java.util.stream.SortedOps", "SizedRefSortingSink", $PRIVATE | $STATIC | $FINAL},
	{"java.util.stream.SortedOps$AbstractRefSortingSink", "java.util.stream.SortedOps", "AbstractRefSortingSink", $PRIVATE | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _SortedOps$SizedRefSortingSink_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.stream.SortedOps$SizedRefSortingSink",
	"java.util.stream.SortedOps$AbstractRefSortingSink",
	nullptr,
	_SortedOps$SizedRefSortingSink_FieldInfo_,
	_SortedOps$SizedRefSortingSink_MethodInfo_,
	"<T:Ljava/lang/Object;>Ljava/util/stream/SortedOps$AbstractRefSortingSink<TT;>;",
	nullptr,
	_SortedOps$SizedRefSortingSink_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.SortedOps"
};

$Object* allocate$SortedOps$SizedRefSortingSink($Class* clazz) {
	return $of($alloc(SortedOps$SizedRefSortingSink));
}

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

void SortedOps$SizedRefSortingSink::accept(Object$* t) {
	$nc(this->array)->set(this->offset++, t);
}

SortedOps$SizedRefSortingSink::SortedOps$SizedRefSortingSink() {
}

$Class* SortedOps$SizedRefSortingSink::load$($String* name, bool initialize) {
	$loadClass(SortedOps$SizedRefSortingSink, name, initialize, &_SortedOps$SizedRefSortingSink_ClassInfo_, allocate$SortedOps$SizedRefSortingSink);
	return class$;
}

$Class* SortedOps$SizedRefSortingSink::class$ = nullptr;

		} // stream
	} // util
} // java