#include <java/util/IdentityHashMap$EntryIterator$Entry.h>

#include <java/lang/IllegalStateException.h>
#include <java/util/IdentityHashMap$EntryIterator.h>
#include <java/util/IdentityHashMap.h>
#include <java/util/Map$Entry.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $IdentityHashMap = ::java::util::IdentityHashMap;
using $IdentityHashMap$EntryIterator = ::java::util::IdentityHashMap$EntryIterator;
using $Map$Entry = ::java::util::Map$Entry;

namespace java {
	namespace util {

$FieldInfo _IdentityHashMap$EntryIterator$Entry_FieldInfo_[] = {
	{"this$1", "Ljava/util/IdentityHashMap$EntryIterator;", nullptr, $FINAL | $SYNTHETIC, $field(IdentityHashMap$EntryIterator$Entry, this$1)},
	{"index", "I", nullptr, $PRIVATE, $field(IdentityHashMap$EntryIterator$Entry, index)},
	{}
};

$MethodInfo _IdentityHashMap$EntryIterator$Entry_MethodInfo_[] = {
	{"<init>", "(Ljava/util/IdentityHashMap$EntryIterator;I)V", nullptr, $PRIVATE, $method(IdentityHashMap$EntryIterator$Entry, init$, void, $IdentityHashMap$EntryIterator*, int32_t)},
	{"checkIndexForEntryUse", "()V", nullptr, $PRIVATE, $method(IdentityHashMap$EntryIterator$Entry, checkIndexForEntryUse, void)},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(IdentityHashMap$EntryIterator$Entry, equals, bool, Object$*)},
	{"getKey", "()Ljava/lang/Object;", "()TK;", $PUBLIC, $virtualMethod(IdentityHashMap$EntryIterator$Entry, getKey, $Object*)},
	{"getValue", "()Ljava/lang/Object;", "()TV;", $PUBLIC, $virtualMethod(IdentityHashMap$EntryIterator$Entry, getValue, $Object*)},
	{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(IdentityHashMap$EntryIterator$Entry, hashCode, int32_t)},
	{"setValue", "(Ljava/lang/Object;)Ljava/lang/Object;", "(TV;)TV;", $PUBLIC, $virtualMethod(IdentityHashMap$EntryIterator$Entry, setValue, $Object*, Object$*)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(IdentityHashMap$EntryIterator$Entry, toString, $String*)},
	{}
};

$InnerClassInfo _IdentityHashMap$EntryIterator$Entry_InnerClassesInfo_[] = {
	{"java.util.IdentityHashMap$EntryIterator", "java.util.IdentityHashMap", "EntryIterator", $PRIVATE},
	{"java.util.IdentityHashMap$EntryIterator$Entry", "java.util.IdentityHashMap$EntryIterator", "Entry", $PRIVATE},
	{"java.util.Map$Entry", "java.util.Map", "Entry", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _IdentityHashMap$EntryIterator$Entry_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.IdentityHashMap$EntryIterator$Entry",
	"java.lang.Object",
	"java.util.Map$Entry",
	_IdentityHashMap$EntryIterator$Entry_FieldInfo_,
	_IdentityHashMap$EntryIterator$Entry_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Map$Entry<TK;TV;>;",
	nullptr,
	_IdentityHashMap$EntryIterator$Entry_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.IdentityHashMap"
};

$Object* allocate$IdentityHashMap$EntryIterator$Entry($Class* clazz) {
	return $of($alloc(IdentityHashMap$EntryIterator$Entry));
}

void IdentityHashMap$EntryIterator$Entry::init$($IdentityHashMap$EntryIterator* this$1, int32_t index) {
	$set(this, this$1, this$1);
	this->index = index;
}

$Object* IdentityHashMap$EntryIterator$Entry::getKey() {
	checkIndexForEntryUse();
	return $of($IdentityHashMap::unmaskNull($nc(this->this$1->traversalTable)->get(this->index)));
}

$Object* IdentityHashMap$EntryIterator$Entry::getValue() {
	checkIndexForEntryUse();
	return $of($nc(this->this$1->traversalTable)->get(this->index + 1));
}

$Object* IdentityHashMap$EntryIterator$Entry::setValue(Object$* value) {
	checkIndexForEntryUse();
	$var($Object, oldValue, $nc(this->this$1->traversalTable)->get(this->index + 1));
	$nc(this->this$1->traversalTable)->set(this->index + 1, value);
	if (this->this$1->traversalTable != $nc(this->this$1->this$0)->table) {
		$nc(this->this$1->this$0)->put($nc(this->this$1->traversalTable)->get(this->index), value);
	}
	return $of(oldValue);
}

bool IdentityHashMap$EntryIterator$Entry::equals(Object$* o) {
	if (this->index < 0) {
		return $Map$Entry::equals(o);
	}
	$var($Map$Entry, e, nullptr);
	bool var$2 = $instanceOf($Map$Entry, o);
	if (var$2) {
		$assign(e, $cast($Map$Entry, o));
		var$2 = true;
	}
	bool var$1 = var$2;
	if (var$1) {
		var$1 = $equals($nc(e)->getKey(), $IdentityHashMap::unmaskNull($nc(this->this$1->traversalTable)->get(this->index)));
	}
	bool var$0 = var$1;
	return var$0 && $equals(e->getValue(), $nc(this->this$1->traversalTable)->get(this->index + 1));
}

int32_t IdentityHashMap$EntryIterator$Entry::hashCode() {
	if (this->this$1->lastReturnedIndex < 0) {
		return $Map$Entry::hashCode();
	}
	int32_t var$0 = $System::identityHashCode($($IdentityHashMap::unmaskNull($nc(this->this$1->traversalTable)->get(this->index))));
	return (var$0 ^ $System::identityHashCode($nc(this->this$1->traversalTable)->get(this->index + 1)));
}

$String* IdentityHashMap$EntryIterator$Entry::toString() {
	if (this->index < 0) {
		return $Map$Entry::toString();
	}
	return ($str({$($IdentityHashMap::unmaskNull($nc(this->this$1->traversalTable)->get(this->index))), "="_s, $nc(this->this$1->traversalTable)->get(this->index + 1)}));
}

void IdentityHashMap$EntryIterator$Entry::checkIndexForEntryUse() {
	if (this->index < 0) {
		$throwNew($IllegalStateException, "Entry was removed"_s);
	}
}

IdentityHashMap$EntryIterator$Entry::IdentityHashMap$EntryIterator$Entry() {
}

$Class* IdentityHashMap$EntryIterator$Entry::load$($String* name, bool initialize) {
	$loadClass(IdentityHashMap$EntryIterator$Entry, name, initialize, &_IdentityHashMap$EntryIterator$Entry_ClassInfo_, allocate$IdentityHashMap$EntryIterator$Entry);
	return class$;
}

$Class* IdentityHashMap$EntryIterator$Entry::class$ = nullptr;

	} // util
} // java