#include <java/lang/invoke/MethodHandleInfo.h>
#include <java/lang/invoke/MethodHandleNatives.h>
#include <java/lang/invoke/MethodHandleStatics.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Member.h>
#include <java/lang/reflect/Modifier.h>
#include <java/util/Objects.h>
#include <jcpp.h>

#undef ACC_VARARGS

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandleNatives = ::java::lang::invoke::MethodHandleNatives;
using $MethodHandleStatics = ::java::lang::invoke::MethodHandleStatics;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $Member = ::java::lang::reflect::Member;
using $Modifier = ::java::lang::reflect::Modifier;
using $Objects = ::java::util::Objects;

namespace java {
	namespace lang {
		namespace invoke {

bool MethodHandleInfo::isVarArgs() {
	if ($MethodHandleNatives::refKindIsField((int8_t)getReferenceKind())) {
		return false;
	}
	int32_t ACC_VARARGS = 128;
	;
	return $Modifier::isTransient(getModifiers());
}

$String* MethodHandleInfo::referenceKindToString(int32_t referenceKind) {
	$useLocalObjectStack();
	if (!$MethodHandleNatives::refKindIsValid(referenceKind)) {
		$throw($($MethodHandleStatics::newIllegalArgumentException("invalid reference kind"_s, $($Integer::valueOf(referenceKind)))));
	}
	return $MethodHandleNatives::refKindName((int8_t)referenceKind);
}

$String* MethodHandleInfo::toString(int32_t kind, $Class* defc, $String* name, $MethodType* type) {
	$useLocalObjectStack();
	$Objects::requireNonNull(name);
	$Objects::requireNonNull(type);
	return $String::format("%s %s.%s:%s"_s, $$new($ObjectArray, {
		$(referenceKindToString(kind)),
		$($nc(defc)->getName()),
		name,
		type
	}));
}

$Class* MethodHandleInfo::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
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
	$MethodInfo methodInfos$$[] = {
		{"getDeclaringClass", "()Ljava/lang/Class;", "()Ljava/lang/Class<*>;", $PUBLIC | $ABSTRACT, $virtualMethod(MethodHandleInfo, getDeclaringClass, $Class*)},
		{"getMethodType", "()Ljava/lang/invoke/MethodType;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MethodHandleInfo, getMethodType, $MethodType*)},
		{"getModifiers", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MethodHandleInfo, getModifiers, int32_t)},
		{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MethodHandleInfo, getName, $String*)},
		{"getReferenceKind", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MethodHandleInfo, getReferenceKind, int32_t)},
		{"isVarArgs", "()Z", nullptr, $PUBLIC, $virtualMethod(MethodHandleInfo, isVarArgs, bool)},
		{"referenceKindToString", "(I)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(MethodHandleInfo, referenceKindToString, $String*, int32_t)},
		{"reflectAs", "(Ljava/lang/Class;Ljava/lang/invoke/MethodHandles$Lookup;)Ljava/lang/reflect/Member;", "<T::Ljava/lang/reflect/Member;>(Ljava/lang/Class<TT;>;Ljava/lang/invoke/MethodHandles$Lookup;)TT;", $PUBLIC | $ABSTRACT, $virtualMethod(MethodHandleInfo, reflectAs, $Member*, $Class*, $MethodHandles$Lookup*)},
		{"toString", "(ILjava/lang/Class;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/String;", "(ILjava/lang/Class<*>;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/String;", $PUBLIC | $STATIC, $staticMethod(MethodHandleInfo, toString, $String*, int32_t, $Class*, $String*, $MethodType*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.lang.invoke.MethodHandleInfo",
		nullptr,
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(MethodHandleInfo, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MethodHandleInfo);
	});
	return class$;
}

$Class* MethodHandleInfo::class$ = nullptr;

		} // invoke
	} // lang
} // java