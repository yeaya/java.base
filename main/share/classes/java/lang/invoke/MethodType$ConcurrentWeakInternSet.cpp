#include <java/lang/invoke/MethodType$ConcurrentWeakInternSet.h>
#include <java/lang/invoke/MethodType$ConcurrentWeakInternSet$WeakEntry.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/ref/Reference.h>
#include <java/lang/ref/ReferenceQueue.h>
#include <java/util/concurrent/ConcurrentHashMap.h>
#include <java/util/concurrent/ConcurrentMap.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $MethodType$ConcurrentWeakInternSet$WeakEntry = ::java::lang::invoke::MethodType$ConcurrentWeakInternSet$WeakEntry;
using $Reference = ::java::lang::ref::Reference;
using $ReferenceQueue = ::java::lang::ref::ReferenceQueue;
using $ConcurrentHashMap = ::java::util::concurrent::ConcurrentHashMap;

namespace java {
	namespace lang {
		namespace invoke {

void MethodType$ConcurrentWeakInternSet::init$() {
	$set(this, map, $new($ConcurrentHashMap, 512));
	$set(this, stale, $new($ReferenceQueue));
}

$Object* MethodType$ConcurrentWeakInternSet::get(Object$* elem) {
	$useLocalObjectStack();
	if (elem == nullptr) {
		$throwNew($NullPointerException);
	}
	expungeStaleElements();
	$var($MethodType$ConcurrentWeakInternSet$WeakEntry, value, $cast($MethodType$ConcurrentWeakInternSet$WeakEntry, $nc(this->map)->get(elem)));
	if (value != nullptr) {
		$var($Object, res, value->get());
		if (res != nullptr) {
			return res;
		}
	}
	return nullptr;
}

$Object* MethodType$ConcurrentWeakInternSet::add(Object$* elem) {
	$useLocalObjectStack();
	if (elem == nullptr) {
		$throwNew($NullPointerException);
	}
	$var($Object, interned, nullptr);
	$var($MethodType$ConcurrentWeakInternSet$WeakEntry, e, $new($MethodType$ConcurrentWeakInternSet$WeakEntry, elem, this->stale));
	do {
		expungeStaleElements();
		$var($MethodType$ConcurrentWeakInternSet$WeakEntry, exist, $cast($MethodType$ConcurrentWeakInternSet$WeakEntry, $nc(this->map)->putIfAbsent(e, e)));
		$assign(interned, (exist == nullptr) ? $of(elem) : exist->get());
	} while (interned == nullptr);
	return interned;
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
	$FieldInfo fieldInfos$$[] = {
		{"map", "Ljava/util/concurrent/ConcurrentMap;", "Ljava/util/concurrent/ConcurrentMap<Ljava/lang/invoke/MethodType$ConcurrentWeakInternSet$WeakEntry<TT;>;Ljava/lang/invoke/MethodType$ConcurrentWeakInternSet$WeakEntry<TT;>;>;", $PRIVATE | $FINAL, $field(MethodType$ConcurrentWeakInternSet, map)},
		{"stale", "Ljava/lang/ref/ReferenceQueue;", "Ljava/lang/ref/ReferenceQueue<TT;>;", $PRIVATE | $FINAL, $field(MethodType$ConcurrentWeakInternSet, stale)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(MethodType$ConcurrentWeakInternSet, init$, void)},
		{"add", "(Ljava/lang/Object;)Ljava/lang/Object;", "(TT;)TT;", $PUBLIC, $virtualMethod(MethodType$ConcurrentWeakInternSet, add, $Object*, Object$*)},
		{"expungeStaleElements", "()V", nullptr, $PRIVATE, $method(MethodType$ConcurrentWeakInternSet, expungeStaleElements, void)},
		{"get", "(Ljava/lang/Object;)Ljava/lang/Object;", "(TT;)TT;", $PUBLIC, $virtualMethod(MethodType$ConcurrentWeakInternSet, get, $Object*, Object$*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.invoke.MethodType$ConcurrentWeakInternSet", "java.lang.invoke.MethodType", "ConcurrentWeakInternSet", $PRIVATE | $STATIC},
		{"java.lang.invoke.MethodType$ConcurrentWeakInternSet$WeakEntry", "java.lang.invoke.MethodType$ConcurrentWeakInternSet", "WeakEntry", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.lang.invoke.MethodType$ConcurrentWeakInternSet",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"<T:Ljava/lang/Object;>Ljava/lang/Object;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.lang.invoke.MethodType"
	};
	$loadClass(MethodType$ConcurrentWeakInternSet, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MethodType$ConcurrentWeakInternSet);
	});
	return class$;
}

$Class* MethodType$ConcurrentWeakInternSet::class$ = nullptr;

		} // invoke
	} // lang
} // java