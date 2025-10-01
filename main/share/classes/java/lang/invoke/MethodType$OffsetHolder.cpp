#include <java/lang/invoke/MethodType$OffsetHolder.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/invoke/MethodHandleStatics.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jdk/internal/misc/Unsafe.h>
#include <jcpp.h>

#undef UNSAFE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandleStatics = ::java::lang::invoke::MethodHandleStatics;
using $MethodType = ::java::lang::invoke::MethodType;
using $Unsafe = ::jdk::internal::misc::Unsafe;

namespace java {
	namespace lang {
		namespace invoke {

$FieldInfo _MethodType$OffsetHolder_FieldInfo_[] = {
	{"rtypeOffset", "J", nullptr, $STATIC | $FINAL, $staticField(MethodType$OffsetHolder, rtypeOffset)},
	{"ptypesOffset", "J", nullptr, $STATIC | $FINAL, $staticField(MethodType$OffsetHolder, ptypesOffset)},
	{}
};

$MethodInfo _MethodType$OffsetHolder_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(MethodType$OffsetHolder::*)()>(&MethodType$OffsetHolder::init$))},
	{}
};

$InnerClassInfo _MethodType$OffsetHolder_InnerClassesInfo_[] = {
	{"java.lang.invoke.MethodType$OffsetHolder", "java.lang.invoke.MethodType", "OffsetHolder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _MethodType$OffsetHolder_ClassInfo_ = {
	$ACC_SUPER,
	"java.lang.invoke.MethodType$OffsetHolder",
	"java.lang.Object",
	nullptr,
	_MethodType$OffsetHolder_FieldInfo_,
	_MethodType$OffsetHolder_MethodInfo_,
	nullptr,
	nullptr,
	_MethodType$OffsetHolder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.invoke.MethodType"
};

$Object* allocate$MethodType$OffsetHolder($Class* clazz) {
	return $of($alloc(MethodType$OffsetHolder));
}

int64_t MethodType$OffsetHolder::rtypeOffset = 0;
int64_t MethodType$OffsetHolder::ptypesOffset = 0;

void MethodType$OffsetHolder::init$() {
}

void clinit$MethodType$OffsetHolder($Class* class$) {
	$init($MethodHandleStatics);
	$load($MethodType);
	MethodType$OffsetHolder::rtypeOffset = $nc($MethodHandleStatics::UNSAFE)->objectFieldOffset($MethodType::class$, "rtype"_s);
	MethodType$OffsetHolder::ptypesOffset = $nc($MethodHandleStatics::UNSAFE)->objectFieldOffset($MethodType::class$, "ptypes"_s);
}

MethodType$OffsetHolder::MethodType$OffsetHolder() {
}

$Class* MethodType$OffsetHolder::load$($String* name, bool initialize) {
	$loadClass(MethodType$OffsetHolder, name, initialize, &_MethodType$OffsetHolder_ClassInfo_, clinit$MethodType$OffsetHolder, allocate$MethodType$OffsetHolder);
	return class$;
}

$Class* MethodType$OffsetHolder::class$ = nullptr;

		} // invoke
	} // lang
} // java