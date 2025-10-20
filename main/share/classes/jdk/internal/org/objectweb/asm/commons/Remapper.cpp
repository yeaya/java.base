#include <jdk/internal/org/objectweb/asm/commons/Remapper.h>

#include <java/lang/Array.h>
#include <java/lang/CharSequence.h>
#include <java/lang/Character.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/StringBuilder.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jdk/internal/org/objectweb/asm/ConstantDynamic.h>
#include <jdk/internal/org/objectweb/asm/Handle.h>
#include <jdk/internal/org/objectweb/asm/Opcodes.h>
#include <jdk/internal/org/objectweb/asm/Type.h>
#include <jdk/internal/org/objectweb/asm/commons/SignatureRemapper.h>
#include <jdk/internal/org/objectweb/asm/signature/SignatureReader.h>
#include <jdk/internal/org/objectweb/asm/signature/SignatureVisitor.h>
#include <jdk/internal/org/objectweb/asm/signature/SignatureWriter.h>
#include <jcpp.h>

#undef ARRAY
#undef H_PUTSTATIC
#undef METHOD
#undef OBJECT
#undef VOID_TYPE

using $TypeArray = $Array<::jdk::internal::org::objectweb::asm$::Type>;
using $CharSequence = ::java::lang::CharSequence;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $ConstantDynamic = ::jdk::internal::org::objectweb::asm$::ConstantDynamic;
using $Handle = ::jdk::internal::org::objectweb::asm$::Handle;
using $Opcodes = ::jdk::internal::org::objectweb::asm$::Opcodes;
using $Type = ::jdk::internal::org::objectweb::asm$::Type;
using $SignatureRemapper = ::jdk::internal::org::objectweb::asm$::commons::SignatureRemapper;
using $SignatureReader = ::jdk::internal::org::objectweb::asm$::signature::SignatureReader;
using $SignatureVisitor = ::jdk::internal::org::objectweb::asm$::signature::SignatureVisitor;
using $SignatureWriter = ::jdk::internal::org::objectweb::asm$::signature::SignatureWriter;

namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {
					namespace commons {

$CompoundAttribute _Remapper_MethodAnnotations_createRemappingSignatureAdapter1[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$MethodInfo _Remapper_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Remapper::*)()>(&Remapper::init$))},
	{"createRemappingSignatureAdapter", "(Ljdk/internal/org/objectweb/asm/signature/SignatureVisitor;)Ljdk/internal/org/objectweb/asm/signature/SignatureVisitor;", nullptr, $PROTECTED | $DEPRECATED, nullptr, nullptr, nullptr, _Remapper_MethodAnnotations_createRemappingSignatureAdapter1},
	{"createSignatureRemapper", "(Ljdk/internal/org/objectweb/asm/signature/SignatureVisitor;)Ljdk/internal/org/objectweb/asm/signature/SignatureVisitor;", nullptr, $PROTECTED},
	{"map", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"mapDesc", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"mapFieldName", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"mapInnerClassName", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"mapInvokeDynamicMethodName", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"mapMethodDesc", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"mapMethodName", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"mapModuleName", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"mapPackageName", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"mapRecordComponentName", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"mapSignature", "(Ljava/lang/String;Z)Ljava/lang/String;", nullptr, $PUBLIC},
	{"mapType", "(Ljdk/internal/org/objectweb/asm/Type;)Ljdk/internal/org/objectweb/asm/Type;", nullptr, $PRIVATE, $method(static_cast<$Type*(Remapper::*)($Type*)>(&Remapper::mapType))},
	{"mapType", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"mapTypes", "([Ljava/lang/String;)[Ljava/lang/String;", nullptr, $PUBLIC},
	{"mapValue", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _Remapper_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"jdk.internal.org.objectweb.asm.commons.Remapper",
	"java.lang.Object",
	nullptr,
	nullptr,
	_Remapper_MethodInfo_
};

