#include <java/util/Collections$UnmodifiableMap$UnmodifiableEntrySet.h>

#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/Arrays.h>
#include <java/util/Collection.h>
#include <java/util/Collections$UnmodifiableCollection.h>
#include <java/util/Collections$UnmodifiableMap$UnmodifiableEntrySet$1.h>
#include <java/util/Collections$UnmodifiableMap$UnmodifiableEntrySet$UnmodifiableEntry.h>
#include <java/util/Collections$UnmodifiableMap$UnmodifiableEntrySet$UnmodifiableEntrySetSpliterator.h>
#include <java/util/Collections$UnmodifiableMap.h>
#include <java/util/Collections$UnmodifiableSet.h>
#include <java/util/Iterator.h>
#include <java/util/Map$Entry.h>
#include <java/util/Objects.h>
#include <java/util/Set.h>
#include <java/util/Spliterator.h>
#include <java/util/function/Consumer.h>
#include <java/util/stream/Stream.h>
#include <java/util/stream/StreamSupport.h>
#include <jcpp.h>

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $Arrays = ::java::util::Arrays;
using $Collection = ::java::util::Collection;
using $Collections$UnmodifiableMap$UnmodifiableEntrySet$1 = ::java::util::Collections$UnmodifiableMap$UnmodifiableEntrySet$1;
using $Collections$UnmodifiableMap$UnmodifiableEntrySet$UnmodifiableEntry = ::java::util::Collections$UnmodifiableMap$UnmodifiableEntrySet$UnmodifiableEntry;
using $Collections$UnmodifiableMap$UnmodifiableEntrySet$UnmodifiableEntrySetSpliterator = ::java::util::Collections$UnmodifiableMap$UnmodifiableEntrySet$UnmodifiableEntrySetSpliterator;
using $Collections$UnmodifiableSet = ::java::util::Collections$UnmodifiableSet;
using $Iterator = ::java::util::Iterator;
using $Map$Entry = ::java::util::Map$Entry;
using $Objects = ::java::util::Objects;
using $Set = ::java::util::Set;
using $Spliterator = ::java::util::Spliterator;
using $Consumer = ::java::util::function::Consumer;
using $Stream = ::java::util::stream::Stream;
using $StreamSupport = ::java::util::stream::StreamSupport;

