#include <java/lang/ClassValue$Version.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/ClassValue$Entry.h>
#include <java/lang/ClassValue.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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
	{"<init>", "(Ljava/lang/ClassValue;)V", "(Ljava/lang/ClassValue<TT;>;)V", 0, $method(static_cast<void(ClassValue$Version::*)($ClassValue*)>(&ClassValue$Version::init$))},
	{"classValue", "()Ljava/lang/ClassValue;", "()Ljava/lang/ClassValue<TT;>;", 0},
	{"isLive", "()Z", nullptr, 0},
	{"promise", "()Ljava/lang/ClassValue$Entry;", "()Ljava/lang/ClassValue$Entry<TT;>;", 0},
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