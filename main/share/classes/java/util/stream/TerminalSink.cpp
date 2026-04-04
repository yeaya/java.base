#include <java/util/stream/TerminalSink.h>
#include <java/util/stream/Sink.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Sink = ::java::util::stream::Sink;

namespace java {
	namespace util {
		namespace stream {

int32_t TerminalSink::hashCode() {
	 return this->$Sink::hashCode();
}

bool TerminalSink::equals(Object$* obj) {
	 return this->$Sink::equals(obj);
}

$Object* TerminalSink::clone() {
	 return this->$Sink::clone();
}

$String* TerminalSink::toString() {
	 return this->$Sink::toString();
}

void TerminalSink::finalize() {
	this->$Sink::finalize();
}

$Class* TerminalSink::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"java.util.stream.TerminalSink",
		nullptr,
		"java.util.stream.Sink,java.util.function.Supplier",
		nullptr,
		methodInfos$$,
		"<T:Ljava/lang/Object;R:Ljava/lang/Object;>Ljava/lang/Object;Ljava/util/stream/Sink<TT;>;Ljava/util/function/Supplier<TR;>;"
	};
	$loadClass(TerminalSink, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(TerminalSink));
	});
	return class$;
}

$Class* TerminalSink::class$ = nullptr;

		} // stream
	} // util
} // java