#include <java/util/HashMap$Node.h>

#include <java/util/HashMap.h>
#include <java/util/Map$Entry.h>
#include <java/util/Objects.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $HashMap = ::java::util::HashMap;
using $Map$Entry = ::java::util::Map$Entry;
using $Objects = ::java::util::Objects;

namespace java {
	namespace util {

$FieldInfo _HashMap$Node_FieldInfo_[] = {
	{"hash", "I", nullptr, $FINAL, $field(HashMap$Node, hash)},
	{"key", "Ljava/lang/Object;", "TK;", $FINAL, $field(HashMap$Node, key)},
	{"value", "Ljava/lang/Object;", "TV;", 0, $field(HashMap$Node, value)},
	{"next", "Ljava/util/HashMap$Node;", "Ljava/util/HashMap$Node<TK;TV;>;", 0, $field(HashMap$Node, next)},
	{}
};

$MethodInfo _HashMap$Node_MethodInfo_[] = {
	{"<init>", "(ILjava/lang/Object;Ljava/lang/Object;Ljava/util/HashMap$Node;)V", "(ITK;TV;Ljava/util/HashMap$Node<TK;TV;>;)V", 0, $method(static_cast<void(HashMap$Node::*)(int32_t,Object$*,Object$*,HashMap$Node*)>(&HashMap$Node::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"getKey", "()Ljava/lang/Object;", "()TK;", $PUBLIC | $FINAL},
	{"getValue", "()Ljava/lang/Object;", "()TV;", $PUBLIC | $FINAL},
	{"hashCode", "()I", nullptr, $PUBLIC | $FINAL},
	{"setValue", "(Ljava/lang/Object;)Ljava/lang/Object;", "(TV;)TV;", $PUBLIC | $FINAL},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{}
};

$InnerClassInfo _HashMap$Node_InnerClassesInfo_[] = {
	{"java.util.HashMap$Node", "java.util.HashMap", "Node", $STATIC},
	{"java.util.Map$Entry", "java.util.Map", "Entry", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _HashMap$Node_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.HashMap$Node",
	"java.lang.Object",
	"java.util.Map$Entry",
	_HashMap$Node_FieldInfo_,
	_HashMap$Node_MethodInfo_,
	"<K:Ljava/lang/Object;V:Ljava/lang/Object;>Ljava/lang/Object;Ljava/util/Map$Entry<TK;TV;>;",
	nullptr,
	_HashMap$Node_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.HashMap"
};

$Object* allocate$HashMap$Node($Class* clazz) {
	return $of($alloc(HashMap$Node));
}

void HashMap$Node::init$(int32_t hash, Object$* key, Object$* value, HashMap$Node* next) {
	this->hash = hash;
	$set(this, key, key);
	$set(this, value, value);
	$set(this, next, next);
}

$Object* HashMap$Node::getKey() {
	return $of(this->key);
}

$Object* HashMap$Node::getValue() {
	return $of(this->value);
}

$String* HashMap$Node::toString() {
	return $str({this->key, "="_s, this->value});
}

int32_t HashMap$Node::hashCode() {
	int32_t var$0 = $Objects::hashCode(this->key);
	return var$0 ^ $Objects::hashCode(this->value);
}

$Object* HashMap$Node::setValue(Object$* newValue) {
	$var($Object, oldValue, this->value);
	$set(this, value, newValue);
	return $of(oldValue);
}

bool HashMap$Node::equals(Object$* o) {
	$useLocalCurrentObjectStackCache();
	if ($equals(o, this)) {
		return true;
	}
	$var($Map$Entry, e, nullptr);
	bool var$2 = $instanceOf($Map$Entry, o);
	if (var$2) {
		$assign(e, $cast($Map$Entry, o));
		var$2 = true;
	}
	bool var$1 = var$2;
	bool var$0 = var$1 && $Objects::equals(this->key, $($nc(e)->getKey()));
	return var$0 && $Objects::equals(this->value, $($nc(e)->getValue()));
}

HashMap$Node::HashMap$Node() {
}

$Class* HashMap$Node::load$($String* name, bool initialize) {
	$loadClass(HashMap$Node, name, initialize, &_HashMap$Node_ClassInfo_, allocate$HashMap$Node);
	return class$;
}

$Class* HashMap$Node::class$ = nullptr;

	} // util
} // java