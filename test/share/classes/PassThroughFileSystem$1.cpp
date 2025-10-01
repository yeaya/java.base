#include <PassThroughFileSystem$1.h>

#include <PassThroughFileSystem$1$1.h>
#include <PassThroughFileSystem.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Iterable.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Iterator.h>
#include <jcpp.h>

using $PassThroughFileSystem = ::PassThroughFileSystem;
using $PassThroughFileSystem$1$1 = ::PassThroughFileSystem$1$1;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;

$FieldInfo _PassThroughFileSystem$1_FieldInfo_[] = {
	{"this$0", "LPassThroughFileSystem;", nullptr, $FINAL | $SYNTHETIC, $field(PassThroughFileSystem$1, this$0)},
	{"val$roots", "Ljava/lang/Iterable;", nullptr, $FINAL | $SYNTHETIC, $field(PassThroughFileSystem$1, val$roots)},
	{}
};

$MethodInfo _PassThroughFileSystem$1_MethodInfo_[] = {
	{"<init>", "(LPassThroughFileSystem;Ljava/lang/Iterable;)V", "()V", 0, $method(static_cast<void(PassThroughFileSystem$1::*)($PassThroughFileSystem*,$Iterable*)>(&PassThroughFileSystem$1::init$))},
	{"iterator", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<Ljava/nio/file/Path;>;", $PUBLIC},
	{}
};

$EnclosingMethodInfo _PassThroughFileSystem$1_EnclosingMethodInfo_ = {
	"PassThroughFileSystem",
	"getRootDirectories",
	"()Ljava/lang/Iterable;"
};

$InnerClassInfo _PassThroughFileSystem$1_InnerClassesInfo_[] = {
	{"PassThroughFileSystem$1", nullptr, nullptr, 0},
	{"PassThroughFileSystem$1$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _PassThroughFileSystem$1_ClassInfo_ = {
	$ACC_SUPER,
	"PassThroughFileSystem$1",
	"java.lang.Object",
	"java.lang.Iterable",
	_PassThroughFileSystem$1_FieldInfo_,
	_PassThroughFileSystem$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/lang/Iterable<Ljava/nio/file/Path;>;",
	&_PassThroughFileSystem$1_EnclosingMethodInfo_,
	_PassThroughFileSystem$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"PassThroughFileSystem"
};

$Object* allocate$PassThroughFileSystem$1($Class* clazz) {
	return $of($alloc(PassThroughFileSystem$1));
}

void PassThroughFileSystem$1::init$($PassThroughFileSystem* this$0, $Iterable* val$roots) {
	$set(this, this$0, this$0);
	$set(this, val$roots, val$roots);
}

$Iterator* PassThroughFileSystem$1::iterator() {
	$var($Iterator, itr, $nc(this->val$roots)->iterator());
	return $new($PassThroughFileSystem$1$1, this, itr);
}

PassThroughFileSystem$1::PassThroughFileSystem$1() {
}

$Class* PassThroughFileSystem$1::load$($String* name, bool initialize) {
	$loadClass(PassThroughFileSystem$1, name, initialize, &_PassThroughFileSystem$1_ClassInfo_, allocate$PassThroughFileSystem$1);
	return class$;
}

$Class* PassThroughFileSystem$1::class$ = nullptr;