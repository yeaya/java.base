#include <java/util/Collections$UnmodifiableMap$UnmodifiableEntrySet$UnmodifiableEntry.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Collections$UnmodifiableMap$UnmodifiableEntrySet.h>
#include <java/util/Collections.h>
#include <java/util/Map$Entry.h>
#include <java/util/Objects.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $Collections = ::java::util::Collections;
using $Collections$UnmodifiableMap$UnmodifiableEntrySet = ::java::util::Collections$UnmodifiableMap$UnmodifiableEntrySet;
using $Map$Entry = ::java::util::Map$Entry;
using $Objects = ::java::util::Objects;

namespace java {
	namespace util {

$FieldInfo _Collections$UnmodifiableMap$UnmodifiableEntrySet$UnmodifiableEntry_FieldInfo_[] = {
	{"e", "Ljava/util/Map$Entry;", "Ljava/util/Map$Entry<+TK;+TV;>;", $PRIVATE, $field(Collections$UnmodifiableMap$UnmodifiableEntrySet$UnmodifiableEntry, e)},
	{}
};

$MethodInfo _Collections$UnmodifiableMap$UnmodifiableEntrySet$UnmodifiableEntry_MethodInfo_[] = {
	{"<init>", "(Ljava/util/Map$Entry;)V", "(Ljava/util/Map$Entry<+TK;+TV;>;)V", 0, $method(static_cast<void(Collections$UnmodifiableMap$UnmodifiableEntrySet$UnmodifiableEntry::*)($Map$Entry*)>(&Collections$UnmodifiableMap$UnmodifiableEntrySet$UnmodifiableEntry::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getKey", "()Ljava/lang/Object;", "()TK;", $PUBLIC},
	{"getValue", "()Ljava/lang/Object;", "()TV;", $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"setValue", "(Ljava/lang/Object;)Ljava/lang/Object;", "(TV;)TV;", $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Collections$UnmodifiableMap$UnmodifiableEntrySet$UnmodifiableEntry_InnerClassesInfo_[] = {
	{"java.util.Collections$UnmodifiableMap", "java.util.Collections", "UnmodifiableMap", $PRIVATE | $STATIC},
	{"java.util.Collections$UnmodifiableMap$UnmodifiableEntrySet", "java.util.Collections$UnmodifiableMap", "UnmodifiableEntrySet", $STATIC},
	{"java.util.Collections$UnmodifiableMap$UnmodifiableEntrySet$UnmodifiableEntry", "java.util.Collections$UnmodifiableMap$UnmodifiableEntrySet", "UnmodifiableEntry", $PRIVATE | $STATIC},
	{"java.util.Map$Entry", "java.util.Map", "Entry", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Collections$UnmodifiableMap$UnmodifiableEntrySet$UnmodifiableEntry_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.Collections$UnmodifiableMap$UnmodifiableEntrySet$UnmodifiableEntry",
	"java.lang.Object",
	"java.util.Map$Entry",
	_Collections$UnmodifiableMap$UnmodifiableEntrySet$UnmodifiableEntry_FieldInfo_,
	_Collections$UnmodifiableMap$UnmodifiableEntrySet$UnmodifiableEntry_MethodInfo_,
	"<K:Ljava/lang/Object;V:Ljava/lang/Object;>Ljava/lang/Object;Ljava/util/Map$Entry<TK;TV;>;",
	nullptr,
	_Collections$UnmodifiableMap$UnmodifiableEntrySet$UnmodifiableEntry_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.Collections"
};

$Object* allocate$Collections$UnmodifiableMap$UnmodifiableEntrySet$UnmodifiableEntry($Class* clazz) {
	return $of($alloc(Collections$UnmodifiableMap$UnmodifiableEntrySet$UnmodifiableEntry));
}

void Collections$UnmodifiableMap$UnmodifiableEntrySet$UnmodifiableEntry::init$($Map$Entry* e) {
	$set(this, e, $cast($Map$Entry, $Objects::requireNonNull(e)));
}

$Object* Collections$UnmodifiableMap$UnmodifiableEntrySet$UnmodifiableEntry::getKey() {
	return $of($nc(this->e)->getKey());
}

$Object* Collections$UnmodifiableMap$UnmodifiableEntrySet$UnmodifiableEntry::getValue() {
	return $of($nc(this->e)->getValue());
}

$Object* Collections$UnmodifiableMap$UnmodifiableEntrySet$UnmodifiableEntry::setValue(Object$* value) {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

int32_t Collections$UnmodifiableMap$UnmodifiableEntrySet$UnmodifiableEntry::hashCode() {
	return $nc(this->e)->hashCode();
}

bool Collections$UnmodifiableMap$UnmodifiableEntrySet$UnmodifiableEntry::equals(Object$* o) {
	if ($equals(this, o)) {
		return true;
	}
	$var($Map$Entry, t, nullptr);
	bool var$2 = $instanceOf($Map$Entry, o);
	if (var$2) {
		$assign(t, $cast($Map$Entry, o));
		var$2 = true;
	}
	bool var$1 = var$2;
	if (var$1) {
		$var($Object, var$3, $nc(this->e)->getKey());
		var$1 = $Collections::eq(var$3, $($nc(t)->getKey()));
	}
	bool var$0 = var$1;
	if (var$0) {
		$var($Object, var$4, $nc(this->e)->getValue());
		var$0 = $Collections::eq(var$4, $($nc(t)->getValue()));
	}
	return var$0;
}

$String* Collections$UnmodifiableMap$UnmodifiableEntrySet$UnmodifiableEntry::toString() {
	return $nc($of(this->e))->toString();
}

Collections$UnmodifiableMap$UnmodifiableEntrySet$UnmodifiableEntry::Collections$UnmodifiableMap$UnmodifiableEntrySet$UnmodifiableEntry() {
}

$Class* Collections$UnmodifiableMap$UnmodifiableEntrySet$UnmodifiableEntry::load$($String* name, bool initialize) {
	$loadClass(Collections$UnmodifiableMap$UnmodifiableEntrySet$UnmodifiableEntry, name, initialize, &_Collections$UnmodifiableMap$UnmodifiableEntrySet$UnmodifiableEntry_ClassInfo_, allocate$Collections$UnmodifiableMap$UnmodifiableEntrySet$UnmodifiableEntry);
	return class$;
}

$Class* Collections$UnmodifiableMap$UnmodifiableEntrySet$UnmodifiableEntry::class$ = nullptr;

	} // util
} // java