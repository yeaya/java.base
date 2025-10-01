#include <java/util/stream/SortedOps$AbstractLongSortingSink.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/stream/Sink$ChainedLong.h>
#include <java/util/stream/Sink.h>
#include <java/util/stream/SortedOps.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Sink = ::java::util::stream::Sink;
using $Sink$ChainedLong = ::java::util::stream::Sink$ChainedLong;
using $SortedOps = ::java::util::stream::SortedOps;

namespace java {
	namespace util {
		namespace stream {

$FieldInfo _SortedOps$AbstractLongSortingSink_FieldInfo_[] = {
	{"cancellationRequestedCalled", "Z", nullptr, $PROTECTED, $field(SortedOps$AbstractLongSortingSink, cancellationRequestedCalled)},
	{}
};

$MethodInfo _SortedOps$AbstractLongSortingSink_MethodInfo_[] = {
	{"<init>", "(Ljava/util/stream/Sink;)V", "(Ljava/util/stream/Sink<-Ljava/lang/Long;>;)V", 0, $method(static_cast<void(SortedOps$AbstractLongSortingSink::*)($Sink*)>(&SortedOps$AbstractLongSortingSink::init$))},
	{"cancellationRequested", "()Z", nullptr, $PUBLIC | $FINAL},
	{}
};

$InnerClassInfo _SortedOps$AbstractLongSortingSink_InnerClassesInfo_[] = {
	{"java.util.stream.SortedOps$AbstractLongSortingSink", "java.util.stream.SortedOps", "AbstractLongSortingSink", $PRIVATE | $STATIC | $ABSTRACT},
	{"java.util.stream.Sink$ChainedLong", "java.util.stream.Sink", "ChainedLong", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _SortedOps$AbstractLongSortingSink_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"java.util.stream.SortedOps$AbstractLongSortingSink",
	"java.util.stream.Sink$ChainedLong",
	nullptr,
	_SortedOps$AbstractLongSortingSink_FieldInfo_,
	_SortedOps$AbstractLongSortingSink_MethodInfo_,
	"Ljava/util/stream/Sink$ChainedLong<Ljava/lang/Long;>;",
	nullptr,
	_SortedOps$AbstractLongSortingSink_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.SortedOps"
};

$Object* allocate$SortedOps$AbstractLongSortingSink($Class* clazz) {
	return $of($alloc(SortedOps$AbstractLongSortingSink));
}

void SortedOps$AbstractLongSortingSink::init$($Sink* downstream) {
	$Sink$ChainedLong::init$(downstream);
}

bool SortedOps$AbstractLongSortingSink::cancellationRequested() {
	this->cancellationRequestedCalled = true;
	return false;
}

SortedOps$AbstractLongSortingSink::SortedOps$AbstractLongSortingSink() {
}

$Class* SortedOps$AbstractLongSortingSink::load$($String* name, bool initialize) {
	$loadClass(SortedOps$AbstractLongSortingSink, name, initialize, &_SortedOps$AbstractLongSortingSink_ClassInfo_, allocate$SortedOps$AbstractLongSortingSink);
	return class$;
}

$Class* SortedOps$AbstractLongSortingSink::class$ = nullptr;

		} // stream
	} // util
} // java