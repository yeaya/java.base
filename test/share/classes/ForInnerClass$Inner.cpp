#include <ForInnerClass$Inner.h>

#include <ForInnerClass.h>
#include <jcpp.h>

using $ForInnerClass = ::ForInnerClass;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$FieldInfo _ForInnerClass$Inner_FieldInfo_[] = {
	{"this$0", "LForInnerClass;", nullptr, $FINAL | $SYNTHETIC, $field(ForInnerClass$Inner, this$0)},
	{}
};

$MethodInfo _ForInnerClass$Inner_MethodInfo_[] = {
	{"<init>", "(LForInnerClass;)V", nullptr, $PRIVATE, $method(static_cast<void(ForInnerClass$Inner::*)($ForInnerClass*)>(&ForInnerClass$Inner::init$))},
	{}
};

$InnerClassInfo _ForInnerClass$Inner_InnerClassesInfo_[] = {
	{"ForInnerClass$Inner", "ForInnerClass", "Inner", $PRIVATE},
	{}
};

$ClassInfo _ForInnerClass$Inner_ClassInfo_ = {
	$ACC_SUPER,
	"ForInnerClass$Inner",
	"java.lang.Object",
	nullptr,
	_ForInnerClass$Inner_FieldInfo_,
	_ForInnerClass$Inner_MethodInfo_,
	nullptr,
	nullptr,
	_ForInnerClass$Inner_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"ForInnerClass"
};

$Object* allocate$ForInnerClass$Inner($Class* clazz) {
	return $of($alloc(ForInnerClass$Inner));
}

void ForInnerClass$Inner::init$($ForInnerClass* this$0) {
	$set(this, this$0, this$0);
}

ForInnerClass$Inner::ForInnerClass$Inner() {
}

$Class* ForInnerClass$Inner::load$($String* name, bool initialize) {
	$loadClass(ForInnerClass$Inner, name, initialize, &_ForInnerClass$Inner_ClassInfo_, allocate$ForInnerClass$Inner);
	return class$;
}

$Class* ForInnerClass$Inner::class$ = nullptr;