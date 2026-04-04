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

void VarHandle$TypesAndInvokers::init$() {
	$init($VarHandle$AccessType);
	$set(this, methodType_table, $new($MethodTypeArray, $VarHandle$AccessType::COUNT));
	$init($VarHandle$AccessMode);
	$set(this, methodHandle_table, $new($MethodHandleArray, $VarHandle$AccessMode::COUNT));
}

VarHandle$TypesAndInvokers::VarHandle$TypesAndInvokers() {
}

$Class* VarHandle$TypesAndInvokers::load$($String* name, bool initialize) {
	$CompoundAttribute methodType_tablefieldAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/Stable;", nullptr},
		{}
	};
	$CompoundAttribute methodHandle_tablefieldAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/Stable;", nullptr},
		{}
	};
	$FieldInfo fieldInfos$$[] = {
		{"methodType_table", "[Ljava/lang/invoke/MethodType;", nullptr, $FINAL, $field(VarHandle$TypesAndInvokers, methodType_table), methodType_tablefieldAnnotations$$},
		{"methodHandle_table", "[Ljava/lang/invoke/MethodHandle;", nullptr, $FINAL, $field(VarHandle$TypesAndInvokers, methodHandle_table), methodHandle_tablefieldAnnotations$$},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(VarHandle$TypesAndInvokers, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.invoke.VarHandle$TypesAndInvokers", "java.lang.invoke.VarHandle", "TypesAndInvokers", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.lang.invoke.VarHandle$TypesAndInvokers",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.lang.invoke.VarHandle"
	};
	$loadClass(VarHandle$TypesAndInvokers, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(VarHandle$TypesAndInvokers);
	});
	return class$;
}

$Class* VarHandle$TypesAndInvokers::class$ = nullptr;

		} // invoke
	} // lang
} // java