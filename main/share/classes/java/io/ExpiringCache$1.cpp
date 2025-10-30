#include <java/io/ExpiringCache$1.h>

#include <java/io/ExpiringCache.h>
#include <java/util/HashMap.h>
#include <java/util/LinkedHashMap.h>
#include <java/util/Map$Entry.h>
#include <jcpp.h>

#undef MAX_ENTRIES

using $ExpiringCache = ::java::io::ExpiringCache;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $HashMap = ::java::util::HashMap;
using $LinkedHashMap = ::java::util::LinkedHashMap;
using $Map$Entry = ::java::util::Map$Entry;

namespace java {
	namespace io {

$FieldInfo _ExpiringCache$1_FieldInfo_[] = {
	{"this$0", "Ljava/io/ExpiringCache;", nullptr, $FINAL | $SYNTHETIC, $field(ExpiringCache$1, this$0)},
	{}
};

$MethodInfo _ExpiringCache$1_MethodInfo_[] = {
	{"<init>", "(Ljava/io/ExpiringCache;)V", nullptr, 0, $method(static_cast<void(ExpiringCache$1::*)($ExpiringCache*)>(&ExpiringCache$1::init$))},
	{"removeEldestEntry", "(Ljava/util/Map$Entry;)Z", "(Ljava/util/Map$Entry<Ljava/lang/String;Ljava/io/ExpiringCache$Entry;>;)Z", $PROTECTED},
	{}
};

$EnclosingMethodInfo _ExpiringCache$1_EnclosingMethodInfo_ = {
	"java.io.ExpiringCache",
	"<init>",
	"(J)V"
};

$InnerClassInfo _ExpiringCache$1_InnerClassesInfo_[] = {
	{"java.io.ExpiringCache$1", nullptr, nullptr, 0},
	{"java.io.ExpiringCache$Entry", "java.io.ExpiringCache", "Entry", $STATIC},
	{}
};

$ClassInfo _ExpiringCache$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.io.ExpiringCache$1",
	"java.util.LinkedHashMap",
	nullptr,
	_ExpiringCache$1_FieldInfo_,
	_ExpiringCache$1_MethodInfo_,
	"Ljava/util/LinkedHashMap<Ljava/lang/String;Ljava/io/ExpiringCache$Entry;>;",
	&_ExpiringCache$1_EnclosingMethodInfo_,
	_ExpiringCache$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.io.ExpiringCache"
};

$Object* allocate$ExpiringCache$1($Class* clazz) {
	return $of($alloc(ExpiringCache$1));
}

void ExpiringCache$1::init$($ExpiringCache* this$0) {
	$set(this, this$0, this$0);
	$LinkedHashMap::init$();
}

bool ExpiringCache$1::removeEldestEntry($Map$Entry* eldest) {
	return size() > this->this$0->MAX_ENTRIES;
}

ExpiringCache$1::ExpiringCache$1() {
}

$Class* ExpiringCache$1::load$($String* name, bool initialize) {
	$loadClass(ExpiringCache$1, name, initialize, &_ExpiringCache$1_ClassInfo_, allocate$ExpiringCache$1);
	return class$;
}

$Class* ExpiringCache$1::class$ = nullptr;

	} // io
} // java