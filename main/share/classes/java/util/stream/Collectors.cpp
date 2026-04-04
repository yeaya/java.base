#include <java/util/stream/Collectors.h>
#include <java/io/Serializable.h>
#include <java/lang/CharSequence.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/AbstractCollection.h>
#include <java/util/ArrayList.h>
#include <java/util/Collection.h>
#include <java/util/Collections.h>
#include <java/util/Comparator.h>
#include <java/util/DoubleSummaryStatistics.h>
#include <java/util/EnumSet.h>
#include <java/util/HashMap.h>
#include <java/util/HashSet.h>
#include <java/util/IntSummaryStatistics.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/LongSummaryStatistics.h>
#include <java/util/Map$Entry.h>
#include <java/util/Map.h>
#include <java/util/Objects.h>
#include <java/util/Optional.h>
#include <java/util/Set.h>
#include <java/util/StringJoiner.h>
#include <java/util/concurrent/ConcurrentHashMap.h>
#include <java/util/concurrent/ConcurrentMap.h>
#include <java/util/function/BiConsumer.h>
#include <java/util/function/BiFunction.h>
#include <java/util/function/BinaryOperator.h>
#include <java/util/function/Consumer.h>
#include <java/util/function/Function.h>
#include <java/util/function/Predicate.h>
#include <java/util/function/Supplier.h>
#include <java/util/function/ToDoubleFunction.h>
#include <java/util/function/ToIntFunction.h>
#include <java/util/function/ToLongFunction.h>
#include <java/util/stream/BaseStream.h>
#include <java/util/stream/Collector$Characteristics.h>
#include <java/util/stream/Collector.h>
#include <java/util/stream/Collectors$1OptionalBox.h>
#include <java/util/stream/Collectors$1PairBox.h>
#include <java/util/stream/Collectors$CollectorImpl.h>
#include <java/util/stream/Collectors$Partition.h>
#include <java/util/stream/Stream.h>
#include <jdk/internal/access/JavaUtilCollectionAccess.h>
#include <jdk/internal/access/SharedSecrets.h>
#include <jcpp.h>

#undef CH_CONCURRENT_ID
#undef CH_CONCURRENT_NOID
#undef CH_ID
#undef CH_NOID
#undef CH_UNORDERED_ID
#undef CH_UNORDERED_NOID
#undef CONCURRENT
#undef IDENTITY_FINISH
#undef UNORDERED

using $Map$EntryArray = $Array<::java::util::Map$Entry>;
using $Serializable = ::java::io::Serializable;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $AbstractCollection = ::java::util::AbstractCollection;
using $ArrayList = ::java::util::ArrayList;
using $Collection = ::java::util::Collection;
using $Collections = ::java::util::Collections;
using $Comparator = ::java::util::Comparator;
using $DoubleSummaryStatistics = ::java::util::DoubleSummaryStatistics;
using $EnumSet = ::java::util::EnumSet;
using $HashMap = ::java::util::HashMap;
using $HashSet = ::java::util::HashSet;
using $IntSummaryStatistics = ::java::util::IntSummaryStatistics;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $LongSummaryStatistics = ::java::util::LongSummaryStatistics;
using $Map = ::java::util::Map;
using $Map$Entry = ::java::util::Map$Entry;
using $Objects = ::java::util::Objects;
using $Optional = ::java::util::Optional;
using $Set = ::java::util::Set;
using $StringJoiner = ::java::util::StringJoiner;
using $ConcurrentHashMap = ::java::util::concurrent::ConcurrentHashMap;
using $ConcurrentMap = ::java::util::concurrent::ConcurrentMap;
using $BiConsumer = ::java::util::function::BiConsumer;
using $BiFunction = ::java::util::function::BiFunction;
using $BinaryOperator = ::java::util::function::BinaryOperator;
using $Consumer = ::java::util::function::Consumer;
using $Function = ::java::util::function::Function;
using $Predicate = ::java::util::function::Predicate;
using $Supplier = ::java::util::function::Supplier;
using $ToDoubleFunction = ::java::util::function::ToDoubleFunction;
using $ToIntFunction = ::java::util::function::ToIntFunction;
using $ToLongFunction = ::java::util::function::ToLongFunction;
using $Collector = ::java::util::stream::Collector;
using $Collector$Characteristics = ::java::util::stream::Collector$Characteristics;
using $Collectors$1OptionalBox = ::java::util::stream::Collectors$1OptionalBox;
using $Collectors$1PairBox = ::java::util::stream::Collectors$1PairBox;
using $Collectors$CollectorImpl = ::java::util::stream::Collectors$CollectorImpl;
using $Collectors$Partition = ::java::util::stream::Collectors$Partition;
using $Stream = ::java::util::stream::Stream;
using $SharedSecrets = ::jdk::internal::access::SharedSecrets;

namespace java {
	namespace util {
		namespace stream {

class Collectors$$Lambda$lambda$uniqKeysMapMerger$0 : public $BinaryOperator {
	$class(Collectors$$Lambda$lambda$uniqKeysMapMerger$0, $NO_CLASS_INIT, $BinaryOperator)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* m1, Object$* m2) override {
		 return Collectors::lambda$uniqKeysMapMerger$0($cast($Map, m1), $cast($Map, m2));
	}
};
$Class* Collectors$$Lambda$lambda$uniqKeysMapMerger$0::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Collectors$$Lambda$lambda$uniqKeysMapMerger$0, init$, void)},
		{"apply", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Collectors$$Lambda$lambda$uniqKeysMapMerger$0, apply, $Object*, Object$*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.util.stream.Collectors$$Lambda$lambda$uniqKeysMapMerger$0",
		"java.lang.Object",
		"java.util.function.BinaryOperator",
		nullptr,
		methodInfos$$
	};
	$loadClass(Collectors$$Lambda$lambda$uniqKeysMapMerger$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Collectors$$Lambda$lambda$uniqKeysMapMerger$0);
	});
	return class$;
}
$Class* Collectors$$Lambda$lambda$uniqKeysMapMerger$0::class$ = nullptr;

class Collectors$$Lambda$lambda$uniqKeysMapAccumulator$1$1 : public $BiConsumer {
	$class(Collectors$$Lambda$lambda$uniqKeysMapAccumulator$1$1, $NO_CLASS_INIT, $BiConsumer)
public:
	void init$($Function* keyMapper, $Function* valueMapper) {
		$set(this, keyMapper, keyMapper);
		$set(this, valueMapper, valueMapper);
	}
	virtual void accept(Object$* map, Object$* element) override {
		Collectors::lambda$uniqKeysMapAccumulator$1(keyMapper, valueMapper, $cast($Map, map), element);
	}
	$Function* keyMapper = nullptr;
	$Function* valueMapper = nullptr;
};
$Class* Collectors$$Lambda$lambda$uniqKeysMapAccumulator$1$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"keyMapper", "Ljava/util/function/Function;", nullptr, $PUBLIC, $field(Collectors$$Lambda$lambda$uniqKeysMapAccumulator$1$1, keyMapper)},
		{"valueMapper", "Ljava/util/function/Function;", nullptr, $PUBLIC, $field(Collectors$$Lambda$lambda$uniqKeysMapAccumulator$1$1, valueMapper)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/function/Function;Ljava/util/function/Function;)V", nullptr, $PUBLIC, $method(Collectors$$Lambda$lambda$uniqKeysMapAccumulator$1$1, init$, void, $Function*, $Function*)},
		{"accept", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(Collectors$$Lambda$lambda$uniqKeysMapAccumulator$1$1, accept, void, Object$*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.util.stream.Collectors$$Lambda$lambda$uniqKeysMapAccumulator$1$1",
		"java.lang.Object",
		"java.util.function.BiConsumer",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Collectors$$Lambda$lambda$uniqKeysMapAccumulator$1$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Collectors$$Lambda$lambda$uniqKeysMapAccumulator$1$1);
	});
	return class$;
}
$Class* Collectors$$Lambda$lambda$uniqKeysMapAccumulator$1$1::class$ = nullptr;

class Collectors$$Lambda$lambda$castingIdentity$2$2 : public $Function {
	$class(Collectors$$Lambda$lambda$castingIdentity$2$2, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* i) override {
		 return Collectors::lambda$castingIdentity$2(i);
	}
};
$Class* Collectors$$Lambda$lambda$castingIdentity$2$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Collectors$$Lambda$lambda$castingIdentity$2$2, init$, void)},
		{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Collectors$$Lambda$lambda$castingIdentity$2$2, apply, $Object*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.util.stream.Collectors$$Lambda$lambda$castingIdentity$2$2",
		"java.lang.Object",
		"java.util.function.Function",
		nullptr,
		methodInfos$$
	};
	$loadClass(Collectors$$Lambda$lambda$castingIdentity$2$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Collectors$$Lambda$lambda$castingIdentity$2$2);
	});
	return class$;
}
$Class* Collectors$$Lambda$lambda$castingIdentity$2$2::class$ = nullptr;

class Collectors$$Lambda$add$3 : public $BiConsumer {
	$class(Collectors$$Lambda$add$3, $NO_CLASS_INIT, $BiConsumer)
public:
	void init$() {
	}
	virtual void accept(Object$* inst$, Object$* e) override {
		$sure($Collection, inst$)->add(e);
	}
};
$Class* Collectors$$Lambda$add$3::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Collectors$$Lambda$add$3, init$, void)},
		{"accept", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(Collectors$$Lambda$add$3, accept, void, Object$*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.util.stream.Collectors$$Lambda$add$3",
		"java.lang.Object",
		"java.util.function.BiConsumer",
		nullptr,
		methodInfos$$
	};
	$loadClass(Collectors$$Lambda$add$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Collectors$$Lambda$add$3);
	});
	return class$;
}
$Class* Collectors$$Lambda$add$3::class$ = nullptr;

class Collectors$$Lambda$lambda$toCollection$3$4 : public $BinaryOperator {
	$class(Collectors$$Lambda$lambda$toCollection$3$4, $NO_CLASS_INIT, $BinaryOperator)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* r1, Object$* r2) override {
		 return Collectors::lambda$toCollection$3($cast($Collection, r1), $cast($Collection, r2));
	}
};
$Class* Collectors$$Lambda$lambda$toCollection$3$4::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Collectors$$Lambda$lambda$toCollection$3$4, init$, void)},
		{"apply", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Collectors$$Lambda$lambda$toCollection$3$4, apply, $Object*, Object$*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.util.stream.Collectors$$Lambda$lambda$toCollection$3$4",
		"java.lang.Object",
		"java.util.function.BinaryOperator",
		nullptr,
		methodInfos$$
	};
	$loadClass(Collectors$$Lambda$lambda$toCollection$3$4, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Collectors$$Lambda$lambda$toCollection$3$4);
	});
	return class$;
}
$Class* Collectors$$Lambda$lambda$toCollection$3$4::class$ = nullptr;

class Collectors$$Lambda$ArrayList$5 : public $Supplier {
	$class(Collectors$$Lambda$ArrayList$5, $NO_CLASS_INIT, $Supplier)
public:
	void init$() {
	}
	virtual $Object* get() override {
		 return $of($new($ArrayList));
	}
};
$Class* Collectors$$Lambda$ArrayList$5::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Collectors$$Lambda$ArrayList$5, init$, void)},
		{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Collectors$$Lambda$ArrayList$5, get, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.util.stream.Collectors$$Lambda$ArrayList$5",
		"java.lang.Object",
		"java.util.function.Supplier",
		nullptr,
		methodInfos$$
	};
	$loadClass(Collectors$$Lambda$ArrayList$5, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Collectors$$Lambda$ArrayList$5);
	});
	return class$;
}
$Class* Collectors$$Lambda$ArrayList$5::class$ = nullptr;

class Collectors$$Lambda$add$6 : public $BiConsumer {
	$class(Collectors$$Lambda$add$6, $NO_CLASS_INIT, $BiConsumer)
public:
	void init$() {
	}
	virtual void accept(Object$* inst$, Object$* e) override {
		$sure($List, inst$)->add(e);
	}
};
$Class* Collectors$$Lambda$add$6::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Collectors$$Lambda$add$6, init$, void)},
		{"accept", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(Collectors$$Lambda$add$6, accept, void, Object$*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.util.stream.Collectors$$Lambda$add$6",
		"java.lang.Object",
		"java.util.function.BiConsumer",
		nullptr,
		methodInfos$$
	};
	$loadClass(Collectors$$Lambda$add$6, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Collectors$$Lambda$add$6);
	});
	return class$;
}
$Class* Collectors$$Lambda$add$6::class$ = nullptr;

class Collectors$$Lambda$lambda$toList$4$7 : public $BinaryOperator {
	$class(Collectors$$Lambda$lambda$toList$4$7, $NO_CLASS_INIT, $BinaryOperator)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* left, Object$* right) override {
		 return $of(Collectors::lambda$toList$4($cast($ArrayList, left), $cast($ArrayList, right)));
	}
};
$Class* Collectors$$Lambda$lambda$toList$4$7::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Collectors$$Lambda$lambda$toList$4$7, init$, void)},
		{"apply", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Collectors$$Lambda$lambda$toList$4$7, apply, $Object*, Object$*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.util.stream.Collectors$$Lambda$lambda$toList$4$7",
		"java.lang.Object",
		"java.util.function.BinaryOperator",
		nullptr,
		methodInfos$$
	};
	$loadClass(Collectors$$Lambda$lambda$toList$4$7, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Collectors$$Lambda$lambda$toList$4$7);
	});
	return class$;
}
$Class* Collectors$$Lambda$lambda$toList$4$7::class$ = nullptr;

class Collectors$$Lambda$lambda$toUnmodifiableList$6$8 : public $Function {
	$class(Collectors$$Lambda$lambda$toUnmodifiableList$6$8, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* list) override {
		 return Collectors::lambda$toUnmodifiableList$6($cast($ArrayList, list));
	}
};
$Class* Collectors$$Lambda$lambda$toUnmodifiableList$6$8::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Collectors$$Lambda$lambda$toUnmodifiableList$6$8, init$, void)},
		{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Collectors$$Lambda$lambda$toUnmodifiableList$6$8, apply, $Object*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.util.stream.Collectors$$Lambda$lambda$toUnmodifiableList$6$8",
		"java.lang.Object",
		"java.util.function.Function",
		nullptr,
		methodInfos$$
	};
	$loadClass(Collectors$$Lambda$lambda$toUnmodifiableList$6$8, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Collectors$$Lambda$lambda$toUnmodifiableList$6$8);
	});
	return class$;
}
$Class* Collectors$$Lambda$lambda$toUnmodifiableList$6$8::class$ = nullptr;

class Collectors$$Lambda$HashSet$9 : public $Supplier {
	$class(Collectors$$Lambda$HashSet$9, $NO_CLASS_INIT, $Supplier)
public:
	void init$() {
	}
	virtual $Object* get() override {
		 return $of($new($HashSet));
	}
};
$Class* Collectors$$Lambda$HashSet$9::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Collectors$$Lambda$HashSet$9, init$, void)},
		{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Collectors$$Lambda$HashSet$9, get, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.util.stream.Collectors$$Lambda$HashSet$9",
		"java.lang.Object",
		"java.util.function.Supplier",
		nullptr,
		methodInfos$$
	};
	$loadClass(Collectors$$Lambda$HashSet$9, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Collectors$$Lambda$HashSet$9);
	});
	return class$;
}
$Class* Collectors$$Lambda$HashSet$9::class$ = nullptr;

class Collectors$$Lambda$add$10 : public $BiConsumer {
	$class(Collectors$$Lambda$add$10, $NO_CLASS_INIT, $BiConsumer)
public:
	void init$() {
	}
	virtual void accept(Object$* inst$, Object$* e) override {
		$sure($Set, inst$)->add(e);
	}
};
$Class* Collectors$$Lambda$add$10::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Collectors$$Lambda$add$10, init$, void)},
		{"accept", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(Collectors$$Lambda$add$10, accept, void, Object$*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.util.stream.Collectors$$Lambda$add$10",
		"java.lang.Object",
		"java.util.function.BiConsumer",
		nullptr,
		methodInfos$$
	};
	$loadClass(Collectors$$Lambda$add$10, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Collectors$$Lambda$add$10);
	});
	return class$;
}
$Class* Collectors$$Lambda$add$10::class$ = nullptr;

class Collectors$$Lambda$lambda$toSet$7$11 : public $BinaryOperator {
	$class(Collectors$$Lambda$lambda$toSet$7$11, $NO_CLASS_INIT, $BinaryOperator)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* left, Object$* right) override {
		 return $of(Collectors::lambda$toSet$7($cast($HashSet, left), $cast($HashSet, right)));
	}
};
$Class* Collectors$$Lambda$lambda$toSet$7$11::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Collectors$$Lambda$lambda$toSet$7$11, init$, void)},
		{"apply", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Collectors$$Lambda$lambda$toSet$7$11, apply, $Object*, Object$*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.util.stream.Collectors$$Lambda$lambda$toSet$7$11",
		"java.lang.Object",
		"java.util.function.BinaryOperator",
		nullptr,
		methodInfos$$
	};
	$loadClass(Collectors$$Lambda$lambda$toSet$7$11, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Collectors$$Lambda$lambda$toSet$7$11);
	});
	return class$;
}
$Class* Collectors$$Lambda$lambda$toSet$7$11::class$ = nullptr;

class Collectors$$Lambda$lambda$toUnmodifiableSet$9$12 : public $Function {
	$class(Collectors$$Lambda$lambda$toUnmodifiableSet$9$12, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* set) override {
		 return Collectors::lambda$toUnmodifiableSet$9($cast($HashSet, set));
	}
};
$Class* Collectors$$Lambda$lambda$toUnmodifiableSet$9$12::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Collectors$$Lambda$lambda$toUnmodifiableSet$9$12, init$, void)},
		{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Collectors$$Lambda$lambda$toUnmodifiableSet$9$12, apply, $Object*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.util.stream.Collectors$$Lambda$lambda$toUnmodifiableSet$9$12",
		"java.lang.Object",
		"java.util.function.Function",
		nullptr,
		methodInfos$$
	};
	$loadClass(Collectors$$Lambda$lambda$toUnmodifiableSet$9$12, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Collectors$$Lambda$lambda$toUnmodifiableSet$9$12);
	});
	return class$;
}
$Class* Collectors$$Lambda$lambda$toUnmodifiableSet$9$12::class$ = nullptr;

class Collectors$$Lambda$StringBuilder$13 : public $Supplier {
	$class(Collectors$$Lambda$StringBuilder$13, $NO_CLASS_INIT, $Supplier)
public:
	void init$() {
	}
	virtual $Object* get() override {
		 return $of($new($StringBuilder));
	}
};
$Class* Collectors$$Lambda$StringBuilder$13::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Collectors$$Lambda$StringBuilder$13, init$, void)},
		{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Collectors$$Lambda$StringBuilder$13, get, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.util.stream.Collectors$$Lambda$StringBuilder$13",
		"java.lang.Object",
		"java.util.function.Supplier",
		nullptr,
		methodInfos$$
	};
	$loadClass(Collectors$$Lambda$StringBuilder$13, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Collectors$$Lambda$StringBuilder$13);
	});
	return class$;
}
$Class* Collectors$$Lambda$StringBuilder$13::class$ = nullptr;

class Collectors$$Lambda$append$14 : public $BiConsumer {
	$class(Collectors$$Lambda$append$14, $NO_CLASS_INIT, $BiConsumer)
public:
	void init$() {
	}
	virtual void accept(Object$* inst$, Object$* s) override {
		$sure($StringBuilder, inst$)->append($cast($CharSequence, s));
	}
};
$Class* Collectors$$Lambda$append$14::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Collectors$$Lambda$append$14, init$, void)},
		{"accept", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(Collectors$$Lambda$append$14, accept, void, Object$*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.util.stream.Collectors$$Lambda$append$14",
		"java.lang.Object",
		"java.util.function.BiConsumer",
		nullptr,
		methodInfos$$
	};
	$loadClass(Collectors$$Lambda$append$14, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Collectors$$Lambda$append$14);
	});
	return class$;
}
$Class* Collectors$$Lambda$append$14::class$ = nullptr;

class Collectors$$Lambda$lambda$joining$10$15 : public $BinaryOperator {
	$class(Collectors$$Lambda$lambda$joining$10$15, $NO_CLASS_INIT, $BinaryOperator)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* r1, Object$* r2) override {
		 return $of(Collectors::lambda$joining$10($cast($StringBuilder, r1), $cast($StringBuilder, r2)));
	}
};
$Class* Collectors$$Lambda$lambda$joining$10$15::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Collectors$$Lambda$lambda$joining$10$15, init$, void)},
		{"apply", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Collectors$$Lambda$lambda$joining$10$15, apply, $Object*, Object$*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.util.stream.Collectors$$Lambda$lambda$joining$10$15",
		"java.lang.Object",
		"java.util.function.BinaryOperator",
		nullptr,
		methodInfos$$
	};
	$loadClass(Collectors$$Lambda$lambda$joining$10$15, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Collectors$$Lambda$lambda$joining$10$15);
	});
	return class$;
}
$Class* Collectors$$Lambda$lambda$joining$10$15::class$ = nullptr;

class Collectors$$Lambda$toString$16 : public $Function {
	$class(Collectors$$Lambda$toString$16, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* inst$) override {
		 return $of($sure($StringBuilder, inst$)->toString());
	}
};
$Class* Collectors$$Lambda$toString$16::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Collectors$$Lambda$toString$16, init$, void)},
		{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Collectors$$Lambda$toString$16, apply, $Object*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.util.stream.Collectors$$Lambda$toString$16",
		"java.lang.Object",
		"java.util.function.Function",
		nullptr,
		methodInfos$$
	};
	$loadClass(Collectors$$Lambda$toString$16, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Collectors$$Lambda$toString$16);
	});
	return class$;
}
$Class* Collectors$$Lambda$toString$16::class$ = nullptr;

class Collectors$$Lambda$lambda$joining$11$17 : public $Supplier {
	$class(Collectors$$Lambda$lambda$joining$11$17, $NO_CLASS_INIT, $Supplier)
public:
	void init$($CharSequence* delimiter, $CharSequence* prefix, $CharSequence* suffix) {
		$set(this, delimiter, delimiter);
		$set(this, prefix, prefix);
		$set(this, suffix, suffix);
	}
	virtual $Object* get() override {
		 return Collectors::lambda$joining$11(delimiter, prefix, suffix);
	}
	$CharSequence* delimiter = nullptr;
	$CharSequence* prefix = nullptr;
	$CharSequence* suffix = nullptr;
};
$Class* Collectors$$Lambda$lambda$joining$11$17::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"delimiter", "Ljava/lang/CharSequence;", nullptr, $PUBLIC, $field(Collectors$$Lambda$lambda$joining$11$17, delimiter)},
		{"prefix", "Ljava/lang/CharSequence;", nullptr, $PUBLIC, $field(Collectors$$Lambda$lambda$joining$11$17, prefix)},
		{"suffix", "Ljava/lang/CharSequence;", nullptr, $PUBLIC, $field(Collectors$$Lambda$lambda$joining$11$17, suffix)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/CharSequence;Ljava/lang/CharSequence;Ljava/lang/CharSequence;)V", nullptr, $PUBLIC, $method(Collectors$$Lambda$lambda$joining$11$17, init$, void, $CharSequence*, $CharSequence*, $CharSequence*)},
		{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Collectors$$Lambda$lambda$joining$11$17, get, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.util.stream.Collectors$$Lambda$lambda$joining$11$17",
		"java.lang.Object",
		"java.util.function.Supplier",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Collectors$$Lambda$lambda$joining$11$17, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Collectors$$Lambda$lambda$joining$11$17);
	});
	return class$;
}
$Class* Collectors$$Lambda$lambda$joining$11$17::class$ = nullptr;

class Collectors$$Lambda$add$18 : public $BiConsumer {
	$class(Collectors$$Lambda$add$18, $NO_CLASS_INIT, $BiConsumer)
public:
	void init$() {
	}
	virtual void accept(Object$* inst$, Object$* newElement) override {
		$sure($StringJoiner, inst$)->add($cast($CharSequence, newElement));
	}
};
$Class* Collectors$$Lambda$add$18::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Collectors$$Lambda$add$18, init$, void)},
		{"accept", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(Collectors$$Lambda$add$18, accept, void, Object$*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.util.stream.Collectors$$Lambda$add$18",
		"java.lang.Object",
		"java.util.function.BiConsumer",
		nullptr,
		methodInfos$$
	};
	$loadClass(Collectors$$Lambda$add$18, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Collectors$$Lambda$add$18);
	});
	return class$;
}
$Class* Collectors$$Lambda$add$18::class$ = nullptr;

class Collectors$$Lambda$merge$19 : public $BinaryOperator {
	$class(Collectors$$Lambda$merge$19, $NO_CLASS_INIT, $BinaryOperator)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* inst$, Object$* other) override {
		 return $sure($StringJoiner, inst$)->merge($cast($StringJoiner, other));
	}
};
$Class* Collectors$$Lambda$merge$19::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Collectors$$Lambda$merge$19, init$, void)},
		{"apply", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Collectors$$Lambda$merge$19, apply, $Object*, Object$*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.util.stream.Collectors$$Lambda$merge$19",
		"java.lang.Object",
		"java.util.function.BinaryOperator",
		nullptr,
		methodInfos$$
	};
	$loadClass(Collectors$$Lambda$merge$19, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Collectors$$Lambda$merge$19);
	});
	return class$;
}
$Class* Collectors$$Lambda$merge$19::class$ = nullptr;

class Collectors$$Lambda$toString$20 : public $Function {
	$class(Collectors$$Lambda$toString$20, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* inst$) override {
		 return $of($sure($StringJoiner, inst$)->toString());
	}
};
$Class* Collectors$$Lambda$toString$20::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Collectors$$Lambda$toString$20, init$, void)},
		{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Collectors$$Lambda$toString$20, apply, $Object*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.util.stream.Collectors$$Lambda$toString$20",
		"java.lang.Object",
		"java.util.function.Function",
		nullptr,
		methodInfos$$
	};
	$loadClass(Collectors$$Lambda$toString$20, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Collectors$$Lambda$toString$20);
	});
	return class$;
}
$Class* Collectors$$Lambda$toString$20::class$ = nullptr;

class Collectors$$Lambda$lambda$mapMerger$12$21 : public $BinaryOperator {
	$class(Collectors$$Lambda$lambda$mapMerger$12$21, $NO_CLASS_INIT, $BinaryOperator)
public:
	void init$($BinaryOperator* mergeFunction) {
		$set(this, mergeFunction, mergeFunction);
	}
	virtual $Object* apply(Object$* m1, Object$* m2) override {
		 return Collectors::lambda$mapMerger$12(mergeFunction, $cast($Map, m1), $cast($Map, m2));
	}
	$BinaryOperator* mergeFunction = nullptr;
};
$Class* Collectors$$Lambda$lambda$mapMerger$12$21::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"mergeFunction", "Ljava/util/function/BinaryOperator;", nullptr, $PUBLIC, $field(Collectors$$Lambda$lambda$mapMerger$12$21, mergeFunction)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/function/BinaryOperator;)V", nullptr, $PUBLIC, $method(Collectors$$Lambda$lambda$mapMerger$12$21, init$, void, $BinaryOperator*)},
		{"apply", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Collectors$$Lambda$lambda$mapMerger$12$21, apply, $Object*, Object$*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.util.stream.Collectors$$Lambda$lambda$mapMerger$12$21",
		"java.lang.Object",
		"java.util.function.BinaryOperator",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Collectors$$Lambda$lambda$mapMerger$12$21, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Collectors$$Lambda$lambda$mapMerger$12$21);
	});
	return class$;
}
$Class* Collectors$$Lambda$lambda$mapMerger$12$21::class$ = nullptr;

