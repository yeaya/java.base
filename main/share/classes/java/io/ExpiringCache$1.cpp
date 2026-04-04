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
using $LinkedHashMap = ::java::util::LinkedHashMap;
using $Map$Entry = ::java::util::Map$Entry;

namespace java {
	namespace io {

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
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/io/ExpiringCache;", nullptr, $FINAL | $SYNTHETIC, $field(ExpiringCache$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/io/ExpiringCache;)V", nullptr, 0, $method(ExpiringCache$1, init$, void, $ExpiringCache*)},
		{"removeEldestEntry", "(Ljava/util/Map$Entry;)Z", "(Ljava/util/Map$Entry<Ljava/lang/String;Ljava/io/ExpiringCache$Entry;>;)Z", $PROTECTED, $virtualMethod(ExpiringCache$1, removeEldestEntry, bool, $Map$Entry*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.io.ExpiringCache",
		"<init>",
		"(J)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.io.ExpiringCache$1", nullptr, nullptr, 0},
		{"java.io.ExpiringCache$Entry", "java.io.ExpiringCache", "Entry", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.io.ExpiringCache$1",
		"java.util.LinkedHashMap",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljava/util/LinkedHashMap<Ljava/lang/String;Ljava/io/ExpiringCache$Entry;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.io.ExpiringCache"
	};
	$loadClass(ExpiringCache$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(ExpiringCache$1));
	});
	return class$;
}

$Class* ExpiringCache$1::class$ = nullptr;

	} // io
} // java