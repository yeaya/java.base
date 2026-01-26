#include <java/lang/invoke/VarHandle$TypesAndInvokers.h>

#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/invoke/VarHandle$AccessMode.h>
#include <java/lang/invoke/VarHandle$AccessType.h>
#include <java/lang/invoke/VarHandle.h>
#include <jcpp.h>

#undef COUNT

using $MethodHandleArray = $Array<::java::lang::invoke::MethodHandle>;
using $MethodTypeArray = $Array<::java::lang::invoke::MethodType>;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $VarHandle$AccessMode = ::java::lang::invoke::VarHandle$AccessMode;
using $VarHandle$AccessType = ::java::lang::invoke::VarHandle$AccessType;

namespace java {
	namespace lang {
		namespace invoke {

$CompoundAttribute _VarHandle$TypesAndInvokers_FieldAnnotations_methodType_table[] = {
	{"Ljdk/internal/vm/annotation/Stable;", nullptr},
	{}
};

$CompoundAttribute _VarHandle$TypesAndInvokers_FieldAnnotations_methodHandle_table[] = {
	{"Ljdk/internal/vm/annotation/Stable;", nullptr},
	{}
};

$FieldInfo _VarHandle$TypesAndInvokers_FieldInfo_[] = {
	{"methodType_table", "[Ljava/lang/invoke/MethodType;", nullptr, $FINAL, $field(VarHandle$TypesAndInvokers, methodType_table), _VarHandle$TypesAndInvokers_FieldAnnotations_methodType_table},
	{"methodHandle_table", "[Ljava/lang/invoke/MethodHandle;", nullptr, $FINAL, $field(VarHandle$TypesAndInvokers, methodHandle_table), _VarHandle$TypesAndInvokers_FieldAnnotations_methodHandle_table},
	{}
};

$MethodInfo _VarHandle$TypesAndInvokers_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(VarHandle$TypesAndInvokers, init$, void)},
	{}
};

$InnerClassInfo _VarHandle$TypesAndInvokers_InnerClassesInfo_[] = {
	{"java.lang.invoke.VarHandle$TypesAndInvokers", "java.lang.invoke.VarHandle", "TypesAndInvokers", $STATIC},
	{}
};

$ClassInfo _VarHandle$TypesAndInvokers_ClassInfo_ = {
	$ACC_SUPER,
	"java.lang.invoke.VarHandle$TypesAndInvokers",
	"java.lang.Object",
	nullptr,
	_VarHandle$TypesAndInvokers_FieldInfo_,
	_VarHandle$TypesAndInvokers_MethodInfo_,
	nullptr,
	nullptr,
	_VarHandle$TypesAndInvokers_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.invoke.VarHandle"
};

$Object* allocate$VarHandle$TypesAndInvokers($Class* clazz) {
	return $of($alloc(VarHandle$TypesAndInvokers));
}

void VarHandle$TypesAndInvokers::init$() {
	$init($VarHandle$AccessType);
	$set(this, methodType_table, $new($MethodTypeArray, $VarHandle$AccessType::COUNT));
	$init($VarHandle$AccessMode);
	$set(this, methodHandle_table, $new($MethodHandleArray, $VarHandle$AccessMode::COUNT));
}

VarHandle$TypesAndInvokers::VarHandle$TypesAndInvokers() {
}

$Class* VarHandle$TypesAndInvokers::load$($String* name, bool initialize) {
	$loadClass(VarHandle$TypesAndInvokers, name, initialize, &_VarHandle$TypesAndInvokers_ClassInfo_, allocate$VarHandle$TypesAndInvokers);
	return class$;
}

$Class* VarHandle$TypesAndInvokers::class$ = nullptr;

		} // invoke
	} // lang
} // java