class Collectors$$Lambda$lambda$mapping$13$22 : public $BiConsumer {
	$class(Collectors$$Lambda$lambda$mapping$13$22, $NO_CLASS_INIT, $BiConsumer)
public:
	void init$($BiConsumer* downstreamAccumulator, $Function* mapper) {
		$set(this, downstreamAccumulator, downstreamAccumulator);
		$set(this, mapper, mapper);
	}
	virtual void accept(Object$* r, Object$* t) override {
		Collectors::lambda$mapping$13(downstreamAccumulator, mapper, r, t);
	}
	$BiConsumer* downstreamAccumulator = nullptr;
	$Function* mapper = nullptr;
};
$Class* Collectors$$Lambda$lambda$mapping$13$22::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"downstreamAccumulator", "Ljava/util/function/BiConsumer;", nullptr, $PUBLIC, $field(Collectors$$Lambda$lambda$mapping$13$22, downstreamAccumulator)},
		{"mapper", "Ljava/util/function/Function;", nullptr, $PUBLIC, $field(Collectors$$Lambda$lambda$mapping$13$22, mapper)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/function/BiConsumer;Ljava/util/function/Function;)V", nullptr, $PUBLIC, $method(Collectors$$Lambda$lambda$mapping$13$22, init$, void, $BiConsumer*, $Function*)},
		{"accept", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(Collectors$$Lambda$lambda$mapping$13$22, accept, void, Object$*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.util.stream.Collectors$$Lambda$lambda$mapping$13$22",
		"java.lang.Object",
		"java.util.function.BiConsumer",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Collectors$$Lambda$lambda$mapping$13$22, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Collectors$$Lambda$lambda$mapping$13$22);
	});
	return class$;
}
$Class* Collectors$$Lambda$lambda$mapping$13$22::class$ = nullptr;

class Collectors$$Lambda$lambda$flatMapping$15$23 : public $BiConsumer {
	$class(Collectors$$Lambda$lambda$flatMapping$15$23, $NO_CLASS_INIT, $BiConsumer)
public:
	void init$($Function* mapper, $BiConsumer* downstreamAccumulator) {
		$set(this, mapper, mapper);
		$set(this, downstreamAccumulator, downstreamAccumulator);
	}
	virtual void accept(Object$* r, Object$* t) override {
		Collectors::lambda$flatMapping$15(mapper, downstreamAccumulator, r, t);
	}
	$Function* mapper = nullptr;
	$BiConsumer* downstreamAccumulator = nullptr;
};
$Class* Collectors$$Lambda$lambda$flatMapping$15$23::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"mapper", "Ljava/util/function/Function;", nullptr, $PUBLIC, $field(Collectors$$Lambda$lambda$flatMapping$15$23, mapper)},
		{"downstreamAccumulator", "Ljava/util/function/BiConsumer;", nullptr, $PUBLIC, $field(Collectors$$Lambda$lambda$flatMapping$15$23, downstreamAccumulator)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/function/Function;Ljava/util/function/BiConsumer;)V", nullptr, $PUBLIC, $method(Collectors$$Lambda$lambda$flatMapping$15$23, init$, void, $Function*, $BiConsumer*)},
		{"accept", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(Collectors$$Lambda$lambda$flatMapping$15$23, accept, void, Object$*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.util.stream.Collectors$$Lambda$lambda$flatMapping$15$23",
		"java.lang.Object",
		"java.util.function.BiConsumer",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Collectors$$Lambda$lambda$flatMapping$15$23, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Collectors$$Lambda$lambda$flatMapping$15$23);
	});
	return class$;
}
$Class* Collectors$$Lambda$lambda$flatMapping$15$23::class$ = nullptr;

class Collectors$$Lambda$lambda$filtering$16$24 : public $BiConsumer {
	$class(Collectors$$Lambda$lambda$filtering$16$24, $NO_CLASS_INIT, $BiConsumer)
public:
	void init$($Predicate* predicate, $BiConsumer* downstreamAccumulator) {
		$set(this, predicate, predicate);
		$set(this, downstreamAccumulator, downstreamAccumulator);
	}
	virtual void accept(Object$* r, Object$* t) override {
		Collectors::lambda$filtering$16(predicate, downstreamAccumulator, r, t);
	}
	$Predicate* predicate = nullptr;
	$BiConsumer* downstreamAccumulator = nullptr;
};
$Class* Collectors$$Lambda$lambda$filtering$16$24::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"predicate", "Ljava/util/function/Predicate;", nullptr, $PUBLIC, $field(Collectors$$Lambda$lambda$filtering$16$24, predicate)},
		{"downstreamAccumulator", "Ljava/util/function/BiConsumer;", nullptr, $PUBLIC, $field(Collectors$$Lambda$lambda$filtering$16$24, downstreamAccumulator)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/function/Predicate;Ljava/util/function/BiConsumer;)V", nullptr, $PUBLIC, $method(Collectors$$Lambda$lambda$filtering$16$24, init$, void, $Predicate*, $BiConsumer*)},
		{"accept", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(Collectors$$Lambda$lambda$filtering$16$24, accept, void, Object$*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.util.stream.Collectors$$Lambda$lambda$filtering$16$24",
		"java.lang.Object",
		"java.util.function.BiConsumer",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Collectors$$Lambda$lambda$filtering$16$24, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Collectors$$Lambda$lambda$filtering$16$24);
	});
	return class$;
}
$Class* Collectors$$Lambda$lambda$filtering$16$24::class$ = nullptr;

class Collectors$$Lambda$lambda$counting$17$25 : public $ToLongFunction {
	$class(Collectors$$Lambda$lambda$counting$17$25, $NO_CLASS_INIT, $ToLongFunction)
public:
	void init$() {
	}
	virtual int64_t applyAsLong(Object$* e) override {
		 return Collectors::lambda$counting$17(e);
	}
};
$Class* Collectors$$Lambda$lambda$counting$17$25::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Collectors$$Lambda$lambda$counting$17$25, init$, void)},
		{"applyAsLong", "(Ljava/lang/Object;)J", nullptr, $PUBLIC, $virtualMethod(Collectors$$Lambda$lambda$counting$17$25, applyAsLong, int64_t, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.util.stream.Collectors$$Lambda$lambda$counting$17$25",
		"java.lang.Object",
		"java.util.function.ToLongFunction",
		nullptr,
		methodInfos$$
	};
	$loadClass(Collectors$$Lambda$lambda$counting$17$25, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Collectors$$Lambda$lambda$counting$17$25);
	});
	return class$;
}
$Class* Collectors$$Lambda$lambda$counting$17$25::class$ = nullptr;

class Collectors$$Lambda$lambda$summingInt$18$26 : public $Supplier {
	$class(Collectors$$Lambda$lambda$summingInt$18$26, $NO_CLASS_INIT, $Supplier)
public:
	void init$() {
	}
	virtual $Object* get() override {
		 return Collectors::lambda$summingInt$18();
	}
};
$Class* Collectors$$Lambda$lambda$summingInt$18$26::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Collectors$$Lambda$lambda$summingInt$18$26, init$, void)},
		{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Collectors$$Lambda$lambda$summingInt$18$26, get, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.util.stream.Collectors$$Lambda$lambda$summingInt$18$26",
		"java.lang.Object",
		"java.util.function.Supplier",
		nullptr,
		methodInfos$$
	};
	$loadClass(Collectors$$Lambda$lambda$summingInt$18$26, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Collectors$$Lambda$lambda$summingInt$18$26);
	});
	return class$;
}
$Class* Collectors$$Lambda$lambda$summingInt$18$26::class$ = nullptr;

class Collectors$$Lambda$lambda$summingInt$19$27 : public $BiConsumer {
	$class(Collectors$$Lambda$lambda$summingInt$19$27, $NO_CLASS_INIT, $BiConsumer)
public:
	void init$($ToIntFunction* mapper) {
		$set(this, mapper, mapper);
	}
	virtual void accept(Object$* a, Object$* t) override {
		Collectors::lambda$summingInt$19(mapper, $cast($ints, a), t);
	}
	$ToIntFunction* mapper = nullptr;
};
$Class* Collectors$$Lambda$lambda$summingInt$19$27::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"mapper", "Ljava/util/function/ToIntFunction;", nullptr, $PUBLIC, $field(Collectors$$Lambda$lambda$summingInt$19$27, mapper)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/function/ToIntFunction;)V", nullptr, $PUBLIC, $method(Collectors$$Lambda$lambda$summingInt$19$27, init$, void, $ToIntFunction*)},
		{"accept", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(Collectors$$Lambda$lambda$summingInt$19$27, accept, void, Object$*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.util.stream.Collectors$$Lambda$lambda$summingInt$19$27",
		"java.lang.Object",
		"java.util.function.BiConsumer",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Collectors$$Lambda$lambda$summingInt$19$27, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Collectors$$Lambda$lambda$summingInt$19$27);
	});
	return class$;
}
$Class* Collectors$$Lambda$lambda$summingInt$19$27::class$ = nullptr;

class Collectors$$Lambda$lambda$summingInt$20$28 : public $BinaryOperator {
	$class(Collectors$$Lambda$lambda$summingInt$20$28, $NO_CLASS_INIT, $BinaryOperator)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* a, Object$* b) override {
		 return Collectors::lambda$summingInt$20($cast($ints, a), $cast($ints, b));
	}
};
$Class* Collectors$$Lambda$lambda$summingInt$20$28::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Collectors$$Lambda$lambda$summingInt$20$28, init$, void)},
		{"apply", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Collectors$$Lambda$lambda$summingInt$20$28, apply, $Object*, Object$*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.util.stream.Collectors$$Lambda$lambda$summingInt$20$28",
		"java.lang.Object",
		"java.util.function.BinaryOperator",
		nullptr,
		methodInfos$$
	};
	$loadClass(Collectors$$Lambda$lambda$summingInt$20$28, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Collectors$$Lambda$lambda$summingInt$20$28);
	});
	return class$;
}
$Class* Collectors$$Lambda$lambda$summingInt$20$28::class$ = nullptr;

class Collectors$$Lambda$lambda$summingInt$21$29 : public $Function {
	$class(Collectors$$Lambda$lambda$summingInt$21$29, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* a) override {
		 return $of(Collectors::lambda$summingInt$21($cast($ints, a)));
	}
};
$Class* Collectors$$Lambda$lambda$summingInt$21$29::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Collectors$$Lambda$lambda$summingInt$21$29, init$, void)},
		{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Collectors$$Lambda$lambda$summingInt$21$29, apply, $Object*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.util.stream.Collectors$$Lambda$lambda$summingInt$21$29",
		"java.lang.Object",
		"java.util.function.Function",
		nullptr,
		methodInfos$$
	};
	$loadClass(Collectors$$Lambda$lambda$summingInt$21$29, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Collectors$$Lambda$lambda$summingInt$21$29);
	});
	return class$;
}
$Class* Collectors$$Lambda$lambda$summingInt$21$29::class$ = nullptr;

class Collectors$$Lambda$lambda$summingLong$22$30 : public $Supplier {
	$class(Collectors$$Lambda$lambda$summingLong$22$30, $NO_CLASS_INIT, $Supplier)
public:
	void init$() {
	}
	virtual $Object* get() override {
		 return Collectors::lambda$summingLong$22();
	}
};
$Class* Collectors$$Lambda$lambda$summingLong$22$30::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Collectors$$Lambda$lambda$summingLong$22$30, init$, void)},
		{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Collectors$$Lambda$lambda$summingLong$22$30, get, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.util.stream.Collectors$$Lambda$lambda$summingLong$22$30",
		"java.lang.Object",
		"java.util.function.Supplier",
		nullptr,
		methodInfos$$
	};
	$loadClass(Collectors$$Lambda$lambda$summingLong$22$30, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Collectors$$Lambda$lambda$summingLong$22$30);
	});
	return class$;
}
$Class* Collectors$$Lambda$lambda$summingLong$22$30::class$ = nullptr;

class Collectors$$Lambda$lambda$summingLong$23$31 : public $BiConsumer {
	$class(Collectors$$Lambda$lambda$summingLong$23$31, $NO_CLASS_INIT, $BiConsumer)
public:
	void init$($ToLongFunction* mapper) {
		$set(this, mapper, mapper);
	}
	virtual void accept(Object$* a, Object$* t) override {
		Collectors::lambda$summingLong$23(mapper, $cast($longs, a), t);
	}
	$ToLongFunction* mapper = nullptr;
};
$Class* Collectors$$Lambda$lambda$summingLong$23$31::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"mapper", "Ljava/util/function/ToLongFunction;", nullptr, $PUBLIC, $field(Collectors$$Lambda$lambda$summingLong$23$31, mapper)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/function/ToLongFunction;)V", nullptr, $PUBLIC, $method(Collectors$$Lambda$lambda$summingLong$23$31, init$, void, $ToLongFunction*)},
		{"accept", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(Collectors$$Lambda$lambda$summingLong$23$31, accept, void, Object$*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.util.stream.Collectors$$Lambda$lambda$summingLong$23$31",
		"java.lang.Object",
		"java.util.function.BiConsumer",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Collectors$$Lambda$lambda$summingLong$23$31, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Collectors$$Lambda$lambda$summingLong$23$31);
	});
	return class$;
}
$Class* Collectors$$Lambda$lambda$summingLong$23$31::class$ = nullptr;

class Collectors$$Lambda$lambda$summingLong$24$32 : public $BinaryOperator {
	$class(Collectors$$Lambda$lambda$summingLong$24$32, $NO_CLASS_INIT, $BinaryOperator)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* a, Object$* b) override {
		 return Collectors::lambda$summingLong$24($cast($longs, a), $cast($longs, b));
	}
};
$Class* Collectors$$Lambda$lambda$summingLong$24$32::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Collectors$$Lambda$lambda$summingLong$24$32, init$, void)},
		{"apply", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Collectors$$Lambda$lambda$summingLong$24$32, apply, $Object*, Object$*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.util.stream.Collectors$$Lambda$lambda$summingLong$24$32",
		"java.lang.Object",
		"java.util.function.BinaryOperator",
		nullptr,
		methodInfos$$
	};
	$loadClass(Collectors$$Lambda$lambda$summingLong$24$32, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Collectors$$Lambda$lambda$summingLong$24$32);
	});
	return class$;
}
$Class* Collectors$$Lambda$lambda$summingLong$24$32::class$ = nullptr;

class Collectors$$Lambda$lambda$summingLong$25$33 : public $Function {
	$class(Collectors$$Lambda$lambda$summingLong$25$33, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* a) override {
		 return $of(Collectors::lambda$summingLong$25($cast($longs, a)));
	}
};
$Class* Collectors$$Lambda$lambda$summingLong$25$33::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Collectors$$Lambda$lambda$summingLong$25$33, init$, void)},
		{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Collectors$$Lambda$lambda$summingLong$25$33, apply, $Object*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.util.stream.Collectors$$Lambda$lambda$summingLong$25$33",
		"java.lang.Object",
		"java.util.function.Function",
		nullptr,
		methodInfos$$
	};
	$loadClass(Collectors$$Lambda$lambda$summingLong$25$33, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Collectors$$Lambda$lambda$summingLong$25$33);
	});
	return class$;
}
$Class* Collectors$$Lambda$lambda$summingLong$25$33::class$ = nullptr;

class Collectors$$Lambda$lambda$summingDouble$26$34 : public $Supplier {
	$class(Collectors$$Lambda$lambda$summingDouble$26$34, $NO_CLASS_INIT, $Supplier)
public:
	void init$() {
	}
	virtual $Object* get() override {
		 return Collectors::lambda$summingDouble$26();
	}
};
$Class* Collectors$$Lambda$lambda$summingDouble$26$34::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Collectors$$Lambda$lambda$summingDouble$26$34, init$, void)},
		{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Collectors$$Lambda$lambda$summingDouble$26$34, get, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.util.stream.Collectors$$Lambda$lambda$summingDouble$26$34",
		"java.lang.Object",
		"java.util.function.Supplier",
		nullptr,
		methodInfos$$
	};
	$loadClass(Collectors$$Lambda$lambda$summingDouble$26$34, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Collectors$$Lambda$lambda$summingDouble$26$34);
	});
	return class$;
}
$Class* Collectors$$Lambda$lambda$summingDouble$26$34::class$ = nullptr;

class Collectors$$Lambda$lambda$summingDouble$27$35 : public $BiConsumer {
	$class(Collectors$$Lambda$lambda$summingDouble$27$35, $NO_CLASS_INIT, $BiConsumer)
public:
	void init$($ToDoubleFunction* mapper) {
		$set(this, mapper, mapper);
	}
	virtual void accept(Object$* a, Object$* t) override {
		Collectors::lambda$summingDouble$27(mapper, $cast($doubles, a), t);
	}
	$ToDoubleFunction* mapper = nullptr;
};
$Class* Collectors$$Lambda$lambda$summingDouble$27$35::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"mapper", "Ljava/util/function/ToDoubleFunction;", nullptr, $PUBLIC, $field(Collectors$$Lambda$lambda$summingDouble$27$35, mapper)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/function/ToDoubleFunction;)V", nullptr, $PUBLIC, $method(Collectors$$Lambda$lambda$summingDouble$27$35, init$, void, $ToDoubleFunction*)},
		{"accept", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(Collectors$$Lambda$lambda$summingDouble$27$35, accept, void, Object$*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.util.stream.Collectors$$Lambda$lambda$summingDouble$27$35",
		"java.lang.Object",
		"java.util.function.BiConsumer",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Collectors$$Lambda$lambda$summingDouble$27$35, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Collectors$$Lambda$lambda$summingDouble$27$35);
	});
	return class$;
}
$Class* Collectors$$Lambda$lambda$summingDouble$27$35::class$ = nullptr;

class Collectors$$Lambda$lambda$summingDouble$28$36 : public $BinaryOperator {
	$class(Collectors$$Lambda$lambda$summingDouble$28$36, $NO_CLASS_INIT, $BinaryOperator)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* a, Object$* b) override {
		 return Collectors::lambda$summingDouble$28($cast($doubles, a), $cast($doubles, b));
	}
};
$Class* Collectors$$Lambda$lambda$summingDouble$28$36::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Collectors$$Lambda$lambda$summingDouble$28$36, init$, void)},
		{"apply", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Collectors$$Lambda$lambda$summingDouble$28$36, apply, $Object*, Object$*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.util.stream.Collectors$$Lambda$lambda$summingDouble$28$36",
		"java.lang.Object",
		"java.util.function.BinaryOperator",
		nullptr,
		methodInfos$$
	};
	$loadClass(Collectors$$Lambda$lambda$summingDouble$28$36, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Collectors$$Lambda$lambda$summingDouble$28$36);
	});
	return class$;
}
$Class* Collectors$$Lambda$lambda$summingDouble$28$36::class$ = nullptr;

class Collectors$$Lambda$lambda$summingDouble$29$37 : public $Function {
	$class(Collectors$$Lambda$lambda$summingDouble$29$37, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* a) override {
		 return $of(Collectors::lambda$summingDouble$29($cast($doubles, a)));
	}
};
$Class* Collectors$$Lambda$lambda$summingDouble$29$37::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Collectors$$Lambda$lambda$summingDouble$29$37, init$, void)},
		{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Collectors$$Lambda$lambda$summingDouble$29$37, apply, $Object*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.util.stream.Collectors$$Lambda$lambda$summingDouble$29$37",
		"java.lang.Object",
		"java.util.function.Function",
		nullptr,
		methodInfos$$
	};
	$loadClass(Collectors$$Lambda$lambda$summingDouble$29$37, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Collectors$$Lambda$lambda$summingDouble$29$37);
	});
	return class$;
}
$Class* Collectors$$Lambda$lambda$summingDouble$29$37::class$ = nullptr;

class Collectors$$Lambda$lambda$averagingInt$30$38 : public $Supplier {
	$class(Collectors$$Lambda$lambda$averagingInt$30$38, $NO_CLASS_INIT, $Supplier)
public:
	void init$() {
	}
	virtual $Object* get() override {
		 return Collectors::lambda$averagingInt$30();
	}
};
$Class* Collectors$$Lambda$lambda$averagingInt$30$38::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Collectors$$Lambda$lambda$averagingInt$30$38, init$, void)},
		{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Collectors$$Lambda$lambda$averagingInt$30$38, get, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.util.stream.Collectors$$Lambda$lambda$averagingInt$30$38",
		"java.lang.Object",
		"java.util.function.Supplier",
		nullptr,
		methodInfos$$
	};
	$loadClass(Collectors$$Lambda$lambda$averagingInt$30$38, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Collectors$$Lambda$lambda$averagingInt$30$38);
	});
	return class$;
}
$Class* Collectors$$Lambda$lambda$averagingInt$30$38::class$ = nullptr;

class Collectors$$Lambda$lambda$averagingInt$31$39 : public $BiConsumer {
	$class(Collectors$$Lambda$lambda$averagingInt$31$39, $NO_CLASS_INIT, $BiConsumer)
public:
	void init$($ToIntFunction* mapper) {
		$set(this, mapper, mapper);
	}
	virtual void accept(Object$* a, Object$* t) override {
		Collectors::lambda$averagingInt$31(mapper, $cast($longs, a), t);
	}
	$ToIntFunction* mapper = nullptr;
};
$Class* Collectors$$Lambda$lambda$averagingInt$31$39::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"mapper", "Ljava/util/function/ToIntFunction;", nullptr, $PUBLIC, $field(Collectors$$Lambda$lambda$averagingInt$31$39, mapper)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/function/ToIntFunction;)V", nullptr, $PUBLIC, $method(Collectors$$Lambda$lambda$averagingInt$31$39, init$, void, $ToIntFunction*)},
		{"accept", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(Collectors$$Lambda$lambda$averagingInt$31$39, accept, void, Object$*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.util.stream.Collectors$$Lambda$lambda$averagingInt$31$39",
		"java.lang.Object",
		"java.util.function.BiConsumer",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Collectors$$Lambda$lambda$averagingInt$31$39, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Collectors$$Lambda$lambda$averagingInt$31$39);
	});
	return class$;
}
$Class* Collectors$$Lambda$lambda$averagingInt$31$39::class$ = nullptr;

class Collectors$$Lambda$lambda$averagingInt$32$40 : public $BinaryOperator {
	$class(Collectors$$Lambda$lambda$averagingInt$32$40, $NO_CLASS_INIT, $BinaryOperator)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* a, Object$* b) override {
		 return Collectors::lambda$averagingInt$32($cast($longs, a), $cast($longs, b));
	}
};
$Class* Collectors$$Lambda$lambda$averagingInt$32$40::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Collectors$$Lambda$lambda$averagingInt$32$40, init$, void)},
		{"apply", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Collectors$$Lambda$lambda$averagingInt$32$40, apply, $Object*, Object$*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.util.stream.Collectors$$Lambda$lambda$averagingInt$32$40",
		"java.lang.Object",
		"java.util.function.BinaryOperator",
		nullptr,
		methodInfos$$
	};
	$loadClass(Collectors$$Lambda$lambda$averagingInt$32$40, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Collectors$$Lambda$lambda$averagingInt$32$40);
	});
	return class$;
}
$Class* Collectors$$Lambda$lambda$averagingInt$32$40::class$ = nullptr;

class Collectors$$Lambda$lambda$averagingInt$33$41 : public $Function {
	$class(Collectors$$Lambda$lambda$averagingInt$33$41, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* a) override {
		 return $of(Collectors::lambda$averagingInt$33($cast($longs, a)));
	}
};
$Class* Collectors$$Lambda$lambda$averagingInt$33$41::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Collectors$$Lambda$lambda$averagingInt$33$41, init$, void)},
		{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Collectors$$Lambda$lambda$averagingInt$33$41, apply, $Object*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.util.stream.Collectors$$Lambda$lambda$averagingInt$33$41",
		"java.lang.Object",
		"java.util.function.Function",
		nullptr,
		methodInfos$$
	};
	$loadClass(Collectors$$Lambda$lambda$averagingInt$33$41, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Collectors$$Lambda$lambda$averagingInt$33$41);
	});
	return class$;
}
$Class* Collectors$$Lambda$lambda$averagingInt$33$41::class$ = nullptr;

class Collectors$$Lambda$lambda$averagingLong$35$42 : public $BiConsumer {
	$class(Collectors$$Lambda$lambda$averagingLong$35$42, $NO_CLASS_INIT, $BiConsumer)
public:
	void init$($ToLongFunction* mapper) {
		$set(this, mapper, mapper);
	}
	virtual void accept(Object$* a, Object$* t) override {
		Collectors::lambda$averagingLong$35(mapper, $cast($longs, a), t);
	}
	$ToLongFunction* mapper = nullptr;
};
$Class* Collectors$$Lambda$lambda$averagingLong$35$42::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"mapper", "Ljava/util/function/ToLongFunction;", nullptr, $PUBLIC, $field(Collectors$$Lambda$lambda$averagingLong$35$42, mapper)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/function/ToLongFunction;)V", nullptr, $PUBLIC, $method(Collectors$$Lambda$lambda$averagingLong$35$42, init$, void, $ToLongFunction*)},
		{"accept", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(Collectors$$Lambda$lambda$averagingLong$35$42, accept, void, Object$*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.util.stream.Collectors$$Lambda$lambda$averagingLong$35$42",
		"java.lang.Object",
		"java.util.function.BiConsumer",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Collectors$$Lambda$lambda$averagingLong$35$42, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Collectors$$Lambda$lambda$averagingLong$35$42);
	});
	return class$;
}
$Class* Collectors$$Lambda$lambda$averagingLong$35$42::class$ = nullptr;

class Collectors$$Lambda$lambda$averagingDouble$38$43 : public $Supplier {
	$class(Collectors$$Lambda$lambda$averagingDouble$38$43, $NO_CLASS_INIT, $Supplier)
public:
	void init$() {
	}
	virtual $Object* get() override {
		 return Collectors::lambda$averagingDouble$38();
	}
};
$Class* Collectors$$Lambda$lambda$averagingDouble$38$43::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Collectors$$Lambda$lambda$averagingDouble$38$43, init$, void)},
		{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Collectors$$Lambda$lambda$averagingDouble$38$43, get, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.util.stream.Collectors$$Lambda$lambda$averagingDouble$38$43",
		"java.lang.Object",
		"java.util.function.Supplier",
		nullptr,
		methodInfos$$
	};
	$loadClass(Collectors$$Lambda$lambda$averagingDouble$38$43, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Collectors$$Lambda$lambda$averagingDouble$38$43);
	});
	return class$;
}
$Class* Collectors$$Lambda$lambda$averagingDouble$38$43::class$ = nullptr;

class Collectors$$Lambda$lambda$averagingDouble$39$44 : public $BiConsumer {
	$class(Collectors$$Lambda$lambda$averagingDouble$39$44, $NO_CLASS_INIT, $BiConsumer)
public:
	void init$($ToDoubleFunction* mapper) {
		$set(this, mapper, mapper);
	}
	virtual void accept(Object$* a, Object$* t) override {
		Collectors::lambda$averagingDouble$39(mapper, $cast($doubles, a), t);
	}
	$ToDoubleFunction* mapper = nullptr;
};
$Class* Collectors$$Lambda$lambda$averagingDouble$39$44::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"mapper", "Ljava/util/function/ToDoubleFunction;", nullptr, $PUBLIC, $field(Collectors$$Lambda$lambda$averagingDouble$39$44, mapper)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/function/ToDoubleFunction;)V", nullptr, $PUBLIC, $method(Collectors$$Lambda$lambda$averagingDouble$39$44, init$, void, $ToDoubleFunction*)},
		{"accept", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(Collectors$$Lambda$lambda$averagingDouble$39$44, accept, void, Object$*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.util.stream.Collectors$$Lambda$lambda$averagingDouble$39$44",
		"java.lang.Object",
		"java.util.function.BiConsumer",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Collectors$$Lambda$lambda$averagingDouble$39$44, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Collectors$$Lambda$lambda$averagingDouble$39$44);
	});
	return class$;
}
$Class* Collectors$$Lambda$lambda$averagingDouble$39$44::class$ = nullptr;

