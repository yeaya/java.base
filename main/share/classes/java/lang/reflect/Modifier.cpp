#include <java/lang/reflect/Modifier.h>

#include <java/lang/AssertionError.h>
#include <java/lang/CharSequence.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/StringJoiner.h>
#include <jcpp.h>

#undef VOLATILE
#undef METHOD_MODIFIERS
#undef VARARGS
#undef NATIVE
#undef INTERFACE_MODIFIERS
#undef PARAMETER_MODIFIERS
#undef BRIDGE
#undef ABSTRACT
#undef STATIC
#undef CONSTRUCTOR_MODIFIERS
#undef INTERFACE
#undef ANNOTATION
#undef ACCESS_MODIFIERS
#undef PROTECTED
#undef SYNCHRONIZED
#undef STRICT
#undef ENUM
#undef FIELD_MODIFIERS
#undef CLASS_MODIFIERS
#undef SYNTHETIC
#undef FINAL
#undef PRIVATE
#undef PUBLIC
#undef MANDATED
#undef TRANSIENT

using $AssertionError = ::java::lang::AssertionError;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $StringJoiner = ::java::util::StringJoiner;

namespace java {
	namespace lang {
		namespace reflect {

$FieldInfo _Modifier_FieldInfo_[] = {
	{"PUBLIC", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Modifier, PUBLIC)},
	{"PRIVATE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Modifier, PRIVATE)},
	{"PROTECTED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Modifier, PROTECTED)},
	{"STATIC", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Modifier, STATIC)},
	{"FINAL", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Modifier, FINAL)},
	{"SYNCHRONIZED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Modifier, SYNCHRONIZED)},
	{"VOLATILE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Modifier, VOLATILE)},
	{"TRANSIENT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Modifier, TRANSIENT)},
	{"NATIVE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Modifier, NATIVE)},
	{"INTERFACE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Modifier, INTERFACE)},
	{"ABSTRACT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Modifier, ABSTRACT)},
	{"STRICT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Modifier, STRICT)},
	{"BRIDGE", "I", nullptr, $STATIC | $FINAL, $constField(Modifier, BRIDGE)},
	{"VARARGS", "I", nullptr, $STATIC | $FINAL, $constField(Modifier, VARARGS)},
	{"SYNTHETIC", "I", nullptr, $STATIC | $FINAL, $constField(Modifier, SYNTHETIC)},
	{"ANNOTATION", "I", nullptr, $STATIC | $FINAL, $constField(Modifier, ANNOTATION)},
	{"ENUM", "I", nullptr, $STATIC | $FINAL, $constField(Modifier, ENUM)},
	{"MANDATED", "I", nullptr, $STATIC | $FINAL, $constField(Modifier, MANDATED)},
	{"CLASS_MODIFIERS", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Modifier, CLASS_MODIFIERS)},
	{"INTERFACE_MODIFIERS", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Modifier, INTERFACE_MODIFIERS)},
	{"CONSTRUCTOR_MODIFIERS", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Modifier, CONSTRUCTOR_MODIFIERS)},
	{"METHOD_MODIFIERS", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Modifier, METHOD_MODIFIERS)},
	{"FIELD_MODIFIERS", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Modifier, FIELD_MODIFIERS)},
	{"PARAMETER_MODIFIERS", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Modifier, PARAMETER_MODIFIERS)},
	{"ACCESS_MODIFIERS", "I", nullptr, $STATIC | $FINAL, $constField(Modifier, ACCESS_MODIFIERS)},
	{}
};

$MethodInfo _Modifier_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(Modifier::*)()>(&Modifier::init$))},
	{"classModifiers", "()I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)()>(&Modifier::classModifiers))},
	{"constructorModifiers", "()I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)()>(&Modifier::constructorModifiers))},
	{"fieldModifiers", "()I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)()>(&Modifier::fieldModifiers))},
	{"interfaceModifiers", "()I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)()>(&Modifier::interfaceModifiers))},
	{"isAbstract", "(I)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)(int32_t)>(&Modifier::isAbstract))},
	{"isFinal", "(I)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)(int32_t)>(&Modifier::isFinal))},
	{"isInterface", "(I)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)(int32_t)>(&Modifier::isInterface))},
	{"isMandated", "(I)Z", nullptr, $STATIC, $method(static_cast<bool(*)(int32_t)>(&Modifier::isMandated))},
	{"isNative", "(I)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)(int32_t)>(&Modifier::isNative))},
	{"isPrivate", "(I)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)(int32_t)>(&Modifier::isPrivate))},
	{"isProtected", "(I)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)(int32_t)>(&Modifier::isProtected))},
	{"isPublic", "(I)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)(int32_t)>(&Modifier::isPublic))},
	{"isStatic", "(I)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)(int32_t)>(&Modifier::isStatic))},
	{"isStrict", "(I)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)(int32_t)>(&Modifier::isStrict))},
	{"isSynchronized", "(I)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)(int32_t)>(&Modifier::isSynchronized))},
	{"isSynthetic", "(I)Z", nullptr, $STATIC, $method(static_cast<bool(*)(int32_t)>(&Modifier::isSynthetic))},
	{"isTransient", "(I)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)(int32_t)>(&Modifier::isTransient))},
	{"isVolatile", "(I)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)(int32_t)>(&Modifier::isVolatile))},
	{"methodModifiers", "()I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)()>(&Modifier::methodModifiers))},
	{"parameterModifiers", "()I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)()>(&Modifier::parameterModifiers))},
	{"toString", "(I)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)(int32_t)>(&Modifier::toString))},
	{}
};

$ClassInfo _Modifier_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.lang.reflect.Modifier",
	"java.lang.Object",
	nullptr,
	_Modifier_FieldInfo_,
	_Modifier_MethodInfo_
};

$Object* allocate$Modifier($Class* clazz) {
	return $of($alloc(Modifier));
}

void Modifier::init$() {
	$throwNew($AssertionError);
}

bool Modifier::isPublic(int32_t mod) {
	return ((int32_t)(mod & (uint32_t)Modifier::PUBLIC)) != 0;
}

bool Modifier::isPrivate(int32_t mod) {
	return ((int32_t)(mod & (uint32_t)Modifier::PRIVATE)) != 0;
}

bool Modifier::isProtected(int32_t mod) {
	return ((int32_t)(mod & (uint32_t)Modifier::PROTECTED)) != 0;
}

bool Modifier::isStatic(int32_t mod) {
	return ((int32_t)(mod & (uint32_t)Modifier::STATIC)) != 0;
}

bool Modifier::isFinal(int32_t mod) {
	return ((int32_t)(mod & (uint32_t)Modifier::FINAL)) != 0;
}

bool Modifier::isSynchronized(int32_t mod) {
	return ((int32_t)(mod & (uint32_t)Modifier::SYNCHRONIZED)) != 0;
}

bool Modifier::isVolatile(int32_t mod) {
	return ((int32_t)(mod & (uint32_t)Modifier::VOLATILE)) != 0;
}

bool Modifier::isTransient(int32_t mod) {
	return ((int32_t)(mod & (uint32_t)Modifier::TRANSIENT)) != 0;
}

bool Modifier::isNative(int32_t mod) {
	return ((int32_t)(mod & (uint32_t)Modifier::NATIVE)) != 0;
}

bool Modifier::isInterface(int32_t mod) {
	return ((int32_t)(mod & (uint32_t)Modifier::INTERFACE)) != 0;
}

bool Modifier::isAbstract(int32_t mod) {
	return ((int32_t)(mod & (uint32_t)Modifier::ABSTRACT)) != 0;
}

bool Modifier::isStrict(int32_t mod) {
	return ((int32_t)(mod & (uint32_t)Modifier::STRICT)) != 0;
}

$String* Modifier::toString(int32_t mod) {
	$var($StringJoiner, sj, $new($StringJoiner, " "_s));
	if (((int32_t)(mod & (uint32_t)Modifier::PUBLIC)) != 0) {
		sj->add("public"_s);
	}
	if (((int32_t)(mod & (uint32_t)Modifier::PROTECTED)) != 0) {
		sj->add("protected"_s);
	}
	if (((int32_t)(mod & (uint32_t)Modifier::PRIVATE)) != 0) {
		sj->add("private"_s);
	}
	if (((int32_t)(mod & (uint32_t)Modifier::ABSTRACT)) != 0) {
		sj->add("abstract"_s);
	}
	if (((int32_t)(mod & (uint32_t)Modifier::STATIC)) != 0) {
		sj->add("static"_s);
	}
	if (((int32_t)(mod & (uint32_t)Modifier::FINAL)) != 0) {
		sj->add("final"_s);
	}
	if (((int32_t)(mod & (uint32_t)Modifier::TRANSIENT)) != 0) {
		sj->add("transient"_s);
	}
	if (((int32_t)(mod & (uint32_t)Modifier::VOLATILE)) != 0) {
		sj->add("volatile"_s);
	}
	if (((int32_t)(mod & (uint32_t)Modifier::SYNCHRONIZED)) != 0) {
		sj->add("synchronized"_s);
	}
	if (((int32_t)(mod & (uint32_t)Modifier::NATIVE)) != 0) {
		sj->add("native"_s);
	}
	if (((int32_t)(mod & (uint32_t)Modifier::STRICT)) != 0) {
		sj->add("strictfp"_s);
	}
	if (((int32_t)(mod & (uint32_t)Modifier::INTERFACE)) != 0) {
		sj->add("interface"_s);
	}
	return sj->toString();
}

bool Modifier::isSynthetic(int32_t mod) {
	return ((int32_t)(mod & (uint32_t)Modifier::SYNTHETIC)) != 0;
}

bool Modifier::isMandated(int32_t mod) {
	return ((int32_t)(mod & (uint32_t)Modifier::MANDATED)) != 0;
}

int32_t Modifier::classModifiers() {
	return Modifier::CLASS_MODIFIERS;
}

int32_t Modifier::interfaceModifiers() {
	return Modifier::INTERFACE_MODIFIERS;
}

int32_t Modifier::constructorModifiers() {
	return Modifier::CONSTRUCTOR_MODIFIERS;
}

int32_t Modifier::methodModifiers() {
	return Modifier::METHOD_MODIFIERS;
}

int32_t Modifier::fieldModifiers() {
	return Modifier::FIELD_MODIFIERS;
}

int32_t Modifier::parameterModifiers() {
	return Modifier::PARAMETER_MODIFIERS;
}

Modifier::Modifier() {
}

$Class* Modifier::load$($String* name, bool initialize) {
	$loadClass(Modifier, name, initialize, &_Modifier_ClassInfo_, allocate$Modifier);
	return class$;
}

$Class* Modifier::class$ = nullptr;

		} // reflect
	} // lang
} // java