$Object* allocate$Remapper($Class* clazz) {
	return $of($alloc(Remapper));
}

void Remapper::init$() {
}

$String* Remapper::mapDesc($String* descriptor) {
	$useLocalCurrentObjectStackCache();
	return $nc($(mapType($($Type::getType(descriptor)))))->getDescriptor();
}

$Type* Remapper::mapType($Type* type) {
	$useLocalCurrentObjectStackCache();
	{
		$var($StringBuilder, remappedDescriptor, nullptr)
		$var($String, remappedInternalName, nullptr)
		switch ($nc(type)->getSort()) {
		case $Type::ARRAY:
			{
				$assign(remappedDescriptor, $new($StringBuilder));
				for (int32_t i = 0; i < type->getDimensions(); ++i) {
					$nc(remappedDescriptor)->append(u'[');
				}
				$nc(remappedDescriptor)->append($($nc($(mapType($(type->getElementType()))))->getDescriptor()));
				return $Type::getType($($nc(remappedDescriptor)->toString()));
			}
		case $Type::OBJECT:
			{
				$assign(remappedInternalName, map($(type->getInternalName())));
				return remappedInternalName != nullptr ? $Type::getObjectType(remappedInternalName) : type;
			}
		case $Type::METHOD:
			{
				return $Type::getMethodType($(mapMethodDesc($(type->getDescriptor()))));
			}
		default:
			{
				return type;
			}
		}
	}
}

$String* Remapper::mapType($String* internalName) {
	$useLocalCurrentObjectStackCache();
	if (internalName == nullptr) {
		return nullptr;
	}
	return $nc($(mapType($($Type::getObjectType(internalName)))))->getInternalName();
}

$StringArray* Remapper::mapTypes($StringArray* internalNames) {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, remappedInternalNames, nullptr);
	for (int32_t i = 0; i < $nc(internalNames)->length; ++i) {
		$var($String, internalName, internalNames->get(i));
		$var($String, remappedInternalName, mapType(internalName));
		if (remappedInternalName != nullptr) {
			if (remappedInternalNames == nullptr) {
				$assign(remappedInternalNames, $cast($StringArray, internalNames->clone()));
			}
			$nc(remappedInternalNames)->set(i, remappedInternalName);
		}
	}
	return remappedInternalNames != nullptr ? remappedInternalNames : internalNames;
}

$String* Remapper::mapMethodDesc($String* methodDescriptor) {
	$useLocalCurrentObjectStackCache();
	if ("()V"_s->equals(methodDescriptor)) {
		return methodDescriptor;
	}
	$var($StringBuilder, stringBuilder, $new($StringBuilder, "("_s));
	{
		$var($TypeArray, arr$, $Type::getArgumentTypes(methodDescriptor));
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($Type, argumentType, arr$->get(i$));
			{
				stringBuilder->append($($nc($(mapType(argumentType)))->getDescriptor()));
			}
		}
	}
	$var($Type, returnType, $Type::getReturnType(methodDescriptor));
	if (returnType == $Type::VOID_TYPE) {
		stringBuilder->append(")V"_s);
	} else {
		stringBuilder->append(u')')->append($($nc($(mapType(returnType)))->getDescriptor()));
	}
	return stringBuilder->toString();
}

