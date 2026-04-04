#include <java/util/EnumMap$Values.h>
#include <java/util/AbstractCollection.h>
#include <java/util/EnumMap$ValueIterator.h>
#include <java/util/EnumMap.h>
#include <java/util/Iterator.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractCollection = ::java::util::AbstractCollection;
using $EnumMap = ::java::util::EnumMap;
using $EnumMap$ValueIterator = ::java::util::EnumMap$ValueIterator;
using $Iterator = ::java::util::Iterator;

namespace java {
	namespace util {

void EnumMap$Values::init$($EnumMap* this$0) {
	$set(this, this$0, this$0);
	$AbstractCollection::init$();
}

$Iterator* EnumMap$Values::iterator() {
	return $new($EnumMap$ValueIterator, this->this$0);
}

int32_t EnumMap$Values::size() {
	return this->this$0->size$;
}

bool EnumMap$Values::contains(Object$* o) {
	return this->this$0->containsValue(o);
}

bool EnumMap$Values::remove(Object$* o$renamed) {
	$var($Object, o, o$renamed);
	$assign(o, this->this$0->maskNull(o));
	for (int32_t i = 0; i < $nc(this->this$0->vals)->length; ++i) {
		if ($nc($of(o))->equals(this->this$0->vals->get(i))) {
			this->this$0->vals->set(i, nullptr);
			--this->this$0->size$;
			return true;
		}
	}
	return false;
}

void EnumMap$Values::clear() {
	this->this$0->clear();
}

EnumMap$Values::EnumMap$Values() {
}

$Class* EnumMap$Values::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/util/EnumMap;", nullptr, $FINAL | $SYNTHETIC, $field(EnumMap$Values, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/EnumMap;)V", nullptr, $PRIVATE, $method(EnumMap$Values, init$, void, $EnumMap*)},
		{"clear", "()V", nullptr, $PUBLIC, $virtualMethod(EnumMap$Values, clear, void)},
		{"contains", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(EnumMap$Values, contains, bool, Object$*)},
		{"iterator", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<TV;>;", $PUBLIC, $virtualMethod(EnumMap$Values, iterator, $Iterator*)},
		{"remove", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(EnumMap$Values, remove, bool, Object$*)},
		{"size", "()I", nullptr, $PUBLIC, $virtualMethod(EnumMap$Values, size, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.EnumMap$Values", "java.util.EnumMap", "Values", $PRIVATE},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.util.EnumMap$Values",
		"java.util.AbstractCollection",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljava/util/AbstractCollection<TV;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.EnumMap"
	};
	$loadClass(EnumMap$Values, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(EnumMap$Values);
	});
	return class$;
}

$Class* EnumMap$Values::class$ = nullptr;

	} // util
} // java