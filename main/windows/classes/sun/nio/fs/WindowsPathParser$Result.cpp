#include <sun/nio/fs/WindowsPathParser$Result.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/nio/fs/WindowsPathParser.h>
#include <sun/nio/fs/WindowsPathType.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $WindowsPathParser = ::sun::nio::fs::WindowsPathParser;
using $WindowsPathType = ::sun::nio::fs::WindowsPathType;

namespace sun {
	namespace nio {
		namespace fs {

$FieldInfo _WindowsPathParser$Result_FieldInfo_[] = {
	{"type", "Lsun/nio/fs/WindowsPathType;", nullptr, $PRIVATE | $FINAL, $field(WindowsPathParser$Result, type$)},
	{"root", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(WindowsPathParser$Result, root$)},
	{"path", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(WindowsPathParser$Result, path$)},
	{}
};

$MethodInfo _WindowsPathParser$Result_MethodInfo_[] = {
	{"<init>", "(Lsun/nio/fs/WindowsPathType;Ljava/lang/String;Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(WindowsPathParser$Result::*)($WindowsPathType*,$String*,$String*)>(&WindowsPathParser$Result::init$))},
	{"path", "()Ljava/lang/String;", nullptr, 0},
	{"root", "()Ljava/lang/String;", nullptr, 0},
	{"type", "()Lsun/nio/fs/WindowsPathType;", nullptr, 0},
	{}
};

$InnerClassInfo _WindowsPathParser$Result_InnerClassesInfo_[] = {
	{"sun.nio.fs.WindowsPathParser$Result", "sun.nio.fs.WindowsPathParser", "Result", $STATIC},
	{}
};

$ClassInfo _WindowsPathParser$Result_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.fs.WindowsPathParser$Result",
	"java.lang.Object",
	nullptr,
	_WindowsPathParser$Result_FieldInfo_,
	_WindowsPathParser$Result_MethodInfo_,
	nullptr,
	nullptr,
	_WindowsPathParser$Result_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.fs.WindowsPathParser"
};

$Object* allocate$WindowsPathParser$Result($Class* clazz) {
	return $of($alloc(WindowsPathParser$Result));
}

void WindowsPathParser$Result::init$($WindowsPathType* type, $String* root, $String* path) {
	$set(this, type$, type);
	$set(this, root$, root);
	$set(this, path$, path);
}

$WindowsPathType* WindowsPathParser$Result::type() {
	return this->type$;
}

$String* WindowsPathParser$Result::root() {
	return this->root$;
}

$String* WindowsPathParser$Result::path() {
	return this->path$;
}

WindowsPathParser$Result::WindowsPathParser$Result() {
}

$Class* WindowsPathParser$Result::load$($String* name, bool initialize) {
	$loadClass(WindowsPathParser$Result, name, initialize, &_WindowsPathParser$Result_ClassInfo_, allocate$WindowsPathParser$Result);
	return class$;
}

$Class* WindowsPathParser$Result::class$ = nullptr;

		} // fs
	} // nio
} // sun