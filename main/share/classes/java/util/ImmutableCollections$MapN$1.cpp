#include <java/util/ImmutableCollections$MapN$1.h>
#include <java/util/AbstractSet.h>
#include <java/util/ImmutableCollections$MapN$MapNIterator.h>
#include <java/util/ImmutableCollections$MapN.h>
#include <java/util/Iterator.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractSet = ::java::util::AbstractSet;
using $ImmutableCollections$MapN = ::java::util::ImmutableCollections$MapN;
using $ImmutableCollections$MapN$MapNIterator = ::java::util::ImmutableCollections$MapN$MapNIterator;
using $Iterator = ::java::util::Iterator;

namespace java {
	namespace util {

void ImmutableCollections$MapN$1::init$($ImmutableCollections$MapN* this$0) {
	$set(this, this$0, this$0);
	$AbstractSet::init$();
}

int32_t ImmutableCollections$MapN$1::size() {
	return this->this$0->size$;
}

$Iterator* ImmutableCollections$MapN$1::iterator() {
	return $new($ImmutableCollections$MapN$MapNIterator, this->this$0);
}

ImmutableCollections$MapN$1::ImmutableCollections$MapN$1() {
}

$Class* ImmutableCollections$MapN$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/util/ImmutableCollections$MapN;", nullptr, $FINAL | $SYNTHETIC, $field(ImmutableCollections$MapN$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/ImmutableCollections$MapN;)V", nullptr, 0, $method(ImmutableCollections$MapN$1, init$, void, $ImmutableCollections$MapN*)},
		{"iterator", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<Ljava/util/Map$Entry<TK;TV;>;>;", $PUBLIC, $virtualMethod(ImmutableCollections$MapN$1, iterator, $Iterator*)},
		{"size", "()I", nullptr, $PUBLIC, $virtualMethod(ImmutableCollections$MapN$1, size, int32_t)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.util.ImmutableCollections$MapN",
		"entrySet",
		"()Ljava/util/Set;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.ImmutableCollections$MapN", "java.util.ImmutableCollections", "MapN", $STATIC | $FINAL},
		{"java.util.ImmutableCollections$MapN$1", nullptr, nullptr, 0},
		{"java.util.Map$Entry", "java.util.Map", "Entry", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.util.ImmutableCollections$MapN$1",
		"java.util.AbstractSet",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljava/util/AbstractSet<Ljava/util/Map$Entry<TK;TV;>;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.ImmutableCollections"
	};
	$loadClass(ImmutableCollections$MapN$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(ImmutableCollections$MapN$1));
	});
	return class$;
}

$Class* ImmutableCollections$MapN$1::class$ = nullptr;

	} // util
} // java