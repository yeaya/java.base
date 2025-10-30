#include <java/util/stream/Stream$1.h>

#include <java/util/Objects.h>
#include <java/util/Spliterators$AbstractSpliterator.h>
#include <java/util/function/Consumer.h>
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
using $UnaryOperator = ::java::util::function::UnaryOperator;
using $Stream = ::java::util::stream::Stream;

namespace java {
	namespace util {
		namespace stream {

$FieldInfo _Stream$1_FieldInfo_[] = {
	{"val$seed", "Ljava/lang/Object;", nullptr, $FINAL | $SYNTHETIC, $field(Stream$1, val$seed)},
	{"val$f", "Ljava/util/function/UnaryOperator;", nullptr, $FINAL | $SYNTHETIC, $field(Stream$1, val$f)},
	{"prev", "Ljava/lang/Object;", "TT;", 0, $field(Stream$1, prev)},
	{"started", "Z", nullptr, 0, $field(Stream$1, started)},
	{}
};

$MethodInfo _Stream$1_MethodInfo_[] = {
	{"<init>", "(JILjava/util/function/UnaryOperator;Ljava/lang/Object;)V", nullptr, 0, $method(static_cast<void(Stream$1::*)(int64_t,int32_t,$UnaryOperator*,Object$*)>(&Stream$1::init$))},
	{"tryAdvance", "(Ljava/util/function/Consumer;)Z", "(Ljava/util/function/Consumer<-TT;>;)Z", $PUBLIC},
	{}
};

$EnclosingMethodInfo _Stream$1_EnclosingMethodInfo_ = {
	"java.util.stream.Stream",
	"iterate",
	"(Ljava/lang/Object;Ljava/util/function/UnaryOperator;)Ljava/util/stream/Stream;"
};

$InnerClassInfo _Stream$1_InnerClassesInfo_[] = {
	{"java.util.stream.Stream$1", nullptr, nullptr, 0},
	{"java.util.Spliterators$AbstractSpliterator", "java.util.Spliterators", "AbstractSpliterator", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _Stream$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.stream.Stream$1",
	"java.util.Spliterators$AbstractSpliterator",
	nullptr,
	_Stream$1_FieldInfo_,
	_Stream$1_MethodInfo_,
	"Ljava/util/Spliterators$AbstractSpliterator<TT;>;",
	&_Stream$1_EnclosingMethodInfo_,
	_Stream$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.Stream"
};

$Object* allocate$Stream$1($Class* clazz) {
	return $of($alloc(Stream$1));
}

void Stream$1::init$(int64_t est, int32_t additionalCharacteristics, $UnaryOperator* val$f, Object$* val$seed) {
	$set(this, val$f, val$f);
	$set(this, val$seed, val$seed);
	$Spliterators$AbstractSpliterator::init$(est, additionalCharacteristics);
}

bool Stream$1::tryAdvance($Consumer* action) {
	$Objects::requireNonNull(action);
	$var($Object, t, nullptr);
	if (this->started) {
		$assign(t, $nc(this->val$f)->apply(this->prev));
	} else {
		$assign(t, this->val$seed);
		this->started = true;
	}
	action->accept($set(this, prev, t));
	return true;
}

Stream$1::Stream$1() {
}

$Class* Stream$1::load$($String* name, bool initialize) {
	$loadClass(Stream$1, name, initialize, &_Stream$1_ClassInfo_, allocate$Stream$1);
	return class$;
}

$Class* Stream$1::class$ = nullptr;

		} // stream
	} // util
} // java