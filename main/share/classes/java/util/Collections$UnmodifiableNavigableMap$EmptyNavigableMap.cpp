#include <java/util/Collections$UnmodifiableNavigableMap$EmptyNavigableMap.h>

#include <java/util/Collections$UnmodifiableNavigableMap.h>
#include <java/util/Collections.h>
#include <java/util/NavigableMap.h>
#include <java/util/NavigableSet.h>
#include <java/util/TreeMap.h>
#include <jcpp.h>

#undef EMPTY_NAVIGABLE_MAP

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Collections = ::java::util::Collections;
using $Collections$UnmodifiableNavigableMap = ::java::util::Collections$UnmodifiableNavigableMap;
using $NavigableMap = ::java::util::NavigableMap;
using $NavigableSet = ::java::util::NavigableSet;
using $TreeMap = ::java::util::TreeMap;

namespace java {
	namespace util {

$FieldInfo _Collections$UnmodifiableNavigableMap$EmptyNavigableMap_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Collections$UnmodifiableNavigableMap$EmptyNavigableMap, serialVersionUID)},
	{}
};

$MethodInfo _Collections$UnmodifiableNavigableMap$EmptyNavigableMap_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Collections$UnmodifiableNavigableMap$EmptyNavigableMap::*)()>(&Collections$UnmodifiableNavigableMap$EmptyNavigableMap::init$))},
	{"navigableKeySet", "()Ljava/util/NavigableSet;", "()Ljava/util/NavigableSet<TK;>;", $PUBLIC},
	{"readResolve", "()Ljava/lang/Object;", nullptr, $PRIVATE, $method(static_cast<$Object*(Collections$UnmodifiableNavigableMap$EmptyNavigableMap::*)()>(&Collections$UnmodifiableNavigableMap$EmptyNavigableMap::readResolve))},
	{}
};

$InnerClassInfo _Collections$UnmodifiableNavigableMap$EmptyNavigableMap_InnerClassesInfo_[] = {
	{"java.util.Collections$UnmodifiableNavigableMap", "java.util.Collections", "UnmodifiableNavigableMap", $STATIC},
	{"java.util.Collections$UnmodifiableNavigableMap$EmptyNavigableMap", "java.util.Collections$UnmodifiableNavigableMap", "EmptyNavigableMap", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _Collections$UnmodifiableNavigableMap$EmptyNavigableMap_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.Collections$UnmodifiableNavigableMap$EmptyNavigableMap",
	"java.util.Collections$UnmodifiableNavigableMap",
	nullptr,
	_Collections$UnmodifiableNavigableMap$EmptyNavigableMap_FieldInfo_,
	_Collections$UnmodifiableNavigableMap$EmptyNavigableMap_MethodInfo_,
	"<K:Ljava/lang/Object;V:Ljava/lang/Object;>Ljava/util/Collections$UnmodifiableNavigableMap<TK;TV;>;Ljava/io/Serializable;",
	nullptr,
	_Collections$UnmodifiableNavigableMap$EmptyNavigableMap_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.Collections"
};

$Object* allocate$Collections$UnmodifiableNavigableMap$EmptyNavigableMap($Class* clazz) {
	return $of($alloc(Collections$UnmodifiableNavigableMap$EmptyNavigableMap));
}

void Collections$UnmodifiableNavigableMap$EmptyNavigableMap::init$() {
	$Collections$UnmodifiableNavigableMap::init$($$new($TreeMap));
}

$NavigableSet* Collections$UnmodifiableNavigableMap$EmptyNavigableMap::navigableKeySet() {
	return $Collections::emptyNavigableSet();
}

$Object* Collections$UnmodifiableNavigableMap$EmptyNavigableMap::readResolve() {
	$init($Collections$UnmodifiableNavigableMap);
	return $of($Collections$UnmodifiableNavigableMap::EMPTY_NAVIGABLE_MAP);
}

Collections$UnmodifiableNavigableMap$EmptyNavigableMap::Collections$UnmodifiableNavigableMap$EmptyNavigableMap() {
}

$Class* Collections$UnmodifiableNavigableMap$EmptyNavigableMap::load$($String* name, bool initialize) {
	$loadClass(Collections$UnmodifiableNavigableMap$EmptyNavigableMap, name, initialize, &_Collections$UnmodifiableNavigableMap$EmptyNavigableMap_ClassInfo_, allocate$Collections$UnmodifiableNavigableMap$EmptyNavigableMap);
	return class$;
}

$Class* Collections$UnmodifiableNavigableMap$EmptyNavigableMap::class$ = nullptr;

	} // util
} // java