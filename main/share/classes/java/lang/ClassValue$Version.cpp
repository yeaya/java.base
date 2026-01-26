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

$FieldInfo _ClassValue$Version_FieldInfo_[] = {
	{"classValue", "Ljava/lang/ClassValue;", "Ljava/lang/ClassValue<TT;>;", $PRIVATE | $FINAL, $field(ClassValue$Version, classValue$)},
	{"promise", "Ljava/lang/ClassValue$Entry;", "Ljava/lang/ClassValue$Entry<TT;>;", $PRIVATE | $FINAL, $field(ClassValue$Version, promise$)},
	{}
};

$MethodInfo _ClassValue$Version_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/ClassValue;)V", "(Ljava/lang/ClassValue<TT;>;)V", 0, $method(ClassValue$Version, init$, void, $ClassValue*)},
	{"classValue", "()Ljava/lang/ClassValue;", "()Ljava/lang/ClassValue<TT;>;", 0, $virtualMethod(ClassValue$Version, classValue, $ClassValue*)},
	{"isLive", "()Z", nullptr, 0, $virtualMethod(ClassValue$Version, isLive, bool)},
	{"promise", "()Ljava/lang/ClassValue$Entry;", "()Ljava/lang/ClassValue$Entry<TT;>;", 0, $virtualMethod(ClassValue$Version, promise, $ClassValue$Entry*)},
	{}
};

$InnerClassInfo _ClassValue$Version_InnerClassesInfo_[] = {
	{"java.lang.ClassValue$Version", "java.lang.ClassValue", "Version", $STATIC},
	{}
};

$ClassInfo _ClassValue$Version_ClassInfo_ = {
	$ACC_SUPER,
	"java.lang.ClassValue$Version",
	"java.lang.Object",
	nullptr,
	_ClassValue$Version_FieldInfo_,
	_ClassValue$Version_MethodInfo_,
	"<T:Ljava/lang/Object;>Ljava/lang/Object;",
	nullptr,
	_ClassValue$Version_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.ClassValue"
};

$Object* allocate$ClassValue$Version($Class* clazz) {
	return $of($alloc(ClassValue$Version));
}

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
	$loadClass(ClassValue$Version, name, initialize, &_ClassValue$Version_ClassInfo_, allocate$ClassValue$Version);
	return class$;
}

$Class* ClassValue$Version::class$ = nullptr;

	} // lang
} // java