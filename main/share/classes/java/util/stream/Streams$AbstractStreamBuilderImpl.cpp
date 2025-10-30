#include <java/util/stream/Streams$AbstractStreamBuilderImpl.h>

#include <java/util/Spliterator.h>
#include <java/util/stream/Streams.h>
#include <jcpp.h>

#undef IMMUTABLE
#undef ORDERED
#undef SIZED
#undef SUBSIZED

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Spliterator = ::java::util::Spliterator;
using $Streams = ::java::util::stream::Streams;

namespace java {
	namespace util {
		namespace stream {

$FieldInfo _Streams$AbstractStreamBuilderImpl_FieldInfo_[] = {
	{"count", "I", nullptr, 0, $field(Streams$AbstractStreamBuilderImpl, count)},
	{}
};

$MethodInfo _Streams$AbstractStreamBuilderImpl_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(Streams$AbstractStreamBuilderImpl::*)()>(&Streams$AbstractStreamBuilderImpl::init$))},
	{"characteristics", "()I", nullptr, $PUBLIC},
	{"estimateSize", "()J", nullptr, $PUBLIC},
	{"trySplit", "()Ljava/util/Spliterator;", "()TS;", $PUBLIC},
	{}
};

$InnerClassInfo _Streams$AbstractStreamBuilderImpl_InnerClassesInfo_[] = {
	{"java.util.stream.Streams$AbstractStreamBuilderImpl", "java.util.stream.Streams", "AbstractStreamBuilderImpl", $PRIVATE | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _Streams$AbstractStreamBuilderImpl_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"java.util.stream.Streams$AbstractStreamBuilderImpl",
	"java.lang.Object",
	"java.util.Spliterator",
	_Streams$AbstractStreamBuilderImpl_FieldInfo_,
	_Streams$AbstractStreamBuilderImpl_MethodInfo_,
	"<T:Ljava/lang/Object;S::Ljava/util/Spliterator<TT;>;>Ljava/lang/Object;Ljava/util/Spliterator<TT;>;",
	nullptr,
	_Streams$AbstractStreamBuilderImpl_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.Streams"
};

$Object* allocate$Streams$AbstractStreamBuilderImpl($Class* clazz) {
	return $of($alloc(Streams$AbstractStreamBuilderImpl));
}

void Streams$AbstractStreamBuilderImpl::init$() {
}

$Spliterator* Streams$AbstractStreamBuilderImpl::trySplit() {
	return nullptr;
}

int64_t Streams$AbstractStreamBuilderImpl::estimateSize() {
	return -this->count - 1;
}

int32_t Streams$AbstractStreamBuilderImpl::characteristics() {
	return (($Spliterator::SIZED | $Spliterator::SUBSIZED) | $Spliterator::ORDERED) | $Spliterator::IMMUTABLE;
}

Streams$AbstractStreamBuilderImpl::Streams$AbstractStreamBuilderImpl() {
}

$Class* Streams$AbstractStreamBuilderImpl::load$($String* name, bool initialize) {
	$loadClass(Streams$AbstractStreamBuilderImpl, name, initialize, &_Streams$AbstractStreamBuilderImpl_ClassInfo_, allocate$Streams$AbstractStreamBuilderImpl);
	return class$;
}

$Class* Streams$AbstractStreamBuilderImpl::class$ = nullptr;

		} // stream
	} // util
} // java