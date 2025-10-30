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
using $Reference = ::java::lang::ref::Reference;
using $WeakReference = ::java::lang::ref::WeakReference;

namespace java {
	namespace lang {

$FieldInfo _ClassValue$Entry_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(ClassValue$Entry, $assertionsDisabled)},
	{"value", "Ljava/lang/Object;", nullptr, $FINAL, $field(ClassValue$Entry, value$)},
	{"DEAD_ENTRY", "Ljava/lang/ClassValue$Entry;", "Ljava/lang/ClassValue$Entry<*>;", $STATIC | $FINAL, $staticField(ClassValue$Entry, DEAD_ENTRY)},
	{}
};

$MethodInfo _ClassValue$Entry_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/ClassValue$Version;Ljava/lang/Object;)V", "(Ljava/lang/ClassValue$Version<TT;>;TT;)V", 0, $method(static_cast<void(ClassValue$Entry::*)($ClassValue$Version*,Object$*)>(&ClassValue$Entry::init$))},
	{"<init>", "(Ljava/lang/ClassValue$Version;)V", "(Ljava/lang/ClassValue$Version<TT;>;)V", 0, $method(static_cast<void(ClassValue$Entry::*)($ClassValue$Version*)>(&ClassValue$Entry::init$))},
	{"assertNotPromise", "()V", nullptr, $PRIVATE, $method(static_cast<void(ClassValue$Entry::*)()>(&ClassValue$Entry::assertNotPromise))},
	{"classValueOrNull", "()Ljava/lang/ClassValue;", "()Ljava/lang/ClassValue<TT;>;", 0},
	{"isLive", "()Z", nullptr, 0},
	{"isPromise", "()Z", nullptr, 0},
	{"refreshVersion", "(Ljava/lang/ClassValue$Version;)Ljava/lang/ClassValue$Entry;", "(Ljava/lang/ClassValue$Version<TT;>;)Ljava/lang/ClassValue$Entry<TT;>;", 0},
	{"value", "()Ljava/lang/Object;", "()TT;", 0},
	{"version", "()Ljava/lang/ClassValue$Version;", "()Ljava/lang/ClassValue$Version<TT;>;", 0},
	{}
};

$InnerClassInfo _ClassValue$Entry_InnerClassesInfo_[] = {
	{"java.lang.ClassValue$Entry", "java.lang.ClassValue", "Entry", $STATIC},
	{"java.lang.ClassValue$Version", "java.lang.ClassValue", "Version", $STATIC},
	{}
};

$ClassInfo _ClassValue$Entry_ClassInfo_ = {
	$ACC_SUPER,
	"java.lang.ClassValue$Entry",
	"java.lang.ref.WeakReference",
	nullptr,
	_ClassValue$Entry_FieldInfo_,
	_ClassValue$Entry_MethodInfo_,
	"<T:Ljava/lang/Object;>Ljava/lang/ref/WeakReference<Ljava/lang/ClassValue$Version<TT;>;>;",
	nullptr,
	_ClassValue$Entry_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.ClassValue"
};

$Object* allocate$ClassValue$Entry($Class* clazz) {
	return $of($alloc(ClassValue$Entry));
}

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
	return $of(this->value$);
}

bool ClassValue$Entry::isPromise() {
	return $equals(this->value$, this);
}

$ClassValue$Version* ClassValue$Entry::version() {
	return $cast($ClassValue$Version, get());
}

$ClassValue* ClassValue$Entry::classValueOrNull() {
	$var($ClassValue$Version, v, version());
	return (v == nullptr) ? ($ClassValue*)nullptr : $nc(v)->classValue();
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

void clinit$ClassValue$Entry($Class* class$) {
	$load($ClassValue);
	ClassValue$Entry::$assertionsDisabled = !$ClassValue::class$->desiredAssertionStatus();
	$assignStatic(ClassValue$Entry::DEAD_ENTRY, $new(ClassValue$Entry, nullptr, nullptr));
}

ClassValue$Entry::ClassValue$Entry() {
}

$Class* ClassValue$Entry::load$($String* name, bool initialize) {
	$loadClass(ClassValue$Entry, name, initialize, &_ClassValue$Entry_ClassInfo_, clinit$ClassValue$Entry, allocate$ClassValue$Entry);
	return class$;
}

$Class* ClassValue$Entry::class$ = nullptr;

	} // lang
} // java