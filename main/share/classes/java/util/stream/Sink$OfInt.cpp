#include <java/util/stream/Sink$OfInt.h>
#include <java/util/stream/Sink.h>
#include <java/util/stream/Tripwire.h>
#include <jcpp.h>

#undef ENABLED

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Sink = ::java::util::stream::Sink;
using $Tripwire = ::java::util::stream::Tripwire;

namespace java {
	namespace util {
		namespace stream {

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
	$MethodInfo methodInfos$$[] = {
		{"accept", "(I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Sink$OfInt, accept, void, int32_t)},
		{"accept", "(Ljava/lang/Integer;)V", nullptr, $PUBLIC, $virtualMethod(Sink$OfInt, accept, void, $Integer*)},
		{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(Sink$OfInt, accept, void, Object$*)},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.stream.Sink$OfInt", "java.util.stream.Sink", "OfInt", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.util.stream.Sink$OfInt",
		nullptr,
		"java.util.stream.Sink,java.util.function.IntConsumer",
		nullptr,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/stream/Sink<Ljava/lang/Integer;>;Ljava/util/function/IntConsumer;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.stream.Sink"
	};
	$loadClass(Sink$OfInt, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(Sink$OfInt));
	});
	return class$;
}

$Class* Sink$OfInt::class$ = nullptr;

		} // stream
	} // util
} // java