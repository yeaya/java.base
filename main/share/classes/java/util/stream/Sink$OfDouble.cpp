#include <java/util/stream/Sink$OfDouble.h>
#include <java/util/stream/Sink.h>
#include <java/util/stream/Tripwire.h>
#include <jcpp.h>

#undef ENABLED

using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Sink = ::java::util::stream::Sink;
using $Tripwire = ::java::util::stream::Tripwire;

namespace java {
	namespace util {
		namespace stream {

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
	$MethodInfo methodInfos$$[] = {
		{"accept", "(D)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Sink$OfDouble, accept, void, double)},
		{"accept", "(Ljava/lang/Double;)V", nullptr, $PUBLIC, $virtualMethod(Sink$OfDouble, accept, void, $Double*)},
		{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(Sink$OfDouble, accept, void, Object$*)},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.stream.Sink$OfDouble", "java.util.stream.Sink", "OfDouble", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.util.stream.Sink$OfDouble",
		nullptr,
		"java.util.stream.Sink,java.util.function.DoubleConsumer",
		nullptr,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/stream/Sink<Ljava/lang/Double;>;Ljava/util/function/DoubleConsumer;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.stream.Sink"
	};
	$loadClass(Sink$OfDouble, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(Sink$OfDouble));
	});
	return class$;
}

$Class* Sink$OfDouble::class$ = nullptr;

		} // stream
	} // util
} // java