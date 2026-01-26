#include <java/util/stream/Sink$OfLong.h>

#include <java/util/stream/Sink.h>
#include <java/util/stream/Tripwire.h>
#include <jcpp.h>

#undef ENABLED

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $Sink = ::java::util::stream::Sink;
using $Tripwire = ::java::util::stream::Tripwire;

namespace java {
	namespace util {
		namespace stream {

$MethodInfo _Sink$OfLong_MethodInfo_[] = {
	{"accept", "(J)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Sink$OfLong, accept, void, int64_t)},
	{"accept", "(Ljava/lang/Long;)V", nullptr, $PUBLIC, $virtualMethod(Sink$OfLong, accept, void, $Long*)},
	{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(Sink$OfLong, accept, void, Object$*)},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{}
};

$InnerClassInfo _Sink$OfLong_InnerClassesInfo_[] = {
	{"java.util.stream.Sink$OfLong", "java.util.stream.Sink", "OfLong", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Sink$OfLong_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.util.stream.Sink$OfLong",
	nullptr,
	"java.util.stream.Sink,java.util.function.LongConsumer",
	nullptr,
	_Sink$OfLong_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/stream/Sink<Ljava/lang/Long;>;Ljava/util/function/LongConsumer;",
	nullptr,
	_Sink$OfLong_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.Sink"
};

$Object* allocate$Sink$OfLong($Class* clazz) {
	return $of($alloc(Sink$OfLong));
}

int32_t Sink$OfLong::hashCode() {
	 return this->$Sink::hashCode();
}

bool Sink$OfLong::equals(Object$* obj) {
	 return this->$Sink::equals(obj);
}

$Object* Sink$OfLong::clone() {
	 return this->$Sink::clone();
}

$String* Sink$OfLong::toString() {
	 return this->$Sink::toString();
}

void Sink$OfLong::finalize() {
	this->$Sink::finalize();
}

void Sink$OfLong::accept($Long* i) {
	$init($Tripwire);
	if ($Tripwire::ENABLED) {
		$Tripwire::trip($of(this)->getClass(), "{0} calling Sink.OfLong.accept(Long)"_s);
	}
	accept($nc(i)->longValue());
}

void Sink$OfLong::accept(Object$* i) {
	this->accept($cast($Long, i));
}

$Class* Sink$OfLong::load$($String* name, bool initialize) {
	$loadClass(Sink$OfLong, name, initialize, &_Sink$OfLong_ClassInfo_, allocate$Sink$OfLong);
	return class$;
}

$Class* Sink$OfLong::class$ = nullptr;

		} // stream
	} // util
} // java