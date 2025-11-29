#include <sun/util/PreHashedMap$2$1$1.h>

#include <java/lang/UnsupportedOperationException.h>
#include <java/util/Iterator.h>
#include <java/util/Map$Entry.h>
#include <sun/util/PreHashedMap$2$1.h>
#include <sun/util/PreHashedMap$2.h>
#include <sun/util/PreHashedMap.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $Iterator = ::java::util::Iterator;
using $Map$Entry = ::java::util::Map$Entry;
using $PreHashedMap = ::sun::util::PreHashedMap;
using $PreHashedMap$2$1 = ::sun::util::PreHashedMap$2$1;

namespace sun {
	namespace util {

$FieldInfo _PreHashedMap$2$1$1_FieldInfo_[] = {
	{"this$2", "Lsun/util/PreHashedMap$2$1;", nullptr, $FINAL | $SYNTHETIC, $field(PreHashedMap$2$1$1, this$2)},
	{"k", "Ljava/lang/String;", nullptr, 0, $field(PreHashedMap$2$1$1, k)},
	{}
};

$MethodInfo _PreHashedMap$2$1$1_MethodInfo_[] = {
	{"<init>", "(Lsun/util/PreHashedMap$2$1;)V", nullptr, 0, $method(static_cast<void(PreHashedMap$2$1$1::*)($PreHashedMap$2$1*)>(&PreHashedMap$2$1$1::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getKey", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getValue", "()Ljava/lang/Object;", "()TV;", $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"setValue", "(Ljava/lang/Object;)Ljava/lang/Object;", "(TV;)TV;", $PUBLIC},
	{}
};

$EnclosingMethodInfo _PreHashedMap$2$1$1_EnclosingMethodInfo_ = {
	"sun.util.PreHashedMap$2$1",
	"next",
	"()Ljava/util/Map$Entry;"
};

$InnerClassInfo _PreHashedMap$2$1$1_InnerClassesInfo_[] = {
	{"sun.util.PreHashedMap$2", nullptr, nullptr, 0},
	{"sun.util.PreHashedMap$2$1", nullptr, nullptr, 0},
	{"sun.util.PreHashedMap$2$1$1", nullptr, nullptr, 0},
	{"java.util.Map$Entry", "java.util.Map", "Entry", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _PreHashedMap$2$1$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.util.PreHashedMap$2$1$1",
	"java.lang.Object",
	"java.util.Map$Entry",
	_PreHashedMap$2$1$1_FieldInfo_,
	_PreHashedMap$2$1$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Map$Entry<Ljava/lang/String;TV;>;",
	&_PreHashedMap$2$1$1_EnclosingMethodInfo_,
	_PreHashedMap$2$1$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.util.PreHashedMap"
};

$Object* allocate$PreHashedMap$2$1$1($Class* clazz) {
	return $of($alloc(PreHashedMap$2$1$1));
}

void PreHashedMap$2$1$1::init$($PreHashedMap$2$1* this$2) {
	$set(this, this$2, this$2);
	$set(this, k, $cast($String, $nc(this->this$2->i)->next()));
}

$Object* PreHashedMap$2$1$1::getKey() {
	return $of(this->k);
}

$Object* PreHashedMap$2$1$1::getValue() {
	return $of($nc($nc(this->this$2->this$1)->this$0)->get(this->k));
}

int32_t PreHashedMap$2$1$1::hashCode() {
	$var($Object, v, $nc($nc(this->this$2->this$1)->this$0)->get(this->k));
	int32_t var$0 = $nc(this->k)->hashCode();
	return (var$0 + (v == nullptr ? 0 : $nc($of(v))->hashCode()));
}

bool PreHashedMap$2$1$1::equals(Object$* ob) {
	$useLocalCurrentObjectStackCache();
	if ($equals(ob, this)) {
		return true;
	}
	if (!($instanceOf($Map$Entry, ob))) {
		return false;
	}
	$var($Map$Entry, that, $cast($Map$Entry, ob));
	bool var$0 = ($cast($String, this->getKey()) == nullptr ? $nc(that)->getKey() == nullptr : $nc($($cast($String, this->getKey())))->equals($(that->getKey())));
	return (var$0 && (this->getValue() == nullptr ? that->getValue() == nullptr : $nc($of($(this->getValue())))->equals($(that->getValue()))));
}

$Object* PreHashedMap$2$1$1::setValue(Object$* v) {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

PreHashedMap$2$1$1::PreHashedMap$2$1$1() {
}

$Class* PreHashedMap$2$1$1::load$($String* name, bool initialize) {
	$loadClass(PreHashedMap$2$1$1, name, initialize, &_PreHashedMap$2$1$1_ClassInfo_, allocate$PreHashedMap$2$1$1);
	return class$;
}

$Class* PreHashedMap$2$1$1::class$ = nullptr;

	} // util
} // sun