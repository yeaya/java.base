#include <PassThroughFileSystem$PassThroughProvider$1$1.h>

#include <PassThroughFileSystem$PassThroughPath.h>
#include <PassThroughFileSystem$PassThroughProvider$1.h>
#include <PassThroughFileSystem$PassThroughProvider.h>
#include <PassThroughFileSystem.h>
#include <java/nio/file/FileSystem.h>
#include <java/nio/file/Path.h>
#include <java/util/Iterator.h>
#include <jcpp.h>

using $PassThroughFileSystem$PassThroughPath = ::PassThroughFileSystem$PassThroughPath;
using $PassThroughFileSystem$PassThroughProvider = ::PassThroughFileSystem$PassThroughProvider;
using $PassThroughFileSystem$PassThroughProvider$1 = ::PassThroughFileSystem$PassThroughProvider$1;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $FileSystem = ::java::nio::file::FileSystem;
using $Path = ::java::nio::file::Path;
using $Iterator = ::java::util::Iterator;

$FieldInfo _PassThroughFileSystem$PassThroughProvider$1$1_FieldInfo_[] = {
	{"this$1", "LPassThroughFileSystem$PassThroughProvider$1;", nullptr, $FINAL | $SYNTHETIC, $field(PassThroughFileSystem$PassThroughProvider$1$1, this$1)},
	{"val$itr", "Ljava/util/Iterator;", nullptr, $FINAL | $SYNTHETIC, $field(PassThroughFileSystem$PassThroughProvider$1$1, val$itr)},
	{}
};

$MethodInfo _PassThroughFileSystem$PassThroughProvider$1$1_MethodInfo_[] = {
	{"<init>", "(LPassThroughFileSystem$PassThroughProvider$1;Ljava/util/Iterator;)V", "()V", 0, $method(PassThroughFileSystem$PassThroughProvider$1$1, init$, void, $PassThroughFileSystem$PassThroughProvider$1*, $Iterator*)},
	{"hasNext", "()Z", nullptr, $PUBLIC, $virtualMethod(PassThroughFileSystem$PassThroughProvider$1$1, hasNext, bool)},
	{"next", "()Ljava/nio/file/Path;", nullptr, $PUBLIC, $virtualMethod(PassThroughFileSystem$PassThroughProvider$1$1, next, $Object*)},
	{"remove", "()V", nullptr, $PUBLIC, $virtualMethod(PassThroughFileSystem$PassThroughProvider$1$1, remove, void)},
	{}
};

$EnclosingMethodInfo _PassThroughFileSystem$PassThroughProvider$1$1_EnclosingMethodInfo_ = {
	"PassThroughFileSystem$PassThroughProvider$1",
	"iterator",
	"()Ljava/util/Iterator;"
};

$InnerClassInfo _PassThroughFileSystem$PassThroughProvider$1$1_InnerClassesInfo_[] = {
	{"PassThroughFileSystem$PassThroughProvider", "PassThroughFileSystem", "PassThroughProvider", $STATIC},
	{"PassThroughFileSystem$PassThroughProvider$1", nullptr, nullptr, 0},
	{"PassThroughFileSystem$PassThroughProvider$1$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _PassThroughFileSystem$PassThroughProvider$1$1_ClassInfo_ = {
	$ACC_SUPER,
	"PassThroughFileSystem$PassThroughProvider$1$1",
	"java.lang.Object",
	"java.util.Iterator",
	_PassThroughFileSystem$PassThroughProvider$1$1_FieldInfo_,
	_PassThroughFileSystem$PassThroughProvider$1$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Iterator<Ljava/nio/file/Path;>;",
	&_PassThroughFileSystem$PassThroughProvider$1$1_EnclosingMethodInfo_,
	_PassThroughFileSystem$PassThroughProvider$1$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"PassThroughFileSystem"
};

$Object* allocate$PassThroughFileSystem$PassThroughProvider$1$1($Class* clazz) {
	return $of($alloc(PassThroughFileSystem$PassThroughProvider$1$1));
}

void PassThroughFileSystem$PassThroughProvider$1$1::init$($PassThroughFileSystem$PassThroughProvider$1* this$1, $Iterator* val$itr) {
	$set(this, this$1, this$1);
	$set(this, val$itr, val$itr);
}

bool PassThroughFileSystem$PassThroughProvider$1$1::hasNext() {
	return $nc(this->val$itr)->hasNext();
}

$Object* PassThroughFileSystem$PassThroughProvider$1$1::next() {
	$init($PassThroughFileSystem$PassThroughProvider);
	return $of($new($PassThroughFileSystem$PassThroughPath, $PassThroughFileSystem$PassThroughProvider::delegate, $cast($Path, $($nc(this->val$itr)->next()))));
}

void PassThroughFileSystem$PassThroughProvider$1$1::remove() {
	$nc(this->val$itr)->remove();
}

PassThroughFileSystem$PassThroughProvider$1$1::PassThroughFileSystem$PassThroughProvider$1$1() {
}

$Class* PassThroughFileSystem$PassThroughProvider$1$1::load$($String* name, bool initialize) {
	$loadClass(PassThroughFileSystem$PassThroughProvider$1$1, name, initialize, &_PassThroughFileSystem$PassThroughProvider$1$1_ClassInfo_, allocate$PassThroughFileSystem$PassThroughProvider$1$1);
	return class$;
}

$Class* PassThroughFileSystem$PassThroughProvider$1$1::class$ = nullptr;