namespace java {
	namespace util {

class Collections$UnmodifiableMap$UnmodifiableEntrySet$$Lambda$lambda$entryConsumer$0 : public $Consumer {
	$class(Collections$UnmodifiableMap$UnmodifiableEntrySet$$Lambda$lambda$entryConsumer$0, $NO_CLASS_INIT, $Consumer)
public:
	void init$($Consumer* action) {
		$set(this, action, action);
	}
	virtual void accept(Object$* e) override {
		Collections$UnmodifiableMap$UnmodifiableEntrySet::lambda$entryConsumer$0(action, $cast($Map$Entry, e));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Collections$UnmodifiableMap$UnmodifiableEntrySet$$Lambda$lambda$entryConsumer$0>());
	}
	$Consumer* action = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Collections$UnmodifiableMap$UnmodifiableEntrySet$$Lambda$lambda$entryConsumer$0::fieldInfos[2] = {
	{"action", "Ljava/util/function/Consumer;", nullptr, $PUBLIC, $field(Collections$UnmodifiableMap$UnmodifiableEntrySet$$Lambda$lambda$entryConsumer$0, action)},
	{}
};
$MethodInfo Collections$UnmodifiableMap$UnmodifiableEntrySet$$Lambda$lambda$entryConsumer$0::methodInfos[3] = {
	{"<init>", "(Ljava/util/function/Consumer;)V", nullptr, $PUBLIC, $method(static_cast<void(Collections$UnmodifiableMap$UnmodifiableEntrySet$$Lambda$lambda$entryConsumer$0::*)($Consumer*)>(&Collections$UnmodifiableMap$UnmodifiableEntrySet$$Lambda$lambda$entryConsumer$0::init$))},
	{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo Collections$UnmodifiableMap$UnmodifiableEntrySet$$Lambda$lambda$entryConsumer$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.Collections$UnmodifiableMap$UnmodifiableEntrySet$$Lambda$lambda$entryConsumer$0",
	"java.lang.Object",
	"java.util.function.Consumer",
	fieldInfos,
	methodInfos
};
$Class* Collections$UnmodifiableMap$UnmodifiableEntrySet$$Lambda$lambda$entryConsumer$0::load$($String* name, bool initialize) {
	$loadClass(Collections$UnmodifiableMap$UnmodifiableEntrySet$$Lambda$lambda$entryConsumer$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Collections$UnmodifiableMap$UnmodifiableEntrySet$$Lambda$lambda$entryConsumer$0::class$ = nullptr;

$FieldInfo _Collections$UnmodifiableMap$UnmodifiableEntrySet_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Collections$UnmodifiableMap$UnmodifiableEntrySet, serialVersionUID)},
	{}
};

$MethodInfo _Collections$UnmodifiableMap$UnmodifiableEntrySet_MethodInfo_[] = {
	{"<init>", "(Ljava/util/Set;)V", "(Ljava/util/Set<+Ljava/util/Map$Entry<+TK;+TV;>;>;)V", 0, $method(static_cast<void(Collections$UnmodifiableMap$UnmodifiableEntrySet::*)($Set*)>(&Collections$UnmodifiableMap$UnmodifiableEntrySet::init$))},
	{"contains", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"containsAll", "(Ljava/util/Collection;)Z", "(Ljava/util/Collection<*>;)Z", $PUBLIC},
	{"entryConsumer", "(Ljava/util/function/Consumer;)Ljava/util/function/Consumer;", "<K:Ljava/lang/Object;V:Ljava/lang/Object;>(Ljava/util/function/Consumer<-Ljava/util/Map$Entry<TK;TV;>;>;)Ljava/util/function/Consumer<Ljava/util/Map$Entry<+TK;+TV;>;>;", $STATIC, $method(static_cast<$Consumer*(*)($Consumer*)>(&Collections$UnmodifiableMap$UnmodifiableEntrySet::entryConsumer))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"forEach", "(Ljava/util/function/Consumer;)V", "(Ljava/util/function/Consumer<-Ljava/util/Map$Entry<TK;TV;>;>;)V", $PUBLIC},
	{"iterator", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<Ljava/util/Map$Entry<TK;TV;>;>;", $PUBLIC},
	{"lambda$entryConsumer$0", "(Ljava/util/function/Consumer;Ljava/util/Map$Entry;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($Consumer*,$Map$Entry*)>(&Collections$UnmodifiableMap$UnmodifiableEntrySet::lambda$entryConsumer$0))},
	{"parallelStream", "()Ljava/util/stream/Stream;", "()Ljava/util/stream/Stream<Ljava/util/Map$Entry<TK;TV;>;>;", $PUBLIC},
	{"spliterator", "()Ljava/util/Spliterator;", "()Ljava/util/Spliterator<Ljava/util/Map$Entry<TK;TV;>;>;", $PUBLIC},
	{"stream", "()Ljava/util/stream/Stream;", "()Ljava/util/stream/Stream<Ljava/util/Map$Entry<TK;TV;>;>;", $PUBLIC},
	{"toArray", "()[Ljava/lang/Object;", nullptr, $PUBLIC},
	{"toArray", "([Ljava/lang/Object;)[Ljava/lang/Object;", "<T:Ljava/lang/Object;>([TT;)[TT;", $PUBLIC},
	{}
};

$InnerClassInfo _Collections$UnmodifiableMap$UnmodifiableEntrySet_InnerClassesInfo_[] = {
	{"java.util.Collections$UnmodifiableMap", "java.util.Collections", "UnmodifiableMap", $PRIVATE | $STATIC},
	{"java.util.Collections$UnmodifiableMap$UnmodifiableEntrySet", "java.util.Collections$UnmodifiableMap", "UnmodifiableEntrySet", $STATIC},
	{"java.util.Collections$UnmodifiableSet", "java.util.Collections", "UnmodifiableSet", $STATIC},
	{"java.util.Collections$UnmodifiableMap$UnmodifiableEntrySet$UnmodifiableEntry", "java.util.Collections$UnmodifiableMap$UnmodifiableEntrySet", "UnmodifiableEntry", $PRIVATE | $STATIC},
	{"java.util.Collections$UnmodifiableMap$UnmodifiableEntrySet$UnmodifiableEntrySetSpliterator", "java.util.Collections$UnmodifiableMap$UnmodifiableEntrySet", "UnmodifiableEntrySetSpliterator", $STATIC | $FINAL},
	{"java.util.Collections$UnmodifiableMap$UnmodifiableEntrySet$1", nullptr, nullptr, 0},
	{"java.util.Map$Entry", "java.util.Map", "Entry", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Collections$UnmodifiableMap$UnmodifiableEntrySet_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.Collections$UnmodifiableMap$UnmodifiableEntrySet",
	"java.util.Collections$UnmodifiableSet",
	nullptr,
	_Collections$UnmodifiableMap$UnmodifiableEntrySet_FieldInfo_,
	_Collections$UnmodifiableMap$UnmodifiableEntrySet_MethodInfo_,
	"<K:Ljava/lang/Object;V:Ljava/lang/Object;>Ljava/util/Collections$UnmodifiableSet<Ljava/util/Map$Entry<TK;TV;>;>;",
	nullptr,
	_Collections$UnmodifiableMap$UnmodifiableEntrySet_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.Collections"
};

$Object* allocate$Collections$UnmodifiableMap$UnmodifiableEntrySet($Class* clazz) {
	return $of($alloc(Collections$UnmodifiableMap$UnmodifiableEntrySet));
}

void Collections$UnmodifiableMap$UnmodifiableEntrySet::init$($Set* s) {
	$Collections$UnmodifiableSet::init$(s);
}

$Consumer* Collections$UnmodifiableMap$UnmodifiableEntrySet::entryConsumer($Consumer* action) {
	$init(Collections$UnmodifiableMap$UnmodifiableEntrySet);
	return static_cast<$Consumer*>($new(Collections$UnmodifiableMap$UnmodifiableEntrySet$$Lambda$lambda$entryConsumer$0, action));
}

void Collections$UnmodifiableMap$UnmodifiableEntrySet::forEach($Consumer* action) {
	$Objects::requireNonNull(action);
	$nc(this->c)->forEach($(entryConsumer(action)));
}

$Spliterator* Collections$UnmodifiableMap$UnmodifiableEntrySet::spliterator() {
	return $new($Collections$UnmodifiableMap$UnmodifiableEntrySet$UnmodifiableEntrySetSpliterator, $($nc(this->c)->spliterator()));
}

$Stream* Collections$UnmodifiableMap$UnmodifiableEntrySet::stream() {
	return $StreamSupport::stream($(spliterator()), false);
}

$Stream* Collections$UnmodifiableMap$UnmodifiableEntrySet::parallelStream() {
	return $StreamSupport::stream($(spliterator()), true);
}

$Iterator* Collections$UnmodifiableMap$UnmodifiableEntrySet::iterator() {
	return $new($Collections$UnmodifiableMap$UnmodifiableEntrySet$1, this);
}

$ObjectArray* Collections$UnmodifiableMap$UnmodifiableEntrySet::toArray() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray, a, $nc(this->c)->toArray());
	for (int32_t i = 0; i < $nc(a)->length; ++i) {
		a->set(i, $$new($Collections$UnmodifiableMap$UnmodifiableEntrySet$UnmodifiableEntry, $cast($Map$Entry, a->get(i))));
	}
	return a;
}

$ObjectArray* Collections$UnmodifiableMap$UnmodifiableEntrySet::toArray($ObjectArray* a) {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray, arr, $nc(this->c)->toArray($nc(a)->length == 0 ? a : $($Arrays::copyOf(a, 0))));
	for (int32_t i = 0; i < $nc(arr)->length; ++i) {
		arr->set(i, $$new($Collections$UnmodifiableMap$UnmodifiableEntrySet$UnmodifiableEntry, $cast($Map$Entry, arr->get(i))));
	}
	if ($nc(arr)->length > $nc(a)->length) {
		return arr;
	}
	$System::arraycopy(arr, 0, a, 0, $nc(arr)->length);
	if ($nc(a)->length > $nc(arr)->length) {
		a->set(arr->length, nullptr);
	}
	return a;
}

bool Collections$UnmodifiableMap$UnmodifiableEntrySet::contains(Object$* o) {
	if (!($instanceOf($Map$Entry, o))) {
		return false;
	}
	return $nc(this->c)->contains($$new($Collections$UnmodifiableMap$UnmodifiableEntrySet$UnmodifiableEntry, $cast($Map$Entry, o)));
}

bool Collections$UnmodifiableMap$UnmodifiableEntrySet::containsAll($Collection* coll) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(coll)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Object, e, i$->next());
			{
				if (!contains(e)) {
					return false;
				}
			}
		}
	}
	return true;
}

