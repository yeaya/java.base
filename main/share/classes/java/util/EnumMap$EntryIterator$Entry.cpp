#include <java/util/EnumMap$EntryIterator$Entry.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Enum.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/EnumMap$EntryIterator.h>
#include <java/util/EnumMap.h>
#include <java/util/Map$Entry.h>
#include <jcpp.h>

using $EnumArray = $Array<::java::lang::Enum>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EnumMap = ::java::util::EnumMap;
using $EnumMap$EntryIterator = ::java::util::EnumMap$EntryIterator;
using $Map$Entry = ::java::util::Map$Entry;

namespace java {
	namespace util {

$FieldInfo _EnumMap$EntryIterator$Entry_FieldInfo_[] = {
	{"this$1", "Ljava/util/EnumMap$EntryIterator;", nullptr, $FINAL | $SYNTHETIC, $field(EnumMap$EntryIterator$Entry, this$1)},
	{"index", "I", nullptr, $PRIVATE, $field(EnumMap$EntryIterator$Entry, index)},
	{}
};

$MethodInfo _EnumMap$EntryIterator$Entry_MethodInfo_[] = {
	{"<init>", "(Ljava/util/EnumMap$EntryIterator;I)V", nullptr, $PRIVATE, $method(static_cast<void(EnumMap$EntryIterator$Entry::*)($EnumMap$EntryIterator*,int32_t)>(&EnumMap$EntryIterator$Entry::init$))},
	{"checkIndexForEntryUse", "()V", nullptr, $PRIVATE, $method(static_cast<void(EnumMap$EntryIterator$Entry::*)()>(&EnumMap$EntryIterator$Entry::checkIndexForEntryUse))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getKey", "()Ljava/lang/Enum;", "()TK;", $PUBLIC},
	{"getValue", "()Ljava/lang/Object;", "()TV;", $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"setValue", "(Ljava/lang/Object;)Ljava/lang/Object;", "(TV;)TV;", $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _EnumMap$EntryIterator$Entry_InnerClassesInfo_[] = {
	{"java.util.EnumMap$EntryIterator", "java.util.EnumMap", "EntryIterator", $PRIVATE},
	{"java.util.EnumMap$EntryIterator$Entry", "java.util.EnumMap$EntryIterator", "Entry", $PRIVATE},
	{"java.util.Map$Entry", "java.util.Map", "Entry", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _EnumMap$EntryIterator$Entry_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.EnumMap$EntryIterator$Entry",
	"java.lang.Object",
	"java.util.Map$Entry",
	_EnumMap$EntryIterator$Entry_FieldInfo_,
	_EnumMap$EntryIterator$Entry_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Map$Entry<TK;TV;>;",
	nullptr,
	_EnumMap$EntryIterator$Entry_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.EnumMap"
};

$Object* allocate$EnumMap$EntryIterator$Entry($Class* clazz) {
	return $of($alloc(EnumMap$EntryIterator$Entry));
}

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
	return $of($nc(this->this$1->this$0)->unmaskNull($nc($nc(this->this$1->this$0)->vals)->get(this->index)));
}

$Object* EnumMap$EntryIterator$Entry::setValue(Object$* value) {
	$useLocalCurrentObjectStackCache();
	checkIndexForEntryUse();
	$var($Object, oldValue, $nc(this->this$1->this$0)->unmaskNull($nc($nc(this->this$1->this$0)->vals)->get(this->index)));
	$nc($nc(this->this$1->this$0)->vals)->set(this->index, $($nc(this->this$1->this$0)->maskNull(value)));
	return $of(oldValue);
}

bool EnumMap$EntryIterator$Entry::equals(Object$* o) {
	$useLocalCurrentObjectStackCache();
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
	bool var$1 = $equals(e->getKey(), $nc($nc(this->this$1->this$0)->keyUniverse)->get(this->index));
	return (var$1 && ($equals(ourValue, hisValue) || (ourValue != nullptr && $of(ourValue)->equals(hisValue))));
}

int32_t EnumMap$EntryIterator$Entry::hashCode() {
	if (this->index < 0) {
		return $Map$Entry::hashCode();
	}
	return $nc(this->this$1->this$0)->entryHashCode(this->index);
}

$String* EnumMap$EntryIterator$Entry::toString() {
	$useLocalCurrentObjectStackCache();
	if (this->index < 0) {
		return $Map$Entry::toString();
	}
	$var($String, var$0, $$str({$nc($nc(this->this$1->this$0)->keyUniverse)->get(this->index), "="_s}));
	return $concat(var$0, $($nc(this->this$1->this$0)->unmaskNull($nc($nc(this->this$1->this$0)->vals)->get(this->index))));
}

void EnumMap$EntryIterator$Entry::checkIndexForEntryUse() {
	if (this->index < 0) {
		$throwNew($IllegalStateException, "Entry was removed"_s);
	}
}

EnumMap$EntryIterator$Entry::EnumMap$EntryIterator$Entry() {
}

$Class* EnumMap$EntryIterator$Entry::load$($String* name, bool initialize) {
	$loadClass(EnumMap$EntryIterator$Entry, name, initialize, &_EnumMap$EntryIterator$Entry_ClassInfo_, allocate$EnumMap$EntryIterator$Entry);
	return class$;
}

$Class* EnumMap$EntryIterator$Entry::class$ = nullptr;

	} // util
} // java