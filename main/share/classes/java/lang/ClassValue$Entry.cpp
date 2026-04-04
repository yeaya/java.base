#include <java/lang/ClassValue$Entry.h>
#include <java/lang/AssertionError.h>
#include <java/lang/ClassValue$Version.h>
#include <java/lang/ClassValue.h>
#include <java/lang/ref/Reference.h>
#include <java/lang/ref/WeakReference.h>
#include <jcpp.h>

#undef DEAD_ENTRY

using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassValue = ::java::lang::ClassValue;
using $ClassValue$Version = ::java::lang::ClassValue$Version;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $WeakReference = ::java::lang::ref::WeakReference;

namespace java {
	namespace lang {

bool ClassValue$Entry::$assertionsDisabled = false;
ClassValue$Entry* ClassValue$Entry::DEAD_ENTRY = nullptr;

void ClassValue$Entry::init$($ClassValue$Version* version, Object$* value) {
	$WeakReference::init$(version);
	$set(this, value$, value);
}

void ClassValue$Entry::assertNotPromise() {
	if (!ClassValue$Entry::$assertionsDisabled && !(!isPromise())) {
		$throwNew($AssertionError);
	}
}

void ClassValue$Entry::init$($ClassValue$Version* version) {
	$WeakReference::init$(version);
	$set(this, value$, this);
}

$Object* ClassValue$Entry::value() {
	assertNotPromise();
	return this->value$;
}

bool ClassValue$Entry::isPromise() {
	return $equals(this->value$, this);
}

$ClassValue$Version* ClassValue$Entry::version() {
	return $cast($ClassValue$Version, get());
}

$ClassValue* ClassValue$Entry::classValueOrNull() {
	$var($ClassValue$Version, v, version());
	return (v == nullptr) ? ($ClassValue*)nullptr : v->classValue();
}

bool ClassValue$Entry::isLive() {
	$var($ClassValue$Version, v, version());
	if (v == nullptr) {
		return false;
	}
	if ($nc(v)->isLive()) {
		return true;
	}
	clear();
	return false;
}

ClassValue$Entry* ClassValue$Entry::refreshVersion($ClassValue$Version* v2) {
	assertNotPromise();
	$var(ClassValue$Entry, e2, $new(ClassValue$Entry, v2, this->value$));
	clear();
	return e2;
}

void ClassValue$Entry::clinit$($Class* clazz) {
	$load($ClassValue);
	ClassValue$Entry::$assertionsDisabled = !$ClassValue::class$->desiredAssertionStatus();
	$assignStatic(ClassValue$Entry::DEAD_ENTRY, $new(ClassValue$Entry, nullptr, nullptr));
}

ClassValue$Entry::ClassValue$Entry() {
}

$Class* ClassValue$Entry::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(ClassValue$Entry, $assertionsDisabled)},
		{"value", "Ljava/lang/Object;", nullptr, $FINAL, $field(ClassValue$Entry, value$)},
		{"DEAD_ENTRY", "Ljava/lang/ClassValue$Entry;", "Ljava/lang/ClassValue$Entry<*>;", $STATIC | $FINAL, $staticField(ClassValue$Entry, DEAD_ENTRY)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/ClassValue$Version;Ljava/lang/Object;)V", "(Ljava/lang/ClassValue$Version<TT;>;TT;)V", 0, $method(ClassValue$Entry, init$, void, $ClassValue$Version*, Object$*)},
		{"<init>", "(Ljava/lang/ClassValue$Version;)V", "(Ljava/lang/ClassValue$Version<TT;>;)V", 0, $method(ClassValue$Entry, init$, void, $ClassValue$Version*)},
		{"assertNotPromise", "()V", nullptr, $PRIVATE, $method(ClassValue$Entry, assertNotPromise, void)},
		{"classValueOrNull", "()Ljava/lang/ClassValue;", "()Ljava/lang/ClassValue<TT;>;", 0, $virtualMethod(ClassValue$Entry, classValueOrNull, $ClassValue*)},
		{"isLive", "()Z", nullptr, 0, $virtualMethod(ClassValue$Entry, isLive, bool)},
		{"isPromise", "()Z", nullptr, 0, $virtualMethod(ClassValue$Entry, isPromise, bool)},
		{"refreshVersion", "(Ljava/lang/ClassValue$Version;)Ljava/lang/ClassValue$Entry;", "(Ljava/lang/ClassValue$Version<TT;>;)Ljava/lang/ClassValue$Entry<TT;>;", 0, $virtualMethod(ClassValue$Entry, refreshVersion, ClassValue$Entry*, $ClassValue$Version*)},
		{"value", "()Ljava/lang/Object;", "()TT;", 0, $virtualMethod(ClassValue$Entry, value, $Object*)},
		{"version", "()Ljava/lang/ClassValue$Version;", "()Ljava/lang/ClassValue$Version<TT;>;", 0, $virtualMethod(ClassValue$Entry, version, $ClassValue$Version*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.ClassValue$Entry", "java.lang.ClassValue", "Entry", $STATIC},
		{"java.lang.ClassValue$Version", "java.lang.ClassValue", "Version", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.lang.ClassValue$Entry",
		"java.lang.ref.WeakReference",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"<T:Ljava/lang/Object;>Ljava/lang/ref/WeakReference<Ljava/lang/ClassValue$Version<TT;>;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.lang.ClassValue"
	};
	$loadClass(ClassValue$Entry, name, initialize, &classInfo$$, ClassValue$Entry::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(ClassValue$Entry);
	});
	return class$;
}

$Class* ClassValue$Entry::class$ = nullptr;

	} // lang
} // java