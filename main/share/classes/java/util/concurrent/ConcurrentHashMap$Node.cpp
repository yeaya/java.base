#include <java/util/concurrent/ConcurrentHashMap$Node.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/util/Map$Entry.h>
#include <java/util/concurrent/ConcurrentHashMap.h>
#include <java/util/concurrent/Helpers.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $Map$Entry = ::java::util::Map$Entry;
using $Helpers = ::java::util::concurrent::Helpers;

namespace java {
	namespace util {
		namespace concurrent {

void ConcurrentHashMap$Node::init$(int32_t hash, Object$* key, Object$* val) {
	this->hash = hash;
	$set(this, key, key);
	$set(this, val, val);
}

void ConcurrentHashMap$Node::init$(int32_t hash, Object$* key, Object$* val, ConcurrentHashMap$Node* next) {
	ConcurrentHashMap$Node::init$(hash, key, val);
	$set(this, next, next);
}

$Object* ConcurrentHashMap$Node::getKey() {
	return this->key;
}

$Object* ConcurrentHashMap$Node::getValue() {
	return this->val;
}

int32_t ConcurrentHashMap$Node::hashCode() {
	int32_t var$0 = $nc(this->key)->hashCode();
	return var$0 ^ $nc(this->val)->hashCode();
}

$String* ConcurrentHashMap$Node::toString() {
	return $Helpers::mapEntryToString(this->key, this->val);
}

$Object* ConcurrentHashMap$Node::setValue(Object$* value) {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

bool ConcurrentHashMap$Node::equals(Object$* o) {
	$useLocalObjectStack();
	$var($Object, k, nullptr);
	$var($Object, v, nullptr);
	$var($Object, u, nullptr);
	$var($Map$Entry, e, nullptr);
	bool var$2 = ($instanceOf($Map$Entry, o)) && ($assign(k, $nc(($assign(e, $cast($Map$Entry, o))))->getKey())) != nullptr;
	bool var$1 = var$2 && ($assign(v, $nc(e)->getValue())) != nullptr;
	bool var$0 = var$1 && ($equals(k, this->key) || $nc(k)->equals(this->key));
	if (var$0) {
		bool var$3 = $equals(v, $assign(u, this->val));
		var$0 = var$3 || $nc(v)->equals(u);
	}
	return (var$0);
}

ConcurrentHashMap$Node* ConcurrentHashMap$Node::find(int32_t h, Object$* k) {
	$useLocalObjectStack();
	$var(ConcurrentHashMap$Node, e, this);
	if (k != nullptr) {
		do {
			$var($Object, ek, nullptr);
			bool var$0 = e->hash == h;
			if (var$0) {
				bool var$1 = $equals($assign(ek, e->key), k);
				var$0 = var$1 || (ek != nullptr && $of(k)->equals(ek));
			}
			if (var$0) {
				return e;
			}
		} while (($assign(e, e->next)) != nullptr);
	}
	return nullptr;
}

ConcurrentHashMap$Node::ConcurrentHashMap$Node() {
}

$Class* ConcurrentHashMap$Node::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"hash", "I", nullptr, $FINAL, $field(ConcurrentHashMap$Node, hash)},
		{"key", "Ljava/lang/Object;", "TK;", $FINAL, $field(ConcurrentHashMap$Node, key)},
		{"val", "Ljava/lang/Object;", "TV;", $VOLATILE, $field(ConcurrentHashMap$Node, val)},
		{"next", "Ljava/util/concurrent/ConcurrentHashMap$Node;", "Ljava/util/concurrent/ConcurrentHashMap$Node<TK;TV;>;", $VOLATILE, $field(ConcurrentHashMap$Node, next)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(ILjava/lang/Object;Ljava/lang/Object;)V", "(ITK;TV;)V", 0, $method(ConcurrentHashMap$Node, init$, void, int32_t, Object$*, Object$*)},
		{"<init>", "(ILjava/lang/Object;Ljava/lang/Object;Ljava/util/concurrent/ConcurrentHashMap$Node;)V", "(ITK;TV;Ljava/util/concurrent/ConcurrentHashMap$Node<TK;TV;>;)V", 0, $method(ConcurrentHashMap$Node, init$, void, int32_t, Object$*, Object$*, ConcurrentHashMap$Node*)},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL, $virtualMethod(ConcurrentHashMap$Node, equals, bool, Object$*)},
		{"find", "(ILjava/lang/Object;)Ljava/util/concurrent/ConcurrentHashMap$Node;", "(ILjava/lang/Object;)Ljava/util/concurrent/ConcurrentHashMap$Node<TK;TV;>;", 0, $virtualMethod(ConcurrentHashMap$Node, find, ConcurrentHashMap$Node*, int32_t, Object$*)},
		{"getKey", "()Ljava/lang/Object;", "()TK;", $PUBLIC | $FINAL, $virtualMethod(ConcurrentHashMap$Node, getKey, $Object*)},
		{"getValue", "()Ljava/lang/Object;", "()TV;", $PUBLIC | $FINAL, $virtualMethod(ConcurrentHashMap$Node, getValue, $Object*)},
		{"hashCode", "()I", nullptr, $PUBLIC | $FINAL, $virtualMethod(ConcurrentHashMap$Node, hashCode, int32_t)},
		{"setValue", "(Ljava/lang/Object;)Ljava/lang/Object;", "(TV;)TV;", $PUBLIC | $FINAL, $virtualMethod(ConcurrentHashMap$Node, setValue, $Object*, Object$*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $virtualMethod(ConcurrentHashMap$Node, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.concurrent.ConcurrentHashMap$Node", "java.util.concurrent.ConcurrentHashMap", "Node", $STATIC},
		{"java.util.Map$Entry", "java.util.Map", "Entry", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.util.concurrent.ConcurrentHashMap$Node",
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
		"java.util.concurrent.ConcurrentHashMap"
	};
	$loadClass(ConcurrentHashMap$Node, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ConcurrentHashMap$Node);
	});
	return class$;
}

$Class* ConcurrentHashMap$Node::class$ = nullptr;

		} // concurrent
	} // util
} // java