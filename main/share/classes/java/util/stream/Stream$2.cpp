#include <java/util/stream/Stream$2.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Objects.h>
#include <java/util/Spliterators$AbstractSpliterator.h>
#include <java/util/function/Consumer.h>
#include <java/util/function/Predicate.h>
#include <java/util/function/UnaryOperator.h>
#include <java/util/stream/Stream.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Objects = ::java::util::Objects;
using $Spliterators$AbstractSpliterator = ::java::util::Spliterators$AbstractSpliterator;
using $Consumer = ::java::util::function::Consumer;
using $Function = ::java::util::function::Function;
using $Predicate = ::java::util::function::Predicate;
using $UnaryOperator = ::java::util::function::UnaryOperator;
using $Stream = ::java::util::stream::Stream;

namespace java {
	namespace util {
		namespace stream {

$FieldInfo _Stream$2_FieldInfo_[] = {
	{"val$hasNext", "Ljava/util/function/Predicate;", nullptr, $FINAL | $SYNTHETIC, $field(Stream$2, val$hasNext)},
	{"val$seed", "Ljava/lang/Object;", nullptr, $FINAL | $SYNTHETIC, $field(Stream$2, val$seed)},
	{"val$next", "Ljava/util/function/UnaryOperator;", nullptr, $FINAL | $SYNTHETIC, $field(Stream$2, val$next)},
	{"prev", "Ljava/lang/Object;", "TT;", 0, $field(Stream$2, prev)},
	{"started", "Z", nullptr, 0, $field(Stream$2, started)},
	{"finished", "Z", nullptr, 0, $field(Stream$2, finished)},
	{}
};

$MethodInfo _Stream$2_MethodInfo_[] = {
	{"<init>", "(JILjava/util/function/UnaryOperator;Ljava/lang/Object;Ljava/util/function/Predicate;)V", nullptr, 0, $method(static_cast<void(Stream$2::*)(int64_t,int32_t,$UnaryOperator*,Object$*,$Predicate*)>(&Stream$2::init$))},
	{"forEachRemaining", "(Ljava/util/function/Consumer;)V", "(Ljava/util/function/Consumer<-TT;>;)V", $PUBLIC},
	{"tryAdvance", "(Ljava/util/function/Consumer;)Z", "(Ljava/util/function/Consumer<-TT;>;)Z", $PUBLIC},
	{}
};

$EnclosingMethodInfo _Stream$2_EnclosingMethodInfo_ = {
	"java.util.stream.Stream",
	"iterate",
	"(Ljava/lang/Object;Ljava/util/function/Predicate;Ljava/util/function/UnaryOperator;)Ljava/util/stream/Stream;"
};

$InnerClassInfo _Stream$2_InnerClassesInfo_[] = {
	{"java.util.stream.Stream$2", nullptr, nullptr, 0},
	{"java.util.Spliterators$AbstractSpliterator", "java.util.Spliterators", "AbstractSpliterator", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _Stream$2_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.stream.Stream$2",
	"java.util.Spliterators$AbstractSpliterator",
	nullptr,
	_Stream$2_FieldInfo_,
	_Stream$2_MethodInfo_,
	"Ljava/util/Spliterators$AbstractSpliterator<TT;>;",
	&_Stream$2_EnclosingMethodInfo_,
	_Stream$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.Stream"
};

$Object* allocate$Stream$2($Class* clazz) {
	return $of($alloc(Stream$2));
}

void Stream$2::init$(int64_t est, int32_t additionalCharacteristics, $UnaryOperator* val$next, Object$* val$seed, $Predicate* val$hasNext) {
	$set(this, val$next, val$next);
	$set(this, val$seed, val$seed);
	$set(this, val$hasNext, val$hasNext);
	$Spliterators$AbstractSpliterator::init$(est, additionalCharacteristics);
}

bool Stream$2::tryAdvance($Consumer* action) {
	$Objects::requireNonNull(action);
	if (this->finished) {
		return false;
	}
	$var($Object, t, nullptr);
	if (this->started) {
		$assign(t, $nc(this->val$next)->apply(this->prev));
	} else {
		$assign(t, this->val$seed);
		this->started = true;
	}
	if (!$nc(this->val$hasNext)->test(t)) {
		$set(this, prev, nullptr);
		this->finished = true;
		return false;
	}
	action->accept($assignField(this, prev, t));
	return true;
}

void Stream$2::forEachRemaining($Consumer* action) {
	$Objects::requireNonNull(action);
	if (this->finished) {
		return;
	}
	this->finished = true;
	$var($Object, t, this->started ? $nc(this->val$next)->apply(this->prev) : this->val$seed);
	$set(this, prev, nullptr);
	while ($nc(this->val$hasNext)->test(t)) {
		action->accept(t);
		$assign(t, $nc(this->val$next)->apply(t));
	}
}

Stream$2::Stream$2() {
}

$Class* Stream$2::load$($String* name, bool initialize) {
	$loadClass(Stream$2, name, initialize, &_Stream$2_ClassInfo_, allocate$Stream$2);
	return class$;
}

$Class* Stream$2::class$ = nullptr;

		} // stream
	} // util
} // java