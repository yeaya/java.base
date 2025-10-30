#include <java/io/ObjectStreamClass$4.h>

#include <java/io/ObjectStreamClass$MemberSignature.h>
#include <java/io/ObjectStreamClass.h>
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

$MethodInfo _ObjectStreamClass$4_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(ObjectStreamClass$4::*)()>(&ObjectStreamClass$4::init$))},
	{"compare", "(Ljava/io/ObjectStreamClass$MemberSignature;Ljava/io/ObjectStreamClass$MemberSignature;)I", nullptr, $PUBLIC},
	{"compare", "(Ljava/lang/Object;Ljava/lang/Object;)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$EnclosingMethodInfo _ObjectStreamClass$4_EnclosingMethodInfo_ = {
	"java.io.ObjectStreamClass",
	"computeDefaultSUID",
	"(Ljava/lang/Class;)J"
};

$InnerClassInfo _ObjectStreamClass$4_InnerClassesInfo_[] = {
	{"java.io.ObjectStreamClass$4", nullptr, nullptr, 0},
	{"java.io.ObjectStreamClass$MemberSignature", "java.io.ObjectStreamClass", "MemberSignature", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _ObjectStreamClass$4_ClassInfo_ = {
	$ACC_SUPER,
	"java.io.ObjectStreamClass$4",
	"java.lang.Object",
	"java.util.Comparator",
	nullptr,
	_ObjectStreamClass$4_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Comparator<Ljava/io/ObjectStreamClass$MemberSignature;>;",
	&_ObjectStreamClass$4_EnclosingMethodInfo_,
	_ObjectStreamClass$4_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.io.ObjectStreamClass"
};

$Object* allocate$ObjectStreamClass$4($Class* clazz) {
	return $of($alloc(ObjectStreamClass$4));
}

void ObjectStreamClass$4::init$() {
}

int32_t ObjectStreamClass$4::compare($ObjectStreamClass$MemberSignature* ms1, $ObjectStreamClass$MemberSignature* ms2) {
	return $nc($nc(ms1)->signature)->compareTo($nc(ms2)->signature);
}

int32_t ObjectStreamClass$4::compare(Object$* ms1, Object$* ms2) {
	return this->compare($cast($ObjectStreamClass$MemberSignature, ms1), $cast($ObjectStreamClass$MemberSignature, ms2));
}

ObjectStreamClass$4::ObjectStreamClass$4() {
}

$Class* ObjectStreamClass$4::load$($String* name, bool initialize) {
	$loadClass(ObjectStreamClass$4, name, initialize, &_ObjectStreamClass$4_ClassInfo_, allocate$ObjectStreamClass$4);
	return class$;
}

$Class* ObjectStreamClass$4::class$ = nullptr;

	} // io
} // java