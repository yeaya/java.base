#include <java/util/stream/Collectors$Partition.h>
#include <java/util/AbstractMap.h>
#include <java/util/Set.h>
#include <java/util/stream/Collectors$Partition$1.h>
#include <java/util/stream/Collectors.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractMap = ::java::util::AbstractMap;
using $Set = ::java::util::Set;
using $Collectors$Partition$1 = ::java::util::stream::Collectors$Partition$1;

namespace java {
	namespace util {
		namespace stream {

void Collectors$Partition::init$(Object$* forTrue, Object$* forFalse) {
	$AbstractMap::init$();
	$set(this, forTrue, forTrue);
	$set(this, forFalse, forFalse);
}

$Set* Collectors$Partition::entrySet() {
	return $new($Collectors$Partition$1, this);
}

Collectors$Partition::Collectors$Partition() {
}

$Class* Collectors$Partition::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"forTrue", "Ljava/lang/Object;", "TT;", $FINAL, $field(Collectors$Partition, forTrue)},
		{"forFalse", "Ljava/lang/Object;", "TT;", $FINAL, $field(Collectors$Partition, forFalse)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Object;Ljava/lang/Object;)V", "(TT;TT;)V", 0, $method(Collectors$Partition, init$, void, Object$*, Object$*)},
		{"entrySet", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/util/Map$Entry<Ljava/lang/Boolean;TT;>;>;", $PUBLIC, $virtualMethod(Collectors$Partition, entrySet, $Set*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.stream.Collectors$Partition", "java.util.stream.Collectors", "Partition", $PRIVATE | $STATIC | $FINAL},
		{"java.util.stream.Collectors$Partition$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.util.stream.Collectors$Partition",
		"java.util.AbstractMap",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"<T:Ljava/lang/Object;>Ljava/util/AbstractMap<Ljava/lang/Boolean;TT;>;Ljava/util/Map<Ljava/lang/Boolean;TT;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.stream.Collectors"
	};
	$loadClass(Collectors$Partition, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Collectors$Partition);
	});
	return class$;
}

$Class* Collectors$Partition::class$ = nullptr;

		} // stream
	} // util
} // java