#include <sun/util/PreHashedMap$1.h>
#include <java/util/AbstractSet.h>
#include <java/util/Iterator.h>
#include <sun/util/PreHashedMap$1$1.h>
#include <sun/util/PreHashedMap.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractSet = ::java::util::AbstractSet;
using $Iterator = ::java::util::Iterator;
using $PreHashedMap = ::sun::util::PreHashedMap;
using $PreHashedMap$1$1 = ::sun::util::PreHashedMap$1$1;

namespace sun {
	namespace util {

void PreHashedMap$1::init$($PreHashedMap* this$0) {
	$set(this, this$0, this$0);
	$AbstractSet::init$();
}

int32_t PreHashedMap$1::size() {
	return this->this$0->size$;
}

$Iterator* PreHashedMap$1::iterator() {
	return $new($PreHashedMap$1$1, this);
}

PreHashedMap$1::PreHashedMap$1() {
}

$Class* PreHashedMap$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/util/PreHashedMap;", nullptr, $FINAL | $SYNTHETIC, $field(PreHashedMap$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/util/PreHashedMap;)V", nullptr, 0, $method(PreHashedMap$1, init$, void, $PreHashedMap*)},
		{"iterator", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<Ljava/lang/String;>;", $PUBLIC, $virtualMethod(PreHashedMap$1, iterator, $Iterator*)},
		{"size", "()I", nullptr, $PUBLIC, $virtualMethod(PreHashedMap$1, size, int32_t)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.util.PreHashedMap",
		"keySet",
		"()Ljava/util/Set;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.util.PreHashedMap$1", nullptr, nullptr, 0},
		{"sun.util.PreHashedMap$1$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.util.PreHashedMap$1",
		"java.util.AbstractSet",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljava/util/AbstractSet<Ljava/lang/String;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.util.PreHashedMap"
	};
	$loadClass(PreHashedMap$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(PreHashedMap$1));
	});
	return class$;
}

$Class* PreHashedMap$1::class$ = nullptr;

	} // util
} // sun