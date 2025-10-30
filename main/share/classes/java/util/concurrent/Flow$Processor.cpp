#include <java/util/concurrent/Flow$Processor.h>

#include <java/util/concurrent/Flow$Subscriber.h>
#include <java/util/concurrent/Flow.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Flow = ::java::util::concurrent::Flow;
using $Flow$Publisher = ::java::util::concurrent::Flow$Publisher;
using $Flow$Subscriber = ::java::util::concurrent::Flow$Subscriber;

namespace java {
	namespace util {
		namespace concurrent {

$MethodInfo _Flow$Processor_MethodInfo_[] = {
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{}
};

$InnerClassInfo _Flow$Processor_InnerClassesInfo_[] = {
	{"java.util.concurrent.Flow$Processor", "java.util.concurrent.Flow", "Processor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"java.util.concurrent.Flow$Subscriber", "java.util.concurrent.Flow", "Subscriber", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"java.util.concurrent.Flow$Publisher", "java.util.concurrent.Flow", "Publisher", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Flow$Processor_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.util.concurrent.Flow$Processor",
	nullptr,
	"java.util.concurrent.Flow$Subscriber,java.util.concurrent.Flow$Publisher",
	nullptr,
	_Flow$Processor_MethodInfo_,
	"<T:Ljava/lang/Object;R:Ljava/lang/Object;>Ljava/lang/Object;Ljava/util/concurrent/Flow$Subscriber<TT;>;Ljava/util/concurrent/Flow$Publisher<TR;>;",
	nullptr,
	_Flow$Processor_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.concurrent.Flow"
};

$Object* allocate$Flow$Processor($Class* clazz) {
	return $of($alloc(Flow$Processor));
}

int32_t Flow$Processor::hashCode() {
	 return this->$Flow$Subscriber::hashCode();
}

bool Flow$Processor::equals(Object$* obj) {
	 return this->$Flow$Subscriber::equals(obj);
}

$Object* Flow$Processor::clone() {
	 return this->$Flow$Subscriber::clone();
}

$String* Flow$Processor::toString() {
	 return this->$Flow$Subscriber::toString();
}

void Flow$Processor::finalize() {
	this->$Flow$Subscriber::finalize();
}

$Class* Flow$Processor::load$($String* name, bool initialize) {
	$loadClass(Flow$Processor, name, initialize, &_Flow$Processor_ClassInfo_, allocate$Flow$Processor);
	return class$;
}

$Class* Flow$Processor::class$ = nullptr;

		} // concurrent
	} // util
} // java