class Collectors$$Lambda$lambda$averagingDouble$40$45 : public $BinaryOperator {
	$class(Collectors$$Lambda$lambda$averagingDouble$40$45, $NO_CLASS_INIT, $BinaryOperator)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* a, Object$* b) override {
		 return Collectors::lambda$averagingDouble$40($cast($doubles, a), $cast($doubles, b));
	}
};
$Class* Collectors$$Lambda$lambda$averagingDouble$40$45::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Collectors$$Lambda$lambda$averagingDouble$40$45, init$, void)},
		{"apply", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Collectors$$Lambda$lambda$averagingDouble$40$45, apply, $Object*, Object$*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.util.stream.Collectors$$Lambda$lambda$averagingDouble$40$45",
		"java.lang.Object",
		"java.util.function.BinaryOperator",
		nullptr,
		methodInfos$$
	};
	$loadClass(Collectors$$Lambda$lambda$averagingDouble$40$45, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Collectors$$Lambda$lambda$averagingDouble$40$45);
	});
	return class$;
}
$Class* Collectors$$Lambda$lambda$averagingDouble$40$45::class$ = nullptr;

class Collectors$$Lambda$lambda$averagingDouble$41$46 : public $Function {
	$class(Collectors$$Lambda$lambda$averagingDouble$41$46, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* a) override {
		 return $of(Collectors::lambda$averagingDouble$41($cast($doubles, a)));
	}
};
$Class* Collectors$$Lambda$lambda$averagingDouble$41$46::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Collectors$$Lambda$lambda$averagingDouble$41$46, init$, void)},
		{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Collectors$$Lambda$lambda$averagingDouble$41$46, apply, $Object*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.util.stream.Collectors$$Lambda$lambda$averagingDouble$41$46",
		"java.lang.Object",
		"java.util.function.Function",
		nullptr,
		methodInfos$$
	};
	$loadClass(Collectors$$Lambda$lambda$averagingDouble$41$46, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Collectors$$Lambda$lambda$averagingDouble$41$46);
	});
	return class$;
}
$Class* Collectors$$Lambda$lambda$averagingDouble$41$46::class$ = nullptr;

class Collectors$$Lambda$lambda$reducing$42$47 : public $BiConsumer {
	$class(Collectors$$Lambda$lambda$reducing$42$47, $NO_CLASS_INIT, $BiConsumer)
public:
	void init$($BinaryOperator* op) {
		$set(this, op, op);
	}
	virtual void accept(Object$* a, Object$* t) override {
		Collectors::lambda$reducing$42(op, $cast($ObjectArray, a), t);
	}
	$BinaryOperator* op = nullptr;
};
$Class* Collectors$$Lambda$lambda$reducing$42$47::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"op", "Ljava/util/function/BinaryOperator;", nullptr, $PUBLIC, $field(Collectors$$Lambda$lambda$reducing$42$47, op)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/function/BinaryOperator;)V", nullptr, $PUBLIC, $method(Collectors$$Lambda$lambda$reducing$42$47, init$, void, $BinaryOperator*)},
		{"accept", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(Collectors$$Lambda$lambda$reducing$42$47, accept, void, Object$*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.util.stream.Collectors$$Lambda$lambda$reducing$42$47",
		"java.lang.Object",
		"java.util.function.BiConsumer",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Collectors$$Lambda$lambda$reducing$42$47, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Collectors$$Lambda$lambda$reducing$42$47);
	});
	return class$;
}
$Class* Collectors$$Lambda$lambda$reducing$42$47::class$ = nullptr;

class Collectors$$Lambda$lambda$reducing$43$48 : public $BinaryOperator {
	$class(Collectors$$Lambda$lambda$reducing$43$48, $NO_CLASS_INIT, $BinaryOperator)
public:
	void init$($BinaryOperator* op) {
		$set(this, op, op);
	}
	virtual $Object* apply(Object$* a, Object$* b) override {
		 return Collectors::lambda$reducing$43(op, $cast($ObjectArray, a), $cast($ObjectArray, b));
	}
	$BinaryOperator* op = nullptr;
};
$Class* Collectors$$Lambda$lambda$reducing$43$48::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"op", "Ljava/util/function/BinaryOperator;", nullptr, $PUBLIC, $field(Collectors$$Lambda$lambda$reducing$43$48, op)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/function/BinaryOperator;)V", nullptr, $PUBLIC, $method(Collectors$$Lambda$lambda$reducing$43$48, init$, void, $BinaryOperator*)},
		{"apply", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Collectors$$Lambda$lambda$reducing$43$48, apply, $Object*, Object$*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.util.stream.Collectors$$Lambda$lambda$reducing$43$48",
		"java.lang.Object",
		"java.util.function.BinaryOperator",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Collectors$$Lambda$lambda$reducing$43$48, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Collectors$$Lambda$lambda$reducing$43$48);
	});
	return class$;
}
$Class* Collectors$$Lambda$lambda$reducing$43$48::class$ = nullptr;

class Collectors$$Lambda$lambda$reducing$44$49 : public $Function {
	$class(Collectors$$Lambda$lambda$reducing$44$49, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* a) override {
		 return Collectors::lambda$reducing$44($cast($ObjectArray, a));
	}
};
$Class* Collectors$$Lambda$lambda$reducing$44$49::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Collectors$$Lambda$lambda$reducing$44$49, init$, void)},
		{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Collectors$$Lambda$lambda$reducing$44$49, apply, $Object*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.util.stream.Collectors$$Lambda$lambda$reducing$44$49",
		"java.lang.Object",
		"java.util.function.Function",
		nullptr,
		methodInfos$$
	};
	$loadClass(Collectors$$Lambda$lambda$reducing$44$49, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Collectors$$Lambda$lambda$reducing$44$49);
	});
	return class$;
}
$Class* Collectors$$Lambda$lambda$reducing$44$49::class$ = nullptr;

class Collectors$$Lambda$lambda$boxSupplier$45$50 : public $Supplier {
	$class(Collectors$$Lambda$lambda$boxSupplier$45$50, $NO_CLASS_INIT, $Supplier)
public:
	void init$(Object$* identity) {
		$set(this, identity, identity);
	}
	virtual $Object* get() override {
		 return Collectors::lambda$boxSupplier$45(identity);
	}
	$Object* identity = nullptr;
};
$Class* Collectors$$Lambda$lambda$boxSupplier$45$50::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"identity", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Collectors$$Lambda$lambda$boxSupplier$45$50, identity)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(Collectors$$Lambda$lambda$boxSupplier$45$50, init$, void, Object$*)},
		{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Collectors$$Lambda$lambda$boxSupplier$45$50, get, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.util.stream.Collectors$$Lambda$lambda$boxSupplier$45$50",
		"java.lang.Object",
		"java.util.function.Supplier",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Collectors$$Lambda$lambda$boxSupplier$45$50, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Collectors$$Lambda$lambda$boxSupplier$45$50);
	});
	return class$;
}
$Class* Collectors$$Lambda$lambda$boxSupplier$45$50::class$ = nullptr;

class Collectors$$Lambda$lambda$reducing$46$51 : public $Supplier {
	$class(Collectors$$Lambda$lambda$reducing$46$51, $NO_CLASS_INIT, $Supplier)
public:
	void init$($BinaryOperator* op) {
		$set(this, op, op);
	}
	virtual $Object* get() override {
		 return Collectors::lambda$reducing$46(op);
	}
	$BinaryOperator* op = nullptr;
};
$Class* Collectors$$Lambda$lambda$reducing$46$51::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"op", "Ljava/util/function/BinaryOperator;", nullptr, $PUBLIC, $field(Collectors$$Lambda$lambda$reducing$46$51, op)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/function/BinaryOperator;)V", nullptr, $PUBLIC, $method(Collectors$$Lambda$lambda$reducing$46$51, init$, void, $BinaryOperator*)},
		{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Collectors$$Lambda$lambda$reducing$46$51, get, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.util.stream.Collectors$$Lambda$lambda$reducing$46$51",
		"java.lang.Object",
		"java.util.function.Supplier",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Collectors$$Lambda$lambda$reducing$46$51, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Collectors$$Lambda$lambda$reducing$46$51);
	});
	return class$;
}
$Class* Collectors$$Lambda$lambda$reducing$46$51::class$ = nullptr;

class Collectors$$Lambda$accept$52 : public $BiConsumer {
	$class(Collectors$$Lambda$accept$52, $NO_CLASS_INIT, $BiConsumer)
public:
	void init$() {
	}
	virtual void accept(Object$* inst$, Object$* t) override {
		$sure($Collectors$1OptionalBox, inst$)->accept(t);
	}
};
$Class* Collectors$$Lambda$accept$52::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Collectors$$Lambda$accept$52, init$, void)},
		{"accept", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(Collectors$$Lambda$accept$52, accept, void, Object$*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.util.stream.Collectors$$Lambda$accept$52",
		"java.lang.Object",
		"java.util.function.BiConsumer",
		nullptr,
		methodInfos$$
	};
	$loadClass(Collectors$$Lambda$accept$52, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Collectors$$Lambda$accept$52);
	});
	return class$;
}
$Class* Collectors$$Lambda$accept$52::class$ = nullptr;

class Collectors$$Lambda$lambda$reducing$47$53 : public $BinaryOperator {
	$class(Collectors$$Lambda$lambda$reducing$47$53, $NO_CLASS_INIT, $BinaryOperator)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* a, Object$* b) override {
		 return Collectors::lambda$reducing$47($cast($Collectors$1OptionalBox, a), $cast($Collectors$1OptionalBox, b));
	}
};
$Class* Collectors$$Lambda$lambda$reducing$47$53::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Collectors$$Lambda$lambda$reducing$47$53, init$, void)},
		{"apply", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Collectors$$Lambda$lambda$reducing$47$53, apply, $Object*, Object$*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.util.stream.Collectors$$Lambda$lambda$reducing$47$53",
		"java.lang.Object",
		"java.util.function.BinaryOperator",
		nullptr,
		methodInfos$$
	};
	$loadClass(Collectors$$Lambda$lambda$reducing$47$53, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Collectors$$Lambda$lambda$reducing$47$53);
	});
	return class$;
}
$Class* Collectors$$Lambda$lambda$reducing$47$53::class$ = nullptr;

class Collectors$$Lambda$lambda$reducing$48$54 : public $Function {
	$class(Collectors$$Lambda$lambda$reducing$48$54, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* a) override {
		 return Collectors::lambda$reducing$48($cast($Collectors$1OptionalBox, a));
	}
};
$Class* Collectors$$Lambda$lambda$reducing$48$54::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Collectors$$Lambda$lambda$reducing$48$54, init$, void)},
		{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Collectors$$Lambda$lambda$reducing$48$54, apply, $Object*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.util.stream.Collectors$$Lambda$lambda$reducing$48$54",
		"java.lang.Object",
		"java.util.function.Function",
		nullptr,
		methodInfos$$
	};
	$loadClass(Collectors$$Lambda$lambda$reducing$48$54, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Collectors$$Lambda$lambda$reducing$48$54);
	});
	return class$;
}
$Class* Collectors$$Lambda$lambda$reducing$48$54::class$ = nullptr;

class Collectors$$Lambda$lambda$reducing$49$55 : public $BiConsumer {
	$class(Collectors$$Lambda$lambda$reducing$49$55, $NO_CLASS_INIT, $BiConsumer)
public:
	void init$($BinaryOperator* op, $Function* mapper) {
		$set(this, op, op);
		$set(this, mapper, mapper);
	}
	virtual void accept(Object$* a, Object$* t) override {
		Collectors::lambda$reducing$49(op, mapper, $cast($ObjectArray, a), t);
	}
	$BinaryOperator* op = nullptr;
	$Function* mapper = nullptr;
};
$Class* Collectors$$Lambda$lambda$reducing$49$55::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"op", "Ljava/util/function/BinaryOperator;", nullptr, $PUBLIC, $field(Collectors$$Lambda$lambda$reducing$49$55, op)},
		{"mapper", "Ljava/util/function/Function;", nullptr, $PUBLIC, $field(Collectors$$Lambda$lambda$reducing$49$55, mapper)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/function/BinaryOperator;Ljava/util/function/Function;)V", nullptr, $PUBLIC, $method(Collectors$$Lambda$lambda$reducing$49$55, init$, void, $BinaryOperator*, $Function*)},
		{"accept", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(Collectors$$Lambda$lambda$reducing$49$55, accept, void, Object$*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.util.stream.Collectors$$Lambda$lambda$reducing$49$55",
		"java.lang.Object",
		"java.util.function.BiConsumer",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Collectors$$Lambda$lambda$reducing$49$55, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Collectors$$Lambda$lambda$reducing$49$55);
	});
	return class$;
}
$Class* Collectors$$Lambda$lambda$reducing$49$55::class$ = nullptr;

class Collectors$$Lambda$HashMap$56 : public $Supplier {
	$class(Collectors$$Lambda$HashMap$56, $NO_CLASS_INIT, $Supplier)
public:
	void init$() {
	}
	virtual $Object* get() override {
		 return $of($new($HashMap));
	}
};
$Class* Collectors$$Lambda$HashMap$56::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Collectors$$Lambda$HashMap$56, init$, void)},
		{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Collectors$$Lambda$HashMap$56, get, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.util.stream.Collectors$$Lambda$HashMap$56",
		"java.lang.Object",
		"java.util.function.Supplier",
		nullptr,
		methodInfos$$
	};
	$loadClass(Collectors$$Lambda$HashMap$56, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Collectors$$Lambda$HashMap$56);
	});
	return class$;
}
$Class* Collectors$$Lambda$HashMap$56::class$ = nullptr;

class Collectors$$Lambda$lambda$groupingBy$53$57 : public $BiConsumer {
	$class(Collectors$$Lambda$lambda$groupingBy$53$57, $NO_CLASS_INIT, $BiConsumer)
public:
	void init$($Function* classifier, $Supplier* downstreamSupplier, $BiConsumer* downstreamAccumulator) {
		$set(this, classifier, classifier);
		$set(this, downstreamSupplier, downstreamSupplier);
		$set(this, downstreamAccumulator, downstreamAccumulator);
	}
	virtual void accept(Object$* m, Object$* t) override {
		Collectors::lambda$groupingBy$53(classifier, downstreamSupplier, downstreamAccumulator, $cast($Map, m), t);
	}
	$Function* classifier = nullptr;
	$Supplier* downstreamSupplier = nullptr;
	$BiConsumer* downstreamAccumulator = nullptr;
};
$Class* Collectors$$Lambda$lambda$groupingBy$53$57::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"classifier", "Ljava/util/function/Function;", nullptr, $PUBLIC, $field(Collectors$$Lambda$lambda$groupingBy$53$57, classifier)},
		{"downstreamSupplier", "Ljava/util/function/Supplier;", nullptr, $PUBLIC, $field(Collectors$$Lambda$lambda$groupingBy$53$57, downstreamSupplier)},
		{"downstreamAccumulator", "Ljava/util/function/BiConsumer;", nullptr, $PUBLIC, $field(Collectors$$Lambda$lambda$groupingBy$53$57, downstreamAccumulator)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/function/Function;Ljava/util/function/Supplier;Ljava/util/function/BiConsumer;)V", nullptr, $PUBLIC, $method(Collectors$$Lambda$lambda$groupingBy$53$57, init$, void, $Function*, $Supplier*, $BiConsumer*)},
		{"accept", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(Collectors$$Lambda$lambda$groupingBy$53$57, accept, void, Object$*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.util.stream.Collectors$$Lambda$lambda$groupingBy$53$57",
		"java.lang.Object",
		"java.util.function.BiConsumer",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Collectors$$Lambda$lambda$groupingBy$53$57, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Collectors$$Lambda$lambda$groupingBy$53$57);
	});
	return class$;
}
$Class* Collectors$$Lambda$lambda$groupingBy$53$57::class$ = nullptr;

class Collectors$$Lambda$lambda$groupingBy$55$58 : public $Function {
	$class(Collectors$$Lambda$lambda$groupingBy$55$58, $NO_CLASS_INIT, $Function)
public:
	void init$($Function* downstreamFinisher) {
		$set(this, downstreamFinisher, downstreamFinisher);
	}
	virtual $Object* apply(Object$* intermediate) override {
		 return Collectors::lambda$groupingBy$55(downstreamFinisher, $cast($Map, intermediate));
	}
	$Function* downstreamFinisher = nullptr;
};
$Class* Collectors$$Lambda$lambda$groupingBy$55$58::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"downstreamFinisher", "Ljava/util/function/Function;", nullptr, $PUBLIC, $field(Collectors$$Lambda$lambda$groupingBy$55$58, downstreamFinisher)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/function/Function;)V", nullptr, $PUBLIC, $method(Collectors$$Lambda$lambda$groupingBy$55$58, init$, void, $Function*)},
		{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Collectors$$Lambda$lambda$groupingBy$55$58, apply, $Object*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.util.stream.Collectors$$Lambda$lambda$groupingBy$55$58",
		"java.lang.Object",
		"java.util.function.Function",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Collectors$$Lambda$lambda$groupingBy$55$58, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Collectors$$Lambda$lambda$groupingBy$55$58);
	});
	return class$;
}
$Class* Collectors$$Lambda$lambda$groupingBy$55$58::class$ = nullptr;

class Collectors$$Lambda$ConcurrentHashMap$59 : public $Supplier {
	$class(Collectors$$Lambda$ConcurrentHashMap$59, $NO_CLASS_INIT, $Supplier)
public:
	void init$() {
	}
	virtual $Object* get() override {
		 return $of($new($ConcurrentHashMap));
	}
};
$Class* Collectors$$Lambda$ConcurrentHashMap$59::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Collectors$$Lambda$ConcurrentHashMap$59, init$, void)},
		{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Collectors$$Lambda$ConcurrentHashMap$59, get, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.util.stream.Collectors$$Lambda$ConcurrentHashMap$59",
		"java.lang.Object",
		"java.util.function.Supplier",
		nullptr,
		methodInfos$$
	};
	$loadClass(Collectors$$Lambda$ConcurrentHashMap$59, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Collectors$$Lambda$ConcurrentHashMap$59);
	});
	return class$;
}
$Class* Collectors$$Lambda$ConcurrentHashMap$59::class$ = nullptr;

class Collectors$$Lambda$lambda$groupingByConcurrent$57$60 : public $BiConsumer {
	$class(Collectors$$Lambda$lambda$groupingByConcurrent$57$60, $NO_CLASS_INIT, $BiConsumer)
public:
	void init$($Function* classifier, $Supplier* downstreamSupplier, $BiConsumer* downstreamAccumulator) {
		$set(this, classifier, classifier);
		$set(this, downstreamSupplier, downstreamSupplier);
		$set(this, downstreamAccumulator, downstreamAccumulator);
	}
	virtual void accept(Object$* m, Object$* t) override {
		Collectors::lambda$groupingByConcurrent$57(classifier, downstreamSupplier, downstreamAccumulator, $cast($ConcurrentMap, m), t);
	}
	$Function* classifier = nullptr;
	$Supplier* downstreamSupplier = nullptr;
	$BiConsumer* downstreamAccumulator = nullptr;
};
$Class* Collectors$$Lambda$lambda$groupingByConcurrent$57$60::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"classifier", "Ljava/util/function/Function;", nullptr, $PUBLIC, $field(Collectors$$Lambda$lambda$groupingByConcurrent$57$60, classifier)},
		{"downstreamSupplier", "Ljava/util/function/Supplier;", nullptr, $PUBLIC, $field(Collectors$$Lambda$lambda$groupingByConcurrent$57$60, downstreamSupplier)},
		{"downstreamAccumulator", "Ljava/util/function/BiConsumer;", nullptr, $PUBLIC, $field(Collectors$$Lambda$lambda$groupingByConcurrent$57$60, downstreamAccumulator)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/function/Function;Ljava/util/function/Supplier;Ljava/util/function/BiConsumer;)V", nullptr, $PUBLIC, $method(Collectors$$Lambda$lambda$groupingByConcurrent$57$60, init$, void, $Function*, $Supplier*, $BiConsumer*)},
		{"accept", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(Collectors$$Lambda$lambda$groupingByConcurrent$57$60, accept, void, Object$*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.util.stream.Collectors$$Lambda$lambda$groupingByConcurrent$57$60",
		"java.lang.Object",
		"java.util.function.BiConsumer",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Collectors$$Lambda$lambda$groupingByConcurrent$57$60, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Collectors$$Lambda$lambda$groupingByConcurrent$57$60);
	});
	return class$;
}
$Class* Collectors$$Lambda$lambda$groupingByConcurrent$57$60::class$ = nullptr;

class Collectors$$Lambda$lambda$groupingByConcurrent$59$61 : public $BiConsumer {
	$class(Collectors$$Lambda$lambda$groupingByConcurrent$59$61, $NO_CLASS_INIT, $BiConsumer)
public:
	void init$($Function* classifier, $Supplier* downstreamSupplier, $BiConsumer* downstreamAccumulator) {
		$set(this, classifier, classifier);
		$set(this, downstreamSupplier, downstreamSupplier);
		$set(this, downstreamAccumulator, downstreamAccumulator);
	}
	virtual void accept(Object$* m, Object$* t) override {
		Collectors::lambda$groupingByConcurrent$59(classifier, downstreamSupplier, downstreamAccumulator, $cast($ConcurrentMap, m), t);
	}
	$Function* classifier = nullptr;
	$Supplier* downstreamSupplier = nullptr;
	$BiConsumer* downstreamAccumulator = nullptr;
};
$Class* Collectors$$Lambda$lambda$groupingByConcurrent$59$61::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"classifier", "Ljava/util/function/Function;", nullptr, $PUBLIC, $field(Collectors$$Lambda$lambda$groupingByConcurrent$59$61, classifier)},
		{"downstreamSupplier", "Ljava/util/function/Supplier;", nullptr, $PUBLIC, $field(Collectors$$Lambda$lambda$groupingByConcurrent$59$61, downstreamSupplier)},
		{"downstreamAccumulator", "Ljava/util/function/BiConsumer;", nullptr, $PUBLIC, $field(Collectors$$Lambda$lambda$groupingByConcurrent$59$61, downstreamAccumulator)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/function/Function;Ljava/util/function/Supplier;Ljava/util/function/BiConsumer;)V", nullptr, $PUBLIC, $method(Collectors$$Lambda$lambda$groupingByConcurrent$59$61, init$, void, $Function*, $Supplier*, $BiConsumer*)},
		{"accept", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(Collectors$$Lambda$lambda$groupingByConcurrent$59$61, accept, void, Object$*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.util.stream.Collectors$$Lambda$lambda$groupingByConcurrent$59$61",
		"java.lang.Object",
		"java.util.function.BiConsumer",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Collectors$$Lambda$lambda$groupingByConcurrent$59$61, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Collectors$$Lambda$lambda$groupingByConcurrent$59$61);
	});
	return class$;
}
$Class* Collectors$$Lambda$lambda$groupingByConcurrent$59$61::class$ = nullptr;

class Collectors$$Lambda$lambda$groupingByConcurrent$61$62 : public $Function {
	$class(Collectors$$Lambda$lambda$groupingByConcurrent$61$62, $NO_CLASS_INIT, $Function)
public:
	void init$($Function* downstreamFinisher) {
		$set(this, downstreamFinisher, downstreamFinisher);
	}
	virtual $Object* apply(Object$* intermediate) override {
		 return Collectors::lambda$groupingByConcurrent$61(downstreamFinisher, $cast($ConcurrentMap, intermediate));
	}
	$Function* downstreamFinisher = nullptr;
};
$Class* Collectors$$Lambda$lambda$groupingByConcurrent$61$62::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"downstreamFinisher", "Ljava/util/function/Function;", nullptr, $PUBLIC, $field(Collectors$$Lambda$lambda$groupingByConcurrent$61$62, downstreamFinisher)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/function/Function;)V", nullptr, $PUBLIC, $method(Collectors$$Lambda$lambda$groupingByConcurrent$61$62, init$, void, $Function*)},
		{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Collectors$$Lambda$lambda$groupingByConcurrent$61$62, apply, $Object*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.util.stream.Collectors$$Lambda$lambda$groupingByConcurrent$61$62",
		"java.lang.Object",
		"java.util.function.Function",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Collectors$$Lambda$lambda$groupingByConcurrent$61$62, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Collectors$$Lambda$lambda$groupingByConcurrent$61$62);
	});
	return class$;
}
$Class* Collectors$$Lambda$lambda$groupingByConcurrent$61$62::class$ = nullptr;

class Collectors$$Lambda$lambda$partitioningBy$62$63 : public $BiConsumer {
	$class(Collectors$$Lambda$lambda$partitioningBy$62$63, $NO_CLASS_INIT, $BiConsumer)
public:
	void init$($BiConsumer* downstreamAccumulator, $Predicate* predicate) {
		$set(this, downstreamAccumulator, downstreamAccumulator);
		$set(this, predicate, predicate);
	}
	virtual void accept(Object$* result, Object$* t) override {
		Collectors::lambda$partitioningBy$62(downstreamAccumulator, predicate, $cast($Collectors$Partition, result), t);
	}
	$BiConsumer* downstreamAccumulator = nullptr;
	$Predicate* predicate = nullptr;
};
$Class* Collectors$$Lambda$lambda$partitioningBy$62$63::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"downstreamAccumulator", "Ljava/util/function/BiConsumer;", nullptr, $PUBLIC, $field(Collectors$$Lambda$lambda$partitioningBy$62$63, downstreamAccumulator)},
		{"predicate", "Ljava/util/function/Predicate;", nullptr, $PUBLIC, $field(Collectors$$Lambda$lambda$partitioningBy$62$63, predicate)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/function/BiConsumer;Ljava/util/function/Predicate;)V", nullptr, $PUBLIC, $method(Collectors$$Lambda$lambda$partitioningBy$62$63, init$, void, $BiConsumer*, $Predicate*)},
		{"accept", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(Collectors$$Lambda$lambda$partitioningBy$62$63, accept, void, Object$*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.util.stream.Collectors$$Lambda$lambda$partitioningBy$62$63",
		"java.lang.Object",
		"java.util.function.BiConsumer",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Collectors$$Lambda$lambda$partitioningBy$62$63, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Collectors$$Lambda$lambda$partitioningBy$62$63);
	});
	return class$;
}
$Class* Collectors$$Lambda$lambda$partitioningBy$62$63::class$ = nullptr;

class Collectors$$Lambda$lambda$partitioningBy$63$64 : public $BinaryOperator {
	$class(Collectors$$Lambda$lambda$partitioningBy$63$64, $NO_CLASS_INIT, $BinaryOperator)
public:
	void init$($BinaryOperator* op) {
		$set(this, op, op);
	}
	virtual $Object* apply(Object$* left, Object$* right) override {
		 return Collectors::lambda$partitioningBy$63(op, $cast($Collectors$Partition, left), $cast($Collectors$Partition, right));
	}
	$BinaryOperator* op = nullptr;
};
$Class* Collectors$$Lambda$lambda$partitioningBy$63$64::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"op", "Ljava/util/function/BinaryOperator;", nullptr, $PUBLIC, $field(Collectors$$Lambda$lambda$partitioningBy$63$64, op)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/function/BinaryOperator;)V", nullptr, $PUBLIC, $method(Collectors$$Lambda$lambda$partitioningBy$63$64, init$, void, $BinaryOperator*)},
		{"apply", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Collectors$$Lambda$lambda$partitioningBy$63$64, apply, $Object*, Object$*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.util.stream.Collectors$$Lambda$lambda$partitioningBy$63$64",
		"java.lang.Object",
		"java.util.function.BinaryOperator",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Collectors$$Lambda$lambda$partitioningBy$63$64, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Collectors$$Lambda$lambda$partitioningBy$63$64);
	});
	return class$;
}
$Class* Collectors$$Lambda$lambda$partitioningBy$63$64::class$ = nullptr;

