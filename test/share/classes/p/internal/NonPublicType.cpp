#include <p/internal/NonPublicType.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace p {
	namespace internal {

$FieldInfo _NonPublicType_FieldInfo_[] = {
	{"obj", "Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(NonPublicType, obj)},
	{}
};

$MethodInfo _NonPublicType_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(NonPublicType::*)()>(&NonPublicType::init$))},
	{}
};

$ClassInfo _NonPublicType_ClassInfo_ = {
	$ACC_SUPER,
	"p.internal.NonPublicType",
	"java.lang.Object",
	nullptr,
	_NonPublicType_FieldInfo_,
	_NonPublicType_MethodInfo_
};

$Object* allocate$NonPublicType($Class* clazz) {
	return $of($alloc(NonPublicType));
}

$Object* NonPublicType::obj = nullptr;

void NonPublicType::init$() {
}

void clinit$NonPublicType($Class* class$) {
	$assignStatic(NonPublicType::obj, $new($Object));
}

NonPublicType::NonPublicType() {
}

$Class* NonPublicType::load$($String* name, bool initialize) {
	$loadClass(NonPublicType, name, initialize, &_NonPublicType_ClassInfo_, clinit$NonPublicType, allocate$NonPublicType);
	return class$;
}

$Class* NonPublicType::class$ = nullptr;

	} // internal
} // p