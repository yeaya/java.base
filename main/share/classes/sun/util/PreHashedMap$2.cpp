#include <sun/util/PreHashedMap$2.h>
#include <java/util/AbstractSet.h>
#include <java/util/Iterator.h>
#include <sun/util/PreHashedMap$2$1.h>
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
using $PreHashedMap$2$1 = ::sun::util::PreHashedMap$2$1;

namespace sun {
	namespace util {

void PreHashedMap$2::init$($PreHashedMap* this$0) {
	$set(this, this$0, this$0);
	$AbstractSet::init$();
}

int32_t PreHashedMap$2::size() {
	return this->this$0->size$;
}

$Iterator* PreHashedMap$2::iterator() {
	return $new($PreHashedMap$2$1, this);
}

PreHashedMap$2::PreHashedMap$2() {
}

$Class* PreHashedMap$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/util/PreHashedMap;", nullptr, $FINAL | $SYNTHETIC, $field(PreHashedMap$2, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/util/PreHashedMap;)V", nullptr, 0, $method(PreHashedMap$2, init$, void, $PreHashedMap*)},
		{"iterator", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<Ljava/util/Map$Entry<Ljava/lang/String;TV;>;>;", $PUBLIC, $virtualMethod(PreHashedMap$2, iterator, $Iterator*)},
		{"size", "()I", nullptr, $PUBLIC, $virtualMethod(PreHashedMap$2, size, int32_t)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.util.PreHashedMap",
		"entrySet",
		"()Ljava/util/Set;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.util.PreHashedMap$2", nullptr, nullptr, 0},
		{"sun.util.PreHashedMap$2$1", nullptr, nullptr, 0},
		{"java.util.Map$Entry", "java.util.Map", "Entry", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.util.PreHashedMap$2",
		"java.util.AbstractSet",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljava/util/AbstractSet<Ljava/util/Map$Entry<Ljava/lang/String;TV;>;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.util.PreHashedMap"
	};
	$loadClass(PreHashedMap$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(PreHashedMap$2));
	});
	return class$;
}

$Class* PreHashedMap$2::class$ = nullptr;

	} // util
} // sun