$Object* Remapper::mapValue(Object$* value) {
	$useLocalCurrentObjectStackCache();
	if ($instanceOf($Type, value)) {
		return $of(mapType($cast($Type, value)));
	}
	if ($instanceOf($Handle, value)) {
		$var($Handle, handle, $cast($Handle, value));
		int32_t var$0 = $nc(handle)->getTag();
		$var($String, var$1, mapType($(handle->getOwner())));
		$var($String, var$3, handle->getOwner());
		$var($String, var$4, handle->getName());
		$var($String, var$2, mapMethodName(var$3, var$4, $(handle->getDesc())));
		$var($String, var$5, handle->getTag() <= $Opcodes::H_PUTSTATIC ? mapDesc($(handle->getDesc())) : mapMethodDesc($(handle->getDesc())));
		return $of($new($Handle, var$0, var$1, var$2, var$5, handle->isInterface()));
	}
	if ($instanceOf($ConstantDynamic, value)) {
		$var($ConstantDynamic, constantDynamic, $cast($ConstantDynamic, value));
		int32_t bootstrapMethodArgumentCount = $nc(constantDynamic)->getBootstrapMethodArgumentCount();
		$var($ObjectArray, remappedBootstrapMethodArguments, $new($ObjectArray, bootstrapMethodArgumentCount));
		for (int32_t i = 0; i < bootstrapMethodArgumentCount; ++i) {
			remappedBootstrapMethodArguments->set(i, $(mapValue($(constantDynamic->getBootstrapMethodArgument(i)))));
		}
		$var($String, descriptor, constantDynamic->getDescriptor());
		$var($String, var$6, mapInvokeDynamicMethodName($(constantDynamic->getName()), descriptor));
		$var($String, var$7, mapDesc(descriptor));
		return $of($new($ConstantDynamic, var$6, var$7, $cast($Handle, $(mapValue($(constantDynamic->getBootstrapMethod())))), remappedBootstrapMethodArguments));
	}
	return $of(value);
}

$String* Remapper::mapSignature($String* signature, bool typeSignature) {
	$useLocalCurrentObjectStackCache();
	if (signature == nullptr) {
		return nullptr;
	}
	$var($SignatureReader, signatureReader, $new($SignatureReader, signature));
	$var($SignatureWriter, signatureWriter, $new($SignatureWriter));
	$var($SignatureVisitor, signatureRemapper, createSignatureRemapper(signatureWriter));
	if (typeSignature) {
		signatureReader->acceptType(signatureRemapper);
	} else {
		signatureReader->accept(signatureRemapper);
	}
	return signatureWriter->toString();
}

$SignatureVisitor* Remapper::createRemappingSignatureAdapter($SignatureVisitor* signatureVisitor) {
	return createSignatureRemapper(signatureVisitor);
}

$SignatureVisitor* Remapper::createSignatureRemapper($SignatureVisitor* signatureVisitor) {
	return $new($SignatureRemapper, signatureVisitor, this);
}

$String* Remapper::mapInnerClassName($String* name, $String* ownerName, $String* innerName) {
	$var($String, remappedInnerName, this->mapType(name));
	if ($nc(remappedInnerName)->contains("$"_s)) {
		int32_t index = remappedInnerName->lastIndexOf((int32_t)u'$') + 1;
		while (true) {
			bool var$0 = index < remappedInnerName->length();
			if (!(var$0 && $Character::isDigit(remappedInnerName->charAt(index)))) {
				break;
			}
			{
				++index;
			}
		}
		return remappedInnerName->substring(index);
	} else {
		return innerName;
	}
}

$String* Remapper::mapMethodName($String* owner, $String* name, $String* descriptor) {
	return name;
}

$String* Remapper::mapInvokeDynamicMethodName($String* name, $String* descriptor) {
	return name;
}

$String* Remapper::mapRecordComponentName($String* owner, $String* name, $String* descriptor) {
	return name;
}

$String* Remapper::mapFieldName($String* owner, $String* name, $String* descriptor) {
	return name;
}

$String* Remapper::mapPackageName($String* name) {
	return name;
}

$String* Remapper::mapModuleName($String* name) {
	return name;
}

$String* Remapper::map($String* internalName) {
	return internalName;
}

Remapper::Remapper() {
}

$Class* Remapper::load$($String* name, bool initialize) {
	$loadClass(Remapper, name, initialize, &_Remapper_ClassInfo_, allocate$Remapper);
	return class$;
}

$Class* Remapper::class$ = nullptr;

					} // commons
				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk