#include <java/util/Hashtable$Entry.h>

#include <java/util/Hashtable.h>
#include <java/util/Map$Entry.h>
#include <java/util/Objects.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Hashtable = ::java::util::Hashtable;
using $Map$Entry = ::java::util::Map$Entry;
using $Objects = ::java::util::Objects;

namespace java {
	namespace util {

$FieldInfo _Hashtable$Entry_FieldInfo_[] = {
	{"hash", "I", nullptr, $FINAL, $field(Hashtable$Entry, hash)},
	{"key", "Ljava/lang/Object;", "TK;", $FINAL, $field(Hashtable$Entry, key)},
	{"value", "Ljava/lang/Object;", "TV;", 0, $field(Hashtable$Entry, value)},
	{"next", "Ljava/util/Hashtable$Entry;", "Ljava/util/Hashtable$Entry<TK;TV;>;", 0, $field(Hashtable$Entry, next)},
	{}
};

$MethodInfo _Hashtable$Entry_MethodInfo_[] = {
	{"<init>", "(ILjava/lang/Object;Ljava/lang/Object;Ljava/util/Hashtable$Entry;)V", "(ITK;TV;Ljava/util/Hashtable$Entry<TK;TV;>;)V", $PROTECTED, $method(static_cast<void(Hashtable$Entry::*)(int32_t,Object$*,Object$*,Hashtable$Entry*)>(&Hashtable$Entry::init$))},
	{"clone", "()Ljava/lang/Object;", nullptr, $PROTECTED},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getKey", "()Ljava/lang/Object;", "()TK;", $PUBLIC},
	{"getValue", "()Ljava/lang/Object;", "()TV;", $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"setValue", "(Ljava/lang/Object;)Ljava/lang/Object;", "(TV;)TV;", $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Hashtable$Entry_InnerClassesInfo_[] = {
	{"java.util.Hashtable$Entry", "java.util.Hashtable", "Entry", $PRIVATE | $STATIC},
	{"java.util.Map$Entry", "java.util.Map", "Entry", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Hashtable$Entry_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.Hashtable$Entry",
	"java.lang.Object",
	"java.util.Map$Entry",
	_Hashtable$Entry_FieldInfo_,
	_Hashtable$Entry_MethodInfo_,
	"<K:Ljava/lang/Object;V:Ljava/lang/Object;>Ljava/lang/Object;Ljava/util/Map$Entry<TK;TV;>;",
	nullptr,
	_Hashtable$Entry_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.Hashtable"
};

$Object* allocate$Hashtable$Entry($Class* clazz) {
	return $of($alloc(Hashtable$Entry));
}

void Hashtable$Entry::init$(int32_t hash, Object$* key, Object$* value, Hashtable$Entry* next) {
	this->hash = hash;
	$set(this, key, key);
	$set(this, value, value);
	$set(this, next, next);
}

$Object* Hashtable$Entry::clone() {
	return $of($new(Hashtable$Entry, this->hash, this->key, this->value, (this->next == nullptr ? (Hashtable$Entry*)nullptr : $cast(Hashtable$Entry, $($nc(this->next)->clone())))));
}

$Object* Hashtable$Entry::getKey() {
	return $of(this->key);
}

$Object* Hashtable$Entry::getValue() {
	return $of(this->value);
}

$Object* Hashtable$Entry::setValue(Object$* value) {
	if (value == nullptr) {
		$throwNew($NullPointerException);
	}
	$var($Object, oldValue, this->value);
	$set(this, value, value);
	return $of(oldValue);
}

bool Hashtable$Entry::equals(Object$* o) {
	$useLocalCurrentObjectStackCache();
	$var($Map$Entry, e, nullptr);
	bool var$0 = $instanceOf($Map$Entry, o);
	if (var$0) {
		$assign(e, $cast($Map$Entry, o));
		var$0 = true;
	}
	if (!(var$0)) {
		return false;
	}
	bool var$1 = (this->key == nullptr ? $nc(e)->getKey() == nullptr : $nc($of(this->key))->equals($(e->getKey())));
	return var$1 && (this->value == nullptr ? e->getValue() == nullptr : $nc($of(this->value))->equals($(e->getValue())));
}

int32_t Hashtable$Entry::hashCode() {
	return this->hash ^ $Objects::hashCode(this->value);
}

$String* Hashtable$Entry::toString() {
	$useLocalCurrentObjectStackCache();
	$var($String, var$0, $$str({$($nc($of(this->key))->toString()), "="_s}));
	return $concat(var$0, $($nc($of(this->value))->toString()));
}

Hashtable$Entry::Hashtable$Entry() {
}

$Class* Hashtable$Entry::load$($String* name, bool initialize) {
	$loadClass(Hashtable$Entry, name, initialize, &_Hashtable$Entry_ClassInfo_, allocate$Hashtable$Entry);
	return class$;
}

$Class* Hashtable$Entry::class$ = nullptr;

	} // util
} // java