class Collectors$$Lambda$lambda$partitioningBy$64$65 : public $Supplier {
	$class(Collectors$$Lambda$lambda$partitioningBy$64$65, $NO_CLASS_INIT, $Supplier)
public:
	void init$($Collector* downstream) {
		$set(this, downstream, downstream);
	}
	virtual $Object* get() override {
		 return Collectors::lambda$partitioningBy$64(downstream);
	}
	$Collector* downstream = nullptr;
};
$Class* Collectors$$Lambda$lambda$partitioningBy$64$65::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"downstream", "Ljava/util/stream/Collector;", nullptr, $PUBLIC, $field(Collectors$$Lambda$lambda$partitioningBy$64$65, downstream)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/stream/Collector;)V", nullptr, $PUBLIC, $method(Collectors$$Lambda$lambda$partitioningBy$64$65, init$, void, $Collector*)},
		{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Collectors$$Lambda$lambda$partitioningBy$64$65, get, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.util.stream.Collectors$$Lambda$lambda$partitioningBy$64$65",
		"java.lang.Object",
		"java.util.function.Supplier",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Collectors$$Lambda$lambda$partitioningBy$64$65, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Collectors$$Lambda$lambda$partitioningBy$64$65);
	});
	return class$;
}
$Class* Collectors$$Lambda$lambda$partitioningBy$64$65::class$ = nullptr;

class Collectors$$Lambda$lambda$partitioningBy$65$66 : public $Function {
	$class(Collectors$$Lambda$lambda$partitioningBy$65$66, $NO_CLASS_INIT, $Function)
public:
	void init$($Collector* downstream) {
		$set(this, downstream, downstream);
	}
	virtual $Object* apply(Object$* par) override {
		 return Collectors::lambda$partitioningBy$65(downstream, $cast($Collectors$Partition, par));
	}
	$Collector* downstream = nullptr;
};
$Class* Collectors$$Lambda$lambda$partitioningBy$65$66::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"downstream", "Ljava/util/stream/Collector;", nullptr, $PUBLIC, $field(Collectors$$Lambda$lambda$partitioningBy$65$66, downstream)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/stream/Collector;)V", nullptr, $PUBLIC, $method(Collectors$$Lambda$lambda$partitioningBy$65$66, init$, void, $Collector*)},
		{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Collectors$$Lambda$lambda$partitioningBy$65$66, apply, $Object*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.util.stream.Collectors$$Lambda$lambda$partitioningBy$65$66",
		"java.lang.Object",
		"java.util.function.Function",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Collectors$$Lambda$lambda$partitioningBy$65$66, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Collectors$$Lambda$lambda$partitioningBy$65$66);
	});
	return class$;
}
$Class* Collectors$$Lambda$lambda$partitioningBy$65$66::class$ = nullptr;

class Collectors$$Lambda$lambda$toUnmodifiableMap$66$67 : public $Function {
	$class(Collectors$$Lambda$lambda$toUnmodifiableMap$66$67, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* map) override {
		 return Collectors::lambda$toUnmodifiableMap$66($cast($Map, map));
	}
};
$Class* Collectors$$Lambda$lambda$toUnmodifiableMap$66$67::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Collectors$$Lambda$lambda$toUnmodifiableMap$66$67, init$, void)},
		{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Collectors$$Lambda$lambda$toUnmodifiableMap$66$67, apply, $Object*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.util.stream.Collectors$$Lambda$lambda$toUnmodifiableMap$66$67",
		"java.lang.Object",
		"java.util.function.Function",
		nullptr,
		methodInfos$$
	};
	$loadClass(Collectors$$Lambda$lambda$toUnmodifiableMap$66$67, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Collectors$$Lambda$lambda$toUnmodifiableMap$66$67);
	});
	return class$;
}
$Class* Collectors$$Lambda$lambda$toUnmodifiableMap$66$67::class$ = nullptr;

class Collectors$$Lambda$lambda$toUnmodifiableMap$67$68 : public $Function {
	$class(Collectors$$Lambda$lambda$toUnmodifiableMap$67$68, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* map) override {
		 return Collectors::lambda$toUnmodifiableMap$67($cast($HashMap, map));
	}
};
$Class* Collectors$$Lambda$lambda$toUnmodifiableMap$67$68::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Collectors$$Lambda$lambda$toUnmodifiableMap$67$68, init$, void)},
		{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Collectors$$Lambda$lambda$toUnmodifiableMap$67$68, apply, $Object*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.util.stream.Collectors$$Lambda$lambda$toUnmodifiableMap$67$68",
		"java.lang.Object",
		"java.util.function.Function",
		nullptr,
		methodInfos$$
	};
	$loadClass(Collectors$$Lambda$lambda$toUnmodifiableMap$67$68, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Collectors$$Lambda$lambda$toUnmodifiableMap$67$68);
	});
	return class$;
}
$Class* Collectors$$Lambda$lambda$toUnmodifiableMap$67$68::class$ = nullptr;

class Collectors$$Lambda$lambda$toMap$68$69 : public $BiConsumer {
	$class(Collectors$$Lambda$lambda$toMap$68$69, $NO_CLASS_INIT, $BiConsumer)
public:
	void init$($Function* keyMapper, $Function* valueMapper, $BinaryOperator* mergeFunction) {
		$set(this, keyMapper, keyMapper);
		$set(this, valueMapper, valueMapper);
		$set(this, mergeFunction, mergeFunction);
	}
	virtual void accept(Object$* map, Object$* element) override {
		Collectors::lambda$toMap$68(keyMapper, valueMapper, mergeFunction, $cast($Map, map), element);
	}
	$Function* keyMapper = nullptr;
	$Function* valueMapper = nullptr;
	$BinaryOperator* mergeFunction = nullptr;
};
$Class* Collectors$$Lambda$lambda$toMap$68$69::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"keyMapper", "Ljava/util/function/Function;", nullptr, $PUBLIC, $field(Collectors$$Lambda$lambda$toMap$68$69, keyMapper)},
		{"valueMapper", "Ljava/util/function/Function;", nullptr, $PUBLIC, $field(Collectors$$Lambda$lambda$toMap$68$69, valueMapper)},
		{"mergeFunction", "Ljava/util/function/BinaryOperator;", nullptr, $PUBLIC, $field(Collectors$$Lambda$lambda$toMap$68$69, mergeFunction)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/function/Function;Ljava/util/function/Function;Ljava/util/function/BinaryOperator;)V", nullptr, $PUBLIC, $method(Collectors$$Lambda$lambda$toMap$68$69, init$, void, $Function*, $Function*, $BinaryOperator*)},
		{"accept", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(Collectors$$Lambda$lambda$toMap$68$69, accept, void, Object$*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.util.stream.Collectors$$Lambda$lambda$toMap$68$69",
		"java.lang.Object",
		"java.util.function.BiConsumer",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Collectors$$Lambda$lambda$toMap$68$69, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Collectors$$Lambda$lambda$toMap$68$69);
	});
	return class$;
}
$Class* Collectors$$Lambda$lambda$toMap$68$69::class$ = nullptr;

class Collectors$$Lambda$lambda$toConcurrentMap$69$70 : public $BiConsumer {
	$class(Collectors$$Lambda$lambda$toConcurrentMap$69$70, $NO_CLASS_INIT, $BiConsumer)
public:
	void init$($Function* keyMapper, $Function* valueMapper, $BinaryOperator* mergeFunction) {
		$set(this, keyMapper, keyMapper);
		$set(this, valueMapper, valueMapper);
		$set(this, mergeFunction, mergeFunction);
	}
	virtual void accept(Object$* map, Object$* element) override {
		Collectors::lambda$toConcurrentMap$69(keyMapper, valueMapper, mergeFunction, $cast($ConcurrentMap, map), element);
	}
	$Function* keyMapper = nullptr;
	$Function* valueMapper = nullptr;
	$BinaryOperator* mergeFunction = nullptr;
};
$Class* Collectors$$Lambda$lambda$toConcurrentMap$69$70::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"keyMapper", "Ljava/util/function/Function;", nullptr, $PUBLIC, $field(Collectors$$Lambda$lambda$toConcurrentMap$69$70, keyMapper)},
		{"valueMapper", "Ljava/util/function/Function;", nullptr, $PUBLIC, $field(Collectors$$Lambda$lambda$toConcurrentMap$69$70, valueMapper)},
		{"mergeFunction", "Ljava/util/function/BinaryOperator;", nullptr, $PUBLIC, $field(Collectors$$Lambda$lambda$toConcurrentMap$69$70, mergeFunction)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/function/Function;Ljava/util/function/Function;Ljava/util/function/BinaryOperator;)V", nullptr, $PUBLIC, $method(Collectors$$Lambda$lambda$toConcurrentMap$69$70, init$, void, $Function*, $Function*, $BinaryOperator*)},
		{"accept", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(Collectors$$Lambda$lambda$toConcurrentMap$69$70, accept, void, Object$*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.util.stream.Collectors$$Lambda$lambda$toConcurrentMap$69$70",
		"java.lang.Object",
		"java.util.function.BiConsumer",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Collectors$$Lambda$lambda$toConcurrentMap$69$70, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Collectors$$Lambda$lambda$toConcurrentMap$69$70);
	});
	return class$;
}
$Class* Collectors$$Lambda$lambda$toConcurrentMap$69$70::class$ = nullptr;

class Collectors$$Lambda$IntSummaryStatistics$71 : public $Supplier {
	$class(Collectors$$Lambda$IntSummaryStatistics$71, $NO_CLASS_INIT, $Supplier)
public:
	void init$() {
	}
	virtual $Object* get() override {
		 return $new($IntSummaryStatistics);
	}
};
$Class* Collectors$$Lambda$IntSummaryStatistics$71::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Collectors$$Lambda$IntSummaryStatistics$71, init$, void)},
		{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Collectors$$Lambda$IntSummaryStatistics$71, get, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.util.stream.Collectors$$Lambda$IntSummaryStatistics$71",
		"java.lang.Object",
		"java.util.function.Supplier",
		nullptr,
		methodInfos$$
	};
	$loadClass(Collectors$$Lambda$IntSummaryStatistics$71, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Collectors$$Lambda$IntSummaryStatistics$71);
	});
	return class$;
}
$Class* Collectors$$Lambda$IntSummaryStatistics$71::class$ = nullptr;

class Collectors$$Lambda$lambda$summarizingInt$70$72 : public $BiConsumer {
	$class(Collectors$$Lambda$lambda$summarizingInt$70$72, $NO_CLASS_INIT, $BiConsumer)
public:
	void init$($ToIntFunction* mapper) {
		$set(this, mapper, mapper);
	}
	virtual void accept(Object$* r, Object$* t) override {
		Collectors::lambda$summarizingInt$70(mapper, $cast($IntSummaryStatistics, r), t);
	}
	$ToIntFunction* mapper = nullptr;
};
$Class* Collectors$$Lambda$lambda$summarizingInt$70$72::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"mapper", "Ljava/util/function/ToIntFunction;", nullptr, $PUBLIC, $field(Collectors$$Lambda$lambda$summarizingInt$70$72, mapper)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/function/ToIntFunction;)V", nullptr, $PUBLIC, $method(Collectors$$Lambda$lambda$summarizingInt$70$72, init$, void, $ToIntFunction*)},
		{"accept", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(Collectors$$Lambda$lambda$summarizingInt$70$72, accept, void, Object$*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.util.stream.Collectors$$Lambda$lambda$summarizingInt$70$72",
		"java.lang.Object",
		"java.util.function.BiConsumer",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Collectors$$Lambda$lambda$summarizingInt$70$72, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Collectors$$Lambda$lambda$summarizingInt$70$72);
	});
	return class$;
}
$Class* Collectors$$Lambda$lambda$summarizingInt$70$72::class$ = nullptr;

class Collectors$$Lambda$lambda$summarizingInt$71$73 : public $BinaryOperator {
	$class(Collectors$$Lambda$lambda$summarizingInt$71$73, $NO_CLASS_INIT, $BinaryOperator)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* l, Object$* r) override {
		 return Collectors::lambda$summarizingInt$71($cast($IntSummaryStatistics, l), $cast($IntSummaryStatistics, r));
	}
};
$Class* Collectors$$Lambda$lambda$summarizingInt$71$73::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Collectors$$Lambda$lambda$summarizingInt$71$73, init$, void)},
		{"apply", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Collectors$$Lambda$lambda$summarizingInt$71$73, apply, $Object*, Object$*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.util.stream.Collectors$$Lambda$lambda$summarizingInt$71$73",
		"java.lang.Object",
		"java.util.function.BinaryOperator",
		nullptr,
		methodInfos$$
	};
	$loadClass(Collectors$$Lambda$lambda$summarizingInt$71$73, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Collectors$$Lambda$lambda$summarizingInt$71$73);
	});
	return class$;
}
$Class* Collectors$$Lambda$lambda$summarizingInt$71$73::class$ = nullptr;

class Collectors$$Lambda$LongSummaryStatistics$74 : public $Supplier {
	$class(Collectors$$Lambda$LongSummaryStatistics$74, $NO_CLASS_INIT, $Supplier)
public:
	void init$() {
	}
	virtual $Object* get() override {
		 return $of($new($LongSummaryStatistics));
	}
};
$Class* Collectors$$Lambda$LongSummaryStatistics$74::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Collectors$$Lambda$LongSummaryStatistics$74, init$, void)},
		{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Collectors$$Lambda$LongSummaryStatistics$74, get, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.util.stream.Collectors$$Lambda$LongSummaryStatistics$74",
		"java.lang.Object",
		"java.util.function.Supplier",
		nullptr,
		methodInfos$$
	};
	$loadClass(Collectors$$Lambda$LongSummaryStatistics$74, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Collectors$$Lambda$LongSummaryStatistics$74);
	});
	return class$;
}
$Class* Collectors$$Lambda$LongSummaryStatistics$74::class$ = nullptr;

class Collectors$$Lambda$lambda$summarizingLong$72$75 : public $BiConsumer {
	$class(Collectors$$Lambda$lambda$summarizingLong$72$75, $NO_CLASS_INIT, $BiConsumer)
public:
	void init$($ToLongFunction* mapper) {
		$set(this, mapper, mapper);
	}
	virtual void accept(Object$* r, Object$* t) override {
		Collectors::lambda$summarizingLong$72(mapper, $cast($LongSummaryStatistics, r), t);
	}
	$ToLongFunction* mapper = nullptr;
};
$Class* Collectors$$Lambda$lambda$summarizingLong$72$75::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"mapper", "Ljava/util/function/ToLongFunction;", nullptr, $PUBLIC, $field(Collectors$$Lambda$lambda$summarizingLong$72$75, mapper)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/function/ToLongFunction;)V", nullptr, $PUBLIC, $method(Collectors$$Lambda$lambda$summarizingLong$72$75, init$, void, $ToLongFunction*)},
		{"accept", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(Collectors$$Lambda$lambda$summarizingLong$72$75, accept, void, Object$*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.util.stream.Collectors$$Lambda$lambda$summarizingLong$72$75",
		"java.lang.Object",
		"java.util.function.BiConsumer",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Collectors$$Lambda$lambda$summarizingLong$72$75, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Collectors$$Lambda$lambda$summarizingLong$72$75);
	});
	return class$;
}
$Class* Collectors$$Lambda$lambda$summarizingLong$72$75::class$ = nullptr;

class Collectors$$Lambda$lambda$summarizingLong$73$76 : public $BinaryOperator {
	$class(Collectors$$Lambda$lambda$summarizingLong$73$76, $NO_CLASS_INIT, $BinaryOperator)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* l, Object$* r) override {
		 return $of(Collectors::lambda$summarizingLong$73($cast($LongSummaryStatistics, l), $cast($LongSummaryStatistics, r)));
	}
};
$Class* Collectors$$Lambda$lambda$summarizingLong$73$76::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Collectors$$Lambda$lambda$summarizingLong$73$76, init$, void)},
		{"apply", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Collectors$$Lambda$lambda$summarizingLong$73$76, apply, $Object*, Object$*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.util.stream.Collectors$$Lambda$lambda$summarizingLong$73$76",
		"java.lang.Object",
		"java.util.function.BinaryOperator",
		nullptr,
		methodInfos$$
	};
	$loadClass(Collectors$$Lambda$lambda$summarizingLong$73$76, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Collectors$$Lambda$lambda$summarizingLong$73$76);
	});
	return class$;
}
$Class* Collectors$$Lambda$lambda$summarizingLong$73$76::class$ = nullptr;

class Collectors$$Lambda$DoubleSummaryStatistics$77 : public $Supplier {
	$class(Collectors$$Lambda$DoubleSummaryStatistics$77, $NO_CLASS_INIT, $Supplier)
public:
	void init$() {
	}
	virtual $Object* get() override {
		 return $new($DoubleSummaryStatistics);
	}
};
$Class* Collectors$$Lambda$DoubleSummaryStatistics$77::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Collectors$$Lambda$DoubleSummaryStatistics$77, init$, void)},
		{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Collectors$$Lambda$DoubleSummaryStatistics$77, get, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.util.stream.Collectors$$Lambda$DoubleSummaryStatistics$77",
		"java.lang.Object",
		"java.util.function.Supplier",
		nullptr,
		methodInfos$$
	};
	$loadClass(Collectors$$Lambda$DoubleSummaryStatistics$77, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Collectors$$Lambda$DoubleSummaryStatistics$77);
	});
	return class$;
}
$Class* Collectors$$Lambda$DoubleSummaryStatistics$77::class$ = nullptr;

class Collectors$$Lambda$lambda$summarizingDouble$74$78 : public $BiConsumer {
	$class(Collectors$$Lambda$lambda$summarizingDouble$74$78, $NO_CLASS_INIT, $BiConsumer)
public:
	void init$($ToDoubleFunction* mapper) {
		$set(this, mapper, mapper);
	}
	virtual void accept(Object$* r, Object$* t) override {
		Collectors::lambda$summarizingDouble$74(mapper, $cast($DoubleSummaryStatistics, r), t);
	}
	$ToDoubleFunction* mapper = nullptr;
};
$Class* Collectors$$Lambda$lambda$summarizingDouble$74$78::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"mapper", "Ljava/util/function/ToDoubleFunction;", nullptr, $PUBLIC, $field(Collectors$$Lambda$lambda$summarizingDouble$74$78, mapper)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/function/ToDoubleFunction;)V", nullptr, $PUBLIC, $method(Collectors$$Lambda$lambda$summarizingDouble$74$78, init$, void, $ToDoubleFunction*)},
		{"accept", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(Collectors$$Lambda$lambda$summarizingDouble$74$78, accept, void, Object$*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.util.stream.Collectors$$Lambda$lambda$summarizingDouble$74$78",
		"java.lang.Object",
		"java.util.function.BiConsumer",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Collectors$$Lambda$lambda$summarizingDouble$74$78, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Collectors$$Lambda$lambda$summarizingDouble$74$78);
	});
	return class$;
}
$Class* Collectors$$Lambda$lambda$summarizingDouble$74$78::class$ = nullptr;

class Collectors$$Lambda$lambda$summarizingDouble$75$79 : public $BinaryOperator {
	$class(Collectors$$Lambda$lambda$summarizingDouble$75$79, $NO_CLASS_INIT, $BinaryOperator)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* l, Object$* r) override {
		 return Collectors::lambda$summarizingDouble$75($cast($DoubleSummaryStatistics, l), $cast($DoubleSummaryStatistics, r));
	}
};
$Class* Collectors$$Lambda$lambda$summarizingDouble$75$79::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Collectors$$Lambda$lambda$summarizingDouble$75$79, init$, void)},
		{"apply", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Collectors$$Lambda$lambda$summarizingDouble$75$79, apply, $Object*, Object$*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.util.stream.Collectors$$Lambda$lambda$summarizingDouble$75$79",
		"java.lang.Object",
		"java.util.function.BinaryOperator",
		nullptr,
		methodInfos$$
	};
	$loadClass(Collectors$$Lambda$lambda$summarizingDouble$75$79, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Collectors$$Lambda$lambda$summarizingDouble$75$79);
	});
	return class$;
}
$Class* Collectors$$Lambda$lambda$summarizingDouble$75$79::class$ = nullptr;

class Collectors$$Lambda$lambda$teeing0$76$80 : public $Supplier {
	$class(Collectors$$Lambda$lambda$teeing0$76$80, $NO_CLASS_INIT, $Supplier)
public:
	void init$($Supplier* c1Supplier, $Supplier* c2Supplier, $BiConsumer* c1Accumulator, $BiConsumer* c2Accumulator, $BinaryOperator* c1Combiner, $BinaryOperator* c2Combiner, $Function* c1Finisher, $Function* c2Finisher, $BiFunction* merger) {
		$set(this, c1Supplier, c1Supplier);
		$set(this, c2Supplier, c2Supplier);
		$set(this, c1Accumulator, c1Accumulator);
		$set(this, c2Accumulator, c2Accumulator);
		$set(this, c1Combiner, c1Combiner);
		$set(this, c2Combiner, c2Combiner);
		$set(this, c1Finisher, c1Finisher);
		$set(this, c2Finisher, c2Finisher);
		$set(this, merger, merger);
	}
	virtual $Object* get() override {
		 return Collectors::lambda$teeing0$76(c1Supplier, c2Supplier, c1Accumulator, c2Accumulator, c1Combiner, c2Combiner, c1Finisher, c2Finisher, merger);
	}
	$Supplier* c1Supplier = nullptr;
	$Supplier* c2Supplier = nullptr;
	$BiConsumer* c1Accumulator = nullptr;
	$BiConsumer* c2Accumulator = nullptr;
	$BinaryOperator* c1Combiner = nullptr;
	$BinaryOperator* c2Combiner = nullptr;
	$Function* c1Finisher = nullptr;
	$Function* c2Finisher = nullptr;
	$BiFunction* merger = nullptr;
};
$Class* Collectors$$Lambda$lambda$teeing0$76$80::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"c1Supplier", "Ljava/util/function/Supplier;", nullptr, $PUBLIC, $field(Collectors$$Lambda$lambda$teeing0$76$80, c1Supplier)},
		{"c2Supplier", "Ljava/util/function/Supplier;", nullptr, $PUBLIC, $field(Collectors$$Lambda$lambda$teeing0$76$80, c2Supplier)},
		{"c1Accumulator", "Ljava/util/function/BiConsumer;", nullptr, $PUBLIC, $field(Collectors$$Lambda$lambda$teeing0$76$80, c1Accumulator)},
		{"c2Accumulator", "Ljava/util/function/BiConsumer;", nullptr, $PUBLIC, $field(Collectors$$Lambda$lambda$teeing0$76$80, c2Accumulator)},
		{"c1Combiner", "Ljava/util/function/BinaryOperator;", nullptr, $PUBLIC, $field(Collectors$$Lambda$lambda$teeing0$76$80, c1Combiner)},
		{"c2Combiner", "Ljava/util/function/BinaryOperator;", nullptr, $PUBLIC, $field(Collectors$$Lambda$lambda$teeing0$76$80, c2Combiner)},
		{"c1Finisher", "Ljava/util/function/Function;", nullptr, $PUBLIC, $field(Collectors$$Lambda$lambda$teeing0$76$80, c1Finisher)},
		{"c2Finisher", "Ljava/util/function/Function;", nullptr, $PUBLIC, $field(Collectors$$Lambda$lambda$teeing0$76$80, c2Finisher)},
		{"merger", "Ljava/util/function/BiFunction;", nullptr, $PUBLIC, $field(Collectors$$Lambda$lambda$teeing0$76$80, merger)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/function/Supplier;Ljava/util/function/Supplier;Ljava/util/function/BiConsumer;Ljava/util/function/BiConsumer;Ljava/util/function/BinaryOperator;Ljava/util/function/BinaryOperator;Ljava/util/function/Function;Ljava/util/function/Function;Ljava/util/function/BiFunction;)V", nullptr, $PUBLIC, $method(Collectors$$Lambda$lambda$teeing0$76$80, init$, void, $Supplier*, $Supplier*, $BiConsumer*, $BiConsumer*, $BinaryOperator*, $BinaryOperator*, $Function*, $Function*, $BiFunction*)},
		{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Collectors$$Lambda$lambda$teeing0$76$80, get, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.util.stream.Collectors$$Lambda$lambda$teeing0$76$80",
		"java.lang.Object",
		"java.util.function.Supplier",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Collectors$$Lambda$lambda$teeing0$76$80, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Collectors$$Lambda$lambda$teeing0$76$80);
	});
	return class$;
}
$Class* Collectors$$Lambda$lambda$teeing0$76$80::class$ = nullptr;

class Collectors$$Lambda$add$81 : public $BiConsumer {
	$class(Collectors$$Lambda$add$81, $NO_CLASS_INIT, $BiConsumer)
public:
	void init$() {
	}
	virtual void accept(Object$* inst$, Object$* t) override {
		$sure($Collectors$1PairBox, inst$)->add(t);
	}
};
$Class* Collectors$$Lambda$add$81::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Collectors$$Lambda$add$81, init$, void)},
		{"accept", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(Collectors$$Lambda$add$81, accept, void, Object$*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.util.stream.Collectors$$Lambda$add$81",
		"java.lang.Object",
		"java.util.function.BiConsumer",
		nullptr,
		methodInfos$$
	};
	$loadClass(Collectors$$Lambda$add$81, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Collectors$$Lambda$add$81);
	});
	return class$;
}
$Class* Collectors$$Lambda$add$81::class$ = nullptr;

class Collectors$$Lambda$combine$82 : public $BinaryOperator {
	$class(Collectors$$Lambda$combine$82, $NO_CLASS_INIT, $BinaryOperator)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* inst$, Object$* other) override {
		 return $sure($Collectors$1PairBox, inst$)->combine($cast($Collectors$1PairBox, other));
	}
};
$Class* Collectors$$Lambda$combine$82::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Collectors$$Lambda$combine$82, init$, void)},
		{"apply", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Collectors$$Lambda$combine$82, apply, $Object*, Object$*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.util.stream.Collectors$$Lambda$combine$82",
		"java.lang.Object",
		"java.util.function.BinaryOperator",
		nullptr,
		methodInfos$$
	};
	$loadClass(Collectors$$Lambda$combine$82, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Collectors$$Lambda$combine$82);
	});
	return class$;
}
$Class* Collectors$$Lambda$combine$82::class$ = nullptr;

class Collectors$$Lambda$get$83 : public $Function {
	$class(Collectors$$Lambda$get$83, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* inst$) override {
		 return $sure($Collectors$1PairBox, inst$)->get();
	}
};
$Class* Collectors$$Lambda$get$83::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Collectors$$Lambda$get$83, init$, void)},
		{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Collectors$$Lambda$get$83, apply, $Object*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.util.stream.Collectors$$Lambda$get$83",
		"java.lang.Object",
		"java.util.function.Function",
		nullptr,
		methodInfos$$
	};
	$loadClass(Collectors$$Lambda$get$83, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Collectors$$Lambda$get$83);
	});
	return class$;
}
$Class* Collectors$$Lambda$get$83::class$ = nullptr;

class Collectors$$Lambda$lambda$groupingBy$54$84 : public $BiFunction {
	$class(Collectors$$Lambda$lambda$groupingBy$54$84, $NO_CLASS_INIT, $BiFunction)
public:
	void init$($Function* downstreamFinisher) {
		$set(this, downstreamFinisher, downstreamFinisher);
	}
	virtual $Object* apply(Object$* k, Object$* v) override {
		 return Collectors::lambda$groupingBy$54(downstreamFinisher, k, v);
	}
	$Function* downstreamFinisher = nullptr;
};
$Class* Collectors$$Lambda$lambda$groupingBy$54$84::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"downstreamFinisher", "Ljava/util/function/Function;", nullptr, $PUBLIC, $field(Collectors$$Lambda$lambda$groupingBy$54$84, downstreamFinisher)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/function/Function;)V", nullptr, $PUBLIC, $method(Collectors$$Lambda$lambda$groupingBy$54$84, init$, void, $Function*)},
		{"apply", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Collectors$$Lambda$lambda$groupingBy$54$84, apply, $Object*, Object$*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.util.stream.Collectors$$Lambda$lambda$groupingBy$54$84",
		"java.lang.Object",
		"java.util.function.BiFunction",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Collectors$$Lambda$lambda$groupingBy$54$84, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Collectors$$Lambda$lambda$groupingBy$54$84);
	});
	return class$;
}
$Class* Collectors$$Lambda$lambda$groupingBy$54$84::class$ = nullptr;

