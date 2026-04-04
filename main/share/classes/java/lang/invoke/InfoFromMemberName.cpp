#include <java/lang/invoke/InfoFromMemberName.h>
#include <java/lang/AssertionError.h>
#include <java/lang/IllegalAccessException.h>
#include <java/lang/InternalError.h>
#include <java/lang/invoke/InfoFromMemberName$1.h>
#include <java/lang/invoke/MemberName.h>
#include <java/lang/invoke/MethodHandleInfo.h>
#include <java/lang/invoke/MethodHandleNatives.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/invoke/TypeDescriptor$OfField.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Field.h>
#include <java/lang/reflect/Member.h>
#include <java/lang/reflect/Method.h>
#include <java/lang/reflect/Modifier.h>
#include <java/security/AccessController.h>
#include <jcpp.h>

using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalAccessException = ::java::lang::IllegalAccessException;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;
using $InfoFromMemberName$1 = ::java::lang::invoke::InfoFromMemberName$1;
using $MemberName = ::java::lang::invoke::MemberName;
using $MethodHandleInfo = ::java::lang::invoke::MethodHandleInfo;
using $MethodHandleNatives = ::java::lang::invoke::MethodHandleNatives;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $Constructor = ::java::lang::reflect::Constructor;
using $Field = ::java::lang::reflect::Field;
using $Member = ::java::lang::reflect::Member;
using $Method = ::java::lang::reflect::Method;
using $Modifier = ::java::lang::reflect::Modifier;
using $AccessController = ::java::security::AccessController;

