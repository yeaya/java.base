#include <java/io/ObjectStreamClass$3.h>

#include <java/io/ObjectStreamClass$MemberSignature.h>
#include <java/io/ObjectStreamClass.h>
#include <jcpp.h>

using $ObjectStreamClass$MemberSignature = ::java::io::ObjectStreamClass$MemberSignature;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace io {

$MethodInfo _ObjectStreamClass$3_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(ObjectStreamClass$3::*)()>(&ObjectStreamClass$3::init$))},
	{"compare", "(Ljava/io/ObjectStreamClass$MemberSignature;Ljava/io/ObjectStreamClass$MemberSignature;)I", nullptr, $PUBLIC},
	{"compare", "(Ljava/lang/Object;Ljava/lang/Object;)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$EnclosingMethodInfo _ObjectStreamClass$3_EnclosingMethodInfo_ = {
	"java.io.ObjectStreamClass",
	"computeDefaultSUID",
	"(Ljava/lang/Class;)J"
};

$InnerClassInfo _ObjectStreamClass$3_InnerClassesInfo_[] = {
	{"java.io.ObjectStreamClass$3", nullptr, nullptr, 0},
	{"java.io.ObjectStreamClass$MemberSignature", "java.io.ObjectStreamClass", "MemberSignature", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _ObjectStreamClass$3_ClassInfo_ = {
	$ACC_SUPER,
	"java.io.ObjectStreamClass$3",
	"java.lang.Object",
	"java.util.Comparator",
	nullptr,
	_ObjectStreamClass$3_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Comparator<Ljava/io/ObjectStreamClass$MemberSignature;>;",
	&_ObjectStreamClass$3_EnclosingMethodInfo_,
	_ObjectStreamClass$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.io.ObjectStreamClass"
};

$Object* allocate$ObjectStreamClass$3($Class* clazz) {
	return $of($alloc(ObjectStreamClass$3));
}

void ObjectStreamClass$3::init$() {
}

int32_t ObjectStreamClass$3::compare($ObjectStreamClass$MemberSignature* ms1, $ObjectStreamClass$MemberSignature* ms2) {
	return $nc($nc(ms1)->name)->compareTo($nc(ms2)->name);
}

int32_t ObjectStreamClass$3::compare(Object$* ms1, Object$* ms2) {
	return this->compare($cast($ObjectStreamClass$MemberSignature, ms1), $cast($ObjectStreamClass$MemberSignature, ms2));
}

ObjectStreamClass$3::ObjectStreamClass$3() {
}

$Class* ObjectStreamClass$3::load$($String* name, bool initialize) {
	$loadClass(ObjectStreamClass$3, name, initialize, &_ObjectStreamClass$3_ClassInfo_, allocate$ObjectStreamClass$3);
	return class$;
}

$Class* ObjectStreamClass$3::class$ = nullptr;

	} // io
} // java