#include <java/lang/invoke/MethodHandleInfo.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/invoke/MethodHandleNatives.h>
#include <java/lang/invoke/MethodHandleStatics.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Member.h>
#include <java/lang/reflect/Method.h>
#include <java/lang/reflect/Modifier.h>
#include <java/util/Objects.h>
#include <jcpp.h>

#undef ACC_VARARGS

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $RuntimeException = ::java::lang::RuntimeException;
using $MethodHandleNatives = ::java::lang::invoke::MethodHandleNatives;
using $MethodHandleNatives$Constants = ::java::lang::invoke::MethodHandleNatives$Constants;
using $MethodHandleStatics = ::java::lang::invoke::MethodHandleStatics;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $Member = ::java::lang::reflect::Member;
using $Modifier = ::java::lang::reflect::Modifier;
using $Objects = ::java::util::Objects;

namespace java {
	namespace lang {
		namespace invoke {

$FieldInfo _MethodHandleInfo_FieldInfo_[] = {
	{"REF_getField", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(MethodHandleInfo, REF_getField)},
	{"REF_getStatic", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(MethodHandleInfo, REF_getStatic)},
	{"REF_putField", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(MethodHandleInfo, REF_putField)},
	{"REF_putStatic", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(MethodHandleInfo, REF_putStatic)},
	{"REF_invokeVirtual", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(MethodHandleInfo, REF_invokeVirtual)},
	{"REF_invokeStatic", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(MethodHandleInfo, REF_invokeStatic)},
	{"REF_invokeSpecial", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(MethodHandleInfo, REF_invokeSpecial)},
	{"REF_newInvokeSpecial", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(MethodHandleInfo, REF_newInvokeSpecial)},
	{"REF_invokeInterface", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(MethodHandleInfo, REF_invokeInterface)},
	{}
};

$MethodInfo _MethodHandleInfo_MethodInfo_[] = {
	{"getDeclaringClass", "()Ljava/lang/Class;", "()Ljava/lang/Class<*>;", $PUBLIC | $ABSTRACT},
	{"getMethodType", "()Ljava/lang/invoke/MethodType;", nullptr, $PUBLIC | $ABSTRACT},
	{"getModifiers", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getReferenceKind", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"isVarArgs", "()Z", nullptr, $PUBLIC},
	{"referenceKindToString", "(I)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)(int32_t)>(&MethodHandleInfo::referenceKindToString))},
	{"reflectAs", "(Ljava/lang/Class;Ljava/lang/invoke/MethodHandles$Lookup;)Ljava/lang/reflect/Member;", "<T::Ljava/lang/reflect/Member;>(Ljava/lang/Class<TT;>;Ljava/lang/invoke/MethodHandles$Lookup;)TT;", $PUBLIC | $ABSTRACT},
	{"toString", "(ILjava/lang/Class;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/String;", "(ILjava/lang/Class<*>;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/String;", $PUBLIC | $STATIC, $method(static_cast<$String*(*)(int32_t,$Class*,$String*,$MethodType*)>(&MethodHandleInfo::toString))},
	{}
};

$ClassInfo _MethodHandleInfo_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.lang.invoke.MethodHandleInfo",
	nullptr,
	nullptr,
	_MethodHandleInfo_FieldInfo_,
	_MethodHandleInfo_MethodInfo_
};

$Object* allocate$MethodHandleInfo($Class* clazz) {
	return $of($alloc(MethodHandleInfo));
}

bool MethodHandleInfo::isVarArgs() {
	if ($MethodHandleNatives::refKindIsField((int8_t)getReferenceKind())) {
		return false;
	}
	int32_t ACC_VARARGS = 128;
	return $Modifier::isTransient(getModifiers());
}

$String* MethodHandleInfo::referenceKindToString(int32_t referenceKind) {
	$useLocalCurrentObjectStackCache();
	if (!$MethodHandleNatives::refKindIsValid(referenceKind)) {
		$throw($($MethodHandleStatics::newIllegalArgumentException("invalid reference kind"_s, $($Integer::valueOf(referenceKind)))));
	}
	return $MethodHandleNatives::refKindName((int8_t)referenceKind);
}

$String* MethodHandleInfo::toString(int32_t kind, $Class* defc, $String* name, $MethodType* type) {
	$useLocalCurrentObjectStackCache();
	$Objects::requireNonNull(name);
	$Objects::requireNonNull(type);
	return $String::format("%s %s.%s:%s"_s, $$new($ObjectArray, {
		$($of(referenceKindToString(kind))),
		$($of($nc(defc)->getName())),
		$of(name),
		$of(type)
	}));
}

$Class* MethodHandleInfo::load$($String* name, bool initialize) {
	$loadClass(MethodHandleInfo, name, initialize, &_MethodHandleInfo_ClassInfo_, allocate$MethodHandleInfo);
	return class$;
}

$Class* MethodHandleInfo::class$ = nullptr;

		} // invoke
	} // lang
} // java