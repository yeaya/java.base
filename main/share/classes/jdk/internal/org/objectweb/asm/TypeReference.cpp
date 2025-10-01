#include <jdk/internal/org/objectweb/asm/TypeReference.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jdk/internal/org/objectweb/asm/ByteVector.h>
#include <jcpp.h>

#undef CAST
#undef RESOURCE_VARIABLE
#undef INSTANCEOF
#undef NEW
#undef LOCAL_VARIABLE
#undef METHOD_REFERENCE
#undef FIELD
#undef METHOD_RECEIVER
#undef METHOD_RETURN
#undef CONSTRUCTOR_INVOCATION_TYPE_ARGUMENT
#undef CLASS_EXTENDS
#undef CLASS_TYPE_PARAMETER_BOUND
#undef CONSTRUCTOR_REFERENCE_TYPE_ARGUMENT
#undef CONSTRUCTOR_REFERENCE
#undef METHOD_TYPE_PARAMETER
#undef METHOD_REFERENCE_TYPE_ARGUMENT
#undef THROWS
#undef METHOD_FORMAL_PARAMETER
#undef CLASS_TYPE_PARAMETER
#undef EXCEPTION_PARAMETER
#undef METHOD_INVOCATION_TYPE_ARGUMENT
#undef METHOD_TYPE_PARAMETER_BOUND

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteVector = ::jdk::internal::org::objectweb::asm$::ByteVector;

namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {

$FieldInfo _TypeReference_FieldInfo_[] = {
	{"CLASS_TYPE_PARAMETER", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TypeReference, CLASS_TYPE_PARAMETER)},
	{"METHOD_TYPE_PARAMETER", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TypeReference, METHOD_TYPE_PARAMETER)},
	{"CLASS_EXTENDS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TypeReference, CLASS_EXTENDS)},
	{"CLASS_TYPE_PARAMETER_BOUND", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TypeReference, CLASS_TYPE_PARAMETER_BOUND)},
	{"METHOD_TYPE_PARAMETER_BOUND", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TypeReference, METHOD_TYPE_PARAMETER_BOUND)},
	{"FIELD", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TypeReference, FIELD)},
	{"METHOD_RETURN", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TypeReference, METHOD_RETURN)},
	{"METHOD_RECEIVER", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TypeReference, METHOD_RECEIVER)},
	{"METHOD_FORMAL_PARAMETER", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TypeReference, METHOD_FORMAL_PARAMETER)},
	{"THROWS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TypeReference, THROWS)},
	{"LOCAL_VARIABLE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TypeReference, LOCAL_VARIABLE)},
	{"RESOURCE_VARIABLE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TypeReference, RESOURCE_VARIABLE)},
	{"EXCEPTION_PARAMETER", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TypeReference, EXCEPTION_PARAMETER)},
	{"INSTANCEOF", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TypeReference, INSTANCEOF)},
	{"NEW", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TypeReference, NEW)},
	{"CONSTRUCTOR_REFERENCE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TypeReference, CONSTRUCTOR_REFERENCE)},
	{"METHOD_REFERENCE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TypeReference, METHOD_REFERENCE)},
	{"CAST", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TypeReference, CAST)},
	{"CONSTRUCTOR_INVOCATION_TYPE_ARGUMENT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TypeReference, CONSTRUCTOR_INVOCATION_TYPE_ARGUMENT)},
	{"METHOD_INVOCATION_TYPE_ARGUMENT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TypeReference, METHOD_INVOCATION_TYPE_ARGUMENT)},
	{"CONSTRUCTOR_REFERENCE_TYPE_ARGUMENT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TypeReference, CONSTRUCTOR_REFERENCE_TYPE_ARGUMENT)},
	{"METHOD_REFERENCE_TYPE_ARGUMENT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TypeReference, METHOD_REFERENCE_TYPE_ARGUMENT)},
	{"targetTypeAndInfo", "I", nullptr, $PRIVATE | $FINAL, $field(TypeReference, targetTypeAndInfo)},
	{}
};

$MethodInfo _TypeReference_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(TypeReference::*)(int32_t)>(&TypeReference::init$))},
	{"getExceptionIndex", "()I", nullptr, $PUBLIC},
	{"getFormalParameterIndex", "()I", nullptr, $PUBLIC},
	{"getSort", "()I", nullptr, $PUBLIC},
	{"getSuperTypeIndex", "()I", nullptr, $PUBLIC},
	{"getTryCatchBlockIndex", "()I", nullptr, $PUBLIC},
	{"getTypeArgumentIndex", "()I", nullptr, $PUBLIC},
	{"getTypeParameterBoundIndex", "()I", nullptr, $PUBLIC},
	{"getTypeParameterIndex", "()I", nullptr, $PUBLIC},
	{"getValue", "()I", nullptr, $PUBLIC},
	{"newExceptionReference", "(I)Ljdk/internal/org/objectweb/asm/TypeReference;", nullptr, $PUBLIC | $STATIC, $method(static_cast<TypeReference*(*)(int32_t)>(&TypeReference::newExceptionReference))},
	{"newFormalParameterReference", "(I)Ljdk/internal/org/objectweb/asm/TypeReference;", nullptr, $PUBLIC | $STATIC, $method(static_cast<TypeReference*(*)(int32_t)>(&TypeReference::newFormalParameterReference))},
	{"newSuperTypeReference", "(I)Ljdk/internal/org/objectweb/asm/TypeReference;", nullptr, $PUBLIC | $STATIC, $method(static_cast<TypeReference*(*)(int32_t)>(&TypeReference::newSuperTypeReference))},
	{"newTryCatchReference", "(I)Ljdk/internal/org/objectweb/asm/TypeReference;", nullptr, $PUBLIC | $STATIC, $method(static_cast<TypeReference*(*)(int32_t)>(&TypeReference::newTryCatchReference))},
	{"newTypeArgumentReference", "(II)Ljdk/internal/org/objectweb/asm/TypeReference;", nullptr, $PUBLIC | $STATIC, $method(static_cast<TypeReference*(*)(int32_t,int32_t)>(&TypeReference::newTypeArgumentReference))},
	{"newTypeParameterBoundReference", "(III)Ljdk/internal/org/objectweb/asm/TypeReference;", nullptr, $PUBLIC | $STATIC, $method(static_cast<TypeReference*(*)(int32_t,int32_t,int32_t)>(&TypeReference::newTypeParameterBoundReference))},
	{"newTypeParameterReference", "(II)Ljdk/internal/org/objectweb/asm/TypeReference;", nullptr, $PUBLIC | $STATIC, $method(static_cast<TypeReference*(*)(int32_t,int32_t)>(&TypeReference::newTypeParameterReference))},
	{"newTypeReference", "(I)Ljdk/internal/org/objectweb/asm/TypeReference;", nullptr, $PUBLIC | $STATIC, $method(static_cast<TypeReference*(*)(int32_t)>(&TypeReference::newTypeReference))},
	{"putTarget", "(ILjdk/internal/org/objectweb/asm/ByteVector;)V", nullptr, $STATIC, $method(static_cast<void(*)(int32_t,$ByteVector*)>(&TypeReference::putTarget))},
	{}
};

$ClassInfo _TypeReference_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"jdk.internal.org.objectweb.asm.TypeReference",
	"java.lang.Object",
	nullptr,
	_TypeReference_FieldInfo_,
	_TypeReference_MethodInfo_
};

$Object* allocate$TypeReference($Class* clazz) {
	return $of($alloc(TypeReference));
}

void TypeReference::init$(int32_t typeRef) {
	this->targetTypeAndInfo = typeRef;
}

TypeReference* TypeReference::newTypeReference(int32_t sort) {
	return $new(TypeReference, sort << 24);
}

TypeReference* TypeReference::newTypeParameterReference(int32_t sort, int32_t paramIndex) {
	return $new(TypeReference, (sort << 24) | (paramIndex << 16));
}

TypeReference* TypeReference::newTypeParameterBoundReference(int32_t sort, int32_t paramIndex, int32_t boundIndex) {
	return $new(TypeReference, ((sort << 24) | (paramIndex << 16)) | (boundIndex << 8));
}

TypeReference* TypeReference::newSuperTypeReference(int32_t itfIndex) {
	return $new(TypeReference, (TypeReference::CLASS_EXTENDS << 24) | (((int32_t)(itfIndex & (uint32_t)0x0000FFFF)) << 8));
}

TypeReference* TypeReference::newFormalParameterReference(int32_t paramIndex) {
	return $new(TypeReference, (TypeReference::METHOD_FORMAL_PARAMETER << 24) | (paramIndex << 16));
}

TypeReference* TypeReference::newExceptionReference(int32_t exceptionIndex) {
	return $new(TypeReference, (TypeReference::THROWS << 24) | (exceptionIndex << 8));
}

