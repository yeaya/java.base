#include <java/util/stream/Nodes$SizedCollectorTask$OfDouble.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IndexOutOfBoundsException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Spliterator.h>
#include <java/util/function/Consumer.h>
#include <java/util/stream/Nodes$SizedCollectorTask.h>
#include <java/util/stream/PipelineHelper.h>
#include <java/util/stream/Sink$OfDouble.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IndexOutOfBoundsException = ::java::lang::IndexOutOfBoundsException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Spliterator = ::java::util::Spliterator;
using $Consumer = ::java::util::function::Consumer;
using $Nodes$SizedCollectorTask = ::java::util::stream::Nodes$SizedCollectorTask;
using $PipelineHelper = ::java::util::stream::PipelineHelper;
using $Sink$OfDouble = ::java::util::stream::Sink$OfDouble;

namespace java {
	namespace util {
		namespace stream {

$FieldInfo _Nodes$SizedCollectorTask$OfDouble_FieldInfo_[] = {
	{"array", "[D", nullptr, $PRIVATE | $FINAL, $field(Nodes$SizedCollectorTask$OfDouble, array)},
	{}
};

$MethodInfo _Nodes$SizedCollectorTask$OfDouble_MethodInfo_[] = {
	{"*accept", "(I)V", nullptr, $PUBLIC | $ABSTRACT},
	{"*accept", "(J)V", nullptr, $PUBLIC | $ABSTRACT},
	{"*accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"*andThen", "(Ljava/util/function/Consumer;)Ljava/util/function/Consumer;", nullptr, $PUBLIC | $ABSTRACT},
	{"*begin", "(J)V", nullptr, $PUBLIC},
	{"*cancellationRequested", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*end", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/util/Spliterator;Ljava/util/stream/PipelineHelper;[D)V", "(Ljava/util/Spliterator<TP_IN;>;Ljava/util/stream/PipelineHelper<Ljava/lang/Double;>;[D)V", 0, $method(static_cast<void(Nodes$SizedCollectorTask$OfDouble::*)($Spliterator*,$PipelineHelper*,$doubles*)>(&Nodes$SizedCollectorTask$OfDouble::init$))},
	{"<init>", "(Ljava/util/stream/Nodes$SizedCollectorTask$OfDouble;Ljava/util/Spliterator;JJ)V", "(Ljava/util/stream/Nodes$SizedCollectorTask$OfDouble<TP_IN;>;Ljava/util/Spliterator<TP_IN;>;JJ)V", 0, $method(static_cast<void(Nodes$SizedCollectorTask$OfDouble::*)(Nodes$SizedCollectorTask$OfDouble*,$Spliterator*,int64_t,int64_t)>(&Nodes$SizedCollectorTask$OfDouble::init$))},
	{"accept", "(D)V", nullptr, $PUBLIC},
	{"makeChild", "(Ljava/util/Spliterator;JJ)Ljava/util/stream/Nodes$SizedCollectorTask$OfDouble;", "(Ljava/util/Spliterator<TP_IN;>;JJ)Ljava/util/stream/Nodes$SizedCollectorTask$OfDouble<TP_IN;>;", 0},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Nodes$SizedCollectorTask$OfDouble_InnerClassesInfo_[] = {
	{"java.util.stream.Nodes$SizedCollectorTask", "java.util.stream.Nodes", "SizedCollectorTask", $PRIVATE | $STATIC | $ABSTRACT},
	{"java.util.stream.Nodes$SizedCollectorTask$OfDouble", "java.util.stream.Nodes$SizedCollectorTask", "OfDouble", $STATIC | $FINAL},
	{"java.util.stream.Sink$OfDouble", "java.util.stream.Sink", "OfDouble", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Nodes$SizedCollectorTask$OfDouble_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.stream.Nodes$SizedCollectorTask$OfDouble",
	"java.util.stream.Nodes$SizedCollectorTask",
	"java.util.stream.Sink$OfDouble",
	_Nodes$SizedCollectorTask$OfDouble_FieldInfo_,
	_Nodes$SizedCollectorTask$OfDouble_MethodInfo_,
	"<P_IN:Ljava/lang/Object;>Ljava/util/stream/Nodes$SizedCollectorTask<TP_IN;Ljava/lang/Double;Ljava/util/stream/Sink$OfDouble;Ljava/util/stream/Nodes$SizedCollectorTask$OfDouble<TP_IN;>;>;Ljava/util/stream/Sink$OfDouble;",
	nullptr,
	_Nodes$SizedCollectorTask$OfDouble_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.Nodes"
};

$Object* allocate$Nodes$SizedCollectorTask$OfDouble($Class* clazz) {
	return $of($alloc(Nodes$SizedCollectorTask$OfDouble));
}

void Nodes$SizedCollectorTask$OfDouble::begin(int64_t size) {
	this->$Nodes$SizedCollectorTask::begin(size);
}

int32_t Nodes$SizedCollectorTask$OfDouble::hashCode() {
	 return this->$Nodes$SizedCollectorTask::hashCode();
}

bool Nodes$SizedCollectorTask$OfDouble::equals(Object$* obj) {
	 return this->$Nodes$SizedCollectorTask::equals(obj);
}

$Object* Nodes$SizedCollectorTask$OfDouble::clone() {
	 return this->$Nodes$SizedCollectorTask::clone();
}

$String* Nodes$SizedCollectorTask$OfDouble::toString() {
	 return this->$Nodes$SizedCollectorTask::toString();
}

void Nodes$SizedCollectorTask$OfDouble::finalize() {
	this->$Nodes$SizedCollectorTask::finalize();
}

void Nodes$SizedCollectorTask$OfDouble::end() {
	this->$Nodes$SizedCollectorTask::end();
}

bool Nodes$SizedCollectorTask$OfDouble::cancellationRequested() {
	 return this->$Nodes$SizedCollectorTask::cancellationRequested();
}

void Nodes$SizedCollectorTask$OfDouble::accept(int32_t value) {
	this->$Nodes$SizedCollectorTask::accept(value);
}

void Nodes$SizedCollectorTask$OfDouble::accept(int64_t value) {
	this->$Nodes$SizedCollectorTask::accept(value);
}

void Nodes$SizedCollectorTask$OfDouble::accept(Object$* t) {
	this->$Sink$OfDouble::accept(t);
}

$Consumer* Nodes$SizedCollectorTask$OfDouble::andThen($Consumer* after) {
	 return this->$Nodes$SizedCollectorTask::andThen(after);
}

void Nodes$SizedCollectorTask$OfDouble::init$($Spliterator* spliterator, $PipelineHelper* helper, $doubles* array) {
	$Nodes$SizedCollectorTask::init$(spliterator, helper, $nc(array)->length);
	$set(this, array, array);
}

void Nodes$SizedCollectorTask$OfDouble::init$(Nodes$SizedCollectorTask$OfDouble* parent, $Spliterator* spliterator, int64_t offset, int64_t length) {
	$Nodes$SizedCollectorTask::init$(parent, spliterator, offset, length, $nc($nc(parent)->array)->length);
	$set(this, array, $nc(parent)->array);
}

Nodes$SizedCollectorTask$OfDouble* Nodes$SizedCollectorTask$OfDouble::makeChild($Spliterator* spliterator, int64_t offset, int64_t size) {
	return $new(Nodes$SizedCollectorTask$OfDouble, this, spliterator, offset, size);
}

void Nodes$SizedCollectorTask$OfDouble::accept(double value) {
	if (this->index >= this->fence) {
		$throwNew($IndexOutOfBoundsException, $($Integer::toString(this->index)));
	}
	$nc(this->array)->set(this->index++, value);
}

Nodes$SizedCollectorTask$OfDouble::Nodes$SizedCollectorTask$OfDouble() {
}

$Class* Nodes$SizedCollectorTask$OfDouble::load$($String* name, bool initialize) {
	$loadClass(Nodes$SizedCollectorTask$OfDouble, name, initialize, &_Nodes$SizedCollectorTask$OfDouble_ClassInfo_, allocate$Nodes$SizedCollectorTask$OfDouble);
	return class$;
}

$Class* Nodes$SizedCollectorTask$OfDouble::class$ = nullptr;

		} // stream
	} // util
} // java