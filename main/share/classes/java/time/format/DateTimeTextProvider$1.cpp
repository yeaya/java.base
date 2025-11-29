#include <java/time/format/DateTimeTextProvider$1.h>

#include <java/util/Map$Entry.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Map$Entry = ::java::util::Map$Entry;

namespace java {
	namespace time {
		namespace format {

$MethodInfo _DateTimeTextProvider$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(DateTimeTextProvider$1::*)()>(&DateTimeTextProvider$1::init$))},
	{"compare", "(Ljava/util/Map$Entry;Ljava/util/Map$Entry;)I", "(Ljava/util/Map$Entry<Ljava/lang/String;Ljava/lang/Long;>;Ljava/util/Map$Entry<Ljava/lang/String;Ljava/lang/Long;>;)I", $PUBLIC},
	{"compare", "(Ljava/lang/Object;Ljava/lang/Object;)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$EnclosingMethodInfo _DateTimeTextProvider$1_EnclosingMethodInfo_ = {
	"java.time.format.DateTimeTextProvider",
	nullptr,
	nullptr
};

$InnerClassInfo _DateTimeTextProvider$1_InnerClassesInfo_[] = {
	{"java.time.format.DateTimeTextProvider$1", nullptr, nullptr, 0},
	{"java.util.Map$Entry", "java.util.Map", "Entry", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _DateTimeTextProvider$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.time.format.DateTimeTextProvider$1",
	"java.lang.Object",
	"java.util.Comparator",
	nullptr,
	_DateTimeTextProvider$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Comparator<Ljava/util/Map$Entry<Ljava/lang/String;Ljava/lang/Long;>;>;",
	&_DateTimeTextProvider$1_EnclosingMethodInfo_,
	_DateTimeTextProvider$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.time.format.DateTimeTextProvider"
};

$Object* allocate$DateTimeTextProvider$1($Class* clazz) {
	return $of($alloc(DateTimeTextProvider$1));
}

void DateTimeTextProvider$1::init$() {
}

int32_t DateTimeTextProvider$1::compare($Map$Entry* obj1, $Map$Entry* obj2) {
	$useLocalCurrentObjectStackCache();
	int32_t var$0 = $nc(($cast($String, $($nc(obj2)->getKey()))))->length();
	return var$0 - $nc(($cast($String, $($nc(obj1)->getKey()))))->length();
}

int32_t DateTimeTextProvider$1::compare(Object$* obj1, Object$* obj2) {
	return this->compare($cast($Map$Entry, obj1), $cast($Map$Entry, obj2));
}

DateTimeTextProvider$1::DateTimeTextProvider$1() {
}

$Class* DateTimeTextProvider$1::load$($String* name, bool initialize) {
	$loadClass(DateTimeTextProvider$1, name, initialize, &_DateTimeTextProvider$1_ClassInfo_, allocate$DateTimeTextProvider$1);
	return class$;
}

$Class* DateTimeTextProvider$1::class$ = nullptr;

		} // format
	} // time
} // java