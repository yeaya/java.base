#include <com/app/Utils$1.h>

#include <com/app/Utils.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Module.h>
#include <java/lang/StackTraceElement.h>
#include <java/lang/String.h>
#include <java/lang/module/ModuleDescriptor$Version.h>
#include <java/lang/module/ModuleDescriptor.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Optional.h>
#include <jcpp.h>

using $Utils = ::com::app::Utils;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Module = ::java::lang::Module;
using $StackTraceElement = ::java::lang::StackTraceElement;
using $StackWalker$StackFrame = ::java::lang::StackWalker$StackFrame;
using $ModuleDescriptor = ::java::lang::module::ModuleDescriptor;
using $ModuleDescriptor$Version = ::java::lang::module::ModuleDescriptor$Version;
using $Optional = ::java::util::Optional;

namespace com {
	namespace app {

$FieldInfo _Utils$1_FieldInfo_[] = {
	{"val$filename", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(Utils$1, val$filename)},
	{"val$methodname", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(Utils$1, val$methodname)},
	{"val$c", "Ljava/lang/Class;", nullptr, $FINAL | $SYNTHETIC, $field(Utils$1, val$c)},
	{}
};

$MethodInfo _Utils$1_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Class;Ljava/lang/String;Ljava/lang/String;)V", "()V", 0, $method(static_cast<void(Utils$1::*)($Class*,$String*,$String*)>(&Utils$1::init$))},
	{"getByteCodeIndex", "()I", nullptr, $PUBLIC},
	{"getClassLoaderName", "(Ljava/lang/Class;)Ljava/lang/String;", "(Ljava/lang/Class<*>;)Ljava/lang/String;", $PRIVATE, $method(static_cast<$String*(Utils$1::*)($Class*)>(&Utils$1::getClassLoaderName))},
	{"getClassName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getDeclaringClass", "()Ljava/lang/Class;", "()Ljava/lang/Class<*>;", $PUBLIC},
	{"getFileName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getLineNumber", "()I", nullptr, $PUBLIC},
	{"getMethodName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"isNativeMethod", "()Z", nullptr, $PUBLIC},
	{"toStackTraceElement", "()Ljava/lang/StackTraceElement;", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Utils$1_EnclosingMethodInfo_ = {
	"com.app.Utils",
	"makeStackFrame",
	"(Ljava/lang/Class;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/StackWalker$StackFrame;"
};

$InnerClassInfo _Utils$1_InnerClassesInfo_[] = {
	{"com.app.Utils$1", nullptr, nullptr, 0},
	{"java.lang.StackWalker$StackFrame", "java.lang.StackWalker", "StackFrame", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Utils$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.app.Utils$1",
	"java.lang.Object",
	"java.lang.StackWalker$StackFrame",
	_Utils$1_FieldInfo_,
	_Utils$1_MethodInfo_,
	nullptr,
	&_Utils$1_EnclosingMethodInfo_,
	_Utils$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.app.Utils"
};

$Object* allocate$Utils$1($Class* clazz) {
	return $of($alloc(Utils$1));
}

void Utils$1::init$($Class* val$c, $String* val$methodname, $String* val$filename) {
	$set(this, val$c, val$c);
	$set(this, val$methodname, val$methodname);
	$set(this, val$filename, val$filename);
}

$String* Utils$1::getClassName() {
	return $nc(this->val$c)->getName();
}

$String* Utils$1::getMethodName() {
	return this->val$methodname;
}

$Class* Utils$1::getDeclaringClass() {
	return this->val$c;
}

int32_t Utils$1::getByteCodeIndex() {
	return 0;
}

$String* Utils$1::getFileName() {
	return this->val$filename;
}

int32_t Utils$1::getLineNumber() {
	return 0;
}

bool Utils$1::isNativeMethod() {
	return false;
}

$StackTraceElement* Utils$1::toStackTraceElement() {
	return nullptr;
}

$String* Utils$1::getClassLoaderName($Class* c) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($ClassLoader, loader, $nc(c)->getClassLoader());
	$var($String, name, ""_s);
	if (loader == nullptr) {
		$assign(name, "boot"_s);
	} else if ($nc(loader)->getName() != nullptr) {
		$assign(name, loader->getName());
	}
	return name;
}

$String* Utils$1::toString() {
	$useLocalCurrentObjectStackCache();
	$var($String, mid, getClassLoaderName(this->val$c));
	$var($Module, module, $nc(this->val$c)->getModule());
	if ($nc(module)->isNamed()) {
		$var($ModuleDescriptor, md, module->getDescriptor());
		$assign(mid, $nc(md)->name());
		if ($nc($(md->version()))->isPresent()) {
			$plusAssign(mid, $$str({"@"_s, $($nc(($cast($ModuleDescriptor$Version, $($nc($(md->version()))->get()))))->toString())}));
		}
		$plusAssign(mid, "/"_s);
	}
	$var($String, fileName, getFileName());
	int32_t lineNumber = getLineNumber();
	$var($String, sourceinfo, "Unknown Source"_s);
	if (isNativeMethod()) {
		$assign(sourceinfo, "Native Method"_s);
	} else if (fileName != nullptr && lineNumber >= 0) {
		$assign(sourceinfo, $str({fileName, ":"_s, $$str(lineNumber)}));
	}
	return $String::format("%s/%s.%s(%s)"_s, $$new($ObjectArray, {
		$of(mid),
		$($of(getClassName())),
		$($of(getMethodName())),
		$of(sourceinfo)
	}));
}

Utils$1::Utils$1() {
}

$Class* Utils$1::load$($String* name, bool initialize) {
	$loadClass(Utils$1, name, initialize, &_Utils$1_ClassInfo_, allocate$Utils$1);
	return class$;
}

$Class* Utils$1::class$ = nullptr;

	} // app
} // com