bool Collections$UnmodifiableMap$UnmodifiableEntrySet::equals(Object$* o) {
	if ($equals(o, this)) {
		return true;
	}
	$var($Set, s, nullptr);
	bool var$2 = $instanceOf($Set, o);
	if (var$2) {
		$assign(s, $cast($Set, o));
		var$2 = true;
	}
	bool var$1 = var$2;
	if (var$1) {
		int32_t var$3 = $nc(s)->size();
		var$1 = var$3 == $nc(this->c)->size();
	}
	bool var$0 = var$1;
	return var$0 && containsAll(s);
}

void Collections$UnmodifiableMap$UnmodifiableEntrySet::lambda$entryConsumer$0($Consumer* action, $Map$Entry* e) {
	$init(Collections$UnmodifiableMap$UnmodifiableEntrySet);
	$nc(action)->accept($$new($Collections$UnmodifiableMap$UnmodifiableEntrySet$UnmodifiableEntry, e));
}

Collections$UnmodifiableMap$UnmodifiableEntrySet::Collections$UnmodifiableMap$UnmodifiableEntrySet() {
}

$Class* Collections$UnmodifiableMap$UnmodifiableEntrySet::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(Collections$UnmodifiableMap$UnmodifiableEntrySet$$Lambda$lambda$entryConsumer$0::classInfo$.name)) {
			return Collections$UnmodifiableMap$UnmodifiableEntrySet$$Lambda$lambda$entryConsumer$0::load$(name, initialize);
		}
	}
	$loadClass(Collections$UnmodifiableMap$UnmodifiableEntrySet, name, initialize, &_Collections$UnmodifiableMap$UnmodifiableEntrySet_ClassInfo_, allocate$Collections$UnmodifiableMap$UnmodifiableEntrySet);
	return class$;
}

$Class* Collections$UnmodifiableMap$UnmodifiableEntrySet::class$ = nullptr;

	} // util
} // java