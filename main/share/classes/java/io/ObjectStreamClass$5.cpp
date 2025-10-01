#include <java/io/ObjectStreamClass$5.h>

#include <java/io/ObjectStreamClass$MemberSignature.h>
#include <java/io/ObjectStreamClass.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ObjectStreamClass = ::java::io::ObjectStreamClass;
using $ObjectStreamClass$MemberSignature = ::java::io::ObjectStreamClass$MemberSignature;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Comparator = ::java::util::Comparator;

namespace java {
	namespace io {

$MethodInfo _ObjectStreamClass$5_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(ObjectStreamClass$5::*)()>(&ObjectStreamClass$5::init$))},
	{"compare", "(Ljava/io/ObjectStreamClass$MemberSignature;Ljava/io/ObjectStreamClass$MemberSignature;)I", nullptr, $PUBLIC},
	{"compare", "(Ljava/lang/Object;Ljava/lang/Object;)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$EnclosingMethodInfo _ObjectStreamClass$5_EnclosingMethodInfo_ = {
	"java.io.ObjectStreamClass",
	"computeDefaultSUID",
	"(Ljava/lang/Class;)J"
};

$InnerClassInfo _ObjectStreamClass$5_InnerClassesInfo_[] = {
	{"java.io.ObjectStreamClass$5", nullptr, nullptr, 0},
	{"java.io.ObjectStreamClass$MemberSignature", "java.io.ObjectStreamClass", "MemberSignature", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _ObjectStreamClass$5_ClassInfo_ = {
	$ACC_SUPER,
	"java.io.ObjectStreamClass$5",
	"java.lang.Object",
	"java.util.Comparator",
	nullptr,
	_ObjectStreamClass$5_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Comparator<Ljava/io/ObjectStreamClass$MemberSignature;>;",
	&_ObjectStreamClass$5_EnclosingMethodInfo_,
	_ObjectStreamClass$5_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.io.ObjectStreamClass"
};

$Object* allocate$ObjectStreamClass$5($Class* clazz) {
	return $of($alloc(ObjectStreamClass$5));
}

void ObjectStreamClass$5::init$() {
}

int32_t ObjectStreamClass$5::compare($ObjectStreamClass$MemberSignature* ms1, $ObjectStreamClass$MemberSignature* ms2) {
	int32_t comp = $nc($nc(ms1)->name)->compareTo($nc(ms2)->name);
	if (comp == 0) {
		comp = $nc(ms1->signature)->compareTo($nc(ms2)->signature);
	}
	return comp;
}

int32_t ObjectStreamClass$5::compare(Object$* ms1, Object$* ms2) {
	return this->compare($cast($ObjectStreamClass$MemberSignature, ms1), $cast($ObjectStreamClass$MemberSignature, ms2));
}

ObjectStreamClass$5::ObjectStreamClass$5() {
}

$Class* ObjectStreamClass$5::load$($String* name, bool initialize) {
	$loadClass(ObjectStreamClass$5, name, initialize, &_ObjectStreamClass$5_ClassInfo_, allocate$ObjectStreamClass$5);
	return class$;
}

$Class* ObjectStreamClass$5::class$ = nullptr;

	} // io
} // java