#include <java/util/EnumMap$EntryIterator$Entry.h>
#include <java/lang/Enum.h>
#include <java/lang/IllegalStateException.h>
#include <java/util/EnumMap$EntryIterator.h>
#include <java/util/EnumMap.h>
#include <java/util/Map$Entry.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EnumMap$EntryIterator = ::java::util::EnumMap$EntryIterator;
using $Map$Entry = ::java::util::Map$Entry;

namespace java {
	namespace util {

void EnumMap$EntryIterator$Entry::init$($EnumMap$EntryIterator* this$1, int32_t index) {
	$set(this, this$1, this$1);
	this->index = index;
}

$Object* EnumMap$EntryIterator$Entry::getKey() {
	checkIndexForEntryUse();
	return $of($nc($nc(this->this$1->this$0)->keyUniverse)->get(this->index));
}

$Object* EnumMap$EntryIterator$Entry::getValue() {
	checkIndexForEntryUse();
	return $nc(this->this$1->this$0)->unmaskNull($nc($nc(this->this$1->this$0)->vals)->get(this->index));
}

$Object* EnumMap$EntryIterator$Entry::setValue(Object$* value) {
	$useLocalObjectStack();
	checkIndexForEntryUse();
	$var($Object, oldValue, $nc(this->this$1->this$0)->unmaskNull($nc($nc(this->this$1->this$0)->vals)->get(this->index)));
	this->this$1->this$0->vals->set(this->index, $(this->this$1->this$0->maskNull(value)));
	return oldValue;
}

bool EnumMap$EntryIterator$Entry::equals(Object$* o) {
	$useLocalObjectStack();
	if (this->index < 0) {
		return $equals(o, this);
	}
	$var($Map$Entry, e, nullptr);
	bool var$0 = $instanceOf($Map$Entry, o);
	if (var$0) {
		$assign(e, $cast($Map$Entry, o));
		var$0 = true;
	}
	if (!(var$0)) {
		return false;
	}
	$var($Object, ourValue, $nc(this->this$1->this$0)->unmaskNull($nc($nc(this->this$1->this$0)->vals)->get(this->index)));
	$var($Object, hisValue, $nc(e)->getValue());
	bool var$1 = $equals(e->getKey(), $nc(this->this$1->this$0->keyUniverse)->get(this->index));
	return (var$1 && ($equals(ourValue, hisValue) || (ourValue != nullptr && ourValue->equals(hisValue))));
}

int32_t EnumMap$EntryIterator$Entry::hashCode() {
	if (this->index < 0) {
		return $Map$Entry::hashCode();
	}
	return $nc(this->this$1->this$0)->entryHashCode(this->index);
}

$String* EnumMap$EntryIterator$Entry::toString() {
	$useLocalObjectStack();
	if (this->index < 0) {
		return $Map$Entry::toString();
	}
	$var($StringBuilder, var$0, $new($StringBuilder));
	var$0->append($nc($nc(this->this$1->this$0)->keyUniverse)->get(this->index));
	var$0->append("="_s);
	var$0->append($(this->this$1->this$0->unmaskNull($nc(this->this$1->this$0->vals)->get(this->index))));
	return $str(var$0);
}

void EnumMap$EntryIterator$Entry::checkIndexForEntryUse() {
	if (this->index < 0) {
		$throwNew($IllegalStateException, "Entry was removed"_s);
	}
}

EnumMap$EntryIterator$Entry::EnumMap$EntryIterator$Entry() {
}

$Class* EnumMap$EntryIterator$Entry::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$1", "Ljava/util/EnumMap$EntryIterator;", nullptr, $FINAL | $SYNTHETIC, $field(EnumMap$EntryIterator$Entry, this$1)},
		{"index", "I", nullptr, $PRIVATE, $field(EnumMap$EntryIterator$Entry, index)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/EnumMap$EntryIterator;I)V", nullptr, $PRIVATE, $method(EnumMap$EntryIterator$Entry, init$, void, $EnumMap$EntryIterator*, int32_t)},
		{"checkIndexForEntryUse", "()V", nullptr, $PRIVATE, $method(EnumMap$EntryIterator$Entry, checkIndexForEntryUse, void)},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(EnumMap$EntryIterator$Entry, equals, bool, Object$*)},
		{"getKey", "()Ljava/lang/Enum;", "()TK;", $PUBLIC, $virtualMethod(EnumMap$EntryIterator$Entry, getKey, $Object*)},
		{"getValue", "()Ljava/lang/Object;", "()TV;", $PUBLIC, $virtualMethod(EnumMap$EntryIterator$Entry, getValue, $Object*)},
		{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(EnumMap$EntryIterator$Entry, hashCode, int32_t)},
		{"setValue", "(Ljava/lang/Object;)Ljava/lang/Object;", "(TV;)TV;", $PUBLIC, $virtualMethod(EnumMap$EntryIterator$Entry, setValue, $Object*, Object$*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(EnumMap$EntryIterator$Entry, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.EnumMap$EntryIterator", "java.util.EnumMap", "EntryIterator", $PRIVATE},
		{"java.util.EnumMap$EntryIterator$Entry", "java.util.EnumMap$EntryIterator", "Entry", $PRIVATE},
		{"java.util.Map$Entry", "java.util.Map", "Entry", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.util.EnumMap$EntryIterator$Entry",
		"java.lang.Object",
		"java.util.Map$Entry",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/Map$Entry<TK;TV;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.EnumMap"
	};
	$loadClass(EnumMap$EntryIterator$Entry, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(EnumMap$EntryIterator$Entry);
	});
	return class$;
}

$Class* EnumMap$EntryIterator$Entry::class$ = nullptr;

	} // util
} // java