#include <NonInheritableContainee$Sample.h>

#include <NonInheritableContainee$Parent.h>
#include <NonInheritableContainee.h>
#include <jcpp.h>

using $NonInheritableContainee = ::NonInheritableContainee;
using $NonInheritableContainee$Parent = ::NonInheritableContainee$Parent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$FieldInfo _NonInheritableContainee$Sample_FieldInfo_[] = {
	{"this$0", "LNonInheritableContainee;", nullptr, $FINAL | $SYNTHETIC, $field(NonInheritableContainee$Sample, this$0)},
	{}
};

$MethodInfo _NonInheritableContainee$Sample_MethodInfo_[] = {
	{"<init>", "(LNonInheritableContainee;)V", nullptr, 0, $method(static_cast<void(NonInheritableContainee$Sample::*)($NonInheritableContainee*)>(&NonInheritableContainee$Sample::init$))},
	{}
};

$InnerClassInfo _NonInheritableContainee$Sample_InnerClassesInfo_[] = {
	{"NonInheritableContainee$Sample", "NonInheritableContainee", "Sample", 0},
	{"NonInheritableContainee$Parent", "NonInheritableContainee", "Parent", 0},
	{}
};

$ClassInfo _NonInheritableContainee$Sample_ClassInfo_ = {
	$ACC_SUPER,
	"NonInheritableContainee$Sample",
	"NonInheritableContainee$Parent",
	nullptr,
	_NonInheritableContainee$Sample_FieldInfo_,
	_NonInheritableContainee$Sample_MethodInfo_,
	nullptr,
	nullptr,
	_NonInheritableContainee$Sample_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"NonInheritableContainee"
};

$Object* allocate$NonInheritableContainee$Sample($Class* clazz) {
	return $of($alloc(NonInheritableContainee$Sample));
}

void NonInheritableContainee$Sample::init$($NonInheritableContainee* this$0) {
	$set(this, this$0, this$0);
	$NonInheritableContainee$Parent::init$(this$0);
}

NonInheritableContainee$Sample::NonInheritableContainee$Sample() {
}

$Class* NonInheritableContainee$Sample::load$($String* name, bool initialize) {
	$loadClass(NonInheritableContainee$Sample, name, initialize, &_NonInheritableContainee$Sample_ClassInfo_, allocate$NonInheritableContainee$Sample);
	return class$;
}

$Class* NonInheritableContainee$Sample::class$ = nullptr;