#include <java/util/stream/Sink$OfInt.h>

#include <java/util/stream/Sink.h>
#include <java/util/stream/Tripwire.h>
#include <jcpp.h>

#undef ENABLED

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $IntConsumer = ::java::util::function::IntConsumer;
using $Sink = ::java::util::stream::Sink;
using $Tripwire = ::java::util::stream::Tripwire;

namespace java {
	namespace util {
		namespace stream {

$MethodInfo _Sink$OfInt_MethodInfo_[] = {
	{"accept", "(I)V", nullptr, $PUBLIC | $ABSTRACT},
	{"accept", "(Ljava/lang/Integer;)V", nullptr, $PUBLIC},
	{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{}
};

$InnerClassInfo _Sink$OfInt_InnerClassesInfo_[] = {
	{"java.util.stream.Sink$OfInt", "java.util.stream.Sink", "OfInt", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Sink$OfInt_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.util.stream.Sink$OfInt",
	nullptr,
	"java.util.stream.Sink,java.util.function.IntConsumer",
	nullptr,
	_Sink$OfInt_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/stream/Sink<Ljava/lang/Integer;>;Ljava/util/function/IntConsumer;",
	nullptr,
	_Sink$OfInt_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.Sink"
};

$Object* allocate$Sink$OfInt($Class* clazz) {
	return $of($alloc(Sink$OfInt));
}

int32_t Sink$OfInt::hashCode() {
	 return this->$Sink::hashCode();
}

bool Sink$OfInt::equals(Object$* obj) {
	 return this->$Sink::equals(obj);
}

$Object* Sink$OfInt::clone() {
	 return this->$Sink::clone();
}

$String* Sink$OfInt::toString() {
	 return this->$Sink::toString();
}

void Sink$OfInt::finalize() {
	this->$Sink::finalize();
}

void Sink$OfInt::accept($Integer* i) {
	$init($Tripwire);
	if ($Tripwire::ENABLED) {
		$Tripwire::trip($of(this)->getClass(), "{0} calling Sink.OfInt.accept(Integer)"_s);
	}
	accept($nc(i)->intValue());
}

void Sink$OfInt::accept(Object$* i) {
	this->accept($cast($Integer, i));
}

$Class* Sink$OfInt::load$($String* name, bool initialize) {
	$loadClass(Sink$OfInt, name, initialize, &_Sink$OfInt_ClassInfo_, allocate$Sink$OfInt);
	return class$;
}

$Class* Sink$OfInt::class$ = nullptr;

		} // stream
	} // util
} // java