class Collectors$$Lambda$lambda$groupingBy$52$85 : public $Function {
	$class(Collectors$$Lambda$lambda$groupingBy$52$85, $NO_CLASS_INIT, $Function)
public:
	void init$($Supplier* downstreamSupplier) {
		$set(this, downstreamSupplier, downstreamSupplier);
	}
	virtual $Object* apply(Object$* k) override {
		 return Collectors::lambda$groupingBy$52(downstreamSupplier, k);
	}
	$Supplier* downstreamSupplier = nullptr;
};
$Class* Collectors$$Lambda$lambda$groupingBy$52$85::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"downstreamSupplier", "Ljava/util/function/Supplier;", nullptr, $PUBLIC, $field(Collectors$$Lambda$lambda$groupingBy$52$85, downstreamSupplier)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/function/Supplier;)V", nullptr, $PUBLIC, $method(Collectors$$Lambda$lambda$groupingBy$52$85, init$, void, $Supplier*)},
		{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Collectors$$Lambda$lambda$groupingBy$52$85, apply, $Object*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.util.stream.Collectors$$Lambda$lambda$groupingBy$52$85",
		"java.lang.Object",
		"java.util.function.Function",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Collectors$$Lambda$lambda$groupingBy$52$85, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Collectors$$Lambda$lambda$groupingBy$52$85);
	});
	return class$;
}
$Class* Collectors$$Lambda$lambda$groupingBy$52$85::class$ = nullptr;

class Collectors$$Lambda$lambda$flatMapping$14$86 : public $Consumer {
	$class(Collectors$$Lambda$lambda$flatMapping$14$86, $NO_CLASS_INIT, $Consumer)
public:
	void init$($BiConsumer* downstreamAccumulator, Object$* r) {
		$set(this, downstreamAccumulator, downstreamAccumulator);
		$set(this, r, r);
	}
	virtual void accept(Object$* u) override {
		Collectors::lambda$flatMapping$14(downstreamAccumulator, r, u);
	}
	$BiConsumer* downstreamAccumulator = nullptr;
	$Object* r = nullptr;
};
$Class* Collectors$$Lambda$lambda$flatMapping$14$86::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"downstreamAccumulator", "Ljava/util/function/BiConsumer;", nullptr, $PUBLIC, $field(Collectors$$Lambda$lambda$flatMapping$14$86, downstreamAccumulator)},
		{"r", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Collectors$$Lambda$lambda$flatMapping$14$86, r)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/function/BiConsumer;Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(Collectors$$Lambda$lambda$flatMapping$14$86, init$, void, $BiConsumer*, Object$*)},
		{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(Collectors$$Lambda$lambda$flatMapping$14$86, accept, void, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.util.stream.Collectors$$Lambda$lambda$flatMapping$14$86",
		"java.lang.Object",
		"java.util.function.Consumer",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Collectors$$Lambda$lambda$flatMapping$14$86, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Collectors$$Lambda$lambda$flatMapping$14$86);
	});
	return class$;
}
$Class* Collectors$$Lambda$lambda$flatMapping$14$86::class$ = nullptr;

$Set* Collectors::CH_CONCURRENT_ID = nullptr;
$Set* Collectors::CH_CONCURRENT_NOID = nullptr;
$Set* Collectors::CH_ID = nullptr;
$Set* Collectors::CH_UNORDERED_ID = nullptr;
$Set* Collectors::CH_NOID = nullptr;
$Set* Collectors::CH_UNORDERED_NOID = nullptr;

void Collectors::init$() {
}

$IllegalStateException* Collectors::duplicateKeyException(Object$* k, Object$* u, Object$* v) {
	$init(Collectors);
	$useLocalObjectStack();
	return $new($IllegalStateException, $($String::format("Duplicate key %s (attempted merging values %s and %s)"_s, $$new($ObjectArray, {
		k,
		u,
		v
	}))));
}

$BinaryOperator* Collectors::uniqKeysMapMerger() {
	$init(Collectors);
	return $new(Collectors$$Lambda$lambda$uniqKeysMapMerger$0);
}

$BiConsumer* Collectors::uniqKeysMapAccumulator($Function* keyMapper, $Function* valueMapper) {
	$init(Collectors);
	return $new(Collectors$$Lambda$lambda$uniqKeysMapAccumulator$1$1, keyMapper, valueMapper);
}

$Function* Collectors::castingIdentity() {
	$init(Collectors);
	return $new(Collectors$$Lambda$lambda$castingIdentity$2$2);
}

$Collector* Collectors::toCollection($Supplier* collectionFactory) {
	$init(Collectors);
	$useLocalObjectStack();
	$var($BiConsumer, var$0, $new(Collectors$$Lambda$add$3));
	return $new($Collectors$CollectorImpl, collectionFactory, var$0, $$new(Collectors$$Lambda$lambda$toCollection$3$4), Collectors::CH_ID);
}

$Collector* Collectors::toList() {
	$init(Collectors);
	$useLocalObjectStack();
	$var($Supplier, var$0, $new(Collectors$$Lambda$ArrayList$5));
	$var($BiConsumer, var$1, $new(Collectors$$Lambda$add$6));
	return $new($Collectors$CollectorImpl, var$0, var$1, $$new(Collectors$$Lambda$lambda$toList$4$7), Collectors::CH_ID);
}

$Collector* Collectors::toUnmodifiableList() {
	$init(Collectors);
	$useLocalObjectStack();
	$var($Supplier, var$0, $new(Collectors$$Lambda$ArrayList$5));
	$var($BiConsumer, var$1, $new(Collectors$$Lambda$add$6));
	$var($BinaryOperator, var$2, $new(Collectors$$Lambda$lambda$toList$4$7));
	return $new($Collectors$CollectorImpl, var$0, var$1, var$2, $$new(Collectors$$Lambda$lambda$toUnmodifiableList$6$8), Collectors::CH_NOID);
}

$Collector* Collectors::toSet() {
	$init(Collectors);
	$useLocalObjectStack();
	$var($Supplier, var$0, $new(Collectors$$Lambda$HashSet$9));
	$var($BiConsumer, var$1, $new(Collectors$$Lambda$add$10));
	return $new($Collectors$CollectorImpl, var$0, var$1, $$new(Collectors$$Lambda$lambda$toSet$7$11), Collectors::CH_UNORDERED_ID);
}

$Collector* Collectors::toUnmodifiableSet() {
	$init(Collectors);
	$useLocalObjectStack();
	$var($Supplier, var$0, $new(Collectors$$Lambda$HashSet$9));
	$var($BiConsumer, var$1, $new(Collectors$$Lambda$add$10));
	$var($BinaryOperator, var$2, $new(Collectors$$Lambda$lambda$toSet$7$11));
	return $new($Collectors$CollectorImpl, var$0, var$1, var$2, $$new(Collectors$$Lambda$lambda$toUnmodifiableSet$9$12), Collectors::CH_UNORDERED_NOID);
}

$Collector* Collectors::joining() {
	$init(Collectors);
	$useLocalObjectStack();
	$var($Supplier, var$0, $new(Collectors$$Lambda$StringBuilder$13));
	$var($BiConsumer, var$1, $new(Collectors$$Lambda$append$14));
	$var($BinaryOperator, var$2, $new(Collectors$$Lambda$lambda$joining$10$15));
	return $new($Collectors$CollectorImpl, var$0, var$1, var$2, $$new(Collectors$$Lambda$toString$16), Collectors::CH_NOID);
}

$Collector* Collectors::joining($CharSequence* delimiter) {
	$init(Collectors);
	return joining(delimiter, ""_s, ""_s);
}

$Collector* Collectors::joining($CharSequence* delimiter, $CharSequence* prefix, $CharSequence* suffix) {
	$init(Collectors);
	$useLocalObjectStack();
	$var($Supplier, var$0, $new(Collectors$$Lambda$lambda$joining$11$17, delimiter, prefix, suffix));
	$var($BiConsumer, var$1, $new(Collectors$$Lambda$add$18));
	$var($BinaryOperator, var$2, $new(Collectors$$Lambda$merge$19));
	return $new($Collectors$CollectorImpl, var$0, var$1, var$2, $$new(Collectors$$Lambda$toString$20), Collectors::CH_NOID);
}

$BinaryOperator* Collectors::mapMerger($BinaryOperator* mergeFunction) {
	$init(Collectors);
	return $new(Collectors$$Lambda$lambda$mapMerger$12$21, mergeFunction);
}

$Collector* Collectors::mapping($Function* mapper, $Collector* downstream) {
	$init(Collectors);
	$useLocalObjectStack();
	$var($BiConsumer, downstreamAccumulator, $nc(downstream)->accumulator());
	$var($Supplier, var$0, downstream->supplier());
	$var($BiConsumer, var$1, $new(Collectors$$Lambda$lambda$mapping$13$22, downstreamAccumulator, mapper));
	$var($BinaryOperator, var$2, downstream->combiner());
	$var($Function, var$3, downstream->finisher());
	return $new($Collectors$CollectorImpl, var$0, var$1, var$2, var$3, $(downstream->characteristics()));
}

$Collector* Collectors::flatMapping($Function* mapper, $Collector* downstream) {
	$init(Collectors);
	$useLocalObjectStack();
	$var($BiConsumer, downstreamAccumulator, $nc(downstream)->accumulator());
	$var($Supplier, var$0, downstream->supplier());
	$var($BiConsumer, var$1, $new(Collectors$$Lambda$lambda$flatMapping$15$23, mapper, downstreamAccumulator));
	$var($BinaryOperator, var$2, downstream->combiner());
	$var($Function, var$3, downstream->finisher());
	return $new($Collectors$CollectorImpl, var$0, var$1, var$2, var$3, $(downstream->characteristics()));
}

$Collector* Collectors::filtering($Predicate* predicate, $Collector* downstream) {
	$init(Collectors);
	$useLocalObjectStack();
	$var($BiConsumer, downstreamAccumulator, $nc(downstream)->accumulator());
	$var($Supplier, var$0, downstream->supplier());
	$var($BiConsumer, var$1, $new(Collectors$$Lambda$lambda$filtering$16$24, predicate, downstreamAccumulator));
	$var($BinaryOperator, var$2, downstream->combiner());
	$var($Function, var$3, downstream->finisher());
	return $new($Collectors$CollectorImpl, var$0, var$1, var$2, var$3, $(downstream->characteristics()));
}

$Collector* Collectors::collectingAndThen($Collector* downstream, $Function* finisher) {
	$init(Collectors);
	$useLocalObjectStack();
	$var($Set, characteristics, $nc(downstream)->characteristics());
	$init($Collector$Characteristics);
	if ($nc(characteristics)->contains($Collector$Characteristics::IDENTITY_FINISH)) {
		if (characteristics->size() == 1) {
			$assign(characteristics, Collectors::CH_NOID);
		} else {
			$assign(characteristics, $EnumSet::copyOf(characteristics));
			$nc(characteristics)->remove($Collector$Characteristics::IDENTITY_FINISH);
			$assign(characteristics, $Collections::unmodifiableSet(characteristics));
		}
	}
	$var($Supplier, var$0, downstream->supplier());
	$var($BiConsumer, var$1, downstream->accumulator());
	$var($BinaryOperator, var$2, downstream->combiner());
	return $new($Collectors$CollectorImpl, var$0, var$1, var$2, $($$nc(downstream->finisher())->andThen(finisher)), characteristics);
}

$Collector* Collectors::counting() {
	$init(Collectors);
	return summingLong($$new(Collectors$$Lambda$lambda$counting$17$25));
}

$Collector* Collectors::minBy($Comparator* comparator) {
	$init(Collectors);
	return reducing($($BinaryOperator::minBy(comparator)));
}

$Collector* Collectors::maxBy($Comparator* comparator) {
	$init(Collectors);
	return reducing($($BinaryOperator::maxBy(comparator)));
}

$Collector* Collectors::summingInt($ToIntFunction* mapper) {
	$init(Collectors);
	$useLocalObjectStack();
	$var($Supplier, var$0, $new(Collectors$$Lambda$lambda$summingInt$18$26));
	$var($BiConsumer, var$1, $new(Collectors$$Lambda$lambda$summingInt$19$27, mapper));
	$var($BinaryOperator, var$2, $new(Collectors$$Lambda$lambda$summingInt$20$28));
	return $new($Collectors$CollectorImpl, var$0, var$1, var$2, $$new(Collectors$$Lambda$lambda$summingInt$21$29), Collectors::CH_NOID);
}

$Collector* Collectors::summingLong($ToLongFunction* mapper) {
	$init(Collectors);
	$useLocalObjectStack();
	$var($Supplier, var$0, $new(Collectors$$Lambda$lambda$summingLong$22$30));
	$var($BiConsumer, var$1, $new(Collectors$$Lambda$lambda$summingLong$23$31, mapper));
	$var($BinaryOperator, var$2, $new(Collectors$$Lambda$lambda$summingLong$24$32));
	return $new($Collectors$CollectorImpl, var$0, var$1, var$2, $$new(Collectors$$Lambda$lambda$summingLong$25$33), Collectors::CH_NOID);
}

$Collector* Collectors::summingDouble($ToDoubleFunction* mapper) {
	$init(Collectors);
	$useLocalObjectStack();
	$var($Supplier, var$0, $new(Collectors$$Lambda$lambda$summingDouble$26$34));
	$var($BiConsumer, var$1, $new(Collectors$$Lambda$lambda$summingDouble$27$35, mapper));
	$var($BinaryOperator, var$2, $new(Collectors$$Lambda$lambda$summingDouble$28$36));
	return $new($Collectors$CollectorImpl, var$0, var$1, var$2, $$new(Collectors$$Lambda$lambda$summingDouble$29$37), Collectors::CH_NOID);
}

$doubles* Collectors::sumWithCompensation($doubles* intermediateSum, double value) {
	$init(Collectors);
	double tmp = value - $nc(intermediateSum)->get(1);
	double sum = intermediateSum->get(0);
	double velvel = sum + tmp;
	intermediateSum->set(1, (velvel - sum) - tmp);
	intermediateSum->set(0, velvel);
	return intermediateSum;
}

double Collectors::computeFinalSum($doubles* summands) {
	$init(Collectors);
	double tmp = $nc(summands)->get(0) + $nc(summands)->get(1);
	double simpleSum = summands->get(summands->length - 1);
	bool var$0 = $Double::isNaN(tmp);
	if (var$0 && $Double::isInfinite(simpleSum)) {
		return simpleSum;
	} else {
		return tmp;
	}
}

$Collector* Collectors::averagingInt($ToIntFunction* mapper) {
	$init(Collectors);
	$useLocalObjectStack();
	$var($Supplier, var$0, $new(Collectors$$Lambda$lambda$averagingInt$30$38));
	$var($BiConsumer, var$1, $new(Collectors$$Lambda$lambda$averagingInt$31$39, mapper));
	$var($BinaryOperator, var$2, $new(Collectors$$Lambda$lambda$averagingInt$32$40));
	return $new($Collectors$CollectorImpl, var$0, var$1, var$2, $$new(Collectors$$Lambda$lambda$averagingInt$33$41), Collectors::CH_NOID);
}

$Collector* Collectors::averagingLong($ToLongFunction* mapper) {
	$init(Collectors);
	$useLocalObjectStack();
	$var($Supplier, var$0, $new(Collectors$$Lambda$lambda$averagingInt$30$38));
	$var($BiConsumer, var$1, $new(Collectors$$Lambda$lambda$averagingLong$35$42, mapper));
	$var($BinaryOperator, var$2, $new(Collectors$$Lambda$lambda$averagingInt$32$40));
	return $new($Collectors$CollectorImpl, var$0, var$1, var$2, $$new(Collectors$$Lambda$lambda$averagingInt$33$41), Collectors::CH_NOID);
}

$Collector* Collectors::averagingDouble($ToDoubleFunction* mapper) {
	$init(Collectors);
	$useLocalObjectStack();
	$var($Supplier, var$0, $new(Collectors$$Lambda$lambda$averagingDouble$38$43));
	$var($BiConsumer, var$1, $new(Collectors$$Lambda$lambda$averagingDouble$39$44, mapper));
	$var($BinaryOperator, var$2, $new(Collectors$$Lambda$lambda$averagingDouble$40$45));
	return $new($Collectors$CollectorImpl, var$0, var$1, var$2, $$new(Collectors$$Lambda$lambda$averagingDouble$41$46), Collectors::CH_NOID);
}

$Collector* Collectors::reducing(Object$* identity, $BinaryOperator* op) {
	$init(Collectors);
	$useLocalObjectStack();
	$var($Supplier, var$0, boxSupplier(identity));
	$var($BiConsumer, var$1, $new(Collectors$$Lambda$lambda$reducing$42$47, op));
	$var($BinaryOperator, var$2, $new(Collectors$$Lambda$lambda$reducing$43$48, op));
	return $new($Collectors$CollectorImpl, var$0, var$1, var$2, $$new(Collectors$$Lambda$lambda$reducing$44$49), Collectors::CH_NOID);
}

$Supplier* Collectors::boxSupplier(Object$* identity) {
	$init(Collectors);
	return $new(Collectors$$Lambda$lambda$boxSupplier$45$50, identity);
}

$Collector* Collectors::reducing($BinaryOperator* op) {
	$init(Collectors);
	$useLocalObjectStack();
	{
	}
	$var($Supplier, var$0, $new(Collectors$$Lambda$lambda$reducing$46$51, op));
	$var($BiConsumer, var$1, $new(Collectors$$Lambda$accept$52));
	$var($BinaryOperator, var$2, $new(Collectors$$Lambda$lambda$reducing$47$53));
	return $new($Collectors$CollectorImpl, var$0, var$1, var$2, $$new(Collectors$$Lambda$lambda$reducing$48$54), Collectors::CH_NOID);
}

$Collector* Collectors::reducing(Object$* identity, $Function* mapper, $BinaryOperator* op) {
	$init(Collectors);
	$useLocalObjectStack();
	$var($Supplier, var$0, boxSupplier(identity));
	$var($BiConsumer, var$1, $new(Collectors$$Lambda$lambda$reducing$49$55, op, mapper));
	$var($BinaryOperator, var$2, $new(Collectors$$Lambda$lambda$reducing$43$48, op));
	return $new($Collectors$CollectorImpl, var$0, var$1, var$2, $$new(Collectors$$Lambda$lambda$reducing$44$49), Collectors::CH_NOID);
}

$Collector* Collectors::groupingBy($Function* classifier) {
	$init(Collectors);
	return groupingBy(classifier, $(toList()));
}

$Collector* Collectors::groupingBy($Function* classifier, $Collector* downstream) {
	$init(Collectors);
	return groupingBy(classifier, $$new(Collectors$$Lambda$HashMap$56), downstream);
}

$Collector* Collectors::groupingBy($Function* classifier, $Supplier* mapFactory, $Collector* downstream) {
	$init(Collectors);
	$useLocalObjectStack();
	$var($Supplier, downstreamSupplier, $nc(downstream)->supplier());
	$var($BiConsumer, downstreamAccumulator, downstream->accumulator());
	$var($BiConsumer, accumulator, $new(Collectors$$Lambda$lambda$groupingBy$53$57, classifier, downstreamSupplier, downstreamAccumulator));
	$var($BinaryOperator, merger, Collectors::mapMerger($(downstream->combiner())));
	$var($Supplier, mangledFactory, mapFactory);
	$init($Collector$Characteristics);
	if ($$nc(downstream->characteristics())->contains($Collector$Characteristics::IDENTITY_FINISH)) {
		return $new($Collectors$CollectorImpl, mangledFactory, accumulator, merger, Collectors::CH_ID);
	} else {
		$var($Function, downstreamFinisher, downstream->finisher());
		$var($Function, finisher, $new(Collectors$$Lambda$lambda$groupingBy$55$58, downstreamFinisher));
		return $new($Collectors$CollectorImpl, mangledFactory, accumulator, merger, finisher, Collectors::CH_NOID);
	}
}

$Collector* Collectors::groupingByConcurrent($Function* classifier) {
	$init(Collectors);
	$useLocalObjectStack();
	$var($Supplier, var$0, $new(Collectors$$Lambda$ConcurrentHashMap$59));
	return groupingByConcurrent(classifier, var$0, $(toList()));
}

$Collector* Collectors::groupingByConcurrent($Function* classifier, $Collector* downstream) {
	$init(Collectors);
	return groupingByConcurrent(classifier, $$new(Collectors$$Lambda$ConcurrentHashMap$59), downstream);
}

$Collector* Collectors::groupingByConcurrent($Function* classifier, $Supplier* mapFactory, $Collector* downstream) {
	$init(Collectors);
	$useLocalObjectStack();
	$var($Supplier, downstreamSupplier, $nc(downstream)->supplier());
	$var($BiConsumer, downstreamAccumulator, downstream->accumulator());
	$var($BinaryOperator, merger, Collectors::mapMerger($(downstream->combiner())));
	$var($Supplier, mangledFactory, mapFactory);
	$var($BiConsumer, accumulator, nullptr);
	$init($Collector$Characteristics);
	if ($$nc(downstream->characteristics())->contains($Collector$Characteristics::CONCURRENT)) {
		$assign(accumulator, $new(Collectors$$Lambda$lambda$groupingByConcurrent$57$60, classifier, downstreamSupplier, downstreamAccumulator));
	} else {
		$assign(accumulator, $new(Collectors$$Lambda$lambda$groupingByConcurrent$59$61, classifier, downstreamSupplier, downstreamAccumulator));
	}
	if ($$nc(downstream->characteristics())->contains($Collector$Characteristics::IDENTITY_FINISH)) {
		return $new($Collectors$CollectorImpl, mangledFactory, accumulator, merger, Collectors::CH_CONCURRENT_ID);
	} else {
		$var($Function, downstreamFinisher, downstream->finisher());
		$var($Function, finisher, $new(Collectors$$Lambda$lambda$groupingByConcurrent$61$62, downstreamFinisher));
		return $new($Collectors$CollectorImpl, mangledFactory, accumulator, merger, finisher, Collectors::CH_CONCURRENT_NOID);
	}
}

$Collector* Collectors::partitioningBy($Predicate* predicate) {
	$init(Collectors);
	return partitioningBy(predicate, $(toList()));
}

$Collector* Collectors::partitioningBy($Predicate* predicate, $Collector* downstream) {
	$init(Collectors);
	$useLocalObjectStack();
	$var($BiConsumer, downstreamAccumulator, $nc(downstream)->accumulator());
	$var($BiConsumer, accumulator, $new(Collectors$$Lambda$lambda$partitioningBy$62$63, downstreamAccumulator, predicate));
	$var($BinaryOperator, op, downstream->combiner());
	$var($BinaryOperator, merger, $new(Collectors$$Lambda$lambda$partitioningBy$63$64, op));
	$var($Supplier, supplier, $new(Collectors$$Lambda$lambda$partitioningBy$64$65, downstream));
	$init($Collector$Characteristics);
	if ($$nc(downstream->characteristics())->contains($Collector$Characteristics::IDENTITY_FINISH)) {
		return $new($Collectors$CollectorImpl, supplier, accumulator, merger, Collectors::CH_ID);
	} else {
		$var($Function, finisher, $new(Collectors$$Lambda$lambda$partitioningBy$65$66, downstream));
		return $new($Collectors$CollectorImpl, supplier, accumulator, merger, finisher, Collectors::CH_NOID);
	}
}

$Collector* Collectors::toMap($Function* keyMapper, $Function* valueMapper) {
	$init(Collectors);
	$useLocalObjectStack();
	$var($Supplier, var$0, $new(Collectors$$Lambda$HashMap$56));
	$var($BiConsumer, var$1, uniqKeysMapAccumulator(keyMapper, valueMapper));
	return $new($Collectors$CollectorImpl, var$0, var$1, $(uniqKeysMapMerger()), Collectors::CH_ID);
}

$Collector* Collectors::toUnmodifiableMap($Function* keyMapper, $Function* valueMapper) {
	$init(Collectors);
	$useLocalObjectStack();
	$Objects::requireNonNull(keyMapper, "keyMapper"_s);
	$Objects::requireNonNull(valueMapper, "valueMapper"_s);
	$var($Collector, var$0, toMap(keyMapper, valueMapper));
	return collectingAndThen(var$0, $$new(Collectors$$Lambda$lambda$toUnmodifiableMap$66$67));
}

$Collector* Collectors::toMap($Function* keyMapper, $Function* valueMapper, $BinaryOperator* mergeFunction) {
	$init(Collectors);
	return toMap(keyMapper, valueMapper, mergeFunction, $$new(Collectors$$Lambda$HashMap$56));
}

$Collector* Collectors::toUnmodifiableMap($Function* keyMapper, $Function* valueMapper, $BinaryOperator* mergeFunction) {
	$init(Collectors);
	$useLocalObjectStack();
	$Objects::requireNonNull(keyMapper, "keyMapper"_s);
	$Objects::requireNonNull(valueMapper, "valueMapper"_s);
	$Objects::requireNonNull(mergeFunction, "mergeFunction"_s);
	$var($Collector, var$0, toMap(keyMapper, valueMapper, mergeFunction, $$new(Collectors$$Lambda$HashMap$56)));
	return collectingAndThen(var$0, $$new(Collectors$$Lambda$lambda$toUnmodifiableMap$67$68));
}

$Collector* Collectors::toMap($Function* keyMapper, $Function* valueMapper, $BinaryOperator* mergeFunction, $Supplier* mapFactory) {
	$init(Collectors);
	$useLocalObjectStack();
	$var($BiConsumer, accumulator, $new(Collectors$$Lambda$lambda$toMap$68$69, keyMapper, valueMapper, mergeFunction));
	return $new($Collectors$CollectorImpl, mapFactory, accumulator, $(mapMerger(mergeFunction)), Collectors::CH_ID);
}

$Collector* Collectors::toConcurrentMap($Function* keyMapper, $Function* valueMapper) {
	$init(Collectors);
	$useLocalObjectStack();
	$var($Supplier, var$0, $new(Collectors$$Lambda$ConcurrentHashMap$59));
	$var($BiConsumer, var$1, uniqKeysMapAccumulator(keyMapper, valueMapper));
	return $new($Collectors$CollectorImpl, var$0, var$1, $(uniqKeysMapMerger()), Collectors::CH_CONCURRENT_ID);
}

$Collector* Collectors::toConcurrentMap($Function* keyMapper, $Function* valueMapper, $BinaryOperator* mergeFunction) {
	$init(Collectors);
	return toConcurrentMap(keyMapper, valueMapper, mergeFunction, $$new(Collectors$$Lambda$ConcurrentHashMap$59));
}

$Collector* Collectors::toConcurrentMap($Function* keyMapper, $Function* valueMapper, $BinaryOperator* mergeFunction, $Supplier* mapFactory) {
	$init(Collectors);
	$useLocalObjectStack();
	$var($BiConsumer, accumulator, $new(Collectors$$Lambda$lambda$toConcurrentMap$69$70, keyMapper, valueMapper, mergeFunction));
	return $new($Collectors$CollectorImpl, mapFactory, accumulator, $(mapMerger(mergeFunction)), Collectors::CH_CONCURRENT_ID);
}

$Collector* Collectors::summarizingInt($ToIntFunction* mapper) {
	$init(Collectors);
	$useLocalObjectStack();
	$var($Supplier, var$0, $new(Collectors$$Lambda$IntSummaryStatistics$71));
	$var($BiConsumer, var$1, $new(Collectors$$Lambda$lambda$summarizingInt$70$72, mapper));
	return $new($Collectors$CollectorImpl, var$0, var$1, $$new(Collectors$$Lambda$lambda$summarizingInt$71$73), Collectors::CH_ID);
}

$Collector* Collectors::summarizingLong($ToLongFunction* mapper) {
	$init(Collectors);
	$useLocalObjectStack();
	$var($Supplier, var$0, $new(Collectors$$Lambda$LongSummaryStatistics$74));
	$var($BiConsumer, var$1, $new(Collectors$$Lambda$lambda$summarizingLong$72$75, mapper));
	return $new($Collectors$CollectorImpl, var$0, var$1, $$new(Collectors$$Lambda$lambda$summarizingLong$73$76), Collectors::CH_ID);
}

