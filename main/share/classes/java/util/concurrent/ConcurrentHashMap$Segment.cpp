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

$FieldInfo _ConcurrentHashMap$Segment_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ConcurrentHashMap$Segment, serialVersionUID)},
	{"loadFactor", "F", nullptr, $FINAL, $field(ConcurrentHashMap$Segment, loadFactor)},
	{}
};

$MethodInfo _ConcurrentHashMap$Segment_MethodInfo_[] = {
	{"<init>", "(F)V", nullptr, 0, $method(static_cast<void(ConcurrentHashMap$Segment::*)(float)>(&ConcurrentHashMap$Segment::init$))},
	{}
};

$InnerClassInfo _ConcurrentHashMap$Segment_InnerClassesInfo_[] = {
	{"java.util.concurrent.ConcurrentHashMap$Segment", "java.util.concurrent.ConcurrentHashMap", "Segment", $STATIC},
	{}
};

$ClassInfo _ConcurrentHashMap$Segment_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.concurrent.ConcurrentHashMap$Segment",
	"java.util.concurrent.locks.ReentrantLock",
	nullptr,
	_ConcurrentHashMap$Segment_FieldInfo_,
	_ConcurrentHashMap$Segment_MethodInfo_,
	"<K:Ljava/lang/Object;V:Ljava/lang/Object;>Ljava/util/concurrent/locks/ReentrantLock;Ljava/io/Serializable;",
	nullptr,
	_ConcurrentHashMap$Segment_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.concurrent.ConcurrentHashMap"
};

$Object* allocate$ConcurrentHashMap$Segment($Class* clazz) {
	return $of($alloc(ConcurrentHashMap$Segment));
}

void ConcurrentHashMap$Segment::init$(float lf) {
	$ReentrantLock::init$();
	this->loadFactor = lf;
}

ConcurrentHashMap$Segment::ConcurrentHashMap$Segment() {
}

$Class* ConcurrentHashMap$Segment::load$($String* name, bool initialize) {
	$loadClass(ConcurrentHashMap$Segment, name, initialize, &_ConcurrentHashMap$Segment_ClassInfo_, allocate$ConcurrentHashMap$Segment);
	return class$;
}

$Class* ConcurrentHashMap$Segment::class$ = nullptr;

		} // concurrent
	} // util
} // java