TypeReference* TypeReference::newTryCatchReference(int32_t tryCatchBlockIndex) {
	return $new(TypeReference, (TypeReference::EXCEPTION_PARAMETER << 24) | (tryCatchBlockIndex << 8));
}

TypeReference* TypeReference::newTypeArgumentReference(int32_t sort, int32_t argIndex) {
	return $new(TypeReference, (sort << 24) | argIndex);
}

int32_t TypeReference::getSort() {
	return (int32_t)((uint32_t)this->targetTypeAndInfo >> 24);
}

int32_t TypeReference::getTypeParameterIndex() {
	return ((int32_t)(this->targetTypeAndInfo & (uint32_t)0x00FF0000)) >> 16;
}

int32_t TypeReference::getTypeParameterBoundIndex() {
	return ((int32_t)(this->targetTypeAndInfo & (uint32_t)0x0000FF00)) >> 8;
}

int32_t TypeReference::getSuperTypeIndex() {
	return (int16_t)(((int32_t)(this->targetTypeAndInfo & (uint32_t)0x00FFFF00)) >> 8);
}

int32_t TypeReference::getFormalParameterIndex() {
	return ((int32_t)(this->targetTypeAndInfo & (uint32_t)0x00FF0000)) >> 16;
}

int32_t TypeReference::getExceptionIndex() {
	return ((int32_t)(this->targetTypeAndInfo & (uint32_t)0x00FFFF00)) >> 8;
}

int32_t TypeReference::getTryCatchBlockIndex() {
	return ((int32_t)(this->targetTypeAndInfo & (uint32_t)0x00FFFF00)) >> 8;
}

int32_t TypeReference::getTypeArgumentIndex() {
	return (int32_t)(this->targetTypeAndInfo & (uint32_t)255);
}

int32_t TypeReference::getValue() {
	return this->targetTypeAndInfo;
}

void TypeReference::putTarget(int32_t targetTypeAndInfo, $ByteVector* output) {
	switch ((int32_t)((uint32_t)targetTypeAndInfo >> 24)) {
	case TypeReference::CLASS_TYPE_PARAMETER:
		{}
	case TypeReference::METHOD_TYPE_PARAMETER:
		{}
	case TypeReference::METHOD_FORMAL_PARAMETER:
		{
			$nc(output)->putShort((int32_t)((uint32_t)targetTypeAndInfo >> 16));
			break;
		}
	case TypeReference::FIELD:
		{}
	case TypeReference::METHOD_RETURN:
		{}
	case TypeReference::METHOD_RECEIVER:
		{
			$nc(output)->putByte((int32_t)((uint32_t)targetTypeAndInfo >> 24));
			break;
		}
	case TypeReference::CAST:
		{}
	case TypeReference::CONSTRUCTOR_INVOCATION_TYPE_ARGUMENT:
		{}
	case TypeReference::METHOD_INVOCATION_TYPE_ARGUMENT:
		{}
	case TypeReference::CONSTRUCTOR_REFERENCE_TYPE_ARGUMENT:
		{}
	case TypeReference::METHOD_REFERENCE_TYPE_ARGUMENT:
		{
			$nc(output)->putInt(targetTypeAndInfo);
			break;
		}
	case TypeReference::CLASS_EXTENDS:
		{}
	case TypeReference::CLASS_TYPE_PARAMETER_BOUND:
		{}
	case TypeReference::METHOD_TYPE_PARAMETER_BOUND:
		{}
	case TypeReference::THROWS:
		{}
	case TypeReference::EXCEPTION_PARAMETER:
		{}
	case TypeReference::INSTANCEOF:
		{}
	case TypeReference::NEW:
		{}
	case TypeReference::CONSTRUCTOR_REFERENCE:
		{}
	case TypeReference::METHOD_REFERENCE:
		{
			$nc(output)->put12((int32_t)((uint32_t)targetTypeAndInfo >> 24), ((int32_t)(targetTypeAndInfo & (uint32_t)0x00FFFF00)) >> 8);
			break;
		}
	default:
		{
			$throwNew($IllegalArgumentException);
		}
	}
}

TypeReference::TypeReference() {
}

$Class* TypeReference::load$($String* name, bool initialize) {
	$loadClass(TypeReference, name, initialize, &_TypeReference_ClassInfo_, allocate$TypeReference);
	return class$;
}

$Class* TypeReference::class$ = nullptr;

				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk