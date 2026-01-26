#include <java/util/stream/SortedOps$AbstractRefSortingSink.h>

#include <java/util/Comparator.h>
#include <java/util/stream/Sink$ChainedReference.h>
#include <java/util/stream/Sink.h>
#include <java/util/stream/SortedOps.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Comparator = ::java::util::Comparator;
using $Sink = ::java::util::stream::Sink;
using $Sink$ChainedReference = ::java::util::stream::Sink$ChainedReference;

namespace java {
	namespace util {
		namespace stream {

$FieldInfo _SortedOps$AbstractRefSortingSink_FieldInfo_[] = {
	{"comparator", "Ljava/util/Comparator;", "Ljava/util/Comparator<-TT;>;", $PROTECTED | $FINAL, $field(SortedOps$AbstractRefSortingSink, comparator)},
	{"cancellationRequestedCalled", "Z", nullptr, $PROTECTED, $field(SortedOps$AbstractRefSortingSink, cancellationRequestedCalled)},
	{}
};

$MethodInfo _SortedOps$AbstractRefSortingSink_MethodInfo_[] = {
	{"<init>", "(Ljava/util/stream/Sink;Ljava/util/Comparator;)V", "(Ljava/util/stream/Sink<-TT;>;Ljava/util/Comparator<-TT;>;)V", 0, $method(SortedOps$AbstractRefSortingSink, init$, void, $Sink*, $Comparator*)},
	{"cancellationRequested", "()Z", nullptr, $PUBLIC | $FINAL, $virtualMethod(SortedOps$AbstractRefSortingSink, cancellationRequested, bool)},
	{}
};

$InnerClassInfo _SortedOps$AbstractRefSortingSink_InnerClassesInfo_[] = {
	{"java.util.stream.SortedOps$AbstractRefSortingSink", "java.util.stream.SortedOps", "AbstractRefSortingSink", $PRIVATE | $STATIC | $ABSTRACT},
	{"java.util.stream.Sink$ChainedReference", "java.util.stream.Sink", "ChainedReference", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _SortedOps$AbstractRefSortingSink_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"java.util.stream.SortedOps$AbstractRefSortingSink",
	"java.util.stream.Sink$ChainedReference",
	nullptr,
	_SortedOps$AbstractRefSortingSink_FieldInfo_,
	_SortedOps$AbstractRefSortingSink_MethodInfo_,
	"<T:Ljava/lang/Object;>Ljava/util/stream/Sink$ChainedReference<TT;TT;>;",
	nullptr,
	_SortedOps$AbstractRefSortingSink_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.SortedOps"
};

$Object* allocate$SortedOps$AbstractRefSortingSink($Class* clazz) {
	return $of($alloc(SortedOps$AbstractRefSortingSink));
}

void SortedOps$AbstractRefSortingSink::init$($Sink* downstream, $Comparator* comparator) {
	$Sink$ChainedReference::init$(downstream);
	$set(this, comparator, comparator);
}

bool SortedOps$AbstractRefSortingSink::cancellationRequested() {
	this->cancellationRequestedCalled = true;
	return false;
}

SortedOps$AbstractRefSortingSink::SortedOps$AbstractRefSortingSink() {
}

$Class* SortedOps$AbstractRefSortingSink::load$($String* name, bool initialize) {
	$loadClass(SortedOps$AbstractRefSortingSink, name, initialize, &_SortedOps$AbstractRefSortingSink_ClassInfo_, allocate$SortedOps$AbstractRefSortingSink);
	return class$;
}

$Class* SortedOps$AbstractRefSortingSink::class$ = nullptr;

		} // stream
	} // util
} // java