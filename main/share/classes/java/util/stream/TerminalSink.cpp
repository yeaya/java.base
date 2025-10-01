#include <java/util/stream/TerminalSink.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/stream/Sink.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Supplier = ::java::util::function::Supplier;
using $Sink = ::java::util::stream::Sink;

namespace java {
	namespace util {
		namespace stream {

$MethodInfo _TerminalSink_MethodInfo_[] = {
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{}
};

$ClassInfo _TerminalSink_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"java.util.stream.TerminalSink",
	nullptr,
	"java.util.stream.Sink,java.util.function.Supplier",
	nullptr,
	_TerminalSink_MethodInfo_,
	"<T:Ljava/lang/Object;R:Ljava/lang/Object;>Ljava/lang/Object;Ljava/util/stream/Sink<TT;>;Ljava/util/function/Supplier<TR;>;"
};

$Object* allocate$TerminalSink($Class* clazz) {
	return $of($alloc(TerminalSink));
}

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
	$loadClass(TerminalSink, name, initialize, &_TerminalSink_ClassInfo_, allocate$TerminalSink);
	return class$;
}

$Class* TerminalSink::class$ = nullptr;

		} // stream
	} // util
} // java