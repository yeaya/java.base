#include <java/lang/ClassValue$Version.h>
#include <java/lang/ClassValue$Entry.h>
#include <java/lang/ClassValue.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $ClassValue = ::java::lang::ClassValue;
using $ClassValue$Entry = ::java::lang::ClassValue$Entry;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace lang {

void ClassValue$Version::init$($ClassValue* classValue) {
	$set(this, promise$, $new($ClassValue$Entry, this));
	$set(this, classValue$, classValue);
}

$ClassValue* ClassValue$Version::classValue() {
	return this->classValue$;
}

$ClassValue$Entry* ClassValue$Version::promise() {
	return this->promise$;
}

bool ClassValue$Version::isLive() {
	return $nc(this->classValue$)->version() == this;
}

ClassValue$Version::ClassValue$Version() {
}

$Class* ClassValue$Version::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"classValue", "Ljava/lang/ClassValue;", "Ljava/lang/ClassValue<TT;>;", $PRIVATE | $FINAL, $field(ClassValue$Version, classValue$)},
		{"promise", "Ljava/lang/ClassValue$Entry;", "Ljava/lang/ClassValue$Entry<TT;>;", $PRIVATE | $FINAL, $field(ClassValue$Version, promise$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/ClassValue;)V", "(Ljava/lang/ClassValue<TT;>;)V", 0, $method(ClassValue$Version, init$, void, $ClassValue*)},
		{"classValue", "()Ljava/lang/ClassValue;", "()Ljava/lang/ClassValue<TT;>;", 0, $virtualMethod(ClassValue$Version, classValue, $ClassValue*)},
		{"isLive", "()Z", nullptr, 0, $virtualMethod(ClassValue$Version, isLive, bool)},
		{"promise", "()Ljava/lang/ClassValue$Entry;", "()Ljava/lang/ClassValue$Entry<TT;>;", 0, $virtualMethod(ClassValue$Version, promise, $ClassValue$Entry*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.ClassValue$Version", "java.lang.ClassValue", "Version", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.lang.ClassValue$Version",
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
		"java.lang.ClassValue"
	};
	$loadClass(ClassValue$Version, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ClassValue$Version);
	});
	return class$;
}

$Class* ClassValue$Version::class$ = nullptr;

	} // lang
} // java