#include <sun/nio/fs/WindowsPathParser$Result.h>
#include <sun/nio/fs/WindowsPathParser.h>
#include <sun/nio/fs/WindowsPathType.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $WindowsPathType = ::sun::nio::fs::WindowsPathType;

namespace sun {
	namespace nio {
		namespace fs {

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
	$FieldInfo fieldInfos$$[] = {
		{"type", "Lsun/nio/fs/WindowsPathType;", nullptr, $PRIVATE | $FINAL, $field(WindowsPathParser$Result, type$)},
		{"root", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(WindowsPathParser$Result, root$)},
		{"path", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(WindowsPathParser$Result, path$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/nio/fs/WindowsPathType;Ljava/lang/String;Ljava/lang/String;)V", nullptr, 0, $method(WindowsPathParser$Result, init$, void, $WindowsPathType*, $String*, $String*)},
		{"path", "()Ljava/lang/String;", nullptr, 0, $virtualMethod(WindowsPathParser$Result, path, $String*)},
		{"root", "()Ljava/lang/String;", nullptr, 0, $virtualMethod(WindowsPathParser$Result, root, $String*)},
		{"type", "()Lsun/nio/fs/WindowsPathType;", nullptr, 0, $virtualMethod(WindowsPathParser$Result, type, $WindowsPathType*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.fs.WindowsPathParser$Result", "sun.nio.fs.WindowsPathParser", "Result", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.nio.fs.WindowsPathParser$Result",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.nio.fs.WindowsPathParser"
	};
	$loadClass(WindowsPathParser$Result, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WindowsPathParser$Result);
	});
	return class$;
}

$Class* WindowsPathParser$Result::class$ = nullptr;

		} // fs
	} // nio
} // sun