#include <java/util/stream/StreamSpliterators$DistinctSpliterator.h>
#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/Comparator.h>
#include <java/util/Spliterator.h>
#include <java/util/concurrent/ConcurrentHashMap.h>
#include <java/util/function/Consumer.h>
#include <java/util/stream/StreamSpliterators.h>
#include <jcpp.h>

#undef DISTINCT
#undef NULL_VALUE
#undef ORDERED
#undef SIZED
#undef SORTED
#undef SUBSIZED
#undef TRUE

using $Serializable = ::java::io::Serializable;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $Comparator = ::java::util::Comparator;
using $Spliterator = ::java::util::Spliterator;
using $ConcurrentHashMap = ::java::util::concurrent::ConcurrentHashMap;
using $Consumer = ::java::util::function::Consumer;

namespace java {
	namespace util {
		namespace stream {

class StreamSpliterators$DistinctSpliterator$$Lambda$lambda$forEachRemaining$0 : public $Consumer {
	$class(StreamSpliterators$DistinctSpliterator$$Lambda$lambda$forEachRemaining$0, $NO_CLASS_INIT, $Consumer)
public:
	void init$(StreamSpliterators$DistinctSpliterator* inst, $Consumer* action) {
		$set(this, inst$, inst);
		$set(this, action, action);
	}
	virtual void accept(Object$* t) override {
		$nc(inst$)->lambda$forEachRemaining$0(action, t);
	}
	StreamSpliterators$DistinctSpliterator* inst$ = nullptr;
	$Consumer* action = nullptr;
};
$Class* StreamSpliterators$DistinctSpliterator$$Lambda$lambda$forEachRemaining$0::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(StreamSpliterators$DistinctSpliterator$$Lambda$lambda$forEachRemaining$0, inst$)},
		{"action", "Ljava/util/function/Consumer;", nullptr, $PUBLIC, $field(StreamSpliterators$DistinctSpliterator$$Lambda$lambda$forEachRemaining$0, action)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/stream/StreamSpliterators$DistinctSpliterator;Ljava/util/function/Consumer;)V", nullptr, $PUBLIC, $method(StreamSpliterators$DistinctSpliterator$$Lambda$lambda$forEachRemaining$0, init$, void, StreamSpliterators$DistinctSpliterator*, $Consumer*)},
		{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(StreamSpliterators$DistinctSpliterator$$Lambda$lambda$forEachRemaining$0, accept, void, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.util.stream.StreamSpliterators$DistinctSpliterator$$Lambda$lambda$forEachRemaining$0",
		"java.lang.Object",
		"java.util.function.Consumer",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(StreamSpliterators$DistinctSpliterator$$Lambda$lambda$forEachRemaining$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(StreamSpliterators$DistinctSpliterator$$Lambda$lambda$forEachRemaining$0);
	});
	return class$;
}
$Class* StreamSpliterators$DistinctSpliterator$$Lambda$lambda$forEachRemaining$0::class$ = nullptr;

int32_t StreamSpliterators$DistinctSpliterator::hashCode() {
	 return this->$Spliterator::hashCode();
}

bool StreamSpliterators$DistinctSpliterator::equals(Object$* obj) {
	 return this->$Spliterator::equals(obj);
}

$Object* StreamSpliterators$DistinctSpliterator::clone() {
	 return this->$Spliterator::clone();
}

$String* StreamSpliterators$DistinctSpliterator::toString() {
	 return this->$Spliterator::toString();
}

void StreamSpliterators$DistinctSpliterator::finalize() {
	this->$Spliterator::finalize();
}

$Object* StreamSpliterators$DistinctSpliterator::NULL_VALUE = nullptr;

void StreamSpliterators$DistinctSpliterator::init$($Spliterator* s) {
	StreamSpliterators$DistinctSpliterator::init$(s, $$new($ConcurrentHashMap));
}

void StreamSpliterators$DistinctSpliterator::init$($Spliterator* s, $ConcurrentHashMap* seen) {
	$set(this, s, s);
	$set(this, seen, seen);
}

void StreamSpliterators$DistinctSpliterator::accept(Object$* t) {
	$set(this, tmpSlot, t);
}

$Object* StreamSpliterators$DistinctSpliterator::mapNull(Object$* t) {
	return t != nullptr ? $of(t) : StreamSpliterators$DistinctSpliterator::NULL_VALUE;
}

bool StreamSpliterators$DistinctSpliterator::tryAdvance($Consumer* action) {
	$useLocalObjectStack();
	while ($nc(this->s)->tryAdvance(this)) {
		if ($nc(this->seen)->putIfAbsent($(mapNull(this->tmpSlot)), $Boolean::TRUE) == nullptr) {
			$nc(action)->accept(this->tmpSlot);
			$set(this, tmpSlot, nullptr);
			return true;
		}
	}
	return false;
}

void StreamSpliterators$DistinctSpliterator::forEachRemaining($Consumer* action) {
	$nc(this->s)->forEachRemaining($$new(StreamSpliterators$DistinctSpliterator$$Lambda$lambda$forEachRemaining$0, this, action));
}

$Spliterator* StreamSpliterators$DistinctSpliterator::trySplit() {
	$var($Spliterator, split, $nc(this->s)->trySplit());
	return (split != nullptr) ? $cast($Spliterator, $new(StreamSpliterators$DistinctSpliterator, split, this->seen)) : ($Spliterator*)nullptr;
}

int64_t StreamSpliterators$DistinctSpliterator::estimateSize() {
	return $nc(this->s)->estimateSize();
}

int32_t StreamSpliterators$DistinctSpliterator::characteristics() {
	return ($nc(this->s)->characteristics() & ~((($Spliterator::SIZED | $Spliterator::SUBSIZED) | $Spliterator::SORTED) | $Spliterator::ORDERED)) | $Spliterator::DISTINCT;
}

$Comparator* StreamSpliterators$DistinctSpliterator::getComparator() {
	return $nc(this->s)->getComparator();
}

void StreamSpliterators$DistinctSpliterator::lambda$forEachRemaining$0($Consumer* action, Object$* t) {
	if ($nc(this->seen)->putIfAbsent($(mapNull(t)), $Boolean::TRUE) == nullptr) {
		$nc(action)->accept(t);
	}
}

void StreamSpliterators$DistinctSpliterator::clinit$($Class* clazz) {
	$assignStatic(StreamSpliterators$DistinctSpliterator::NULL_VALUE, $new($Object));
}

StreamSpliterators$DistinctSpliterator::StreamSpliterators$DistinctSpliterator() {
}

$Class* StreamSpliterators$DistinctSpliterator::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("java.util.stream.StreamSpliterators$DistinctSpliterator$$Lambda$lambda$forEachRemaining$0")) {
			return StreamSpliterators$DistinctSpliterator$$Lambda$lambda$forEachRemaining$0::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"NULL_VALUE", "Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(StreamSpliterators$DistinctSpliterator, NULL_VALUE)},
		{"s", "Ljava/util/Spliterator;", "Ljava/util/Spliterator<TT;>;", $PRIVATE | $FINAL, $field(StreamSpliterators$DistinctSpliterator, s)},
		{"seen", "Ljava/util/concurrent/ConcurrentHashMap;", "Ljava/util/concurrent/ConcurrentHashMap<TT;Ljava/lang/Boolean;>;", $PRIVATE | $FINAL, $field(StreamSpliterators$DistinctSpliterator, seen)},
		{"tmpSlot", "Ljava/lang/Object;", "TT;", $PRIVATE, $field(StreamSpliterators$DistinctSpliterator, tmpSlot)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "(Ljava/util/Spliterator;)V", "(Ljava/util/Spliterator<TT;>;)V", 0, $method(StreamSpliterators$DistinctSpliterator, init$, void, $Spliterator*)},
		{"<init>", "(Ljava/util/Spliterator;Ljava/util/concurrent/ConcurrentHashMap;)V", "(Ljava/util/Spliterator<TT;>;Ljava/util/concurrent/ConcurrentHashMap<TT;Ljava/lang/Boolean;>;)V", $PRIVATE, $method(StreamSpliterators$DistinctSpliterator, init$, void, $Spliterator*, $ConcurrentHashMap*)},
		{"accept", "(Ljava/lang/Object;)V", "(TT;)V", $PUBLIC, $virtualMethod(StreamSpliterators$DistinctSpliterator, accept, void, Object$*)},
		{"characteristics", "()I", nullptr, $PUBLIC, $virtualMethod(StreamSpliterators$DistinctSpliterator, characteristics, int32_t)},
		{"estimateSize", "()J", nullptr, $PUBLIC, $virtualMethod(StreamSpliterators$DistinctSpliterator, estimateSize, int64_t)},
		{"forEachRemaining", "(Ljava/util/function/Consumer;)V", "(Ljava/util/function/Consumer<-TT;>;)V", $PUBLIC, $virtualMethod(StreamSpliterators$DistinctSpliterator, forEachRemaining, void, $Consumer*)},
		{"getComparator", "()Ljava/util/Comparator;", "()Ljava/util/Comparator<-TT;>;", $PUBLIC, $virtualMethod(StreamSpliterators$DistinctSpliterator, getComparator, $Comparator*)},
		{"lambda$forEachRemaining$0", "(Ljava/util/function/Consumer;Ljava/lang/Object;)V", nullptr, $PRIVATE | $SYNTHETIC, $method(StreamSpliterators$DistinctSpliterator, lambda$forEachRemaining$0, void, $Consumer*, Object$*)},
		{"mapNull", "(Ljava/lang/Object;)Ljava/lang/Object;", "(TT;)TT;", $PRIVATE, $method(StreamSpliterators$DistinctSpliterator, mapNull, $Object*, Object$*)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{"tryAdvance", "(Ljava/util/function/Consumer;)Z", "(Ljava/util/function/Consumer<-TT;>;)Z", $PUBLIC, $virtualMethod(StreamSpliterators$DistinctSpliterator, tryAdvance, bool, $Consumer*)},
		{"trySplit", "()Ljava/util/Spliterator;", "()Ljava/util/Spliterator<TT;>;", $PUBLIC, $virtualMethod(StreamSpliterators$DistinctSpliterator, trySplit, $Spliterator*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.stream.StreamSpliterators$DistinctSpliterator", "java.util.stream.StreamSpliterators", "DistinctSpliterator", $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.util.stream.StreamSpliterators$DistinctSpliterator",
		"java.lang.Object",
		"java.util.Spliterator,java.util.function.Consumer",
		fieldInfos$$,
		methodInfos$$,
		"<T:Ljava/lang/Object;>Ljava/lang/Object;Ljava/util/Spliterator<TT;>;Ljava/util/function/Consumer<TT;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.stream.StreamSpliterators"
	};
	$loadClass(StreamSpliterators$DistinctSpliterator, name, initialize, &classInfo$$, StreamSpliterators$DistinctSpliterator::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(StreamSpliterators$DistinctSpliterator));
	});
	return class$;
}

$Class* StreamSpliterators$DistinctSpliterator::class$ = nullptr;

		} // stream
	} // util
} // java