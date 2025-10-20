#include <java/util/AbstractMap$SimpleEntry.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/AbstractMap.h>
#include <java/util/Map$Entry.h>
#include <jcpp.h>

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractMap = ::java::util::AbstractMap;
using $Map$Entry = ::java::util::Map$Entry;

namespace java {
	namespace util {

$FieldInfo _AbstractMap$SimpleEntry_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AbstractMap$SimpleEntry, serialVersionUID)},
	{"key", "Ljava/lang/Object;", "TK;", $PRIVATE | $FINAL, $field(AbstractMap$SimpleEntry, key)},
	{"value", "Ljava/lang/Object;", "TV;", $PRIVATE, $field(AbstractMap$SimpleEntry, value)},
	{}
};

$MethodInfo _AbstractMap$SimpleEntry_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"<init>", "(Ljava/lang/Object;Ljava/lang/Object;)V", "(TK;TV;)V", $PUBLIC, $method(static_cast<void(AbstractMap$SimpleEntry::*)(Object$*,Object$*)>(&AbstractMap$SimpleEntry::init$))},
	{"<init>", "(Ljava/util/Map$Entry;)V", "(Ljava/util/Map$Entry<+TK;+TV;>;)V", $PUBLIC, $method(static_cast<void(AbstractMap$SimpleEntry::*)($Map$Entry*)>(&AbstractMap$SimpleEntry::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getKey", "()Ljava/lang/Object;", "()TK;", $PUBLIC},
	{"getValue", "()Ljava/lang/Object;", "()TV;", $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"setValue", "(Ljava/lang/Object;)Ljava/lang/Object;", "(TV;)TV;", $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _AbstractMap$SimpleEntry_InnerClassesInfo_[] = {
	{"java.util.AbstractMap$SimpleEntry", "java.util.AbstractMap", "SimpleEntry", $PUBLIC | $STATIC},
	{"java.util.Map$Entry", "java.util.Map", "Entry", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _AbstractMap$SimpleEntry_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.util.AbstractMap$SimpleEntry",
	"java.lang.Object",
	"java.util.Map$Entry,java.io.Serializable",
	_AbstractMap$SimpleEntry_FieldInfo_,
	_AbstractMap$SimpleEntry_MethodInfo_,
	"<K:Ljava/lang/Object;V:Ljava/lang/Object;>Ljava/lang/Object;Ljava/util/Map$Entry<TK;TV;>;Ljava/io/Serializable;",
	nullptr,
	_AbstractMap$SimpleEntry_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.AbstractMap"
};

$Object* allocate$AbstractMap$SimpleEntry($Class* clazz) {
	return $of($alloc(AbstractMap$SimpleEntry));
}

$Object* AbstractMap$SimpleEntry::clone() {
	 return this->$Map$Entry::clone();
}

void AbstractMap$SimpleEntry::finalize() {
	this->$Map$Entry::finalize();
}

void AbstractMap$SimpleEntry::init$(Object$* key, Object$* value) {
	$set(this, key, key);
	$set(this, value, value);
}

void AbstractMap$SimpleEntry::init$($Map$Entry* entry) {
	$set(this, key, $nc(entry)->getKey());
	$set(this, value, entry->getValue());
}

$Object* AbstractMap$SimpleEntry::getKey() {
	return $of(this->key);
}

$Object* AbstractMap$SimpleEntry::getValue() {
	return $of(this->value);
}

$Object* AbstractMap$SimpleEntry::setValue(Object$* value) {
	$var($Object, oldValue, this->value);
	$set(this, value, value);
	return $of(oldValue);
}

bool AbstractMap$SimpleEntry::equals(Object$* o) {
	$useLocalCurrentObjectStackCache();
	$var($Map$Entry, e, nullptr);
	bool var$2 = $instanceOf($Map$Entry, o);
	if (var$2) {
		$assign(e, $cast($Map$Entry, o));
		var$2 = true;
	}
	bool var$1 = var$2;
	bool var$0 = var$1 && $AbstractMap::eq(this->key, $($nc(e)->getKey()));
	return var$0 && $AbstractMap::eq(this->value, $($nc(e)->getValue()));
}

int32_t AbstractMap$SimpleEntry::hashCode() {
	int32_t var$0 = (this->key == nullptr ? 0 : $nc($of(this->key))->hashCode());
	return var$0 ^ (this->value == nullptr ? 0 : $nc($of(this->value))->hashCode());
}

$String* AbstractMap$SimpleEntry::toString() {
	return $str({this->key, "="_s, this->value});
}

AbstractMap$SimpleEntry::AbstractMap$SimpleEntry() {
}

$Class* AbstractMap$SimpleEntry::load$($String* name, bool initialize) {
	$loadClass(AbstractMap$SimpleEntry, name, initialize, &_AbstractMap$SimpleEntry_ClassInfo_, allocate$AbstractMap$SimpleEntry);
	return class$;
}

$Class* AbstractMap$SimpleEntry::class$ = nullptr;

	} // util
} // java