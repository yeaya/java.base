#include <java/util/TreeMap$Entry.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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

$FieldInfo _TreeMap$Entry_FieldInfo_[] = {
	{"key", "Ljava/lang/Object;", "TK;", 0, $field(TreeMap$Entry, key)},
	{"value", "Ljava/lang/Object;", "TV;", 0, $field(TreeMap$Entry, value)},
	{"left", "Ljava/util/TreeMap$Entry;", "Ljava/util/TreeMap$Entry<TK;TV;>;", 0, $field(TreeMap$Entry, left)},
	{"right", "Ljava/util/TreeMap$Entry;", "Ljava/util/TreeMap$Entry<TK;TV;>;", 0, $field(TreeMap$Entry, right)},
	{"parent", "Ljava/util/TreeMap$Entry;", "Ljava/util/TreeMap$Entry<TK;TV;>;", 0, $field(TreeMap$Entry, parent)},
	{"color", "Z", nullptr, 0, $field(TreeMap$Entry, color)},
	{}
};

$MethodInfo _TreeMap$Entry_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/util/TreeMap$Entry;)V", "(TK;TV;Ljava/util/TreeMap$Entry<TK;TV;>;)V", 0, $method(static_cast<void(TreeMap$Entry::*)(Object$*,Object$*,TreeMap$Entry*)>(&TreeMap$Entry::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getKey", "()Ljava/lang/Object;", "()TK;", $PUBLIC},
	{"getValue", "()Ljava/lang/Object;", "()TV;", $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"setValue", "(Ljava/lang/Object;)Ljava/lang/Object;", "(TV;)TV;", $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _TreeMap$Entry_InnerClassesInfo_[] = {
	{"java.util.TreeMap$Entry", "java.util.TreeMap", "Entry", $STATIC | $FINAL},
	{"java.util.Map$Entry", "java.util.Map", "Entry", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _TreeMap$Entry_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.TreeMap$Entry",
	"java.lang.Object",
	"java.util.Map$Entry",
	_TreeMap$Entry_FieldInfo_,
	_TreeMap$Entry_MethodInfo_,
	"<K:Ljava/lang/Object;V:Ljava/lang/Object;>Ljava/lang/Object;Ljava/util/Map$Entry<TK;TV;>;",
	nullptr,
	_TreeMap$Entry_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.TreeMap"
};

$Object* allocate$TreeMap$Entry($Class* clazz) {
	return $of($alloc(TreeMap$Entry));
}

void TreeMap$Entry::init$(Object$* key, Object$* value, TreeMap$Entry* parent) {
	this->color = true;
	$set(this, key, key);
	$set(this, value, value);
	$set(this, parent, parent);
}

$Object* TreeMap$Entry::getKey() {
	return $of(this->key);
}

$Object* TreeMap$Entry::getValue() {
	return $of(this->value);
}

$Object* TreeMap$Entry::setValue(Object$* value) {
	$var($Object, oldValue, this->value);
	$set(this, value, value);
	return $of(oldValue);
}

bool TreeMap$Entry::equals(Object$* o) {
	$useLocalCurrentObjectStackCache();
	$var($Map$Entry, e, nullptr);
	bool var$2 = $instanceOf($Map$Entry, o);
	if (var$2) {
		$assign(e, $cast($Map$Entry, o));
		var$2 = true;
	}
	bool var$1 = var$2;
	bool var$0 = var$1 && $TreeMap::valEquals(this->key, $($nc(e)->getKey()));
	return var$0 && $TreeMap::valEquals(this->value, $($nc(e)->getValue()));
}

int32_t TreeMap$Entry::hashCode() {
	int32_t keyHash = (this->key == nullptr ? 0 : $nc($of(this->key))->hashCode());
	int32_t valueHash = (this->value == nullptr ? 0 : $nc($of(this->value))->hashCode());
	return keyHash ^ valueHash;
}

$String* TreeMap$Entry::toString() {
	return $str({this->key, "="_s, this->value});
}

TreeMap$Entry::TreeMap$Entry() {
}

$Class* TreeMap$Entry::load$($String* name, bool initialize) {
	$loadClass(TreeMap$Entry, name, initialize, &_TreeMap$Entry_ClassInfo_, allocate$TreeMap$Entry);
	return class$;
}

$Class* TreeMap$Entry::class$ = nullptr;

	} // util
} // java