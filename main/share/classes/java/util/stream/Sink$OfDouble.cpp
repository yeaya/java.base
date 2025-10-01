#include <java/util/stream/Sink$OfDouble.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Double.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/stream/Sink.h>
#include <java/util/stream/Tripwire.h>
#include <jcpp.h>

#undef ENABLED

using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DoubleConsumer = ::java::util::function::DoubleConsumer;
using $Sink = ::java::util::stream::Sink;
using $Tripwire = ::java::util::stream::Tripwire;

namespace java {
	namespace util {
		namespace stream {

$MethodInfo _Sink$OfDouble_MethodInfo_[] = {
	{"accept", "(D)V", nullptr, $PUBLIC | $ABSTRACT},
	{"accept", "(Ljava/lang/Double;)V", nullptr, $PUBLIC},
	{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{}
};

$InnerClassInfo _Sink$OfDouble_InnerClassesInfo_[] = {
	{"java.util.stream.Sink$OfDouble", "java.util.stream.Sink", "OfDouble", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Sink$OfDouble_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.util.stream.Sink$OfDouble",
	nullptr,
	"java.util.stream.Sink,java.util.function.DoubleConsumer",
	nullptr,
	_Sink$OfDouble_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/stream/Sink<Ljava/lang/Double;>;Ljava/util/function/DoubleConsumer;",
	nullptr,
	_Sink$OfDouble_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.Sink"
};

$Object* allocate$Sink$OfDouble($Class* clazz) {
	return $of($alloc(Sink$OfDouble));
}

int32_t Sink$OfDouble::hashCode() {
	 return this->$Sink::hashCode();
}

bool Sink$OfDouble::equals(Object$* obj) {
	 return this->$Sink::equals(obj);
}

$Object* Sink$OfDouble::clone() {
	 return this->$Sink::clone();
}

$String* Sink$OfDouble::toString() {
	 return this->$Sink::toString();
}

void Sink$OfDouble::finalize() {
	this->$Sink::finalize();
}

void Sink$OfDouble::accept($Double* i) {
	$init($Tripwire);
	if ($Tripwire::ENABLED) {
		$Tripwire::trip($of(this)->getClass(), "{0} calling Sink.OfDouble.accept(Double)"_s);
	}
	accept($nc(i)->doubleValue());
}

void Sink$OfDouble::accept(Object$* i) {
	this->accept($cast($Double, i));
}

$Class* Sink$OfDouble::load$($String* name, bool initialize) {
	$loadClass(Sink$OfDouble, name, initialize, &_Sink$OfDouble_ClassInfo_, allocate$Sink$OfDouble);
	return class$;
}

$Class* Sink$OfDouble::class$ = nullptr;

		} // stream
	} // util
} // java