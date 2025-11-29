#include <java/util/stream/SortedOps$AbstractDoubleSortingSink.h>

#include <java/util/stream/Sink$ChainedDouble.h>
#include <java/util/stream/Sink.h>
#include <java/util/stream/SortedOps.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Sink = ::java::util::stream::Sink;
using $Sink$ChainedDouble = ::java::util::stream::Sink$ChainedDouble;

namespace java {
	namespace util {
		namespace stream {

$FieldInfo _SortedOps$AbstractDoubleSortingSink_FieldInfo_[] = {
	{"cancellationRequestedCalled", "Z", nullptr, $PROTECTED, $field(SortedOps$AbstractDoubleSortingSink, cancellationRequestedCalled)},
	{}
};

$MethodInfo _SortedOps$AbstractDoubleSortingSink_MethodInfo_[] = {
	{"<init>", "(Ljava/util/stream/Sink;)V", "(Ljava/util/stream/Sink<-Ljava/lang/Double;>;)V", 0, $method(static_cast<void(SortedOps$AbstractDoubleSortingSink::*)($Sink*)>(&SortedOps$AbstractDoubleSortingSink::init$))},
	{"cancellationRequested", "()Z", nullptr, $PUBLIC | $FINAL},
	{}
};

$InnerClassInfo _SortedOps$AbstractDoubleSortingSink_InnerClassesInfo_[] = {
	{"java.util.stream.SortedOps$AbstractDoubleSortingSink", "java.util.stream.SortedOps", "AbstractDoubleSortingSink", $PRIVATE | $STATIC | $ABSTRACT},
	{"java.util.stream.Sink$ChainedDouble", "java.util.stream.Sink", "ChainedDouble", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _SortedOps$AbstractDoubleSortingSink_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"java.util.stream.SortedOps$AbstractDoubleSortingSink",
	"java.util.stream.Sink$ChainedDouble",
	nullptr,
	_SortedOps$AbstractDoubleSortingSink_FieldInfo_,
	_SortedOps$AbstractDoubleSortingSink_MethodInfo_,
	"Ljava/util/stream/Sink$ChainedDouble<Ljava/lang/Double;>;",
	nullptr,
	_SortedOps$AbstractDoubleSortingSink_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.SortedOps"
};

$Object* allocate$SortedOps$AbstractDoubleSortingSink($Class* clazz) {
	return $of($alloc(SortedOps$AbstractDoubleSortingSink));
}

void SortedOps$AbstractDoubleSortingSink::init$($Sink* downstream) {
	$Sink$ChainedDouble::init$(downstream);
}

bool SortedOps$AbstractDoubleSortingSink::cancellationRequested() {
	this->cancellationRequestedCalled = true;
	return false;
}

SortedOps$AbstractDoubleSortingSink::SortedOps$AbstractDoubleSortingSink() {
}

$Class* SortedOps$AbstractDoubleSortingSink::load$($String* name, bool initialize) {
	$loadClass(SortedOps$AbstractDoubleSortingSink, name, initialize, &_SortedOps$AbstractDoubleSortingSink_ClassInfo_, allocate$SortedOps$AbstractDoubleSortingSink);
	return class$;
}

$Class* SortedOps$AbstractDoubleSortingSink::class$ = nullptr;

		} // stream
	} // util
} // java