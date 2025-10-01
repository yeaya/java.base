#include <PassThroughFileSystem$2.h>

#include <PassThroughFileSystem.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/file/Path.h>
#include <java/nio/file/PathMatcher.h>
#include <jcpp.h>

using $PassThroughFileSystem = ::PassThroughFileSystem;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Path = ::java::nio::file::Path;
using $PathMatcher = ::java::nio::file::PathMatcher;

$FieldInfo _PassThroughFileSystem$2_FieldInfo_[] = {
	{"this$0", "LPassThroughFileSystem;", nullptr, $FINAL | $SYNTHETIC, $field(PassThroughFileSystem$2, this$0)},
	{"val$matcher", "Ljava/nio/file/PathMatcher;", nullptr, $FINAL | $SYNTHETIC, $field(PassThroughFileSystem$2, val$matcher)},
	{}
};

$MethodInfo _PassThroughFileSystem$2_MethodInfo_[] = {
	{"<init>", "(LPassThroughFileSystem;Ljava/nio/file/PathMatcher;)V", "()V", 0, $method(static_cast<void(PassThroughFileSystem$2::*)($PassThroughFileSystem*,$PathMatcher*)>(&PassThroughFileSystem$2::init$))},
	{"matches", "(Ljava/nio/file/Path;)Z", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _PassThroughFileSystem$2_EnclosingMethodInfo_ = {
	"PassThroughFileSystem",
	"getPathMatcher",
	"(Ljava/lang/String;)Ljava/nio/file/PathMatcher;"
};

$InnerClassInfo _PassThroughFileSystem$2_InnerClassesInfo_[] = {
	{"PassThroughFileSystem$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _PassThroughFileSystem$2_ClassInfo_ = {
	$ACC_SUPER,
	"PassThroughFileSystem$2",
	"java.lang.Object",
	"java.nio.file.PathMatcher",
	_PassThroughFileSystem$2_FieldInfo_,
	_PassThroughFileSystem$2_MethodInfo_,
	nullptr,
	&_PassThroughFileSystem$2_EnclosingMethodInfo_,
	_PassThroughFileSystem$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"PassThroughFileSystem"
};

$Object* allocate$PassThroughFileSystem$2($Class* clazz) {
	return $of($alloc(PassThroughFileSystem$2));
}

void PassThroughFileSystem$2::init$($PassThroughFileSystem* this$0, $PathMatcher* val$matcher) {
	$set(this, this$0, this$0);
	$set(this, val$matcher, val$matcher);
}

bool PassThroughFileSystem$2::matches($Path* path) {
	return $nc(this->val$matcher)->matches($($PassThroughFileSystem::unwrap(path)));
}

PassThroughFileSystem$2::PassThroughFileSystem$2() {
}

$Class* PassThroughFileSystem$2::load$($String* name, bool initialize) {
	$loadClass(PassThroughFileSystem$2, name, initialize, &_PassThroughFileSystem$2_ClassInfo_, allocate$PassThroughFileSystem$2);
	return class$;
}

$Class* PassThroughFileSystem$2::class$ = nullptr;