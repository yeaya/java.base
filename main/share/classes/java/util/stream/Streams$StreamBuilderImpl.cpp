#include <java/util/stream/Streams$StreamBuilderImpl.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Objects.h>
#include <java/util/Spliterator.h>
#include <java/util/function/Consumer.h>
#include <java/util/stream/SpinedBuffer.h>
#include <java/util/stream/Stream$Builder.h>
#include <java/util/stream/Stream.h>
#include <java/util/stream/StreamSupport.h>
#include <java/util/stream/Streams$AbstractStreamBuilderImpl.h>
#include <java/util/stream/Streams.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Objects = ::java::util::Objects;
using $Spliterator = ::java::util::Spliterator;
using $Consumer = ::java::util::function::Consumer;
using $SpinedBuffer = ::java::util::stream::SpinedBuffer;
using $Stream = ::java::util::stream::Stream;
using $Stream$Builder = ::java::util::stream::Stream$Builder;
using $StreamSupport = ::java::util::stream::StreamSupport;
using $Streams = ::java::util::stream::Streams;
using $Streams$AbstractStreamBuilderImpl = ::java::util::stream::Streams$AbstractStreamBuilderImpl;

namespace java {
	namespace util {
		namespace stream {

$FieldInfo _Streams$StreamBuilderImpl_FieldInfo_[] = {
	{"first", "Ljava/lang/Object;", "TT;", 0, $field(Streams$StreamBuilderImpl, first)},
	{"buffer", "Ljava/util/stream/SpinedBuffer;", "Ljava/util/stream/SpinedBuffer<TT;>;", 0, $field(Streams$StreamBuilderImpl, buffer)},
	{}
};

$MethodInfo _Streams$StreamBuilderImpl_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Streams$StreamBuilderImpl::*)()>(&Streams$StreamBuilderImpl::init$))},
	{"<init>", "(Ljava/lang/Object;)V", "(TT;)V", 0, $method(static_cast<void(Streams$StreamBuilderImpl::*)(Object$*)>(&Streams$StreamBuilderImpl::init$))},
	{"accept", "(Ljava/lang/Object;)V", "(TT;)V", $PUBLIC},
	{"add", "(Ljava/lang/Object;)Ljava/util/stream/Stream$Builder;", "(TT;)Ljava/util/stream/Stream$Builder<TT;>;", $PUBLIC},
	{"build", "()Ljava/util/stream/Stream;", "()Ljava/util/stream/Stream<TT;>;", $PUBLIC},
	{"forEachRemaining", "(Ljava/util/function/Consumer;)V", "(Ljava/util/function/Consumer<-TT;>;)V", $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"tryAdvance", "(Ljava/util/function/Consumer;)Z", "(Ljava/util/function/Consumer<-TT;>;)Z", $PUBLIC},
	{}
};

$InnerClassInfo _Streams$StreamBuilderImpl_InnerClassesInfo_[] = {
	{"java.util.stream.Streams$StreamBuilderImpl", "java.util.stream.Streams", "StreamBuilderImpl", $STATIC | $FINAL},
	{"java.util.stream.Streams$AbstractStreamBuilderImpl", "java.util.stream.Streams", "AbstractStreamBuilderImpl", $PRIVATE | $STATIC | $ABSTRACT},
	{"java.util.stream.Stream$Builder", "java.util.stream.Stream", "Builder", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Streams$StreamBuilderImpl_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.stream.Streams$StreamBuilderImpl",
	"java.util.stream.Streams$AbstractStreamBuilderImpl",
	"java.util.stream.Stream$Builder",
	_Streams$StreamBuilderImpl_FieldInfo_,
	_Streams$StreamBuilderImpl_MethodInfo_,
	"<T:Ljava/lang/Object;>Ljava/util/stream/Streams$AbstractStreamBuilderImpl<TT;Ljava/util/Spliterator<TT;>;>;Ljava/util/stream/Stream$Builder<TT;>;",
	nullptr,
	_Streams$StreamBuilderImpl_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.Streams"
};

$Object* allocate$Streams$StreamBuilderImpl($Class* clazz) {
	return $of($alloc(Streams$StreamBuilderImpl));
}

int32_t Streams$StreamBuilderImpl::hashCode() {
	 return this->$Streams$AbstractStreamBuilderImpl::hashCode();
}

bool Streams$StreamBuilderImpl::equals(Object$* obj) {
	 return this->$Streams$AbstractStreamBuilderImpl::equals(obj);
}

$Object* Streams$StreamBuilderImpl::clone() {
	 return this->$Streams$AbstractStreamBuilderImpl::clone();
}

$String* Streams$StreamBuilderImpl::toString() {
	 return this->$Streams$AbstractStreamBuilderImpl::toString();
}

void Streams$StreamBuilderImpl::finalize() {
	this->$Streams$AbstractStreamBuilderImpl::finalize();
}

void Streams$StreamBuilderImpl::init$() {
	$Streams$AbstractStreamBuilderImpl::init$();
}

void Streams$StreamBuilderImpl::init$(Object$* t) {
	$Streams$AbstractStreamBuilderImpl::init$();
	$set(this, first, t);
	this->count = -2;
}

void Streams$StreamBuilderImpl::accept(Object$* t) {
	if (this->count == 0) {
		$set(this, first, t);
		++this->count;
	} else if (this->count > 0) {
		if (this->buffer == nullptr) {
			$set(this, buffer, $new($SpinedBuffer));
			$nc(this->buffer)->accept(this->first);
			++this->count;
		}
		$nc(this->buffer)->accept(t);
	} else {
		$throwNew($IllegalStateException);
	}
}

$Stream$Builder* Streams$StreamBuilderImpl::add(Object$* t) {
	accept(t);
	return this;
}

$Stream* Streams$StreamBuilderImpl::build() {
	int32_t c = this->count;
	if (c >= 0) {
		this->count = -this->count - 1;
		return (c < 2) ? $StreamSupport::stream(this, false) : $StreamSupport::stream($($nc(this->buffer)->spliterator()), false);
	}
	$throwNew($IllegalStateException);
}

bool Streams$StreamBuilderImpl::tryAdvance($Consumer* action) {
	$Objects::requireNonNull(action);
	if (this->count == -2) {
		action->accept(this->first);
		this->count = -1;
		return true;
	} else {
		return false;
	}
}

void Streams$StreamBuilderImpl::forEachRemaining($Consumer* action) {
	$Objects::requireNonNull(action);
	if (this->count == -2) {
		action->accept(this->first);
		this->count = -1;
	}
}

Streams$StreamBuilderImpl::Streams$StreamBuilderImpl() {
}

$Class* Streams$StreamBuilderImpl::load$($String* name, bool initialize) {
	$loadClass(Streams$StreamBuilderImpl, name, initialize, &_Streams$StreamBuilderImpl_ClassInfo_, allocate$Streams$StreamBuilderImpl);
	return class$;
}

$Class* Streams$StreamBuilderImpl::class$ = nullptr;

		} // stream
	} // util
} // java