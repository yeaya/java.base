#include <java/util/TreeMap$Entry.h>
#include <java/util/Map$Entry.h>
#include <java/util/TreeMap.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Map$Entry = ::java::util::Map$Entry;
using $TreeMap = ::java::util::TreeMap;

namespace java {
	namespace util {

void TreeMap$Entry::init$(Object$* key, Object$* value, TreeMap$Entry* parent) {
	this->color = true;
	$set(this, key, key);
	$set(this, value, value);
	$set(this, parent, parent);
}

$Object* TreeMap$Entry::getKey() {
	return this->key;
}

$Object* TreeMap$Entry::getValue() {
	return this->value;
}

$Object* TreeMap$Entry::setValue(Object$* value) {
	$var($Object, oldValue, this->value);
	$set(this, value, value);
	return oldValue;
}

bool TreeMap$Entry::equals(Object$* o) {
	$useLocalObjectStack();
	$var($Map$Entry, e, nullptr);
	bool var$2 = $instanceOf($Map$Entry, o);
	if (var$2) {
		$assign(e, $cast($Map$Entry, o));
		var$2 = true;
	}
	bool var$1 = var$2;
	bool var$0 = var$1 && $TreeMap::valEquals(this->key, $($nc(e)->getKey()));
	return var$0 && $TreeMap::valEquals(this->value, $(e->getValue()));
}

int32_t TreeMap$Entry::hashCode() {
	int32_t keyHash = (this->key == nullptr ? 0 : this->key->hashCode());
	int32_t valueHash = (this->value == nullptr ? 0 : this->value->hashCode());
	return keyHash ^ valueHash;
}

$String* TreeMap$Entry::toString() {
	return $str({this->key, "="_s, this->value});
}

TreeMap$Entry::TreeMap$Entry() {
}

$Class* TreeMap$Entry::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"key", "Ljava/lang/Object;", "TK;", 0, $field(TreeMap$Entry, key)},
		{"value", "Ljava/lang/Object;", "TV;", 0, $field(TreeMap$Entry, value)},
		{"left", "Ljava/util/TreeMap$Entry;", "Ljava/util/TreeMap$Entry<TK;TV;>;", 0, $field(TreeMap$Entry, left)},
		{"right", "Ljava/util/TreeMap$Entry;", "Ljava/util/TreeMap$Entry<TK;TV;>;", 0, $field(TreeMap$Entry, right)},
		{"parent", "Ljava/util/TreeMap$Entry;", "Ljava/util/TreeMap$Entry<TK;TV;>;", 0, $field(TreeMap$Entry, parent)},
		{"color", "Z", nullptr, 0, $field(TreeMap$Entry, color)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/util/TreeMap$Entry;)V", "(TK;TV;Ljava/util/TreeMap$Entry<TK;TV;>;)V", 0, $method(TreeMap$Entry, init$, void, Object$*, Object$*, TreeMap$Entry*)},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(TreeMap$Entry, equals, bool, Object$*)},
		{"getKey", "()Ljava/lang/Object;", "()TK;", $PUBLIC, $virtualMethod(TreeMap$Entry, getKey, $Object*)},
		{"getValue", "()Ljava/lang/Object;", "()TV;", $PUBLIC, $virtualMethod(TreeMap$Entry, getValue, $Object*)},
		{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(TreeMap$Entry, hashCode, int32_t)},
		{"setValue", "(Ljava/lang/Object;)Ljava/lang/Object;", "(TV;)TV;", $PUBLIC, $virtualMethod(TreeMap$Entry, setValue, $Object*, Object$*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(TreeMap$Entry, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.TreeMap$Entry", "java.util.TreeMap", "Entry", $STATIC | $FINAL},
		{"java.util.Map$Entry", "java.util.Map", "Entry", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.util.TreeMap$Entry",
		"java.lang.Object",
		"java.util.Map$Entry",
		fieldInfos$$,
		methodInfos$$,
		"<K:Ljava/lang/Object;V:Ljava/lang/Object;>Ljava/lang/Object;Ljava/util/Map$Entry<TK;TV;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.TreeMap"
	};
	$loadClass(TreeMap$Entry, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TreeMap$Entry);
	});
	return class$;
}

$Class* TreeMap$Entry::class$ = nullptr;

	} // util
} // java