$Collector* Collectors::summarizingDouble($ToDoubleFunction* mapper) {
	$init(Collectors);
	$useLocalObjectStack();
	$var($Supplier, var$0, $new(Collectors$$Lambda$DoubleSummaryStatistics$77));
	$var($BiConsumer, var$1, $new(Collectors$$Lambda$lambda$summarizingDouble$74$78, mapper));
	return $new($Collectors$CollectorImpl, var$0, var$1, $$new(Collectors$$Lambda$lambda$summarizingDouble$75$79), Collectors::CH_ID);
}

$Collector* Collectors::teeing($Collector* downstream1, $Collector* downstream2, $BiFunction* merger) {
	$init(Collectors);
	return teeing0(downstream1, downstream2, merger);
}

$Collector* Collectors::teeing0($Collector* downstream1, $Collector* downstream2, $BiFunction* merger) {
	$init(Collectors);
	$useLocalObjectStack();
	$Objects::requireNonNull(downstream1, "downstream1"_s);
	$Objects::requireNonNull(downstream2, "downstream2"_s);
	$Objects::requireNonNull(merger, "merger"_s);
	$var($Supplier, c1Supplier, $cast($Supplier, $Objects::requireNonNull($($nc(downstream1)->supplier()), "downstream1 supplier"_s)));
	$var($Supplier, c2Supplier, $cast($Supplier, $Objects::requireNonNull($($nc(downstream2)->supplier()), "downstream2 supplier"_s)));
	$var($BiConsumer, c1Accumulator, $cast($BiConsumer, $Objects::requireNonNull($(downstream1->accumulator()), "downstream1 accumulator"_s)));
	$var($BiConsumer, c2Accumulator, $cast($BiConsumer, $Objects::requireNonNull($(downstream2->accumulator()), "downstream2 accumulator"_s)));
	$var($BinaryOperator, c1Combiner, $cast($BinaryOperator, $Objects::requireNonNull($(downstream1->combiner()), "downstream1 combiner"_s)));
	$var($BinaryOperator, c2Combiner, $cast($BinaryOperator, $Objects::requireNonNull($(downstream2->combiner()), "downstream2 combiner"_s)));
	$var($Function, c1Finisher, $cast($Function, $Objects::requireNonNull($(downstream1->finisher()), "downstream1 finisher"_s)));
	$var($Function, c2Finisher, $cast($Function, $Objects::requireNonNull($(downstream2->finisher()), "downstream2 finisher"_s)));
	$var($Set, characteristics, nullptr);
	$var($Set, c1Characteristics, downstream1->characteristics());
	$var($Set, c2Characteristics, downstream2->characteristics());
	bool var$0 = $nc(Collectors::CH_ID)->containsAll(c1Characteristics);
	if (var$0 || Collectors::CH_ID->containsAll(c2Characteristics)) {
		$assign(characteristics, Collectors::CH_NOID);
	} else {
		$load($Collector$Characteristics);
		$var($EnumSet, c, $EnumSet::noneOf($Collector$Characteristics::class$));
		$nc(c)->addAll(c1Characteristics);
		c->retainAll(c2Characteristics);
		$init($Collector$Characteristics);
		c->remove($Collector$Characteristics::IDENTITY_FINISH);
		$assign(characteristics, $Collections::unmodifiableSet(c));
	}
	{
	}
	$var($Supplier, var$1, $new(Collectors$$Lambda$lambda$teeing0$76$80, c1Supplier, c2Supplier, c1Accumulator, c2Accumulator, c1Combiner, c2Combiner, c1Finisher, c2Finisher, merger));
	$var($BiConsumer, var$2, $new(Collectors$$Lambda$add$81));
	$var($BinaryOperator, var$3, $new(Collectors$$Lambda$combine$82));
	return $new($Collectors$CollectorImpl, var$1, var$2, var$3, $$new(Collectors$$Lambda$get$83), characteristics);
}

$Collectors$1PairBox* Collectors::lambda$teeing0$76($Supplier* c1Supplier, $Supplier* c2Supplier, $BiConsumer* c1Accumulator, $BiConsumer* c2Accumulator, $BinaryOperator* c1Combiner, $BinaryOperator* c2Combiner, $Function* c1Finisher, $Function* c2Finisher, $BiFunction* merger) {
	$init(Collectors);
	return $new($Collectors$1PairBox, c1Supplier, c2Supplier, c1Accumulator, c2Accumulator, c1Combiner, c2Combiner, c1Finisher, c2Finisher, merger);
}

$DoubleSummaryStatistics* Collectors::lambda$summarizingDouble$75($DoubleSummaryStatistics* l, $DoubleSummaryStatistics* r) {
	$init(Collectors);
	$nc(l)->combine(r);
	return l;
}

void Collectors::lambda$summarizingDouble$74($ToDoubleFunction* mapper, $DoubleSummaryStatistics* r, Object$* t) {
	$init(Collectors);
	$nc(r)->accept($nc(mapper)->applyAsDouble(t));
}

$LongSummaryStatistics* Collectors::lambda$summarizingLong$73($LongSummaryStatistics* l, $LongSummaryStatistics* r) {
	$init(Collectors);
	$nc(l)->combine(r);
	return l;
}

void Collectors::lambda$summarizingLong$72($ToLongFunction* mapper, $LongSummaryStatistics* r, Object$* t) {
	$init(Collectors);
	$nc(r)->accept($nc(mapper)->applyAsLong(t));
}

$IntSummaryStatistics* Collectors::lambda$summarizingInt$71($IntSummaryStatistics* l, $IntSummaryStatistics* r) {
	$init(Collectors);
	$nc(l)->combine(r);
	return l;
}

void Collectors::lambda$summarizingInt$70($ToIntFunction* mapper, $IntSummaryStatistics* r, Object$* t) {
	$init(Collectors);
	$nc(r)->accept($nc(mapper)->applyAsInt(t));
}

void Collectors::lambda$toConcurrentMap$69($Function* keyMapper, $Function* valueMapper, $BinaryOperator* mergeFunction, $ConcurrentMap* map, Object$* element) {
	$init(Collectors);
	$useLocalObjectStack();
	$var($Object, var$0, $nc(keyMapper)->apply(element));
	$nc(map)->merge(var$0, $($nc(valueMapper)->apply(element)), mergeFunction);
}

void Collectors::lambda$toMap$68($Function* keyMapper, $Function* valueMapper, $BinaryOperator* mergeFunction, $Map* map, Object$* element) {
	$init(Collectors);
	$useLocalObjectStack();
	$var($Object, var$0, $nc(keyMapper)->apply(element));
	$nc(map)->merge(var$0, $($nc(valueMapper)->apply(element)), mergeFunction);
}

$Map* Collectors::lambda$toUnmodifiableMap$67($HashMap* map) {
	$init(Collectors);
	$useLocalObjectStack();
	return $Map::ofEntries($$cast($Map$EntryArray, $$nc($nc(map)->entrySet())->toArray($$new($Map$EntryArray, 0))));
}

$Map* Collectors::lambda$toUnmodifiableMap$66($Map* map) {
	$init(Collectors);
	$useLocalObjectStack();
	return $Map::ofEntries($$cast($Map$EntryArray, $$nc($nc(map)->entrySet())->toArray($$new($Map$EntryArray, 0))));
}

$Map* Collectors::lambda$partitioningBy$65($Collector* downstream, $Collectors$Partition* par) {
	$init(Collectors);
	$useLocalObjectStack();
	$var($Object, var$0, $$nc($nc(downstream)->finisher())->apply($nc(par)->forTrue));
	return $new($Collectors$Partition, var$0, $($$nc(downstream->finisher())->apply(par->forFalse)));
}

$Collectors$Partition* Collectors::lambda$partitioningBy$64($Collector* downstream) {
	$init(Collectors);
	$useLocalObjectStack();
	$var($Object, var$0, $$nc($nc(downstream)->supplier())->get());
	return $new($Collectors$Partition, var$0, $($$nc(downstream->supplier())->get()));
}

$Collectors$Partition* Collectors::lambda$partitioningBy$63($BinaryOperator* op, $Collectors$Partition* left, $Collectors$Partition* right) {
	$init(Collectors);
	$useLocalObjectStack();
	$var($Object, var$0, $nc(op)->apply($nc(left)->forTrue, $nc(right)->forTrue));
	return $new($Collectors$Partition, var$0, $(op->apply(left->forFalse, right->forFalse)));
}

void Collectors::lambda$partitioningBy$62($BiConsumer* downstreamAccumulator, $Predicate* predicate, $Collectors$Partition* result, Object$* t) {
	$init(Collectors);
	$nc(downstreamAccumulator)->accept($nc(predicate)->test(t) ? $nc(result)->forTrue : $nc(result)->forFalse, t);
}

$ConcurrentMap* Collectors::lambda$groupingByConcurrent$61($Function* downstreamFinisher, $ConcurrentMap* intermediate) {
	$init(Collectors);
	$useLocalObjectStack();
	$nc(intermediate)->replaceAll($$new(Collectors$$Lambda$lambda$groupingBy$54$84, downstreamFinisher));
	$var($ConcurrentMap, castResult, intermediate);
	return castResult;
}

void Collectors::lambda$groupingByConcurrent$59($Function* classifier, $Supplier* downstreamSupplier, $BiConsumer* downstreamAccumulator, $ConcurrentMap* m, Object$* t) {
	$init(Collectors);
	$useLocalObjectStack();
	$var($Object, key, $Objects::requireNonNull($($nc(classifier)->apply(t)), "element cannot be mapped to a null key"_s));
	$var($Object, resultContainer, $nc(m)->computeIfAbsent(key, $$new(Collectors$$Lambda$lambda$groupingBy$52$85, downstreamSupplier)));
	$synchronized(resultContainer) {
		$nc(downstreamAccumulator)->accept(resultContainer, t);
	}
}

void Collectors::lambda$groupingByConcurrent$57($Function* classifier, $Supplier* downstreamSupplier, $BiConsumer* downstreamAccumulator, $ConcurrentMap* m, Object$* t) {
	$init(Collectors);
	$useLocalObjectStack();
	$var($Object, key, $Objects::requireNonNull($($nc(classifier)->apply(t)), "element cannot be mapped to a null key"_s));
	$var($Object, resultContainer, $nc(m)->computeIfAbsent(key, $$new(Collectors$$Lambda$lambda$groupingBy$52$85, downstreamSupplier)));
	$nc(downstreamAccumulator)->accept(resultContainer, t);
}

$Map* Collectors::lambda$groupingBy$55($Function* downstreamFinisher, $Map* intermediate) {
	$init(Collectors);
	$useLocalObjectStack();
	$nc(intermediate)->replaceAll($$new(Collectors$$Lambda$lambda$groupingBy$54$84, downstreamFinisher));
	$var($Map, castResult, intermediate);
	return castResult;
}

$Object* Collectors::lambda$groupingBy$54($Function* downstreamFinisher, Object$* k, Object$* v) {
	$init(Collectors);
	return $nc(downstreamFinisher)->apply(v);
}

void Collectors::lambda$groupingBy$53($Function* classifier, $Supplier* downstreamSupplier, $BiConsumer* downstreamAccumulator, $Map* m, Object$* t) {
	$init(Collectors);
	$useLocalObjectStack();
	$var($Object, key, $Objects::requireNonNull($($nc(classifier)->apply(t)), "element cannot be mapped to a null key"_s));
	$var($Object, container, $nc(m)->computeIfAbsent(key, $$new(Collectors$$Lambda$lambda$groupingBy$52$85, downstreamSupplier)));
	$nc(downstreamAccumulator)->accept(container, t);
}

$Object* Collectors::lambda$groupingBy$52($Supplier* downstreamSupplier, Object$* k) {
	$init(Collectors);
	return $nc(downstreamSupplier)->get();
}

void Collectors::lambda$reducing$49($BinaryOperator* op, $Function* mapper, $ObjectArray* a, Object$* t) {
	$init(Collectors);
	$useLocalObjectStack();
	$nc(a)->set(0, $($nc(op)->apply($nc(a)->get(0), $($nc(mapper)->apply(t)))));
}

$Optional* Collectors::lambda$reducing$48($Collectors$1OptionalBox* a) {
	$init(Collectors);
	return $Optional::ofNullable($nc(a)->value);
}

$Collectors$1OptionalBox* Collectors::lambda$reducing$47($Collectors$1OptionalBox* a, $Collectors$1OptionalBox* b) {
	$init(Collectors);
	if ($nc(b)->present) {
		$nc(a)->accept(b->value);
	}
	return a;
}

$Collectors$1OptionalBox* Collectors::lambda$reducing$46($BinaryOperator* op) {
	$init(Collectors);
	return $new($Collectors$1OptionalBox, op);
}

$ObjectArray* Collectors::lambda$boxSupplier$45(Object$* identity) {
	$init(Collectors);
	return $new($ObjectArray, {identity});
}

$Object* Collectors::lambda$reducing$44($ObjectArray* a) {
	$init(Collectors);
	return $nc(a)->get(0);
}

$ObjectArray* Collectors::lambda$reducing$43($BinaryOperator* op, $ObjectArray* a, $ObjectArray* b) {
	$init(Collectors);
	$nc(a)->set(0, $($nc(op)->apply($nc(a)->get(0), $nc(b)->get(0))));
	return a;
}

void Collectors::lambda$reducing$42($BinaryOperator* op, $ObjectArray* a, Object$* t) {
	$init(Collectors);
	$nc(a)->set(0, $($nc(op)->apply($nc(a)->get(0), t)));
}

$Double* Collectors::lambda$averagingDouble$41($doubles* a) {
	$init(Collectors);
	return $Double::valueOf(($nc(a)->get(2) == 0) ? 0.0 : (computeFinalSum(a) / a->get(2)));
}

$doubles* Collectors::lambda$averagingDouble$40($doubles* a, $doubles* b) {
	$init(Collectors);
	sumWithCompensation(a, $nc(b)->get(0));
	sumWithCompensation(a, b->get(1));
	(*$nc(a))[2] += b->get(2);
	(*a)[3] += b->get(3);
	return a;
}

void Collectors::lambda$averagingDouble$39($ToDoubleFunction* mapper, $doubles* a, Object$* t) {
	$init(Collectors);
	double val = $nc(mapper)->applyAsDouble(t);
	sumWithCompensation(a, val);
	++(*$nc(a))[2];
	(*a)[3] += val;
}

$doubles* Collectors::lambda$averagingDouble$38() {
	$init(Collectors);
	return $new($doubles, 4);
}

void Collectors::lambda$averagingLong$35($ToLongFunction* mapper, $longs* a, Object$* t) {
	$init(Collectors);
	(*$nc(a))[0] += $nc(mapper)->applyAsLong(t);
	++(*a)[1];
}

$Double* Collectors::lambda$averagingInt$33($longs* a) {
	$init(Collectors);
	return $Double::valueOf(($nc(a)->get(1) == 0) ? 0.0 : (double)a->get(0) / a->get(1));
}

$longs* Collectors::lambda$averagingInt$32($longs* a, $longs* b) {
	$init(Collectors);
	(*$nc(a))[0] += $nc(b)->get(0);
	(*a)[1] += b->get(1);
	return a;
}

void Collectors::lambda$averagingInt$31($ToIntFunction* mapper, $longs* a, Object$* t) {
	$init(Collectors);
	(*$nc(a))[0] += $nc(mapper)->applyAsInt(t);
	++(*a)[1];
}

$longs* Collectors::lambda$averagingInt$30() {
	$init(Collectors);
	return $new($longs, 2);
}

$Double* Collectors::lambda$summingDouble$29($doubles* a) {
	$init(Collectors);
	return $Double::valueOf(computeFinalSum(a));
}

$doubles* Collectors::lambda$summingDouble$28($doubles* a, $doubles* b) {
	$init(Collectors);
	sumWithCompensation(a, $nc(b)->get(0));
	(*$nc(a))[2] += b->get(2);
	return sumWithCompensation(a, b->get(1));
}

void Collectors::lambda$summingDouble$27($ToDoubleFunction* mapper, $doubles* a, Object$* t) {
	$init(Collectors);
	double val = $nc(mapper)->applyAsDouble(t);
	sumWithCompensation(a, val);
	(*$nc(a))[2] += val;
}

$doubles* Collectors::lambda$summingDouble$26() {
	$init(Collectors);
	return $new($doubles, 3);
}

$Long* Collectors::lambda$summingLong$25($longs* a) {
	$init(Collectors);
	return $Long::valueOf($nc(a)->get(0));
}

$longs* Collectors::lambda$summingLong$24($longs* a, $longs* b) {
	$init(Collectors);
	(*$nc(a))[0] += $nc(b)->get(0);
	return a;
}

void Collectors::lambda$summingLong$23($ToLongFunction* mapper, $longs* a, Object$* t) {
	$init(Collectors);
	(*$nc(a))[0] += $nc(mapper)->applyAsLong(t);
}

$longs* Collectors::lambda$summingLong$22() {
	$init(Collectors);
	return $new($longs, 1);
}

$Integer* Collectors::lambda$summingInt$21($ints* a) {
	$init(Collectors);
	return $Integer::valueOf($nc(a)->get(0));
}

$ints* Collectors::lambda$summingInt$20($ints* a, $ints* b) {
	$init(Collectors);
	(*$nc(a))[0] += $nc(b)->get(0);
	return a;
}

void Collectors::lambda$summingInt$19($ToIntFunction* mapper, $ints* a, Object$* t) {
	$init(Collectors);
	(*$nc(a))[0] += $nc(mapper)->applyAsInt(t);
}

$ints* Collectors::lambda$summingInt$18() {
	$init(Collectors);
	return $new($ints, 1);
}

int64_t Collectors::lambda$counting$17(Object$* e) {
	$init(Collectors);
	return 1;
}

void Collectors::lambda$filtering$16($Predicate* predicate, $BiConsumer* downstreamAccumulator, Object$* r, Object$* t) {
	$init(Collectors);
	if ($nc(predicate)->test(t)) {
		$nc(downstreamAccumulator)->accept(r, t);
	}
}

