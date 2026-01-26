#include <PassThroughFileSystem$PassThroughPath$1.h>

#include <PassThroughFileSystem$PassThroughPath.h>
#include <java/nio/file/Path.h>
#include <java/util/Iterator.h>
#include <jcpp.h>

using $PassThroughFileSystem$PassThroughPath = ::PassThroughFileSystem$PassThroughPath;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Path = ::java::nio::file::Path;
using $Iterator = ::java::util::Iterator;

$FieldInfo _PassThroughFileSystem$PassThroughPath$1_FieldInfo_[] = {
	{"this$0", "LPassThroughFileSystem$PassThroughPath;", nullptr, $FINAL | $SYNTHETIC, $field(PassThroughFileSystem$PassThroughPath$1, this$0)},
	{"val$itr", "Ljava/util/Iterator;", nullptr, $FINAL | $SYNTHETIC, $field(PassThroughFileSystem$PassThroughPath$1, val$itr)},
	{}
};

$MethodInfo _PassThroughFileSystem$PassThroughPath$1_MethodInfo_[] = {
	{"<init>", "(LPassThroughFileSystem$PassThroughPath;Ljava/util/Iterator;)V", "()V", 0, $method(PassThroughFileSystem$PassThroughPath$1, init$, void, $PassThroughFileSystem$PassThroughPath*, $Iterator*)},
	{"hasNext", "()Z", nullptr, $PUBLIC, $virtualMethod(PassThroughFileSystem$PassThroughPath$1, hasNext, bool)},
	{"next", "()Ljava/nio/file/Path;", nullptr, $PUBLIC, $virtualMethod(PassThroughFileSystem$PassThroughPath$1, next, $Object*)},
	{"remove", "()V", nullptr, $PUBLIC, $virtualMethod(PassThroughFileSystem$PassThroughPath$1, remove, void)},
	{}
};

$EnclosingMethodInfo _PassThroughFileSystem$PassThroughPath$1_EnclosingMethodInfo_ = {
	"PassThroughFileSystem$PassThroughPath",
	"iterator",
	"()Ljava/util/Iterator;"
};

$InnerClassInfo _PassThroughFileSystem$PassThroughPath$1_InnerClassesInfo_[] = {
	{"PassThroughFileSystem$PassThroughPath", "PassThroughFileSystem", "PassThroughPath", $STATIC},
	{"PassThroughFileSystem$PassThroughPath$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _PassThroughFileSystem$PassThroughPath$1_ClassInfo_ = {
	$ACC_SUPER,
	"PassThroughFileSystem$PassThroughPath$1",
	"java.lang.Object",
	"java.util.Iterator",
	_PassThroughFileSystem$PassThroughPath$1_FieldInfo_,
	_PassThroughFileSystem$PassThroughPath$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Iterator<Ljava/nio/file/Path;>;",
	&_PassThroughFileSystem$PassThroughPath$1_EnclosingMethodInfo_,
	_PassThroughFileSystem$PassThroughPath$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"PassThroughFileSystem"
};

$Object* allocate$PassThroughFileSystem$PassThroughPath$1($Class* clazz) {
	return $of($alloc(PassThroughFileSystem$PassThroughPath$1));
}

void PassThroughFileSystem$PassThroughPath$1::init$($PassThroughFileSystem$PassThroughPath* this$0, $Iterator* val$itr) {
	$set(this, this$0, this$0);
	$set(this, val$itr, val$itr);
}

bool PassThroughFileSystem$PassThroughPath$1::hasNext() {
	return $nc(this->val$itr)->hasNext();
}

$Object* PassThroughFileSystem$PassThroughPath$1::next() {
	return $of(this->this$0->wrap($cast($Path, $($nc(this->val$itr)->next()))));
}

void PassThroughFileSystem$PassThroughPath$1::remove() {
	$nc(this->val$itr)->remove();
}

PassThroughFileSystem$PassThroughPath$1::PassThroughFileSystem$PassThroughPath$1() {
}

$Class* PassThroughFileSystem$PassThroughPath$1::load$($String* name, bool initialize) {
	$loadClass(PassThroughFileSystem$PassThroughPath$1, name, initialize, &_PassThroughFileSystem$PassThroughPath$1_ClassInfo_, allocate$PassThroughFileSystem$PassThroughPath$1);
	return class$;
}

$Class* PassThroughFileSystem$PassThroughPath$1::class$ = nullptr;