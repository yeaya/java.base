#include <java/lang/ref/FinalizerHistogram$Entry.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/ref/FinalizerHistogram.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $FinalizerHistogram = ::java::lang::ref::FinalizerHistogram;

namespace java {
	namespace lang {
		namespace ref {

$FieldInfo _FinalizerHistogram$Entry_FieldInfo_[] = {
	{"instanceCount", "I", nullptr, $PRIVATE, $field(FinalizerHistogram$Entry, instanceCount)},
	{"className", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(FinalizerHistogram$Entry, className)},
	{}
};

$MethodInfo _FinalizerHistogram$Entry_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(FinalizerHistogram$Entry::*)($String*)>(&FinalizerHistogram$Entry::init$))},
	{"getInstanceCount", "()I", nullptr, 0, $method(static_cast<int32_t(FinalizerHistogram$Entry::*)()>(&FinalizerHistogram$Entry::getInstanceCount))},
	{"increment", "()V", nullptr, 0, $method(static_cast<void(FinalizerHistogram$Entry::*)()>(&FinalizerHistogram$Entry::increment))},
	{}
};

$InnerClassInfo _FinalizerHistogram$Entry_InnerClassesInfo_[] = {
	{"java.lang.ref.FinalizerHistogram$Entry", "java.lang.ref.FinalizerHistogram", "Entry", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _FinalizerHistogram$Entry_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.lang.ref.FinalizerHistogram$Entry",
	"java.lang.Object",
	nullptr,
	_FinalizerHistogram$Entry_FieldInfo_,
	_FinalizerHistogram$Entry_MethodInfo_,
	nullptr,
	nullptr,
	_FinalizerHistogram$Entry_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.ref.FinalizerHistogram"
};

$Object* allocate$FinalizerHistogram$Entry($Class* clazz) {
	return $of($alloc(FinalizerHistogram$Entry));
}

int32_t FinalizerHistogram$Entry::getInstanceCount() {
	return this->instanceCount;
}

void FinalizerHistogram$Entry::increment() {
	this->instanceCount += 1;
}

void FinalizerHistogram$Entry::init$($String* className) {
	$set(this, className, className);
}

FinalizerHistogram$Entry::FinalizerHistogram$Entry() {
}

$Class* FinalizerHistogram$Entry::load$($String* name, bool initialize) {
	$loadClass(FinalizerHistogram$Entry, name, initialize, &_FinalizerHistogram$Entry_ClassInfo_, allocate$FinalizerHistogram$Entry);
	return class$;
}

$Class* FinalizerHistogram$Entry::class$ = nullptr;

		} // ref
	} // lang
} // java