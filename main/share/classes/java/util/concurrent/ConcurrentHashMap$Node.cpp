#include <java/util/concurrent/ConcurrentHashMap$Node.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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
using $ConcurrentHashMap = ::java::util::concurrent::ConcurrentHashMap;
using $Helpers = ::java::util::concurrent::Helpers;

namespace java {
	namespace util {
		namespace concurrent {

$FieldInfo _ConcurrentHashMap$Node_FieldInfo_[] = {
	{"hash", "I", nullptr, $FINAL, $field(ConcurrentHashMap$Node, hash)},
	{"key", "Ljava/lang/Object;", "TK;", $FINAL, $field(ConcurrentHashMap$Node, key)},
	{"val", "Ljava/lang/Object;", "TV;", $VOLATILE, $field(ConcurrentHashMap$Node, val)},
	{"next", "Ljava/util/concurrent/ConcurrentHashMap$Node;", "Ljava/util/concurrent/ConcurrentHashMap$Node<TK;TV;>;", $VOLATILE, $field(ConcurrentHashMap$Node, next)},
	{}
};

$MethodInfo _ConcurrentHashMap$Node_MethodInfo_[] = {
	{"<init>", "(ILjava/lang/Object;Ljava/lang/Object;)V", "(ITK;TV;)V", 0, $method(static_cast<void(ConcurrentHashMap$Node::*)(int32_t,Object$*,Object$*)>(&ConcurrentHashMap$Node::init$))},
	{"<init>", "(ILjava/lang/Object;Ljava/lang/Object;Ljava/util/concurrent/ConcurrentHashMap$Node;)V", "(ITK;TV;Ljava/util/concurrent/ConcurrentHashMap$Node<TK;TV;>;)V", 0, $method(static_cast<void(ConcurrentHashMap$Node::*)(int32_t,Object$*,Object$*,ConcurrentHashMap$Node*)>(&ConcurrentHashMap$Node::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"find", "(ILjava/lang/Object;)Ljava/util/concurrent/ConcurrentHashMap$Node;", "(ILjava/lang/Object;)Ljava/util/concurrent/ConcurrentHashMap$Node<TK;TV;>;", 0},
	{"getKey", "()Ljava/lang/Object;", "()TK;", $PUBLIC | $FINAL},
	{"getValue", "()Ljava/lang/Object;", "()TV;", $PUBLIC | $FINAL},
	{"hashCode", "()I", nullptr, $PUBLIC | $FINAL},
	{"setValue", "(Ljava/lang/Object;)Ljava/lang/Object;", "(TV;)TV;", $PUBLIC | $FINAL},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{}
};

$InnerClassInfo _ConcurrentHashMap$Node_InnerClassesInfo_[] = {
	{"java.util.concurrent.ConcurrentHashMap$Node", "java.util.concurrent.ConcurrentHashMap", "Node", $STATIC},
	{"java.util.Map$Entry", "java.util.Map", "Entry", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _ConcurrentHashMap$Node_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.concurrent.ConcurrentHashMap$Node",
	"java.lang.Object",
	"java.util.Map$Entry",
	_ConcurrentHashMap$Node_FieldInfo_,
	_ConcurrentHashMap$Node_MethodInfo_,
	"<K:Ljava/lang/Object;V:Ljava/lang/Object;>Ljava/lang/Object;Ljava/util/Map$Entry<TK;TV;>;",
	nullptr,
	_ConcurrentHashMap$Node_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.concurrent.ConcurrentHashMap"
};

$Object* allocate$ConcurrentHashMap$Node($Class* clazz) {
	return $of($alloc(ConcurrentHashMap$Node));
}

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
	return $of(this->key);
}

$Object* ConcurrentHashMap$Node::getValue() {
	return $of(this->val);
}

int32_t ConcurrentHashMap$Node::hashCode() {
	int32_t var$0 = $nc($of(this->key))->hashCode();
	return var$0 ^ $nc($of(this->val))->hashCode();
}

$String* ConcurrentHashMap$Node::toString() {
	return $Helpers::mapEntryToString(this->key, this->val);
}

$Object* ConcurrentHashMap$Node::setValue(Object$* value) {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

bool ConcurrentHashMap$Node::equals(Object$* o) {
	$var($Object, k, nullptr);
	$var($Object, v, nullptr);
	$var($Object, u, nullptr);
	$var($Map$Entry, e, nullptr);
	bool var$2 = ($instanceOf($Map$Entry, o)) && ($assign(k, $nc(($assign(e, $cast($Map$Entry, o))))->getKey())) != nullptr;
	bool var$1 = var$2 && ($assign(v, $nc(e)->getValue())) != nullptr;
	bool var$0 = var$1 && ($equals(k, this->key) || $nc($of(k))->equals(this->key));
	if (var$0) {
		bool var$3 = $equals(v, $assign(u, this->val));
		var$0 = (var$3 || $nc($of(v))->equals(u));
	}
	return (var$0);
}

ConcurrentHashMap$Node* ConcurrentHashMap$Node::find(int32_t h, Object$* k) {
	$var(ConcurrentHashMap$Node, e, this);
	if (k != nullptr) {
		do {
			$var($Object, ek, nullptr);
			bool var$0 = e->hash == h;
			if (var$0) {
				bool var$1 = $equals($assign(ek, e->key), k);
				var$0 = (var$1 || (ek != nullptr && $of(k)->equals(ek)));
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
	$loadClass(ConcurrentHashMap$Node, name, initialize, &_ConcurrentHashMap$Node_ClassInfo_, allocate$ConcurrentHashMap$Node);
	return class$;
}

$Class* ConcurrentHashMap$Node::class$ = nullptr;

		} // concurrent
	} // util
} // java