void Collectors::lambda$flatMapping$15($Function* mapper, $BiConsumer* downstreamAccumulator, Object$* r, Object$* t) {
	$init(Collectors);
	$useLocalObjectStack();
	{
		$var($Stream, result, $cast($Stream, $nc(mapper)->apply(t)));
		$var($Throwable, var$0, nullptr);
		try {
			try {
				if (result != nullptr) {
					$$sure($Stream, result->sequential())->forEach($$new(Collectors$$Lambda$lambda$flatMapping$14$86, downstreamAccumulator, r));
				}
			} catch ($Throwable& t$) {
				if (result != nullptr) {
					try {
						result->close();
					} catch ($Throwable& x2) {
						t$->addSuppressed(x2);
					}
				}
				$throw(t$);
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			if (result != nullptr) {
				result->close();
			}
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void Collectors::lambda$flatMapping$14($BiConsumer* downstreamAccumulator, Object$* r, Object$* u) {
	$init(Collectors);
	$nc(downstreamAccumulator)->accept(r, u);
}

void Collectors::lambda$mapping$13($BiConsumer* downstreamAccumulator, $Function* mapper, Object$* r, Object$* t) {
	$init(Collectors);
	$nc(downstreamAccumulator)->accept(r, $($nc(mapper)->apply(t)));
}

$Map* Collectors::lambda$mapMerger$12($BinaryOperator* mergeFunction, $Map* m1, $Map* m2) {
	$init(Collectors);
	$useLocalObjectStack();
	{
		$var($Iterator, i$, $$nc($nc(m2)->entrySet())->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Map$Entry, e, $cast($Map$Entry, i$->next()));
			$var($Object, var$0, $nc(e)->getKey());
			$nc(m1)->merge(var$0, $(e->getValue()), mergeFunction);
		}
	}
	return m1;
}

$StringJoiner* Collectors::lambda$joining$11($CharSequence* delimiter, $CharSequence* prefix, $CharSequence* suffix) {
	$init(Collectors);
	return $new($StringJoiner, delimiter, prefix, suffix);
}

$StringBuilder* Collectors::lambda$joining$10($StringBuilder* r1, $StringBuilder* r2) {
	$init(Collectors);
	$nc(r1)->append($cast($CharSequence, r2));
	return r1;
}

$Set* Collectors::lambda$toUnmodifiableSet$9($HashSet* set) {
	$init(Collectors);
	return $Set::of($($nc(set)->toArray()));
}

$HashSet* Collectors::lambda$toSet$7($HashSet* left, $HashSet* right) {
	$init(Collectors);
	int32_t var$0 = $nc(left)->size();
	if (var$0 < $nc(right)->size()) {
		right->addAll($cast($AbstractCollection, left));
		return right;
	} else {
		left->addAll($cast($AbstractCollection, right));
		return left;
	}
}

$List* Collectors::lambda$toUnmodifiableList$6($ArrayList* list) {
	$init(Collectors);
	$useLocalObjectStack();
	$load($ArrayList);
	if ($nc($of(list))->getClass() == $ArrayList::class$) {
		return $$nc($SharedSecrets::getJavaUtilCollectionAccess())->listFromTrustedArray($(list->toArray()));
	} else {
		$throwNew($IllegalArgumentException);
	}
}

$ArrayList* Collectors::lambda$toList$4($ArrayList* left, $ArrayList* right) {
	$init(Collectors);
	$nc(left)->addAll($cast($AbstractCollection, right));
	return left;
}

$Collection* Collectors::lambda$toCollection$3($Collection* r1, $Collection* r2) {
	$init(Collectors);
	$nc(r1)->addAll(r2);
	return r1;
}

$Object* Collectors::lambda$castingIdentity$2(Object$* i) {
	$init(Collectors);
	return $of(i);
}

void Collectors::lambda$uniqKeysMapAccumulator$1($Function* keyMapper, $Function* valueMapper, $Map* map, Object$* element) {
	$init(Collectors);
	$useLocalObjectStack();
	$var($Object, k, $nc(keyMapper)->apply(element));
	$var($Object, v, $Objects::requireNonNull($($nc(valueMapper)->apply(element))));
	$var($Object, u, $nc(map)->putIfAbsent(k, v));
	if (u != nullptr) {
		$throw($(duplicateKeyException(k, u, v)));
	}
}

$Map* Collectors::lambda$uniqKeysMapMerger$0($Map* m1, $Map* m2) {
	$init(Collectors);
	$useLocalObjectStack();
	{
		$var($Iterator, i$, $$nc($nc(m2)->entrySet())->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Map$Entry, e, $cast($Map$Entry, i$->next()));
			{
				$var($Object, k, $nc(e)->getKey());
				$var($Object, v, $Objects::requireNonNull($(e->getValue())));
				$var($Object, u, $nc(m1)->putIfAbsent(k, v));
				if (u != nullptr) {
					$throw($(duplicateKeyException(k, u, v)));
				}
			}
		}
	}
	return m1;
}

void Collectors::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$init($Collector$Characteristics);
	$assignStatic(Collectors::CH_CONCURRENT_ID, $Collections::unmodifiableSet($($EnumSet::of($Collector$Characteristics::CONCURRENT, $Collector$Characteristics::UNORDERED, $Collector$Characteristics::IDENTITY_FINISH))));
	$assignStatic(Collectors::CH_CONCURRENT_NOID, $Collections::unmodifiableSet($($EnumSet::of($Collector$Characteristics::CONCURRENT, $Collector$Characteristics::UNORDERED))));
	$assignStatic(Collectors::CH_ID, $Collections::unmodifiableSet($($EnumSet::of($Collector$Characteristics::IDENTITY_FINISH))));
	$assignStatic(Collectors::CH_UNORDERED_ID, $Collections::unmodifiableSet($($EnumSet::of($Collector$Characteristics::UNORDERED, $Collector$Characteristics::IDENTITY_FINISH))));
	$assignStatic(Collectors::CH_NOID, $Collections::emptySet());
	$assignStatic(Collectors::CH_UNORDERED_NOID, $Collections::unmodifiableSet($($EnumSet::of($Collector$Characteristics::UNORDERED))));
}

Collectors::Collectors() {
}

$Class* Collectors::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("java.util.stream.Collectors$$Lambda$lambda$uniqKeysMapMerger$0")) {
			return Collectors$$Lambda$lambda$uniqKeysMapMerger$0::load$(name, initialize);
		}
		if (name->equals("java.util.stream.Collectors$$Lambda$lambda$uniqKeysMapAccumulator$1$1")) {
			return Collectors$$Lambda$lambda$uniqKeysMapAccumulator$1$1::load$(name, initialize);
		}
		if (name->equals("java.util.stream.Collectors$$Lambda$lambda$castingIdentity$2$2")) {
			return Collectors$$Lambda$lambda$castingIdentity$2$2::load$(name, initialize);
		}
		if (name->equals("java.util.stream.Collectors$$Lambda$add$3")) {
			return Collectors$$Lambda$add$3::load$(name, initialize);
		}
		if (name->equals("java.util.stream.Collectors$$Lambda$lambda$toCollection$3$4")) {
			return Collectors$$Lambda$lambda$toCollection$3$4::load$(name, initialize);
		}
		if (name->equals("java.util.stream.Collectors$$Lambda$ArrayList$5")) {
			return Collectors$$Lambda$ArrayList$5::load$(name, initialize);
		}
		if (name->equals("java.util.stream.Collectors$$Lambda$add$6")) {
			return Collectors$$Lambda$add$6::load$(name, initialize);
		}
		if (name->equals("java.util.stream.Collectors$$Lambda$lambda$toList$4$7")) {
			return Collectors$$Lambda$lambda$toList$4$7::load$(name, initialize);
		}
		if (name->equals("java.util.stream.Collectors$$Lambda$lambda$toUnmodifiableList$6$8")) {
			return Collectors$$Lambda$lambda$toUnmodifiableList$6$8::load$(name, initialize);
		}
		if (name->equals("java.util.stream.Collectors$$Lambda$HashSet$9")) {
			return Collectors$$Lambda$HashSet$9::load$(name, initialize);
		}
		if (name->equals("java.util.stream.Collectors$$Lambda$add$10")) {
			return Collectors$$Lambda$add$10::load$(name, initialize);
		}
		if (name->equals("java.util.stream.Collectors$$Lambda$lambda$toSet$7$11")) {
			return Collectors$$Lambda$lambda$toSet$7$11::load$(name, initialize);
		}
		if (name->equals("java.util.stream.Collectors$$Lambda$lambda$toUnmodifiableSet$9$12")) {
			return Collectors$$Lambda$lambda$toUnmodifiableSet$9$12::load$(name, initialize);
		}
		if (name->equals("java.util.stream.Collectors$$Lambda$StringBuilder$13")) {
			return Collectors$$Lambda$StringBuilder$13::load$(name, initialize);
		}
		if (name->equals("java.util.stream.Collectors$$Lambda$append$14")) {
			return Collectors$$Lambda$append$14::load$(name, initialize);
		}
		if (name->equals("java.util.stream.Collectors$$Lambda$lambda$joining$10$15")) {
			return Collectors$$Lambda$lambda$joining$10$15::load$(name, initialize);
		}
		if (name->equals("java.util.stream.Collectors$$Lambda$toString$16")) {
			return Collectors$$Lambda$toString$16::load$(name, initialize);
		}
		if (name->equals("java.util.stream.Collectors$$Lambda$lambda$joining$11$17")) {
			return Collectors$$Lambda$lambda$joining$11$17::load$(name, initialize);
		}
		if (name->equals("java.util.stream.Collectors$$Lambda$add$18")) {
			return Collectors$$Lambda$add$18::load$(name, initialize);
		}
		if (name->equals("java.util.stream.Collectors$$Lambda$merge$19")) {
			return Collectors$$Lambda$merge$19::load$(name, initialize);
		}
		if (name->equals("java.util.stream.Collectors$$Lambda$toString$20")) {
			return Collectors$$Lambda$toString$20::load$(name, initialize);
		}
		if (name->equals("java.util.stream.Collectors$$Lambda$lambda$mapMerger$12$21")) {
			return Collectors$$Lambda$lambda$mapMerger$12$21::load$(name, initialize);
		}
		if (name->equals("java.util.stream.Collectors$$Lambda$lambda$mapping$13$22")) {
			return Collectors$$Lambda$lambda$mapping$13$22::load$(name, initialize);
		}
		if (name->equals("java.util.stream.Collectors$$Lambda$lambda$flatMapping$15$23")) {
			return Collectors$$Lambda$lambda$flatMapping$15$23::load$(name, initialize);
		}
		if (name->equals("java.util.stream.Collectors$$Lambda$lambda$filtering$16$24")) {
			return Collectors$$Lambda$lambda$filtering$16$24::load$(name, initialize);
		}
		if (name->equals("java.util.stream.Collectors$$Lambda$lambda$counting$17$25")) {
			return Collectors$$Lambda$lambda$counting$17$25::load$(name, initialize);
		}
		if (name->equals("java.util.stream.Collectors$$Lambda$lambda$summingInt$18$26")) {
			return Collectors$$Lambda$lambda$summingInt$18$26::load$(name, initialize);
		}
		if (name->equals("java.util.stream.Collectors$$Lambda$lambda$summingInt$19$27")) {
			return Collectors$$Lambda$lambda$summingInt$19$27::load$(name, initialize);
		}
		if (name->equals("java.util.stream.Collectors$$Lambda$lambda$summingInt$20$28")) {
			return Collectors$$Lambda$lambda$summingInt$20$28::load$(name, initialize);
		}
		if (name->equals("java.util.stream.Collectors$$Lambda$lambda$summingInt$21$29")) {
			return Collectors$$Lambda$lambda$summingInt$21$29::load$(name, initialize);
		}
		if (name->equals("java.util.stream.Collectors$$Lambda$lambda$summingLong$22$30")) {
			return Collectors$$Lambda$lambda$summingLong$22$30::load$(name, initialize);
		}
		if (name->equals("java.util.stream.Collectors$$Lambda$lambda$summingLong$23$31")) {
			return Collectors$$Lambda$lambda$summingLong$23$31::load$(name, initialize);
		}
		if (name->equals("java.util.stream.Collectors$$Lambda$lambda$summingLong$24$32")) {
			return Collectors$$Lambda$lambda$summingLong$24$32::load$(name, initialize);
		}
		if (name->equals("java.util.stream.Collectors$$Lambda$lambda$summingLong$25$33")) {
			return Collectors$$Lambda$lambda$summingLong$25$33::load$(name, initialize);
		}
		if (name->equals("java.util.stream.Collectors$$Lambda$lambda$summingDouble$26$34")) {
			return Collectors$$Lambda$lambda$summingDouble$26$34::load$(name, initialize);
		}
		if (name->equals("java.util.stream.Collectors$$Lambda$lambda$summingDouble$27$35")) {
			return Collectors$$Lambda$lambda$summingDouble$27$35::load$(name, initialize);
		}
		if (name->equals("java.util.stream.Collectors$$Lambda$lambda$summingDouble$28$36")) {
			return Collectors$$Lambda$lambda$summingDouble$28$36::load$(name, initialize);
		}
		if (name->equals("java.util.stream.Collectors$$Lambda$lambda$summingDouble$29$37")) {
			return Collectors$$Lambda$lambda$summingDouble$29$37::load$(name, initialize);
		}
		if (name->equals("java.util.stream.Collectors$$Lambda$lambda$averagingInt$30$38")) {
			return Collectors$$Lambda$lambda$averagingInt$30$38::load$(name, initialize);
		}
		if (name->equals("java.util.stream.Collectors$$Lambda$lambda$averagingInt$31$39")) {
			return Collectors$$Lambda$lambda$averagingInt$31$39::load$(name, initialize);
		}
		if (name->equals("java.util.stream.Collectors$$Lambda$lambda$averagingInt$32$40")) {
			return Collectors$$Lambda$lambda$averagingInt$32$40::load$(name, initialize);
		}
		if (name->equals("java.util.stream.Collectors$$Lambda$lambda$averagingInt$33$41")) {
			return Collectors$$Lambda$lambda$averagingInt$33$41::load$(name, initialize);
		}
		if (name->equals("java.util.stream.Collectors$$Lambda$lambda$averagingLong$35$42")) {
			return Collectors$$Lambda$lambda$averagingLong$35$42::load$(name, initialize);
		}
		if (name->equals("java.util.stream.Collectors$$Lambda$lambda$averagingDouble$38$43")) {
			return Collectors$$Lambda$lambda$averagingDouble$38$43::load$(name, initialize);
		}
		if (name->equals("java.util.stream.Collectors$$Lambda$lambda$averagingDouble$39$44")) {
			return Collectors$$Lambda$lambda$averagingDouble$39$44::load$(name, initialize);
		}
		if (name->equals("java.util.stream.Collectors$$Lambda$lambda$averagingDouble$40$45")) {
			return Collectors$$Lambda$lambda$averagingDouble$40$45::load$(name, initialize);
		}
		if (name->equals("java.util.stream.Collectors$$Lambda$lambda$averagingDouble$41$46")) {
			return Collectors$$Lambda$lambda$averagingDouble$41$46::load$(name, initialize);
		}
		if (name->equals("java.util.stream.Collectors$$Lambda$lambda$reducing$42$47")) {
			return Collectors$$Lambda$lambda$reducing$42$47::load$(name, initialize);
		}
		if (name->equals("java.util.stream.Collectors$$Lambda$lambda$reducing$43$48")) {
			return Collectors$$Lambda$lambda$reducing$43$48::load$(name, initialize);
		}
		if (name->equals("java.util.stream.Collectors$$Lambda$lambda$reducing$44$49")) {
			return Collectors$$Lambda$lambda$reducing$44$49::load$(name, initialize);
		}
		if (name->equals("java.util.stream.Collectors$$Lambda$lambda$boxSupplier$45$50")) {
			return Collectors$$Lambda$lambda$boxSupplier$45$50::load$(name, initialize);
		}
		if (name->equals("java.util.stream.Collectors$$Lambda$lambda$reducing$46$51")) {
			return Collectors$$Lambda$lambda$reducing$46$51::load$(name, initialize);
		}
		if (name->equals("java.util.stream.Collectors$$Lambda$accept$52")) {
			return Collectors$$Lambda$accept$52::load$(name, initialize);
		}
		if (name->equals("java.util.stream.Collectors$$Lambda$lambda$reducing$47$53")) {
			return Collectors$$Lambda$lambda$reducing$47$53::load$(name, initialize);
		}
		if (name->equals("java.util.stream.Collectors$$Lambda$lambda$reducing$48$54")) {
			return Collectors$$Lambda$lambda$reducing$48$54::load$(name, initialize);
		}
		if (name->equals("java.util.stream.Collectors$$Lambda$lambda$reducing$49$55")) {
			return Collectors$$Lambda$lambda$reducing$49$55::load$(name, initialize);
		}
		if (name->equals("java.util.stream.Collectors$$Lambda$HashMap$56")) {
			return Collectors$$Lambda$HashMap$56::load$(name, initialize);
		}
		if (name->equals("java.util.stream.Collectors$$Lambda$lambda$groupingBy$53$57")) {
			return Collectors$$Lambda$lambda$groupingBy$53$57::load$(name, initialize);
		}
		if (name->equals("java.util.stream.Collectors$$Lambda$lambda$groupingBy$55$58")) {
			return Collectors$$Lambda$lambda$groupingBy$55$58::load$(name, initialize);
		}
		if (name->equals("java.util.stream.Collectors$$Lambda$ConcurrentHashMap$59")) {
			return Collectors$$Lambda$ConcurrentHashMap$59::load$(name, initialize);
		}
		if (name->equals("java.util.stream.Collectors$$Lambda$lambda$groupingByConcurrent$57$60")) {
			return Collectors$$Lambda$lambda$groupingByConcurrent$57$60::load$(name, initialize);
		}
		if (name->equals("java.util.stream.Collectors$$Lambda$lambda$groupingByConcurrent$59$61")) {
			return Collectors$$Lambda$lambda$groupingByConcurrent$59$61::load$(name, initialize);
		}
		if (name->equals("java.util.stream.Collectors$$Lambda$lambda$groupingByConcurrent$61$62")) {
			return Collectors$$Lambda$lambda$groupingByConcurrent$61$62::load$(name, initialize);
		}
		if (name->equals("java.util.stream.Collectors$$Lambda$lambda$partitioningBy$62$63")) {
			return Collectors$$Lambda$lambda$partitioningBy$62$63::load$(name, initialize);
		}
		if (name->equals("java.util.stream.Collectors$$Lambda$lambda$partitioningBy$63$64")) {
			return Collectors$$Lambda$lambda$partitioningBy$63$64::load$(name, initialize);
		}
		if (name->equals("java.util.stream.Collectors$$Lambda$lambda$partitioningBy$64$65")) {
			return Collectors$$Lambda$lambda$partitioningBy$64$65::load$(name, initialize);
		}
		if (name->equals("java.util.stream.Collectors$$Lambda$lambda$partitioningBy$65$66")) {
			return Collectors$$Lambda$lambda$partitioningBy$65$66::load$(name, initialize);
		}
		if (name->equals("java.util.stream.Collectors$$Lambda$lambda$toUnmodifiableMap$66$67")) {
			return Collectors$$Lambda$lambda$toUnmodifiableMap$66$67::load$(name, initialize);
		}
		if (name->equals("java.util.stream.Collectors$$Lambda$lambda$toUnmodifiableMap$67$68")) {
			return Collectors$$Lambda$lambda$toUnmodifiableMap$67$68::load$(name, initialize);
		}
		if (name->equals("java.util.stream.Collectors$$Lambda$lambda$toMap$68$69")) {
			return Collectors$$Lambda$lambda$toMap$68$69::load$(name, initialize);
		}
		if (name->equals("java.util.stream.Collectors$$Lambda$lambda$toConcurrentMap$69$70")) {
			return Collectors$$Lambda$lambda$toConcurrentMap$69$70::load$(name, initialize);
		}
		if (name->equals("java.util.stream.Collectors$$Lambda$IntSummaryStatistics$71")) {
			return Collectors$$Lambda$IntSummaryStatistics$71::load$(name, initialize);
		}
		if (name->equals("java.util.stream.Collectors$$Lambda$lambda$summarizingInt$70$72")) {
			return Collectors$$Lambda$lambda$summarizingInt$70$72::load$(name, initialize);
		}
		if (name->equals("java.util.stream.Collectors$$Lambda$lambda$summarizingInt$71$73")) {
			return Collectors$$Lambda$lambda$summarizingInt$71$73::load$(name, initialize);
		}
		if (name->equals("java.util.stream.Collectors$$Lambda$LongSummaryStatistics$74")) {
			return Collectors$$Lambda$LongSummaryStatistics$74::load$(name, initialize);
		}
		if (name->equals("java.util.stream.Collectors$$Lambda$lambda$summarizingLong$72$75")) {
			return Collectors$$Lambda$lambda$summarizingLong$72$75::load$(name, initialize);
		}
		if (name->equals("java.util.stream.Collectors$$Lambda$lambda$summarizingLong$73$76")) {
			return Collectors$$Lambda$lambda$summarizingLong$73$76::load$(name, initialize);
		}
		if (name->equals("java.util.stream.Collectors$$Lambda$DoubleSummaryStatistics$77")) {
			return Collectors$$Lambda$DoubleSummaryStatistics$77::load$(name, initialize);
		}
		if (name->equals("java.util.stream.Collectors$$Lambda$lambda$summarizingDouble$74$78")) {
			return Collectors$$Lambda$lambda$summarizingDouble$74$78::load$(name, initialize);
		}
		if (name->equals("java.util.stream.Collectors$$Lambda$lambda$summarizingDouble$75$79")) {
			return Collectors$$Lambda$lambda$summarizingDouble$75$79::load$(name, initialize);
		}
		if (name->equals("java.util.stream.Collectors$$Lambda$lambda$teeing0$76$80")) {
			return Collectors$$Lambda$lambda$teeing0$76$80::load$(name, initialize);
		}
		if (name->equals("java.util.stream.Collectors$$Lambda$add$81")) {
			return Collectors$$Lambda$add$81::load$(name, initialize);
		}
		if (name->equals("java.util.stream.Collectors$$Lambda$combine$82")) {
			return Collectors$$Lambda$combine$82::load$(name, initialize);
		}
		if (name->equals("java.util.stream.Collectors$$Lambda$get$83")) {
			return Collectors$$Lambda$get$83::load$(name, initialize);
		}
		if (name->equals("java.util.stream.Collectors$$Lambda$lambda$groupingBy$54$84")) {
			return Collectors$$Lambda$lambda$groupingBy$54$84::load$(name, initialize);
		}
		if (name->equals("java.util.stream.Collectors$$Lambda$lambda$groupingBy$52$85")) {
			return Collectors$$Lambda$lambda$groupingBy$52$85::load$(name, initialize);
		}
		if (name->equals("java.util.stream.Collectors$$Lambda$lambda$flatMapping$14$86")) {
			return Collectors$$Lambda$lambda$flatMapping$14$86::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"CH_CONCURRENT_ID", "Ljava/util/Set;", "Ljava/util/Set<Ljava/util/stream/Collector$Characteristics;>;", $STATIC | $FINAL, $staticField(Collectors, CH_CONCURRENT_ID)},
		{"CH_CONCURRENT_NOID", "Ljava/util/Set;", "Ljava/util/Set<Ljava/util/stream/Collector$Characteristics;>;", $STATIC | $FINAL, $staticField(Collectors, CH_CONCURRENT_NOID)},
		{"CH_ID", "Ljava/util/Set;", "Ljava/util/Set<Ljava/util/stream/Collector$Characteristics;>;", $STATIC | $FINAL, $staticField(Collectors, CH_ID)},
		{"CH_UNORDERED_ID", "Ljava/util/Set;", "Ljava/util/Set<Ljava/util/stream/Collector$Characteristics;>;", $STATIC | $FINAL, $staticField(Collectors, CH_UNORDERED_ID)},
		{"CH_NOID", "Ljava/util/Set;", "Ljava/util/Set<Ljava/util/stream/Collector$Characteristics;>;", $STATIC | $FINAL, $staticField(Collectors, CH_NOID)},
		{"CH_UNORDERED_NOID", "Ljava/util/Set;", "Ljava/util/Set<Ljava/util/stream/Collector$Characteristics;>;", $STATIC | $FINAL, $staticField(Collectors, CH_UNORDERED_NOID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(Collectors, init$, void)},
		{"averagingDouble", "(Ljava/util/function/ToDoubleFunction;)Ljava/util/stream/Collector;", "<T:Ljava/lang/Object;>(Ljava/util/function/ToDoubleFunction<-TT;>;)Ljava/util/stream/Collector<TT;*Ljava/lang/Double;>;", $PUBLIC | $STATIC, $staticMethod(Collectors, averagingDouble, $Collector*, $ToDoubleFunction*)},
		{"averagingInt", "(Ljava/util/function/ToIntFunction;)Ljava/util/stream/Collector;", "<T:Ljava/lang/Object;>(Ljava/util/function/ToIntFunction<-TT;>;)Ljava/util/stream/Collector<TT;*Ljava/lang/Double;>;", $PUBLIC | $STATIC, $staticMethod(Collectors, averagingInt, $Collector*, $ToIntFunction*)},
		{"averagingLong", "(Ljava/util/function/ToLongFunction;)Ljava/util/stream/Collector;", "<T:Ljava/lang/Object;>(Ljava/util/function/ToLongFunction<-TT;>;)Ljava/util/stream/Collector<TT;*Ljava/lang/Double;>;", $PUBLIC | $STATIC, $staticMethod(Collectors, averagingLong, $Collector*, $ToLongFunction*)},
		{"boxSupplier", "(Ljava/lang/Object;)Ljava/util/function/Supplier;", "<T:Ljava/lang/Object;>(TT;)Ljava/util/function/Supplier<[TT;>;", $PRIVATE | $STATIC, $staticMethod(Collectors, boxSupplier, $Supplier*, Object$*)},
		{"castingIdentity", "()Ljava/util/function/Function;", "<I:Ljava/lang/Object;R:Ljava/lang/Object;>()Ljava/util/function/Function<TI;TR;>;", $PRIVATE | $STATIC, $staticMethod(Collectors, castingIdentity, $Function*)},
		{"collectingAndThen", "(Ljava/util/stream/Collector;Ljava/util/function/Function;)Ljava/util/stream/Collector;", "<T:Ljava/lang/Object;A:Ljava/lang/Object;R:Ljava/lang/Object;RR:Ljava/lang/Object;>(Ljava/util/stream/Collector<TT;TA;TR;>;Ljava/util/function/Function<TR;TRR;>;)Ljava/util/stream/Collector<TT;TA;TRR;>;", $PUBLIC | $STATIC, $staticMethod(Collectors, collectingAndThen, $Collector*, $Collector*, $Function*)},
		{"computeFinalSum", "([D)D", nullptr, $STATIC, $staticMethod(Collectors, computeFinalSum, double, $doubles*)},
		{"counting", "()Ljava/util/stream/Collector;", "<T:Ljava/lang/Object;>()Ljava/util/stream/Collector<TT;*Ljava/lang/Long;>;", $PUBLIC | $STATIC, $staticMethod(Collectors, counting, $Collector*)},
		{"duplicateKeyException", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/IllegalStateException;", nullptr, $PRIVATE | $STATIC, $staticMethod(Collectors, duplicateKeyException, $IllegalStateException*, Object$*, Object$*, Object$*)},
		{"filtering", "(Ljava/util/function/Predicate;Ljava/util/stream/Collector;)Ljava/util/stream/Collector;", "<T:Ljava/lang/Object;A:Ljava/lang/Object;R:Ljava/lang/Object;>(Ljava/util/function/Predicate<-TT;>;Ljava/util/stream/Collector<-TT;TA;TR;>;)Ljava/util/stream/Collector<TT;*TR;>;", $PUBLIC | $STATIC, $staticMethod(Collectors, filtering, $Collector*, $Predicate*, $Collector*)},
		{"flatMapping", "(Ljava/util/function/Function;Ljava/util/stream/Collector;)Ljava/util/stream/Collector;", "<T:Ljava/lang/Object;U:Ljava/lang/Object;A:Ljava/lang/Object;R:Ljava/lang/Object;>(Ljava/util/function/Function<-TT;+Ljava/util/stream/Stream<+TU;>;>;Ljava/util/stream/Collector<-TU;TA;TR;>;)Ljava/util/stream/Collector<TT;*TR;>;", $PUBLIC | $STATIC, $staticMethod(Collectors, flatMapping, $Collector*, $Function*, $Collector*)},
		{"groupingBy", "(Ljava/util/function/Function;)Ljava/util/stream/Collector;", "<T:Ljava/lang/Object;K:Ljava/lang/Object;>(Ljava/util/function/Function<-TT;+TK;>;)Ljava/util/stream/Collector<TT;*Ljava/util/Map<TK;Ljava/util/List<TT;>;>;>;", $PUBLIC | $STATIC, $staticMethod(Collectors, groupingBy, $Collector*, $Function*)},
		{"groupingBy", "(Ljava/util/function/Function;Ljava/util/stream/Collector;)Ljava/util/stream/Collector;", "<T:Ljava/lang/Object;K:Ljava/lang/Object;A:Ljava/lang/Object;D:Ljava/lang/Object;>(Ljava/util/function/Function<-TT;+TK;>;Ljava/util/stream/Collector<-TT;TA;TD;>;)Ljava/util/stream/Collector<TT;*Ljava/util/Map<TK;TD;>;>;", $PUBLIC | $STATIC, $staticMethod(Collectors, groupingBy, $Collector*, $Function*, $Collector*)},
		{"groupingBy", "(Ljava/util/function/Function;Ljava/util/function/Supplier;Ljava/util/stream/Collector;)Ljava/util/stream/Collector;", "<T:Ljava/lang/Object;K:Ljava/lang/Object;D:Ljava/lang/Object;A:Ljava/lang/Object;M::Ljava/util/Map<TK;TD;>;>(Ljava/util/function/Function<-TT;+TK;>;Ljava/util/function/Supplier<TM;>;Ljava/util/stream/Collector<-TT;TA;TD;>;)Ljava/util/stream/Collector<TT;*TM;>;", $PUBLIC | $STATIC, $staticMethod(Collectors, groupingBy, $Collector*, $Function*, $Supplier*, $Collector*)},
		{"groupingByConcurrent", "(Ljava/util/function/Function;)Ljava/util/stream/Collector;", "<T:Ljava/lang/Object;K:Ljava/lang/Object;>(Ljava/util/function/Function<-TT;+TK;>;)Ljava/util/stream/Collector<TT;*Ljava/util/concurrent/ConcurrentMap<TK;Ljava/util/List<TT;>;>;>;", $PUBLIC | $STATIC, $staticMethod(Collectors, groupingByConcurrent, $Collector*, $Function*)},
		{"groupingByConcurrent", "(Ljava/util/function/Function;Ljava/util/stream/Collector;)Ljava/util/stream/Collector;", "<T:Ljava/lang/Object;K:Ljava/lang/Object;A:Ljava/lang/Object;D:Ljava/lang/Object;>(Ljava/util/function/Function<-TT;+TK;>;Ljava/util/stream/Collector<-TT;TA;TD;>;)Ljava/util/stream/Collector<TT;*Ljava/util/concurrent/ConcurrentMap<TK;TD;>;>;", $PUBLIC | $STATIC, $staticMethod(Collectors, groupingByConcurrent, $Collector*, $Function*, $Collector*)},
		{"groupingByConcurrent", "(Ljava/util/function/Function;Ljava/util/function/Supplier;Ljava/util/stream/Collector;)Ljava/util/stream/Collector;", "<T:Ljava/lang/Object;K:Ljava/lang/Object;A:Ljava/lang/Object;D:Ljava/lang/Object;M::Ljava/util/concurrent/ConcurrentMap<TK;TD;>;>(Ljava/util/function/Function<-TT;+TK;>;Ljava/util/function/Supplier<TM;>;Ljava/util/stream/Collector<-TT;TA;TD;>;)Ljava/util/stream/Collector<TT;*TM;>;", $PUBLIC | $STATIC, $staticMethod(Collectors, groupingByConcurrent, $Collector*, $Function*, $Supplier*, $Collector*)},
		{"joining", "()Ljava/util/stream/Collector;", "()Ljava/util/stream/Collector<Ljava/lang/CharSequence;*Ljava/lang/String;>;", $PUBLIC | $STATIC, $staticMethod(Collectors, joining, $Collector*)},
		{"joining", "(Ljava/lang/CharSequence;)Ljava/util/stream/Collector;", "(Ljava/lang/CharSequence;)Ljava/util/stream/Collector<Ljava/lang/CharSequence;*Ljava/lang/String;>;", $PUBLIC | $STATIC, $staticMethod(Collectors, joining, $Collector*, $CharSequence*)},
		{"joining", "(Ljava/lang/CharSequence;Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/util/stream/Collector;", "(Ljava/lang/CharSequence;Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/util/stream/Collector<Ljava/lang/CharSequence;*Ljava/lang/String;>;", $PUBLIC | $STATIC, $staticMethod(Collectors, joining, $Collector*, $CharSequence*, $CharSequence*, $CharSequence*)},
		{"lambda$averagingDouble$38", "()[D", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Collectors, lambda$averagingDouble$38, $doubles*)},
		{"lambda$averagingDouble$39", "(Ljava/util/function/ToDoubleFunction;[DLjava/lang/Object;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Collectors, lambda$averagingDouble$39, void, $ToDoubleFunction*, $doubles*, Object$*)},
		{"lambda$averagingDouble$40", "([D[D)[D", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Collectors, lambda$averagingDouble$40, $doubles*, $doubles*, $doubles*)},
		{"lambda$averagingDouble$41", "([D)Ljava/lang/Double;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Collectors, lambda$averagingDouble$41, $Double*, $doubles*)},
		{"lambda$averagingInt$30", "()[J", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Collectors, lambda$averagingInt$30, $longs*)},
		{"lambda$averagingInt$31", "(Ljava/util/function/ToIntFunction;[JLjava/lang/Object;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Collectors, lambda$averagingInt$31, void, $ToIntFunction*, $longs*, Object$*)},
		{"lambda$averagingInt$32", "([J[J)[J", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Collectors, lambda$averagingInt$32, $longs*, $longs*, $longs*)},
		{"lambda$averagingInt$33", "([J)Ljava/lang/Double;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Collectors, lambda$averagingInt$33, $Double*, $longs*)},
		{"lambda$averagingLong$35", "(Ljava/util/function/ToLongFunction;[JLjava/lang/Object;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Collectors, lambda$averagingLong$35, void, $ToLongFunction*, $longs*, Object$*)},
		{"lambda$boxSupplier$45", "(Ljava/lang/Object;)[Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Collectors, lambda$boxSupplier$45, $ObjectArray*, Object$*)},
		{"lambda$castingIdentity$2", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Collectors, lambda$castingIdentity$2, $Object*, Object$*)},
		{"lambda$counting$17", "(Ljava/lang/Object;)J", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Collectors, lambda$counting$17, int64_t, Object$*)},
		{"lambda$filtering$16", "(Ljava/util/function/Predicate;Ljava/util/function/BiConsumer;Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Collectors, lambda$filtering$16, void, $Predicate*, $BiConsumer*, Object$*, Object$*)},
		{"lambda$flatMapping$14", "(Ljava/util/function/BiConsumer;Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Collectors, lambda$flatMapping$14, void, $BiConsumer*, Object$*, Object$*)},
		{"lambda$flatMapping$15", "(Ljava/util/function/Function;Ljava/util/function/BiConsumer;Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Collectors, lambda$flatMapping$15, void, $Function*, $BiConsumer*, Object$*, Object$*)},
		{"lambda$groupingBy$52", "(Ljava/util/function/Supplier;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Collectors, lambda$groupingBy$52, $Object*, $Supplier*, Object$*)},
		{"lambda$groupingBy$53", "(Ljava/util/function/Function;Ljava/util/function/Supplier;Ljava/util/function/BiConsumer;Ljava/util/Map;Ljava/lang/Object;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Collectors, lambda$groupingBy$53, void, $Function*, $Supplier*, $BiConsumer*, $Map*, Object$*)},
		{"lambda$groupingBy$54", "(Ljava/util/function/Function;Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Collectors, lambda$groupingBy$54, $Object*, $Function*, Object$*, Object$*)},
		{"lambda$groupingBy$55", "(Ljava/util/function/Function;Ljava/util/Map;)Ljava/util/Map;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Collectors, lambda$groupingBy$55, $Map*, $Function*, $Map*)},
		{"lambda$groupingByConcurrent$57", "(Ljava/util/function/Function;Ljava/util/function/Supplier;Ljava/util/function/BiConsumer;Ljava/util/concurrent/ConcurrentMap;Ljava/lang/Object;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Collectors, lambda$groupingByConcurrent$57, void, $Function*, $Supplier*, $BiConsumer*, $ConcurrentMap*, Object$*)},
		{"lambda$groupingByConcurrent$59", "(Ljava/util/function/Function;Ljava/util/function/Supplier;Ljava/util/function/BiConsumer;Ljava/util/concurrent/ConcurrentMap;Ljava/lang/Object;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Collectors, lambda$groupingByConcurrent$59, void, $Function*, $Supplier*, $BiConsumer*, $ConcurrentMap*, Object$*)},
		{"lambda$groupingByConcurrent$61", "(Ljava/util/function/Function;Ljava/util/concurrent/ConcurrentMap;)Ljava/util/concurrent/ConcurrentMap;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Collectors, lambda$groupingByConcurrent$61, $ConcurrentMap*, $Function*, $ConcurrentMap*)},
		{"lambda$joining$10", "(Ljava/lang/StringBuilder;Ljava/lang/StringBuilder;)Ljava/lang/StringBuilder;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Collectors, lambda$joining$10, $StringBuilder*, $StringBuilder*, $StringBuilder*)},
		{"lambda$joining$11", "(Ljava/lang/CharSequence;Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/util/StringJoiner;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Collectors, lambda$joining$11, $StringJoiner*, $CharSequence*, $CharSequence*, $CharSequence*)},
		{"lambda$mapMerger$12", "(Ljava/util/function/BinaryOperator;Ljava/util/Map;Ljava/util/Map;)Ljava/util/Map;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Collectors, lambda$mapMerger$12, $Map*, $BinaryOperator*, $Map*, $Map*)},
		{"lambda$mapping$13", "(Ljava/util/function/BiConsumer;Ljava/util/function/Function;Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Collectors, lambda$mapping$13, void, $BiConsumer*, $Function*, Object$*, Object$*)},
		{"lambda$partitioningBy$62", "(Ljava/util/function/BiConsumer;Ljava/util/function/Predicate;Ljava/util/stream/Collectors$Partition;Ljava/lang/Object;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Collectors, lambda$partitioningBy$62, void, $BiConsumer*, $Predicate*, $Collectors$Partition*, Object$*)},
		{"lambda$partitioningBy$63", "(Ljava/util/function/BinaryOperator;Ljava/util/stream/Collectors$Partition;Ljava/util/stream/Collectors$Partition;)Ljava/util/stream/Collectors$Partition;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Collectors, lambda$partitioningBy$63, $Collectors$Partition*, $BinaryOperator*, $Collectors$Partition*, $Collectors$Partition*)},
		{"lambda$partitioningBy$64", "(Ljava/util/stream/Collector;)Ljava/util/stream/Collectors$Partition;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Collectors, lambda$partitioningBy$64, $Collectors$Partition*, $Collector*)},
		{"lambda$partitioningBy$65", "(Ljava/util/stream/Collector;Ljava/util/stream/Collectors$Partition;)Ljava/util/Map;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Collectors, lambda$partitioningBy$65, $Map*, $Collector*, $Collectors$Partition*)},
		{"lambda$reducing$42", "(Ljava/util/function/BinaryOperator;[Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Collectors, lambda$reducing$42, void, $BinaryOperator*, $ObjectArray*, Object$*)},
		{"lambda$reducing$43", "(Ljava/util/function/BinaryOperator;[Ljava/lang/Object;[Ljava/lang/Object;)[Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Collectors, lambda$reducing$43, $ObjectArray*, $BinaryOperator*, $ObjectArray*, $ObjectArray*)},
		{"lambda$reducing$44", "([Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Collectors, lambda$reducing$44, $Object*, $ObjectArray*)},
		{"lambda$reducing$46", "(Ljava/util/function/BinaryOperator;)Ljava/util/stream/Collectors$1OptionalBox;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Collectors, lambda$reducing$46, $Collectors$1OptionalBox*, $BinaryOperator*)},
		{"lambda$reducing$47", "(Ljava/util/stream/Collectors$1OptionalBox;Ljava/util/stream/Collectors$1OptionalBox;)Ljava/util/stream/Collectors$1OptionalBox;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Collectors, lambda$reducing$47, $Collectors$1OptionalBox*, $Collectors$1OptionalBox*, $Collectors$1OptionalBox*)},
		{"lambda$reducing$48", "(Ljava/util/stream/Collectors$1OptionalBox;)Ljava/util/Optional;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Collectors, lambda$reducing$48, $Optional*, $Collectors$1OptionalBox*)},
		{"lambda$reducing$49", "(Ljava/util/function/BinaryOperator;Ljava/util/function/Function;[Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Collectors, lambda$reducing$49, void, $BinaryOperator*, $Function*, $ObjectArray*, Object$*)},
		{"lambda$summarizingDouble$74", "(Ljava/util/function/ToDoubleFunction;Ljava/util/DoubleSummaryStatistics;Ljava/lang/Object;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Collectors, lambda$summarizingDouble$74, void, $ToDoubleFunction*, $DoubleSummaryStatistics*, Object$*)},
		{"lambda$summarizingDouble$75", "(Ljava/util/DoubleSummaryStatistics;Ljava/util/DoubleSummaryStatistics;)Ljava/util/DoubleSummaryStatistics;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Collectors, lambda$summarizingDouble$75, $DoubleSummaryStatistics*, $DoubleSummaryStatistics*, $DoubleSummaryStatistics*)},
		{"lambda$summarizingInt$70", "(Ljava/util/function/ToIntFunction;Ljava/util/IntSummaryStatistics;Ljava/lang/Object;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Collectors, lambda$summarizingInt$70, void, $ToIntFunction*, $IntSummaryStatistics*, Object$*)},
		{"lambda$summarizingInt$71", "(Ljava/util/IntSummaryStatistics;Ljava/util/IntSummaryStatistics;)Ljava/util/IntSummaryStatistics;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Collectors, lambda$summarizingInt$71, $IntSummaryStatistics*, $IntSummaryStatistics*, $IntSummaryStatistics*)},
		{"lambda$summarizingLong$72", "(Ljava/util/function/ToLongFunction;Ljava/util/LongSummaryStatistics;Ljava/lang/Object;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Collectors, lambda$summarizingLong$72, void, $ToLongFunction*, $LongSummaryStatistics*, Object$*)},
		{"lambda$summarizingLong$73", "(Ljava/util/LongSummaryStatistics;Ljava/util/LongSummaryStatistics;)Ljava/util/LongSummaryStatistics;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Collectors, lambda$summarizingLong$73, $LongSummaryStatistics*, $LongSummaryStatistics*, $LongSummaryStatistics*)},
		{"lambda$summingDouble$26", "()[D", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Collectors, lambda$summingDouble$26, $doubles*)},
		{"lambda$summingDouble$27", "(Ljava/util/function/ToDoubleFunction;[DLjava/lang/Object;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Collectors, lambda$summingDouble$27, void, $ToDoubleFunction*, $doubles*, Object$*)},
		{"lambda$summingDouble$28", "([D[D)[D", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Collectors, lambda$summingDouble$28, $doubles*, $doubles*, $doubles*)},
		{"lambda$summingDouble$29", "([D)Ljava/lang/Double;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Collectors, lambda$summingDouble$29, $Double*, $doubles*)},
		{"lambda$summingInt$18", "()[I", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Collectors, lambda$summingInt$18, $ints*)},
		{"lambda$summingInt$19", "(Ljava/util/function/ToIntFunction;[ILjava/lang/Object;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Collectors, lambda$summingInt$19, void, $ToIntFunction*, $ints*, Object$*)},
		{"lambda$summingInt$20", "([I[I)[I", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Collectors, lambda$summingInt$20, $ints*, $ints*, $ints*)},
		{"lambda$summingInt$21", "([I)Ljava/lang/Integer;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Collectors, lambda$summingInt$21, $Integer*, $ints*)},
		{"lambda$summingLong$22", "()[J", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Collectors, lambda$summingLong$22, $longs*)},
		{"lambda$summingLong$23", "(Ljava/util/function/ToLongFunction;[JLjava/lang/Object;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Collectors, lambda$summingLong$23, void, $ToLongFunction*, $longs*, Object$*)},
		{"lambda$summingLong$24", "([J[J)[J", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Collectors, lambda$summingLong$24, $longs*, $longs*, $longs*)},
		{"lambda$summingLong$25", "([J)Ljava/lang/Long;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Collectors, lambda$summingLong$25, $Long*, $longs*)},
		{"lambda$teeing0$76", "(Ljava/util/function/Supplier;Ljava/util/function/Supplier;Ljava/util/function/BiConsumer;Ljava/util/function/BiConsumer;Ljava/util/function/BinaryOperator;Ljava/util/function/BinaryOperator;Ljava/util/function/Function;Ljava/util/function/Function;Ljava/util/function/BiFunction;)Ljava/util/stream/Collectors$1PairBox;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Collectors, lambda$teeing0$76, $Collectors$1PairBox*, $Supplier*, $Supplier*, $BiConsumer*, $BiConsumer*, $BinaryOperator*, $BinaryOperator*, $Function*, $Function*, $BiFunction*)},
		{"lambda$toCollection$3", "(Ljava/util/Collection;Ljava/util/Collection;)Ljava/util/Collection;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Collectors, lambda$toCollection$3, $Collection*, $Collection*, $Collection*)},
		{"lambda$toConcurrentMap$69", "(Ljava/util/function/Function;Ljava/util/function/Function;Ljava/util/function/BinaryOperator;Ljava/util/concurrent/ConcurrentMap;Ljava/lang/Object;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Collectors, lambda$toConcurrentMap$69, void, $Function*, $Function*, $BinaryOperator*, $ConcurrentMap*, Object$*)},
		{"lambda$toList$4", "(Ljava/util/ArrayList;Ljava/util/ArrayList;)Ljava/util/ArrayList;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Collectors, lambda$toList$4, $ArrayList*, $ArrayList*, $ArrayList*)},
		{"lambda$toMap$68", "(Ljava/util/function/Function;Ljava/util/function/Function;Ljava/util/function/BinaryOperator;Ljava/util/Map;Ljava/lang/Object;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Collectors, lambda$toMap$68, void, $Function*, $Function*, $BinaryOperator*, $Map*, Object$*)},
		{"lambda$toSet$7", "(Ljava/util/HashSet;Ljava/util/HashSet;)Ljava/util/HashSet;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Collectors, lambda$toSet$7, $HashSet*, $HashSet*, $HashSet*)},
		{"lambda$toUnmodifiableList$6", "(Ljava/util/ArrayList;)Ljava/util/List;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Collectors, lambda$toUnmodifiableList$6, $List*, $ArrayList*)},
		{"lambda$toUnmodifiableMap$66", "(Ljava/util/Map;)Ljava/util/Map;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Collectors, lambda$toUnmodifiableMap$66, $Map*, $Map*)},
		{"lambda$toUnmodifiableMap$67", "(Ljava/util/HashMap;)Ljava/util/Map;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Collectors, lambda$toUnmodifiableMap$67, $Map*, $HashMap*)},
		{"lambda$toUnmodifiableSet$9", "(Ljava/util/HashSet;)Ljava/util/Set;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Collectors, lambda$toUnmodifiableSet$9, $Set*, $HashSet*)},
		{"lambda$uniqKeysMapAccumulator$1", "(Ljava/util/function/Function;Ljava/util/function/Function;Ljava/util/Map;Ljava/lang/Object;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Collectors, lambda$uniqKeysMapAccumulator$1, void, $Function*, $Function*, $Map*, Object$*)},
		{"lambda$uniqKeysMapMerger$0", "(Ljava/util/Map;Ljava/util/Map;)Ljava/util/Map;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Collectors, lambda$uniqKeysMapMerger$0, $Map*, $Map*, $Map*)},
		{"mapMerger", "(Ljava/util/function/BinaryOperator;)Ljava/util/function/BinaryOperator;", "<K:Ljava/lang/Object;V:Ljava/lang/Object;M::Ljava/util/Map<TK;TV;>;>(Ljava/util/function/BinaryOperator<TV;>;)Ljava/util/function/BinaryOperator<TM;>;", $PRIVATE | $STATIC, $staticMethod(Collectors, mapMerger, $BinaryOperator*, $BinaryOperator*)},
		{"mapping", "(Ljava/util/function/Function;Ljava/util/stream/Collector;)Ljava/util/stream/Collector;", "<T:Ljava/lang/Object;U:Ljava/lang/Object;A:Ljava/lang/Object;R:Ljava/lang/Object;>(Ljava/util/function/Function<-TT;+TU;>;Ljava/util/stream/Collector<-TU;TA;TR;>;)Ljava/util/stream/Collector<TT;*TR;>;", $PUBLIC | $STATIC, $staticMethod(Collectors, mapping, $Collector*, $Function*, $Collector*)},
		{"maxBy", "(Ljava/util/Comparator;)Ljava/util/stream/Collector;", "<T:Ljava/lang/Object;>(Ljava/util/Comparator<-TT;>;)Ljava/util/stream/Collector<TT;*Ljava/util/Optional<TT;>;>;", $PUBLIC | $STATIC, $staticMethod(Collectors, maxBy, $Collector*, $Comparator*)},
		{"minBy", "(Ljava/util/Comparator;)Ljava/util/stream/Collector;", "<T:Ljava/lang/Object;>(Ljava/util/Comparator<-TT;>;)Ljava/util/stream/Collector<TT;*Ljava/util/Optional<TT;>;>;", $PUBLIC | $STATIC, $staticMethod(Collectors, minBy, $Collector*, $Comparator*)},
		{"partitioningBy", "(Ljava/util/function/Predicate;)Ljava/util/stream/Collector;", "<T:Ljava/lang/Object;>(Ljava/util/function/Predicate<-TT;>;)Ljava/util/stream/Collector<TT;*Ljava/util/Map<Ljava/lang/Boolean;Ljava/util/List<TT;>;>;>;", $PUBLIC | $STATIC, $staticMethod(Collectors, partitioningBy, $Collector*, $Predicate*)},
		{"partitioningBy", "(Ljava/util/function/Predicate;Ljava/util/stream/Collector;)Ljava/util/stream/Collector;", "<T:Ljava/lang/Object;D:Ljava/lang/Object;A:Ljava/lang/Object;>(Ljava/util/function/Predicate<-TT;>;Ljava/util/stream/Collector<-TT;TA;TD;>;)Ljava/util/stream/Collector<TT;*Ljava/util/Map<Ljava/lang/Boolean;TD;>;>;", $PUBLIC | $STATIC, $staticMethod(Collectors, partitioningBy, $Collector*, $Predicate*, $Collector*)},
		{"reducing", "(Ljava/lang/Object;Ljava/util/function/BinaryOperator;)Ljava/util/stream/Collector;", "<T:Ljava/lang/Object;>(TT;Ljava/util/function/BinaryOperator<TT;>;)Ljava/util/stream/Collector<TT;*TT;>;", $PUBLIC | $STATIC, $staticMethod(Collectors, reducing, $Collector*, Object$*, $BinaryOperator*)},
		{"reducing", "(Ljava/util/function/BinaryOperator;)Ljava/util/stream/Collector;", "<T:Ljava/lang/Object;>(Ljava/util/function/BinaryOperator<TT;>;)Ljava/util/stream/Collector<TT;*Ljava/util/Optional<TT;>;>;", $PUBLIC | $STATIC, $staticMethod(Collectors, reducing, $Collector*, $BinaryOperator*)},
		{"reducing", "(Ljava/lang/Object;Ljava/util/function/Function;Ljava/util/function/BinaryOperator;)Ljava/util/stream/Collector;", "<T:Ljava/lang/Object;U:Ljava/lang/Object;>(TU;Ljava/util/function/Function<-TT;+TU;>;Ljava/util/function/BinaryOperator<TU;>;)Ljava/util/stream/Collector<TT;*TU;>;", $PUBLIC | $STATIC, $staticMethod(Collectors, reducing, $Collector*, Object$*, $Function*, $BinaryOperator*)},
		{"sumWithCompensation", "([DD)[D", nullptr, $STATIC, $staticMethod(Collectors, sumWithCompensation, $doubles*, $doubles*, double)},
		{"summarizingDouble", "(Ljava/util/function/ToDoubleFunction;)Ljava/util/stream/Collector;", "<T:Ljava/lang/Object;>(Ljava/util/function/ToDoubleFunction<-TT;>;)Ljava/util/stream/Collector<TT;*Ljava/util/DoubleSummaryStatistics;>;", $PUBLIC | $STATIC, $staticMethod(Collectors, summarizingDouble, $Collector*, $ToDoubleFunction*)},
		{"summarizingInt", "(Ljava/util/function/ToIntFunction;)Ljava/util/stream/Collector;", "<T:Ljava/lang/Object;>(Ljava/util/function/ToIntFunction<-TT;>;)Ljava/util/stream/Collector<TT;*Ljava/util/IntSummaryStatistics;>;", $PUBLIC | $STATIC, $staticMethod(Collectors, summarizingInt, $Collector*, $ToIntFunction*)},
		{"summarizingLong", "(Ljava/util/function/ToLongFunction;)Ljava/util/stream/Collector;", "<T:Ljava/lang/Object;>(Ljava/util/function/ToLongFunction<-TT;>;)Ljava/util/stream/Collector<TT;*Ljava/util/LongSummaryStatistics;>;", $PUBLIC | $STATIC, $staticMethod(Collectors, summarizingLong, $Collector*, $ToLongFunction*)},
		{"summingDouble", "(Ljava/util/function/ToDoubleFunction;)Ljava/util/stream/Collector;", "<T:Ljava/lang/Object;>(Ljava/util/function/ToDoubleFunction<-TT;>;)Ljava/util/stream/Collector<TT;*Ljava/lang/Double;>;", $PUBLIC | $STATIC, $staticMethod(Collectors, summingDouble, $Collector*, $ToDoubleFunction*)},
		{"summingInt", "(Ljava/util/function/ToIntFunction;)Ljava/util/stream/Collector;", "<T:Ljava/lang/Object;>(Ljava/util/function/ToIntFunction<-TT;>;)Ljava/util/stream/Collector<TT;*Ljava/lang/Integer;>;", $PUBLIC | $STATIC, $staticMethod(Collectors, summingInt, $Collector*, $ToIntFunction*)},
		{"summingLong", "(Ljava/util/function/ToLongFunction;)Ljava/util/stream/Collector;", "<T:Ljava/lang/Object;>(Ljava/util/function/ToLongFunction<-TT;>;)Ljava/util/stream/Collector<TT;*Ljava/lang/Long;>;", $PUBLIC | $STATIC, $staticMethod(Collectors, summingLong, $Collector*, $ToLongFunction*)},
		{"teeing", "(Ljava/util/stream/Collector;Ljava/util/stream/Collector;Ljava/util/function/BiFunction;)Ljava/util/stream/Collector;", "<T:Ljava/lang/Object;R1:Ljava/lang/Object;R2:Ljava/lang/Object;R:Ljava/lang/Object;>(Ljava/util/stream/Collector<-TT;*TR1;>;Ljava/util/stream/Collector<-TT;*TR2;>;Ljava/util/function/BiFunction<-TR1;-TR2;TR;>;)Ljava/util/stream/Collector<TT;*TR;>;", $PUBLIC | $STATIC, $staticMethod(Collectors, teeing, $Collector*, $Collector*, $Collector*, $BiFunction*)},
		{"teeing0", "(Ljava/util/stream/Collector;Ljava/util/stream/Collector;Ljava/util/function/BiFunction;)Ljava/util/stream/Collector;", "<T:Ljava/lang/Object;A1:Ljava/lang/Object;A2:Ljava/lang/Object;R1:Ljava/lang/Object;R2:Ljava/lang/Object;R:Ljava/lang/Object;>(Ljava/util/stream/Collector<-TT;TA1;TR1;>;Ljava/util/stream/Collector<-TT;TA2;TR2;>;Ljava/util/function/BiFunction<-TR1;-TR2;TR;>;)Ljava/util/stream/Collector<TT;*TR;>;", $PRIVATE | $STATIC, $staticMethod(Collectors, teeing0, $Collector*, $Collector*, $Collector*, $BiFunction*)},
		{"toCollection", "(Ljava/util/function/Supplier;)Ljava/util/stream/Collector;", "<T:Ljava/lang/Object;C::Ljava/util/Collection<TT;>;>(Ljava/util/function/Supplier<TC;>;)Ljava/util/stream/Collector<TT;*TC;>;", $PUBLIC | $STATIC, $staticMethod(Collectors, toCollection, $Collector*, $Supplier*)},
		{"toConcurrentMap", "(Ljava/util/function/Function;Ljava/util/function/Function;)Ljava/util/stream/Collector;", "<T:Ljava/lang/Object;K:Ljava/lang/Object;U:Ljava/lang/Object;>(Ljava/util/function/Function<-TT;+TK;>;Ljava/util/function/Function<-TT;+TU;>;)Ljava/util/stream/Collector<TT;*Ljava/util/concurrent/ConcurrentMap<TK;TU;>;>;", $PUBLIC | $STATIC, $staticMethod(Collectors, toConcurrentMap, $Collector*, $Function*, $Function*)},
		{"toConcurrentMap", "(Ljava/util/function/Function;Ljava/util/function/Function;Ljava/util/function/BinaryOperator;)Ljava/util/stream/Collector;", "<T:Ljava/lang/Object;K:Ljava/lang/Object;U:Ljava/lang/Object;>(Ljava/util/function/Function<-TT;+TK;>;Ljava/util/function/Function<-TT;+TU;>;Ljava/util/function/BinaryOperator<TU;>;)Ljava/util/stream/Collector<TT;*Ljava/util/concurrent/ConcurrentMap<TK;TU;>;>;", $PUBLIC | $STATIC, $staticMethod(Collectors, toConcurrentMap, $Collector*, $Function*, $Function*, $BinaryOperator*)},
		{"toConcurrentMap", "(Ljava/util/function/Function;Ljava/util/function/Function;Ljava/util/function/BinaryOperator;Ljava/util/function/Supplier;)Ljava/util/stream/Collector;", "<T:Ljava/lang/Object;K:Ljava/lang/Object;U:Ljava/lang/Object;M::Ljava/util/concurrent/ConcurrentMap<TK;TU;>;>(Ljava/util/function/Function<-TT;+TK;>;Ljava/util/function/Function<-TT;+TU;>;Ljava/util/function/BinaryOperator<TU;>;Ljava/util/function/Supplier<TM;>;)Ljava/util/stream/Collector<TT;*TM;>;", $PUBLIC | $STATIC, $staticMethod(Collectors, toConcurrentMap, $Collector*, $Function*, $Function*, $BinaryOperator*, $Supplier*)},
		{"toList", "()Ljava/util/stream/Collector;", "<T:Ljava/lang/Object;>()Ljava/util/stream/Collector<TT;*Ljava/util/List<TT;>;>;", $PUBLIC | $STATIC, $staticMethod(Collectors, toList, $Collector*)},
		{"toMap", "(Ljava/util/function/Function;Ljava/util/function/Function;)Ljava/util/stream/Collector;", "<T:Ljava/lang/Object;K:Ljava/lang/Object;U:Ljava/lang/Object;>(Ljava/util/function/Function<-TT;+TK;>;Ljava/util/function/Function<-TT;+TU;>;)Ljava/util/stream/Collector<TT;*Ljava/util/Map<TK;TU;>;>;", $PUBLIC | $STATIC, $staticMethod(Collectors, toMap, $Collector*, $Function*, $Function*)},
		{"toMap", "(Ljava/util/function/Function;Ljava/util/function/Function;Ljava/util/function/BinaryOperator;)Ljava/util/stream/Collector;", "<T:Ljava/lang/Object;K:Ljava/lang/Object;U:Ljava/lang/Object;>(Ljava/util/function/Function<-TT;+TK;>;Ljava/util/function/Function<-TT;+TU;>;Ljava/util/function/BinaryOperator<TU;>;)Ljava/util/stream/Collector<TT;*Ljava/util/Map<TK;TU;>;>;", $PUBLIC | $STATIC, $staticMethod(Collectors, toMap, $Collector*, $Function*, $Function*, $BinaryOperator*)},
		{"toMap", "(Ljava/util/function/Function;Ljava/util/function/Function;Ljava/util/function/BinaryOperator;Ljava/util/function/Supplier;)Ljava/util/stream/Collector;", "<T:Ljava/lang/Object;K:Ljava/lang/Object;U:Ljava/lang/Object;M::Ljava/util/Map<TK;TU;>;>(Ljava/util/function/Function<-TT;+TK;>;Ljava/util/function/Function<-TT;+TU;>;Ljava/util/function/BinaryOperator<TU;>;Ljava/util/function/Supplier<TM;>;)Ljava/util/stream/Collector<TT;*TM;>;", $PUBLIC | $STATIC, $staticMethod(Collectors, toMap, $Collector*, $Function*, $Function*, $BinaryOperator*, $Supplier*)},
		{"toSet", "()Ljava/util/stream/Collector;", "<T:Ljava/lang/Object;>()Ljava/util/stream/Collector<TT;*Ljava/util/Set<TT;>;>;", $PUBLIC | $STATIC, $staticMethod(Collectors, toSet, $Collector*)},
		{"toUnmodifiableList", "()Ljava/util/stream/Collector;", "<T:Ljava/lang/Object;>()Ljava/util/stream/Collector<TT;*Ljava/util/List<TT;>;>;", $PUBLIC | $STATIC, $staticMethod(Collectors, toUnmodifiableList, $Collector*)},
		{"toUnmodifiableMap", "(Ljava/util/function/Function;Ljava/util/function/Function;)Ljava/util/stream/Collector;", "<T:Ljava/lang/Object;K:Ljava/lang/Object;U:Ljava/lang/Object;>(Ljava/util/function/Function<-TT;+TK;>;Ljava/util/function/Function<-TT;+TU;>;)Ljava/util/stream/Collector<TT;*Ljava/util/Map<TK;TU;>;>;", $PUBLIC | $STATIC, $staticMethod(Collectors, toUnmodifiableMap, $Collector*, $Function*, $Function*)},
		{"toUnmodifiableMap", "(Ljava/util/function/Function;Ljava/util/function/Function;Ljava/util/function/BinaryOperator;)Ljava/util/stream/Collector;", "<T:Ljava/lang/Object;K:Ljava/lang/Object;U:Ljava/lang/Object;>(Ljava/util/function/Function<-TT;+TK;>;Ljava/util/function/Function<-TT;+TU;>;Ljava/util/function/BinaryOperator<TU;>;)Ljava/util/stream/Collector<TT;*Ljava/util/Map<TK;TU;>;>;", $PUBLIC | $STATIC, $staticMethod(Collectors, toUnmodifiableMap, $Collector*, $Function*, $Function*, $BinaryOperator*)},
		{"toUnmodifiableSet", "()Ljava/util/stream/Collector;", "<T:Ljava/lang/Object;>()Ljava/util/stream/Collector<TT;*Ljava/util/Set<TT;>;>;", $PUBLIC | $STATIC, $staticMethod(Collectors, toUnmodifiableSet, $Collector*)},
		{"uniqKeysMapAccumulator", "(Ljava/util/function/Function;Ljava/util/function/Function;)Ljava/util/function/BiConsumer;", "<T:Ljava/lang/Object;K:Ljava/lang/Object;V:Ljava/lang/Object;>(Ljava/util/function/Function<-TT;+TK;>;Ljava/util/function/Function<-TT;+TV;>;)Ljava/util/function/BiConsumer<Ljava/util/Map<TK;TV;>;TT;>;", $PRIVATE | $STATIC, $staticMethod(Collectors, uniqKeysMapAccumulator, $BiConsumer*, $Function*, $Function*)},
		{"uniqKeysMapMerger", "()Ljava/util/function/BinaryOperator;", "<K:Ljava/lang/Object;V:Ljava/lang/Object;M::Ljava/util/Map<TK;TV;>;>()Ljava/util/function/BinaryOperator<TM;>;", $PRIVATE | $STATIC, $staticMethod(Collectors, uniqKeysMapMerger, $BinaryOperator*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.stream.Collectors$Partition", "java.util.stream.Collectors", "Partition", $PRIVATE | $STATIC | $FINAL},
		{"java.util.stream.Collectors$CollectorImpl", "java.util.stream.Collectors", "CollectorImpl", $STATIC},
		{"java.util.stream.Collectors$1PairBox", nullptr, "PairBox", 0},
		{"java.util.stream.Collectors$1OptionalBox", nullptr, "OptionalBox", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"java.util.stream.Collectors",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"java.util.stream.Collectors$Partition,java.util.stream.Collectors$Partition$1,java.util.stream.Collectors$CollectorImpl,java.util.stream.Collectors$1PairBox,java.util.stream.Collectors$1OptionalBox"
	};
	$loadClass(Collectors, name, initialize, &classInfo$$, Collectors::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Collectors);
	});
	return class$;
}

$Class* Collectors::class$ = nullptr;

		} // stream
	} // util
} // java