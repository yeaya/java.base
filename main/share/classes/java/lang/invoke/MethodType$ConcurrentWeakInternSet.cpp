#include <java/lang/invoke/MethodType$ConcurrentWeakInternSet.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/invoke/MethodType$ConcurrentWeakInternSet$WeakEntry.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/ref/Reference.h>
#include <java/lang/ref/ReferenceQueue.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/concurrent/ConcurrentHashMap.h>
#include <java/util/concurrent/ConcurrentMap.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $MethodType = ::java::lang::invoke::MethodType;
using $MethodType$ConcurrentWeakInternSet$WeakEntry = ::java::lang::invoke::MethodType$ConcurrentWeakInternSet$WeakEntry;
using $Reference = ::java::lang::ref::Reference;
using $ReferenceQueue = ::java::lang::ref::ReferenceQueue;
using $Map = ::java::util::Map;
using $ConcurrentHashMap = ::java::util::concurrent::ConcurrentHashMap;
using $ConcurrentMap = ::java::util::concurrent::ConcurrentMap;

namespace java {
	namespace lang {
		namespace invoke {

$FieldInfo _MethodType$ConcurrentWeakInternSet_FieldInfo_[] = {
	{"map", "Ljava/util/concurrent/ConcurrentMap;", "Ljava/util/concurrent/ConcurrentMap<Ljava/lang/invoke/MethodType$ConcurrentWeakInternSet$WeakEntry<TT;>;Ljava/lang/invoke/MethodType$ConcurrentWeakInternSet$WeakEntry<TT;>;>;", $PRIVATE | $FINAL, $field(MethodType$ConcurrentWeakInternSet, map)},
	{"stale", "Ljava/lang/ref/ReferenceQueue;", "Ljava/lang/ref/ReferenceQueue<TT;>;", $PRIVATE | $FINAL, $field(MethodType$ConcurrentWeakInternSet, stale)},
	{}
};

$MethodInfo _MethodType$ConcurrentWeakInternSet_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MethodType$ConcurrentWeakInternSet::*)()>(&MethodType$ConcurrentWeakInternSet::init$))},
	{"add", "(Ljava/lang/Object;)Ljava/lang/Object;", "(TT;)TT;", $PUBLIC},
	{"expungeStaleElements", "()V", nullptr, $PRIVATE, $method(static_cast<void(MethodType$ConcurrentWeakInternSet::*)()>(&MethodType$ConcurrentWeakInternSet::expungeStaleElements))},
	{"get", "(Ljava/lang/Object;)Ljava/lang/Object;", "(TT;)TT;", $PUBLIC},
	{}
};

$InnerClassInfo _MethodType$ConcurrentWeakInternSet_InnerClassesInfo_[] = {
	{"java.lang.invoke.MethodType$ConcurrentWeakInternSet", "java.lang.invoke.MethodType", "ConcurrentWeakInternSet", $PRIVATE | $STATIC},
	{"java.lang.invoke.MethodType$ConcurrentWeakInternSet$WeakEntry", "java.lang.invoke.MethodType$ConcurrentWeakInternSet", "WeakEntry", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _MethodType$ConcurrentWeakInternSet_ClassInfo_ = {
	$ACC_SUPER,
	"java.lang.invoke.MethodType$ConcurrentWeakInternSet",
	"java.lang.Object",
	nullptr,
	_MethodType$ConcurrentWeakInternSet_FieldInfo_,
	_MethodType$ConcurrentWeakInternSet_MethodInfo_,
	"<T:Ljava/lang/Object;>Ljava/lang/Object;",
	nullptr,
	_MethodType$ConcurrentWeakInternSet_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.invoke.MethodType"
};

$Object* allocate$MethodType$ConcurrentWeakInternSet($Class* clazz) {
	return $of($alloc(MethodType$ConcurrentWeakInternSet));
}

void MethodType$ConcurrentWeakInternSet::init$() {
	$set(this, map, $new($ConcurrentHashMap, 512));
	$set(this, stale, $new($ReferenceQueue));
}

$Object* MethodType$ConcurrentWeakInternSet::get(Object$* elem) {
	$useLocalCurrentObjectStackCache();
	if (elem == nullptr) {
		$throwNew($NullPointerException);
	}
	expungeStaleElements();
	$var($MethodType$ConcurrentWeakInternSet$WeakEntry, value, $cast($MethodType$ConcurrentWeakInternSet$WeakEntry, $nc(this->map)->get(elem)));
	if (value != nullptr) {
		$var($Object, res, value->get());
		if (res != nullptr) {
			return $of(res);
		}
	}
	return $of(nullptr);
}

$Object* MethodType$ConcurrentWeakInternSet::add(Object$* elem) {
	$useLocalCurrentObjectStackCache();
	if (elem == nullptr) {
		$throwNew($NullPointerException);
	}
	$var($Object, interned, nullptr);
	$var($MethodType$ConcurrentWeakInternSet$WeakEntry, e, $new($MethodType$ConcurrentWeakInternSet$WeakEntry, elem, this->stale));
	do {
		expungeStaleElements();
		$var($MethodType$ConcurrentWeakInternSet$WeakEntry, exist, $cast($MethodType$ConcurrentWeakInternSet$WeakEntry, $nc(this->map)->putIfAbsent(e, e)));
		$assign(interned, (exist == nullptr) ? $of(elem) : $nc(exist)->get());
	} while (interned == nullptr);
	return $of(interned);
}

void MethodType$ConcurrentWeakInternSet::expungeStaleElements() {
	$var($Reference, reference, nullptr);
	while (($assign(reference, $nc(this->stale)->poll())) != nullptr) {
		$nc(this->map)->remove(reference);
	}
}

MethodType$ConcurrentWeakInternSet::MethodType$ConcurrentWeakInternSet() {
}

$Class* MethodType$ConcurrentWeakInternSet::load$($String* name, bool initialize) {
	$loadClass(MethodType$ConcurrentWeakInternSet, name, initialize, &_MethodType$ConcurrentWeakInternSet_ClassInfo_, allocate$MethodType$ConcurrentWeakInternSet);
	return class$;
}

$Class* MethodType$ConcurrentWeakInternSet::class$ = nullptr;

		} // invoke
	} // lang
} // java