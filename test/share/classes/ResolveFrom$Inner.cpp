#include <ResolveFrom$Inner.h>

#include <ResolveFrom.h>
#include <jcpp.h>

using $ResolveFrom = ::ResolveFrom;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$FieldInfo _ResolveFrom$Inner_FieldInfo_[] = {
	{"this$0", "LResolveFrom;", nullptr, $FINAL | $SYNTHETIC, $field(ResolveFrom$Inner, this$0)},
	{"i", "I", nullptr, 0, $field(ResolveFrom$Inner, i)},
	{}
};

$MethodInfo _ResolveFrom$Inner_MethodInfo_[] = {
	{"<init>", "(LResolveFrom;)V", nullptr, $PRIVATE, $method(ResolveFrom$Inner, init$, void, $ResolveFrom*)},
	{}
};

$InnerClassInfo _ResolveFrom$Inner_InnerClassesInfo_[] = {
	{"ResolveFrom$Inner", "ResolveFrom", "Inner", $PRIVATE},
	{}
};

$ClassInfo _ResolveFrom$Inner_ClassInfo_ = {
	$ACC_SUPER,
	"ResolveFrom$Inner",
	"java.lang.Object",
	nullptr,
	_ResolveFrom$Inner_FieldInfo_,
	_ResolveFrom$Inner_MethodInfo_,
	nullptr,
	nullptr,
	_ResolveFrom$Inner_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"ResolveFrom"
};

$Object* allocate$ResolveFrom$Inner($Class* clazz) {
	return $of($alloc(ResolveFrom$Inner));
}

void ResolveFrom$Inner::init$($ResolveFrom* this$0) {
	$set(this, this$0, this$0);
}

ResolveFrom$Inner::ResolveFrom$Inner() {
}

$Class* ResolveFrom$Inner::load$($String* name, bool initialize) {
	$loadClass(ResolveFrom$Inner, name, initialize, &_ResolveFrom$Inner_ClassInfo_, allocate$ResolveFrom$Inner);
	return class$;
}

$Class* ResolveFrom$Inner::class$ = nullptr;