namespace java {
	namespace lang {
		namespace invoke {

bool InfoFromMemberName::$assertionsDisabled = false;

void InfoFromMemberName::init$($MethodHandles$Lookup* lookup, $MemberName* member, int8_t referenceKind) {
	bool var$0 = !InfoFromMemberName::$assertionsDisabled;
	if (var$0) {
		bool var$2 = $nc(member)->isResolved();
		bool var$1 = var$2 || member->isMethodHandleInvoke();
		var$0 = !(var$1 || member->isVarHandleMethodInvoke());
	}
	if (var$0) {
		$throwNew($AssertionError);
	}
	if (!InfoFromMemberName::$assertionsDisabled && !($nc(member)->referenceKindIsConsistentWith(referenceKind))) {
		$throwNew($AssertionError);
	}
	$set(this, member, member);
	this->referenceKind = referenceKind;
}

$Class* InfoFromMemberName::getDeclaringClass() {
	return $nc(this->member)->getDeclaringClass();
}

$String* InfoFromMemberName::getName() {
	return $nc(this->member)->getName();
}

$MethodType* InfoFromMemberName::getMethodType() {
	return $nc(this->member)->getMethodOrFieldType();
}

int32_t InfoFromMemberName::getModifiers() {
	return $nc(this->member)->getModifiers();
}

int32_t InfoFromMemberName::getReferenceKind() {
	return this->referenceKind;
}

$String* InfoFromMemberName::toString() {
	$useLocalObjectStack();
	int32_t var$0 = getReferenceKind();
	$Class* var$1 = getDeclaringClass();
	$var($String, var$2, getName());
	return $MethodHandleInfo::toString(var$0, var$1, var$2, $(getMethodType()));
}

$Member* InfoFromMemberName::reflectAs($Class* expected, $MethodHandles$Lookup* lookup) {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	bool var$1 = $nc(this->member)->isMethodHandleInvoke();
	bool var$0 = var$1 || this->member->isVarHandleMethodInvoke();
	if (var$0 && !this->member->isVarargs()) {
		$throwNew($IllegalArgumentException, "cannot reflect signature polymorphic method"_s);
	}
	$var($Member, mem, $cast($Member, $AccessController::doPrivileged($$new($InfoFromMemberName$1, this))));
	try {
		$Class* defc = getDeclaringClass();
		int8_t refKind = (int8_t)getReferenceKind();
		$nc(lookup)->checkAccess(refKind, defc, $(convertToMemberName(refKind, mem)));
	} catch ($IllegalAccessException& ex) {
		$throwNew($IllegalArgumentException, ex);
	}
	return $cast($Member, $nc(expected)->cast(mem));
}

$Member* InfoFromMemberName::reflectUnchecked() {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	int8_t refKind = (int8_t)getReferenceKind();
	$Class* defc = getDeclaringClass();
	bool isPublic = $Modifier::isPublic(getModifiers());
	if ($MethodHandleNatives::refKindIsMethod(refKind)) {
		if (isPublic) {
			$var($String, var$0, getName());
			return $nc(defc)->getMethod(var$0, $$cast($ClassArray, $$nc(getMethodType())->parameterArray()));
		} else {
			$var($String, var$1, getName());
			return $nc(defc)->getDeclaredMethod(var$1, $$cast($ClassArray, $$nc(getMethodType())->parameterArray()));
		}
	} else if ($MethodHandleNatives::refKindIsConstructor(refKind)) {
		if (isPublic) {
			return $nc(defc)->getConstructor($$cast($ClassArray, $$nc(getMethodType())->parameterArray()));
		} else {
			return $nc(defc)->getDeclaredConstructor($$cast($ClassArray, $$nc(getMethodType())->parameterArray()));
		}
	} else if ($MethodHandleNatives::refKindIsField(refKind)) {
		if (isPublic) {
			return $nc(defc)->getField($(getName()));
		} else {
			return $nc(defc)->getDeclaredField($(getName()));
		}
	} else {
		$throwNew($IllegalArgumentException, $$str({"referenceKind="_s, $$str(refKind)}));
	}
}

$MemberName* InfoFromMemberName::convertToMemberName(int8_t refKind, $Member* mem) {
	$init(InfoFromMemberName);
	if ($instanceOf($Method, mem)) {
		bool wantSpecial = (refKind == $MethodHandleInfo::REF_invokeSpecial);
		return $new($MemberName, $cast($Method, mem), wantSpecial);
	} else if ($instanceOf($Constructor, mem)) {
		return $new($MemberName, $cast($Constructor, mem));
	} else if ($instanceOf($Field, mem)) {
		bool isSetter = (refKind == $MethodHandleInfo::REF_putField || refKind == $MethodHandleInfo::REF_putStatic);
		return $new($MemberName, $cast($Field, mem), isSetter);
	}
	$throwNew($InternalError, $($nc($of(mem))->getClass()->getName()));
}

void InfoFromMemberName::clinit$($Class* clazz) {
	InfoFromMemberName::$assertionsDisabled = !InfoFromMemberName::class$->desiredAssertionStatus();
}

InfoFromMemberName::InfoFromMemberName() {
}

$Class* InfoFromMemberName::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(InfoFromMemberName, $assertionsDisabled)},
		{"member", "Ljava/lang/invoke/MemberName;", nullptr, $PRIVATE | $FINAL, $field(InfoFromMemberName, member)},
		{"referenceKind", "I", nullptr, $PRIVATE | $FINAL, $field(InfoFromMemberName, referenceKind)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MemberName;B)V", nullptr, 0, $method(InfoFromMemberName, init$, void, $MethodHandles$Lookup*, $MemberName*, int8_t)},
		{"convertToMemberName", "(BLjava/lang/reflect/Member;)Ljava/lang/invoke/MemberName;", nullptr, $PRIVATE | $STATIC, $staticMethod(InfoFromMemberName, convertToMemberName, $MemberName*, int8_t, $Member*), "java.lang.IllegalAccessException"},
		{"getDeclaringClass", "()Ljava/lang/Class;", "()Ljava/lang/Class<*>;", $PUBLIC, $virtualMethod(InfoFromMemberName, getDeclaringClass, $Class*)},
		{"getMethodType", "()Ljava/lang/invoke/MethodType;", nullptr, $PUBLIC, $virtualMethod(InfoFromMemberName, getMethodType, $MethodType*)},
		{"getModifiers", "()I", nullptr, $PUBLIC, $virtualMethod(InfoFromMemberName, getModifiers, int32_t)},
		{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(InfoFromMemberName, getName, $String*)},
		{"getReferenceKind", "()I", nullptr, $PUBLIC, $virtualMethod(InfoFromMemberName, getReferenceKind, int32_t)},
		{"reflectAs", "(Ljava/lang/Class;Ljava/lang/invoke/MethodHandles$Lookup;)Ljava/lang/reflect/Member;", "<T::Ljava/lang/reflect/Member;>(Ljava/lang/Class<TT;>;Ljava/lang/invoke/MethodHandles$Lookup;)TT;", $PUBLIC, $virtualMethod(InfoFromMemberName, reflectAs, $Member*, $Class*, $MethodHandles$Lookup*)},
		{"reflectUnchecked", "()Ljava/lang/reflect/Member;", nullptr, $PRIVATE, $method(InfoFromMemberName, reflectUnchecked, $Member*), "java.lang.ReflectiveOperationException"},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(InfoFromMemberName, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.invoke.InfoFromMemberName$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.lang.invoke.InfoFromMemberName",
		"java.lang.Object",
		"java.lang.invoke.MethodHandleInfo",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"java.lang.invoke.InfoFromMemberName$1"
	};
	$loadClass(InfoFromMemberName, name, initialize, &classInfo$$, InfoFromMemberName::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(InfoFromMemberName);
	});
	return class$;
}

$Class* InfoFromMemberName::class$ = nullptr;

		} // invoke
	} // lang
} // java