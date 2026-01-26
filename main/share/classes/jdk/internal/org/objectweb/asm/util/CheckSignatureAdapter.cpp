#include <jdk/internal/org/objectweb/asm/util/CheckSignatureAdapter.h>

#include <java/lang/Enum.h>
#include <java/lang/IllegalStateException.h>
#include <java/util/AbstractCollection.h>
#include <java/util/EnumSet.h>
#include <jdk/internal/org/objectweb/asm/Opcodes.h>
#include <jdk/internal/org/objectweb/asm/signature/SignatureVisitor.h>
#include <jdk/internal/org/objectweb/asm/util/CheckSignatureAdapter$State.h>
#include <jcpp.h>

#undef ASM8
#undef BOUND
#undef CLASS_SIGNATURE
#undef CLASS_TYPE
#undef EMPTY
#undef END
#undef FORMAL
#undef INVALID
#undef METHOD_SIGNATURE
#undef PARAM
#undef RETURN
#undef SIMPLE_TYPE
#undef SUPER
#undef TYPE_SIGNATURE
#undef VISIT_CLASS_BOUND_STATES
#undef VISIT_EXCEPTION_TYPE_STATES
#undef VISIT_FORMAL_TYPE_PARAMETER_STATES
#undef VISIT_INTERFACE_BOUND_STATES
#undef VISIT_INTERFACE_STATES
#undef VISIT_PARAMETER_TYPE_STATES
#undef VISIT_RETURN_TYPE_STATES
#undef VISIT_SUPER_CLASS_STATES

using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EnumSet = ::java::util::EnumSet;
using $Opcodes = ::jdk::internal::org::objectweb::asm$::Opcodes;
using $SignatureVisitor = ::jdk::internal::org::objectweb::asm$::signature::SignatureVisitor;
using $CheckSignatureAdapter$State = ::jdk::internal::org::objectweb::asm$::util::CheckSignatureAdapter$State;

namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {
					namespace util {

$FieldInfo _CheckSignatureAdapter_FieldInfo_[] = {
	{"CLASS_SIGNATURE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(CheckSignatureAdapter, CLASS_SIGNATURE)},
	{"METHOD_SIGNATURE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(CheckSignatureAdapter, METHOD_SIGNATURE)},
	{"TYPE_SIGNATURE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(CheckSignatureAdapter, TYPE_SIGNATURE)},
	{"VISIT_FORMAL_TYPE_PARAMETER_STATES", "Ljava/util/EnumSet;", "Ljava/util/EnumSet<Ljdk/internal/org/objectweb/asm/util/CheckSignatureAdapter$State;>;", $PRIVATE | $STATIC | $FINAL, $staticField(CheckSignatureAdapter, VISIT_FORMAL_TYPE_PARAMETER_STATES)},
	{"VISIT_CLASS_BOUND_STATES", "Ljava/util/EnumSet;", "Ljava/util/EnumSet<Ljdk/internal/org/objectweb/asm/util/CheckSignatureAdapter$State;>;", $PRIVATE | $STATIC | $FINAL, $staticField(CheckSignatureAdapter, VISIT_CLASS_BOUND_STATES)},
	{"VISIT_INTERFACE_BOUND_STATES", "Ljava/util/EnumSet;", "Ljava/util/EnumSet<Ljdk/internal/org/objectweb/asm/util/CheckSignatureAdapter$State;>;", $PRIVATE | $STATIC | $FINAL, $staticField(CheckSignatureAdapter, VISIT_INTERFACE_BOUND_STATES)},
	{"VISIT_SUPER_CLASS_STATES", "Ljava/util/EnumSet;", "Ljava/util/EnumSet<Ljdk/internal/org/objectweb/asm/util/CheckSignatureAdapter$State;>;", $PRIVATE | $STATIC | $FINAL, $staticField(CheckSignatureAdapter, VISIT_SUPER_CLASS_STATES)},
	{"VISIT_INTERFACE_STATES", "Ljava/util/EnumSet;", "Ljava/util/EnumSet<Ljdk/internal/org/objectweb/asm/util/CheckSignatureAdapter$State;>;", $PRIVATE | $STATIC | $FINAL, $staticField(CheckSignatureAdapter, VISIT_INTERFACE_STATES)},
	{"VISIT_PARAMETER_TYPE_STATES", "Ljava/util/EnumSet;", "Ljava/util/EnumSet<Ljdk/internal/org/objectweb/asm/util/CheckSignatureAdapter$State;>;", $PRIVATE | $STATIC | $FINAL, $staticField(CheckSignatureAdapter, VISIT_PARAMETER_TYPE_STATES)},
	{"VISIT_RETURN_TYPE_STATES", "Ljava/util/EnumSet;", "Ljava/util/EnumSet<Ljdk/internal/org/objectweb/asm/util/CheckSignatureAdapter$State;>;", $PRIVATE | $STATIC | $FINAL, $staticField(CheckSignatureAdapter, VISIT_RETURN_TYPE_STATES)},
	{"VISIT_EXCEPTION_TYPE_STATES", "Ljava/util/EnumSet;", "Ljava/util/EnumSet<Ljdk/internal/org/objectweb/asm/util/CheckSignatureAdapter$State;>;", $PRIVATE | $STATIC | $FINAL, $staticField(CheckSignatureAdapter, VISIT_EXCEPTION_TYPE_STATES)},
	{"INVALID", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(CheckSignatureAdapter, INVALID)},
	{"type", "I", nullptr, $PRIVATE | $FINAL, $field(CheckSignatureAdapter, type)},
	{"state", "Ljdk/internal/org/objectweb/asm/util/CheckSignatureAdapter$State;", nullptr, $PRIVATE, $field(CheckSignatureAdapter, state)},
	{"canBeVoid", "Z", nullptr, $PRIVATE, $field(CheckSignatureAdapter, canBeVoid)},
	{"signatureVisitor", "Ljdk/internal/org/objectweb/asm/signature/SignatureVisitor;", nullptr, $PRIVATE | $FINAL, $field(CheckSignatureAdapter, signatureVisitor)},
	{}
};

$MethodInfo _CheckSignatureAdapter_MethodInfo_[] = {
	{"<init>", "(ILjdk/internal/org/objectweb/asm/signature/SignatureVisitor;)V", nullptr, $PUBLIC, $method(CheckSignatureAdapter, init$, void, int32_t, $SignatureVisitor*)},
	{"<init>", "(IILjdk/internal/org/objectweb/asm/signature/SignatureVisitor;)V", nullptr, $PROTECTED, $method(CheckSignatureAdapter, init$, void, int32_t, int32_t, $SignatureVisitor*)},
	{"checkClassName", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PRIVATE, $method(CheckSignatureAdapter, checkClassName, void, $String*, $String*)},
	{"checkIdentifier", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PRIVATE, $method(CheckSignatureAdapter, checkIdentifier, void, $String*, $String*)},
	{"visitArrayType", "()Ljdk/internal/org/objectweb/asm/signature/SignatureVisitor;", nullptr, $PUBLIC, $virtualMethod(CheckSignatureAdapter, visitArrayType, $SignatureVisitor*)},
	{"visitBaseType", "(C)V", nullptr, $PUBLIC, $virtualMethod(CheckSignatureAdapter, visitBaseType, void, char16_t)},
	{"visitClassBound", "()Ljdk/internal/org/objectweb/asm/signature/SignatureVisitor;", nullptr, $PUBLIC, $virtualMethod(CheckSignatureAdapter, visitClassBound, $SignatureVisitor*)},
	{"visitClassType", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(CheckSignatureAdapter, visitClassType, void, $String*)},
	{"visitEnd", "()V", nullptr, $PUBLIC, $virtualMethod(CheckSignatureAdapter, visitEnd, void)},
	{"visitExceptionType", "()Ljdk/internal/org/objectweb/asm/signature/SignatureVisitor;", nullptr, $PUBLIC, $virtualMethod(CheckSignatureAdapter, visitExceptionType, $SignatureVisitor*)},
	{"visitFormalTypeParameter", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(CheckSignatureAdapter, visitFormalTypeParameter, void, $String*)},
	{"visitInnerClassType", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(CheckSignatureAdapter, visitInnerClassType, void, $String*)},
	{"visitInterface", "()Ljdk/internal/org/objectweb/asm/signature/SignatureVisitor;", nullptr, $PUBLIC, $virtualMethod(CheckSignatureAdapter, visitInterface, $SignatureVisitor*)},
	{"visitInterfaceBound", "()Ljdk/internal/org/objectweb/asm/signature/SignatureVisitor;", nullptr, $PUBLIC, $virtualMethod(CheckSignatureAdapter, visitInterfaceBound, $SignatureVisitor*)},
	{"visitParameterType", "()Ljdk/internal/org/objectweb/asm/signature/SignatureVisitor;", nullptr, $PUBLIC, $virtualMethod(CheckSignatureAdapter, visitParameterType, $SignatureVisitor*)},
	{"visitReturnType", "()Ljdk/internal/org/objectweb/asm/signature/SignatureVisitor;", nullptr, $PUBLIC, $virtualMethod(CheckSignatureAdapter, visitReturnType, $SignatureVisitor*)},
	{"visitSuperclass", "()Ljdk/internal/org/objectweb/asm/signature/SignatureVisitor;", nullptr, $PUBLIC, $virtualMethod(CheckSignatureAdapter, visitSuperclass, $SignatureVisitor*)},
	{"visitTypeArgument", "()V", nullptr, $PUBLIC, $virtualMethod(CheckSignatureAdapter, visitTypeArgument, void)},
	{"visitTypeArgument", "(C)Ljdk/internal/org/objectweb/asm/signature/SignatureVisitor;", nullptr, $PUBLIC, $virtualMethod(CheckSignatureAdapter, visitTypeArgument, $SignatureVisitor*, char16_t)},
	{"visitTypeVariable", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(CheckSignatureAdapter, visitTypeVariable, void, $String*)},
	{}
};

$InnerClassInfo _CheckSignatureAdapter_InnerClassesInfo_[] = {
	{"jdk.internal.org.objectweb.asm.util.CheckSignatureAdapter$State", "jdk.internal.org.objectweb.asm.util.CheckSignatureAdapter", "State", $PRIVATE | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _CheckSignatureAdapter_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"jdk.internal.org.objectweb.asm.util.CheckSignatureAdapter",
	"jdk.internal.org.objectweb.asm.signature.SignatureVisitor",
	nullptr,
	_CheckSignatureAdapter_FieldInfo_,
	_CheckSignatureAdapter_MethodInfo_,
	nullptr,
	nullptr,
	_CheckSignatureAdapter_InnerClassesInfo_,
	nullptr,
	nullptr,
	"jdk.internal.org.objectweb.asm.util.CheckSignatureAdapter$State"
};

$Object* allocate$CheckSignatureAdapter($Class* clazz) {
	return $of($alloc(CheckSignatureAdapter));
}

$EnumSet* CheckSignatureAdapter::VISIT_FORMAL_TYPE_PARAMETER_STATES = nullptr;
$EnumSet* CheckSignatureAdapter::VISIT_CLASS_BOUND_STATES = nullptr;
$EnumSet* CheckSignatureAdapter::VISIT_INTERFACE_BOUND_STATES = nullptr;
$EnumSet* CheckSignatureAdapter::VISIT_SUPER_CLASS_STATES = nullptr;
$EnumSet* CheckSignatureAdapter::VISIT_INTERFACE_STATES = nullptr;
$EnumSet* CheckSignatureAdapter::VISIT_PARAMETER_TYPE_STATES = nullptr;
$EnumSet* CheckSignatureAdapter::VISIT_RETURN_TYPE_STATES = nullptr;
$EnumSet* CheckSignatureAdapter::VISIT_EXCEPTION_TYPE_STATES = nullptr;
$String* CheckSignatureAdapter::INVALID = nullptr;

void CheckSignatureAdapter::init$(int32_t type, $SignatureVisitor* signatureVisitor) {
	CheckSignatureAdapter::init$($Opcodes::ASM8, type, signatureVisitor);
}

void CheckSignatureAdapter::init$(int32_t api, int32_t type, $SignatureVisitor* signatureVisitor) {
	$SignatureVisitor::init$(api);
	this->type = type;
	$init($CheckSignatureAdapter$State);
	$set(this, state, $CheckSignatureAdapter$State::EMPTY);
	$set(this, signatureVisitor, signatureVisitor);
}

void CheckSignatureAdapter::visitFormalTypeParameter($String* name) {
	if (this->type == CheckSignatureAdapter::TYPE_SIGNATURE || !$nc(CheckSignatureAdapter::VISIT_FORMAL_TYPE_PARAMETER_STATES)->contains(this->state)) {
		$throwNew($IllegalStateException);
	}
	checkIdentifier(name, "formal type parameter"_s);
	$init($CheckSignatureAdapter$State);
	$set(this, state, $CheckSignatureAdapter$State::FORMAL);
	if (this->signatureVisitor != nullptr) {
		$nc(this->signatureVisitor)->visitFormalTypeParameter(name);
	}
}

$SignatureVisitor* CheckSignatureAdapter::visitClassBound() {
	if (this->type == CheckSignatureAdapter::TYPE_SIGNATURE || !$nc(CheckSignatureAdapter::VISIT_CLASS_BOUND_STATES)->contains(this->state)) {
		$throwNew($IllegalStateException);
	}
	$init($CheckSignatureAdapter$State);
	$set(this, state, $CheckSignatureAdapter$State::BOUND);
	return $new(CheckSignatureAdapter, CheckSignatureAdapter::TYPE_SIGNATURE, this->signatureVisitor == nullptr ? ($SignatureVisitor*)nullptr : $($nc(this->signatureVisitor)->visitClassBound()));
}

$SignatureVisitor* CheckSignatureAdapter::visitInterfaceBound() {
	if (this->type == CheckSignatureAdapter::TYPE_SIGNATURE || !$nc(CheckSignatureAdapter::VISIT_INTERFACE_BOUND_STATES)->contains(this->state)) {
		$throwNew($IllegalStateException);
	}
	return $new(CheckSignatureAdapter, CheckSignatureAdapter::TYPE_SIGNATURE, this->signatureVisitor == nullptr ? ($SignatureVisitor*)nullptr : $($nc(this->signatureVisitor)->visitInterfaceBound()));
}

$SignatureVisitor* CheckSignatureAdapter::visitSuperclass() {
	if (this->type != CheckSignatureAdapter::CLASS_SIGNATURE || !$nc(CheckSignatureAdapter::VISIT_SUPER_CLASS_STATES)->contains(this->state)) {
		$throwNew($IllegalStateException);
	}
	$init($CheckSignatureAdapter$State);
	$set(this, state, $CheckSignatureAdapter$State::SUPER);
	return $new(CheckSignatureAdapter, CheckSignatureAdapter::TYPE_SIGNATURE, this->signatureVisitor == nullptr ? ($SignatureVisitor*)nullptr : $($nc(this->signatureVisitor)->visitSuperclass()));
}

$SignatureVisitor* CheckSignatureAdapter::visitInterface() {
	if (this->type != CheckSignatureAdapter::CLASS_SIGNATURE || !$nc(CheckSignatureAdapter::VISIT_INTERFACE_STATES)->contains(this->state)) {
		$throwNew($IllegalStateException);
	}
	return $new(CheckSignatureAdapter, CheckSignatureAdapter::TYPE_SIGNATURE, this->signatureVisitor == nullptr ? ($SignatureVisitor*)nullptr : $($nc(this->signatureVisitor)->visitInterface()));
}

$SignatureVisitor* CheckSignatureAdapter::visitParameterType() {
	if (this->type != CheckSignatureAdapter::METHOD_SIGNATURE || !$nc(CheckSignatureAdapter::VISIT_PARAMETER_TYPE_STATES)->contains(this->state)) {
		$throwNew($IllegalStateException);
	}
	$init($CheckSignatureAdapter$State);
	$set(this, state, $CheckSignatureAdapter$State::PARAM);
	return $new(CheckSignatureAdapter, CheckSignatureAdapter::TYPE_SIGNATURE, this->signatureVisitor == nullptr ? ($SignatureVisitor*)nullptr : $($nc(this->signatureVisitor)->visitParameterType()));
}

$SignatureVisitor* CheckSignatureAdapter::visitReturnType() {
	$useLocalCurrentObjectStackCache();
	if (this->type != CheckSignatureAdapter::METHOD_SIGNATURE || !$nc(CheckSignatureAdapter::VISIT_RETURN_TYPE_STATES)->contains(this->state)) {
		$throwNew($IllegalStateException);
	}
	$init($CheckSignatureAdapter$State);
	$set(this, state, $CheckSignatureAdapter$State::RETURN);
	$var(CheckSignatureAdapter, checkSignatureAdapter, $new(CheckSignatureAdapter, CheckSignatureAdapter::TYPE_SIGNATURE, this->signatureVisitor == nullptr ? ($SignatureVisitor*)nullptr : $($nc(this->signatureVisitor)->visitReturnType())));
	checkSignatureAdapter->canBeVoid = true;
	return checkSignatureAdapter;
}

$SignatureVisitor* CheckSignatureAdapter::visitExceptionType() {
	if (this->type != CheckSignatureAdapter::METHOD_SIGNATURE || !$nc(CheckSignatureAdapter::VISIT_EXCEPTION_TYPE_STATES)->contains(this->state)) {
		$throwNew($IllegalStateException);
	}
	return $new(CheckSignatureAdapter, CheckSignatureAdapter::TYPE_SIGNATURE, this->signatureVisitor == nullptr ? ($SignatureVisitor*)nullptr : $($nc(this->signatureVisitor)->visitExceptionType()));
}

void CheckSignatureAdapter::visitBaseType(char16_t descriptor) {
	$init($CheckSignatureAdapter$State);
	if (this->type != CheckSignatureAdapter::TYPE_SIGNATURE || this->state != $CheckSignatureAdapter$State::EMPTY) {
		$throwNew($IllegalStateException);
	}
	if (descriptor == u'V') {
		if (!this->canBeVoid) {
			$throwNew($IllegalArgumentException, "Base type descriptor can\'t be V"_s);
		}
	} else if ("ZCBSIFJD"_s->indexOf((int32_t)descriptor) == -1) {
		$throwNew($IllegalArgumentException, "Base type descriptor must be one of ZCBSIFJD"_s);
	}
	$set(this, state, $CheckSignatureAdapter$State::SIMPLE_TYPE);
	if (this->signatureVisitor != nullptr) {
		$nc(this->signatureVisitor)->visitBaseType(descriptor);
	}
}

void CheckSignatureAdapter::visitTypeVariable($String* name) {
	$init($CheckSignatureAdapter$State);
	if (this->type != CheckSignatureAdapter::TYPE_SIGNATURE || this->state != $CheckSignatureAdapter$State::EMPTY) {
		$throwNew($IllegalStateException);
	}
	checkIdentifier(name, "type variable"_s);
	$set(this, state, $CheckSignatureAdapter$State::SIMPLE_TYPE);
	if (this->signatureVisitor != nullptr) {
		$nc(this->signatureVisitor)->visitTypeVariable(name);
	}
}

$SignatureVisitor* CheckSignatureAdapter::visitArrayType() {
	$init($CheckSignatureAdapter$State);
	if (this->type != CheckSignatureAdapter::TYPE_SIGNATURE || this->state != $CheckSignatureAdapter$State::EMPTY) {
		$throwNew($IllegalStateException);
	}
	$set(this, state, $CheckSignatureAdapter$State::SIMPLE_TYPE);
	return $new(CheckSignatureAdapter, CheckSignatureAdapter::TYPE_SIGNATURE, this->signatureVisitor == nullptr ? ($SignatureVisitor*)nullptr : $($nc(this->signatureVisitor)->visitArrayType()));
}

void CheckSignatureAdapter::visitClassType($String* name) {
	$init($CheckSignatureAdapter$State);
	if (this->type != CheckSignatureAdapter::TYPE_SIGNATURE || this->state != $CheckSignatureAdapter$State::EMPTY) {
		$throwNew($IllegalStateException);
	}
	checkClassName(name, "class name"_s);
	$set(this, state, $CheckSignatureAdapter$State::CLASS_TYPE);
	if (this->signatureVisitor != nullptr) {
		$nc(this->signatureVisitor)->visitClassType(name);
	}
}

void CheckSignatureAdapter::visitInnerClassType($String* name) {
	$init($CheckSignatureAdapter$State);
	if (this->state != $CheckSignatureAdapter$State::CLASS_TYPE) {
		$throwNew($IllegalStateException);
	}
	checkIdentifier(name, "inner class name"_s);
	if (this->signatureVisitor != nullptr) {
		$nc(this->signatureVisitor)->visitInnerClassType(name);
	}
}

void CheckSignatureAdapter::visitTypeArgument() {
	$init($CheckSignatureAdapter$State);
	if (this->state != $CheckSignatureAdapter$State::CLASS_TYPE) {
		$throwNew($IllegalStateException);
	}
	if (this->signatureVisitor != nullptr) {
		$nc(this->signatureVisitor)->visitTypeArgument();
	}
}

$SignatureVisitor* CheckSignatureAdapter::visitTypeArgument(char16_t wildcard) {
	$init($CheckSignatureAdapter$State);
	if (this->state != $CheckSignatureAdapter$State::CLASS_TYPE) {
		$throwNew($IllegalStateException);
	}
	if ("+-="_s->indexOf((int32_t)wildcard) == -1) {
		$throwNew($IllegalArgumentException, "Wildcard must be one of +-="_s);
	}
	return $new(CheckSignatureAdapter, CheckSignatureAdapter::TYPE_SIGNATURE, this->signatureVisitor == nullptr ? ($SignatureVisitor*)nullptr : $($nc(this->signatureVisitor)->visitTypeArgument(wildcard)));
}

void CheckSignatureAdapter::visitEnd() {
	$init($CheckSignatureAdapter$State);
	if (this->state != $CheckSignatureAdapter$State::CLASS_TYPE) {
		$throwNew($IllegalStateException);
	}
	$set(this, state, $CheckSignatureAdapter$State::END);
	if (this->signatureVisitor != nullptr) {
		$nc(this->signatureVisitor)->visitEnd();
	}
}

void CheckSignatureAdapter::checkClassName($String* name, $String* message) {
	$useLocalCurrentObjectStackCache();
	if (name == nullptr || $nc(name)->length() == 0) {
		$throwNew($IllegalArgumentException, $$str({CheckSignatureAdapter::INVALID, message, " (must not be null or empty)"_s}));
	}
	for (int32_t i = 0; i < $nc(name)->length(); ++i) {
		if (".;[<>:"_s->indexOf((int32_t)name->charAt(i)) != -1) {
			$throwNew($IllegalArgumentException, $$str({CheckSignatureAdapter::INVALID, message, " (must not contain . ; [ < > or :): "_s, name}));
		}
	}
}

void CheckSignatureAdapter::checkIdentifier($String* name, $String* message) {
	$useLocalCurrentObjectStackCache();
	if (name == nullptr || $nc(name)->length() == 0) {
		$throwNew($IllegalArgumentException, $$str({CheckSignatureAdapter::INVALID, message, " (must not be null or empty)"_s}));
	}
	for (int32_t i = 0; i < $nc(name)->length(); ++i) {
		if (".;[/<>:"_s->indexOf((int32_t)name->charAt(i)) != -1) {
			$throwNew($IllegalArgumentException, $$str({CheckSignatureAdapter::INVALID, message, " (must not contain . ; [ / < > or :): "_s, name}));
		}
	}
}

void clinit$CheckSignatureAdapter($Class* class$) {
	$assignStatic(CheckSignatureAdapter::INVALID, "Invalid "_s);
	$init($CheckSignatureAdapter$State);
	$assignStatic(CheckSignatureAdapter::VISIT_FORMAL_TYPE_PARAMETER_STATES, $EnumSet::of($CheckSignatureAdapter$State::EMPTY, $CheckSignatureAdapter$State::FORMAL, $CheckSignatureAdapter$State::BOUND));
	$assignStatic(CheckSignatureAdapter::VISIT_CLASS_BOUND_STATES, $EnumSet::of($CheckSignatureAdapter$State::FORMAL));
	$assignStatic(CheckSignatureAdapter::VISIT_INTERFACE_BOUND_STATES, $EnumSet::of(static_cast<$Enum*>($CheckSignatureAdapter$State::FORMAL), static_cast<$Enum*>($CheckSignatureAdapter$State::BOUND)));
	$assignStatic(CheckSignatureAdapter::VISIT_SUPER_CLASS_STATES, $EnumSet::of($CheckSignatureAdapter$State::EMPTY, $CheckSignatureAdapter$State::FORMAL, $CheckSignatureAdapter$State::BOUND));
	$assignStatic(CheckSignatureAdapter::VISIT_INTERFACE_STATES, $EnumSet::of($CheckSignatureAdapter$State::SUPER));
	$assignStatic(CheckSignatureAdapter::VISIT_PARAMETER_TYPE_STATES, $EnumSet::of($CheckSignatureAdapter$State::EMPTY, $CheckSignatureAdapter$State::FORMAL, $CheckSignatureAdapter$State::BOUND, $CheckSignatureAdapter$State::PARAM));
	$assignStatic(CheckSignatureAdapter::VISIT_RETURN_TYPE_STATES, $EnumSet::of($CheckSignatureAdapter$State::EMPTY, $CheckSignatureAdapter$State::FORMAL, $CheckSignatureAdapter$State::BOUND, $CheckSignatureAdapter$State::PARAM));
	$assignStatic(CheckSignatureAdapter::VISIT_EXCEPTION_TYPE_STATES, $EnumSet::of($CheckSignatureAdapter$State::RETURN));
}

CheckSignatureAdapter::CheckSignatureAdapter() {
}

$Class* CheckSignatureAdapter::load$($String* name, bool initialize) {
	$loadClass(CheckSignatureAdapter, name, initialize, &_CheckSignatureAdapter_ClassInfo_, clinit$CheckSignatureAdapter, allocate$CheckSignatureAdapter);
	return class$;
}

$Class* CheckSignatureAdapter::class$ = nullptr;

					} // util
				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk