#include <java/util/concurrent/ConcurrentHashMap$Segment.h>
#include <java/util/concurrent/ConcurrentHashMap.h>
#include <java/util/concurrent/locks/ReentrantLock.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ReentrantLock = ::java::util::concurrent::locks::ReentrantLock;

namespace java {
	namespace util {
		namespace concurrent {

void ConcurrentHashMap$Segment::init$(float lf) {
	$ReentrantLock::init$();
	this->loadFactor = lf;
}

ConcurrentHashMap$Segment::ConcurrentHashMap$Segment() {
}

$Class* ConcurrentHashMap$Segment::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ConcurrentHashMap$Segment, serialVersionUID)},
		{"loadFactor", "F", nullptr, $FINAL, $field(ConcurrentHashMap$Segment, loadFactor)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(F)V", nullptr, 0, $method(ConcurrentHashMap$Segment, init$, void, float)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.concurrent.ConcurrentHashMap$Segment", "java.util.concurrent.ConcurrentHashMap", "Segment", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.util.concurrent.ConcurrentHashMap$Segment",
		"java.util.concurrent.locks.ReentrantLock",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"<K:Ljava/lang/Object;V:Ljava/lang/Object;>Ljava/util/concurrent/locks/ReentrantLock;Ljava/io/Serializable;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.concurrent.ConcurrentHashMap"
	};
	$loadClass(ConcurrentHashMap$Segment, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(ConcurrentHashMap$Segment));
	});
	return class$;
}

$Class* ConcurrentHashMap$Segment::class$ = nullptr;

		} // concurrent
	} // util
} // java