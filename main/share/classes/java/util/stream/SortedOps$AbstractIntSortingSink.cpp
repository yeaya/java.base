#include <java/util/stream/SortedOps$AbstractIntSortingSink.h>

#include <java/util/stream/Sink$ChainedInt.h>
#include <java/util/stream/Sink.h>
#include <java/util/stream/SortedOps.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Sink = ::java::util::stream::Sink;
using $Sink$ChainedInt = ::java::util::stream::Sink$ChainedInt;

namespace java {
	namespace util {
		namespace stream {

$FieldInfo _SortedOps$AbstractIntSortingSink_FieldInfo_[] = {
	{"cancellationRequestedCalled", "Z", nullptr, $PROTECTED, $field(SortedOps$AbstractIntSortingSink, cancellationRequestedCalled)},
	{}
};

$MethodInfo _SortedOps$AbstractIntSortingSink_MethodInfo_[] = {
	{"<init>", "(Ljava/util/stream/Sink;)V", "(Ljava/util/stream/Sink<-Ljava/lang/Integer;>;)V", 0, $method(static_cast<void(SortedOps$AbstractIntSortingSink::*)($Sink*)>(&SortedOps$AbstractIntSortingSink::init$))},
	{"cancellationRequested", "()Z", nullptr, $PUBLIC | $FINAL},
	{}
};

$InnerClassInfo _SortedOps$AbstractIntSortingSink_InnerClassesInfo_[] = {
	{"java.util.stream.SortedOps$AbstractIntSortingSink", "java.util.stream.SortedOps", "AbstractIntSortingSink", $PRIVATE | $STATIC | $ABSTRACT},
	{"java.util.stream.Sink$ChainedInt", "java.util.stream.Sink", "ChainedInt", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _SortedOps$AbstractIntSortingSink_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"java.util.stream.SortedOps$AbstractIntSortingSink",
	"java.util.stream.Sink$ChainedInt",
	nullptr,
	_SortedOps$AbstractIntSortingSink_FieldInfo_,
	_SortedOps$AbstractIntSortingSink_MethodInfo_,
	"Ljava/util/stream/Sink$ChainedInt<Ljava/lang/Integer;>;",
	nullptr,
	_SortedOps$AbstractIntSortingSink_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.SortedOps"
};

$Object* allocate$SortedOps$AbstractIntSortingSink($Class* clazz) {
	return $of($alloc(SortedOps$AbstractIntSortingSink));
}

void SortedOps$AbstractIntSortingSink::init$($Sink* downstream) {
	$Sink$ChainedInt::init$(downstream);
}

bool SortedOps$AbstractIntSortingSink::cancellationRequested() {
	this->cancellationRequestedCalled = true;
	return false;
}

SortedOps$AbstractIntSortingSink::SortedOps$AbstractIntSortingSink() {
}

$Class* SortedOps$AbstractIntSortingSink::load$($String* name, bool initialize) {
	$loadClass(SortedOps$AbstractIntSortingSink, name, initialize, &_SortedOps$AbstractIntSortingSink_ClassInfo_, allocate$SortedOps$AbstractIntSortingSink);
	return class$;
}

$Class* SortedOps$AbstractIntSortingSink::class$ = nullptr;

		} // stream
	} // util
} // java