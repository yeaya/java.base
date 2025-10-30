#include <TypeTag$Inner.h>

#include <TypeTag.h>
#include <jcpp.h>

using $TypeTag = ::TypeTag;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _TypeTag$Inner_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(TypeTag$Inner::*)()>(&TypeTag$Inner::init$))},
	{}
};

$InnerClassInfo _TypeTag$Inner_InnerClassesInfo_[] = {
	{"TypeTag$Inner", "TypeTag", "Inner", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _TypeTag$Inner_ClassInfo_ = {
	$ACC_SUPER,
	"TypeTag$Inner",
	"java.lang.Object",
	nullptr,
	nullptr,
	_TypeTag$Inner_MethodInfo_,
	nullptr,
	nullptr,
	_TypeTag$Inner_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"TypeTag"
};

$Object* allocate$TypeTag$Inner($Class* clazz) {
	return $of($alloc(TypeTag$Inner));
}

void TypeTag$Inner::init$() {
}

TypeTag$Inner::TypeTag$Inner() {
}

$Class* TypeTag$Inner::load$($String* name, bool initialize) {
	$loadClass(TypeTag$Inner, name, initialize, &_TypeTag$Inner_ClassInfo_, allocate$TypeTag$Inner);
	return class$;
}

$Class* TypeTag$Inner::class$ = nullptr;