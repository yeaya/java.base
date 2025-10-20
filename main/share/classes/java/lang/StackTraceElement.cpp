#include <java/lang/StackTraceElement.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Module.h>
#include <java/lang/ModuleLayer.h>
#include <java/lang/StackFrameInfo.h>
#include <java/lang/StackTraceElement$HashedModules.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Objects.h>
#include <jdk/internal/loader/BuiltinClassLoader.h>
#include <jdk/internal/misc/VM.h>
#include <jcpp.h>

#include <java/lang/invoke/MemberName.h>
#include "StackWalk.h"

using ::java::lang::invoke::MemberName;

#undef BUILTIN_CLASS_LOADER
#undef JDK_NON_UPGRADEABLE_MODULE

using $StackTraceElementArray = $Array<::java::lang::StackTraceElement>;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Module = ::java::lang::Module;
using $ModuleLayer = ::java::lang::ModuleLayer;
using $StackFrameInfo = ::java::lang::StackFrameInfo;
using $StackTraceElement$HashedModules = ::java::lang::StackTraceElement$HashedModules;
using $Objects = ::java::util::Objects;
using $BuiltinClassLoader = ::jdk::internal::loader::BuiltinClassLoader;
using $VM = ::jdk::internal::misc::VM;

namespace java {
	namespace lang {

$FieldInfo _StackTraceElement_FieldInfo_[] = {
	{"declaringClassObject", "Ljava/lang/Class;", "Ljava/lang/Class<*>;", $PRIVATE | $TRANSIENT, $field(StackTraceElement, declaringClassObject)},
	{"classLoaderName", "Ljava/lang/String;", nullptr, $PRIVATE, $field(StackTraceElement, classLoaderName)},
	{"moduleName", "Ljava/lang/String;", nullptr, $PRIVATE, $field(StackTraceElement, moduleName)},
	{"moduleVersion", "Ljava/lang/String;", nullptr, $PRIVATE, $field(StackTraceElement, moduleVersion)},
	{"declaringClass", "Ljava/lang/String;", nullptr, $PRIVATE, $field(StackTraceElement, declaringClass)},
	{"methodName", "Ljava/lang/String;", nullptr, $PRIVATE, $field(StackTraceElement, methodName)},
	{"fileName", "Ljava/lang/String;", nullptr, $PRIVATE, $field(StackTraceElement, fileName)},
	{"lineNumber", "I", nullptr, $PRIVATE, $field(StackTraceElement, lineNumber)},
	{"format", "B", nullptr, $PRIVATE, $field(StackTraceElement, format)},
	{"BUILTIN_CLASS_LOADER", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(StackTraceElement, BUILTIN_CLASS_LOADER)},
	{"JDK_NON_UPGRADEABLE_MODULE", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(StackTraceElement, JDK_NON_UPGRADEABLE_MODULE)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(StackTraceElement, serialVersionUID)},
	{}
};

$MethodInfo _StackTraceElement_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;I)V", nullptr, $PUBLIC, $method(static_cast<void(StackTraceElement::*)($String*,$String*,$String*,int32_t)>(&StackTraceElement::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;I)V", nullptr, $PUBLIC, $method(static_cast<void(StackTraceElement::*)($String*,$String*,$String*,$String*,$String*,$String*,int32_t)>(&StackTraceElement::init$))},
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(StackTraceElement::*)()>(&StackTraceElement::init$))},
	{"computeFormat", "()V", nullptr, $PRIVATE | $SYNCHRONIZED, $method(static_cast<void(StackTraceElement::*)()>(&StackTraceElement::computeFormat))},
	{"dropClassLoaderName", "()Z", nullptr, $PRIVATE, $method(static_cast<bool(StackTraceElement::*)()>(&StackTraceElement::dropClassLoaderName))},
	{"dropModuleVersion", "()Z", nullptr, $PRIVATE, $method(static_cast<bool(StackTraceElement::*)()>(&StackTraceElement::dropModuleVersion))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getClassLoaderName", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(static_cast<$String*(StackTraceElement::*)()>(&StackTraceElement::getClassLoaderName))},
	{"getClassName", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(static_cast<$String*(StackTraceElement::*)()>(&StackTraceElement::getClassName))},
	{"getFileName", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(static_cast<$String*(StackTraceElement::*)()>(&StackTraceElement::getFileName))},
	{"getLineNumber", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(StackTraceElement::*)()>(&StackTraceElement::getLineNumber))},
	{"getMethodName", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(static_cast<$String*(StackTraceElement::*)()>(&StackTraceElement::getMethodName))},
	{"getModuleName", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(static_cast<$String*(StackTraceElement::*)()>(&StackTraceElement::getModuleName))},
	{"getModuleVersion", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(static_cast<$String*(StackTraceElement::*)()>(&StackTraceElement::getModuleVersion))},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"initStackTraceElement", "(Ljava/lang/StackTraceElement;Ljava/lang/StackFrameInfo;)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)(StackTraceElement*,$StackFrameInfo*)>(&StackTraceElement::initStackTraceElement))},
	{"initStackTraceElements", "([Ljava/lang/StackTraceElement;Ljava/lang/Throwable;)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)($StackTraceElementArray*,$Throwable*)>(&StackTraceElement::initStackTraceElements))},
	{"isHashedInJavaBase", "(Ljava/lang/Module;)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)($Module*)>(&StackTraceElement::isHashedInJavaBase))},
	{"isNativeMethod", "()Z", nullptr, $PUBLIC, $method(static_cast<bool(StackTraceElement::*)()>(&StackTraceElement::isNativeMethod))},
	{"of", "(Ljava/lang/Throwable;I)[Ljava/lang/StackTraceElement;", nullptr, $STATIC, $method(static_cast<$StackTraceElementArray*(*)($Throwable*,int32_t)>(&StackTraceElement::of))},
	{"of", "(Ljava/lang/StackFrameInfo;)Ljava/lang/StackTraceElement;", nullptr, $STATIC, $method(static_cast<StackTraceElement*(*)($StackFrameInfo*)>(&StackTraceElement::of))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

#define _METHOD_INDEX_initStackTraceElement 15
#define _METHOD_INDEX_initStackTraceElements 16

$InnerClassInfo _StackTraceElement_InnerClassesInfo_[] = {
	{"java.lang.StackTraceElement$HashedModules", "java.lang.StackTraceElement", "HashedModules", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _StackTraceElement_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"java.lang.StackTraceElement",
	"java.lang.Object",
	"java.io.Serializable",
	_StackTraceElement_FieldInfo_,
	_StackTraceElement_MethodInfo_,
	nullptr,
	nullptr,
	_StackTraceElement_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.lang.StackTraceElement$HashedModules"
};

$Object* allocate$StackTraceElement($Class* clazz) {
	return $of($alloc(StackTraceElement));
}

void StackTraceElement::init$($String* declaringClass, $String* methodName, $String* fileName, int32_t lineNumber) {
	StackTraceElement::init$(nullptr, nullptr, nullptr, declaringClass, methodName, fileName, lineNumber);
}

void StackTraceElement::init$($String* classLoaderName, $String* moduleName, $String* moduleVersion, $String* declaringClass, $String* methodName, $String* fileName, int32_t lineNumber) {
	this->format = (int8_t)0;
	$set(this, classLoaderName, classLoaderName);
	$set(this, moduleName, moduleName);
	$set(this, moduleVersion, moduleVersion);
	$set(this, declaringClass, $cast($String, $Objects::requireNonNull($of(declaringClass), "Declaring class is null"_s)));
	$set(this, methodName, $cast($String, $Objects::requireNonNull($of(methodName), "Method name is null"_s)));
	$set(this, fileName, fileName);
	this->lineNumber = lineNumber;
}

void StackTraceElement::init$() {
	this->format = (int8_t)0;
}

$String* StackTraceElement::getFileName() {
	return this->fileName;
}

int32_t StackTraceElement::getLineNumber() {
	return this->lineNumber;
}

$String* StackTraceElement::getModuleName() {
	return this->moduleName;
}

$String* StackTraceElement::getModuleVersion() {
	return this->moduleVersion;
}

$String* StackTraceElement::getClassLoaderName() {
	return this->classLoaderName;
}

$String* StackTraceElement::getClassName() {
	return this->declaringClass;
}

$String* StackTraceElement::getMethodName() {
	return this->methodName;
}

bool StackTraceElement::isNativeMethod() {
	return this->lineNumber == -2;
}

$String* StackTraceElement::toString() {
	$useLocalCurrentObjectStackCache();
	$var($String, s, ""_s);
	bool var$0 = !dropClassLoaderName() && this->classLoaderName != nullptr;
	if (var$0 && !$nc(this->classLoaderName)->isEmpty()) {
		$plusAssign(s, $$str({this->classLoaderName, "/"_s}));
	}
	if (this->moduleName != nullptr && !$nc(this->moduleName)->isEmpty()) {
		$plusAssign(s, this->moduleName);
		bool var$1 = !dropModuleVersion() && this->moduleVersion != nullptr;
		if (var$1 && !$nc(this->moduleVersion)->isEmpty()) {
			$plusAssign(s, $$str({"@"_s, this->moduleVersion}));
		}
	}
	$assign(s, s->isEmpty() ? this->declaringClass : $str({s, "/"_s, this->declaringClass}));
	return $str({s, "."_s, this->methodName, "("_s, (isNativeMethod() ? "Native Method)"_s : (this->fileName != nullptr && this->lineNumber >= 0 ? $$str({this->fileName, ":"_s, $$str(this->lineNumber), ")"_s}) : (this->fileName != nullptr ? $$str({""_s, this->fileName, ")"_s}) : "Unknown Source)"_s)))});
}

bool StackTraceElement::equals(Object$* obj) {
	if ($equals(obj, this)) {
		return true;
	}
	$var(StackTraceElement, e, nullptr);
	bool var$7 = $instanceOf(StackTraceElement, obj);
	if (var$7) {
		$assign(e, $cast(StackTraceElement, obj));
		var$7 = true;
	}
	bool var$6 = (var$7);
	bool var$5 = var$6 && $nc(e)->lineNumber == this->lineNumber;
	bool var$4 = var$5 && $nc(e->declaringClass)->equals(this->declaringClass);
	bool var$3 = var$4 && $Objects::equals(this->classLoaderName, e->classLoaderName);
	bool var$2 = var$3 && $Objects::equals(this->moduleName, e->moduleName);
	bool var$1 = var$2 && $Objects::equals(this->moduleVersion, e->moduleVersion);
	bool var$0 = var$1 && $Objects::equals(this->methodName, e->methodName);
	return var$0 && $Objects::equals(this->fileName, e->fileName);
}

int32_t StackTraceElement::hashCode() {
	int32_t var$0 = 31 * $nc(this->declaringClass)->hashCode();
	int32_t result = var$0 + $nc(this->methodName)->hashCode();
	result = 31 * result + $Objects::hashCode(this->classLoaderName);
	result = 31 * result + $Objects::hashCode(this->moduleName);
	result = 31 * result + $Objects::hashCode(this->moduleVersion);
	result = 31 * result + $Objects::hashCode(this->fileName);
	result = 31 * result + this->lineNumber;
	return result;
}

void StackTraceElement::computeFormat() {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		{
			$var($Throwable, var$0, nullptr);
			try {
				$Class* cls = this->declaringClassObject;
				$var($ClassLoader, loader, $nc(cls)->getClassLoader0());
				$var($Module, m, cls->getModule());
				int8_t bits = (int8_t)0;
				if ($instanceOf($BuiltinClassLoader, loader)) {
					bits |= StackTraceElement::BUILTIN_CLASS_LOADER;
				}
				if (isHashedInJavaBase(m)) {
					bits |= StackTraceElement::JDK_NON_UPGRADEABLE_MODULE;
				}
				this->format = bits;
			} catch ($Throwable&) {
				$assign(var$0, $catch());
			} /*finally*/ {
				$set(this, declaringClassObject, nullptr);
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	}
}

bool StackTraceElement::dropClassLoaderName() {
	return ((int32_t)(this->format & (uint32_t)(int32_t)StackTraceElement::BUILTIN_CLASS_LOADER)) == StackTraceElement::BUILTIN_CLASS_LOADER;
}

bool StackTraceElement::dropModuleVersion() {
	return ((int32_t)(this->format & (uint32_t)(int32_t)StackTraceElement::JDK_NON_UPGRADEABLE_MODULE)) == StackTraceElement::JDK_NON_UPGRADEABLE_MODULE;
}

bool StackTraceElement::isHashedInJavaBase($Module* m) {
	$init(StackTraceElement);
	if (!$VM::isModuleSystemInited()) {
		return true;
	}
	bool var$0 = $ModuleLayer::boot() == $nc(m)->getLayer();
	return var$0 && $StackTraceElement$HashedModules::contains(m);
}

$StackTraceElementArray* StackTraceElement::of($Throwable* x, int32_t depth) {
	$init(StackTraceElement);
	$useLocalCurrentObjectStackCache();
	$var($StackTraceElementArray, stackTrace, $new($StackTraceElementArray, depth));
	for (int32_t i = 0; i < depth; ++i) {
		stackTrace->set(i, $$new(StackTraceElement));
	}
	initStackTraceElements(stackTrace, x);
	{
		$var($StackTraceElementArray, arr$, stackTrace);
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var(StackTraceElement, ste, arr$->get(i$));
			{
				$nc(ste)->computeFormat();
			}
		}
	}
	return stackTrace;
}

StackTraceElement* StackTraceElement::of($StackFrameInfo* sfi) {
	$init(StackTraceElement);
	$var(StackTraceElement, ste, $new(StackTraceElement));
	initStackTraceElement(ste, sfi);
	ste->computeFormat();
	return ste;
}

void StackTraceElement::initStackTraceElements($StackTraceElementArray* elements, $Throwable* x) {
	StackWalk::initStackTraceElements(elements, x);
}

void StackTraceElement::initStackTraceElement(StackTraceElement* element, $StackFrameInfo* sfi) {
	MemberName* mn = $cast<MemberName>(sfi->memberName);
	if (mn != nullptr) {
		$set(element, methodName, mn->getName());
		$set(element, declaringClassObject, mn->getDeclaringClass());
		if (element->declaringClassObject != nullptr) {
			$set(element, declaringClass, element->declaringClassObject->getName());
			$var(Module, module, element->declaringClassObject->getModule());
			if (module != nullptr) {
				$set(element, moduleName, module->getName());
			}
		}
	}
	if (sfi->ste != nullptr) {
		$set(element, fileName, sfi->ste->fileName);
		element->lineNumber = sfi->ste->lineNumber;
	} else {
		if (element->declaringClass != nullptr) {
			int32_t index = element->declaringClass->lastIndexOf('.');
			$var($String, className, element->declaringClass);
			if (index != -1) {
				$assign(className, element->declaringClass->substring(index + 1));
			}
			index = className->indexOf("_lambda$");
			if (index != -1) {
				$assign(className, className->substring(0, index));
			}
			$set(element, fileName, String::valueOf({ className, ".java"_s }));
		} else {
			$set(element, fileName, $cstr(""));
		}
		element->lineNumber = 0;
	}
}

StackTraceElement::StackTraceElement() {
}

$Class* StackTraceElement::load$($String* name, bool initialize) {
	$loadClass(StackTraceElement, name, initialize, &_StackTraceElement_ClassInfo_, allocate$StackTraceElement);
	return class$;
}

$Class* StackTraceElement::class$ = nullptr;

	} // lang
} // java