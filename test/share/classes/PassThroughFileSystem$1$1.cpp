#include <PassThroughFileSystem$1$1.h>
#include <PassThroughFileSystem$1.h>
#include <PassThroughFileSystem$PassThroughPath.h>
#include <PassThroughFileSystem.h>
#include <java/nio/file/FileSystem.h>
#include <java/nio/file/Path.h>
#include <java/util/Iterator.h>
#include <jcpp.h>

using $PassThroughFileSystem$1 = ::PassThroughFileSystem$1;
using $PassThroughFileSystem$PassThroughPath = ::PassThroughFileSystem$PassThroughPath;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Path = ::java::nio::file::Path;
using $Iterator = ::java::util::Iterator;

void PassThroughFileSystem$1$1::init$($PassThroughFileSystem$1* this$1, $Iterator* val$itr) {
	$set(this, this$1, this$1);
	$set(this, val$itr, val$itr);
}

bool PassThroughFileSystem$1$1::hasNext() {
	return $nc(this->val$itr)->hasNext();
}

$Object* PassThroughFileSystem$1$1::next() {
	return $of($new($PassThroughFileSystem$PassThroughPath, $nc(this->this$1->this$0)->delegate, $$cast($Path, $nc(this->val$itr)->next())));
}

void PassThroughFileSystem$1$1::remove() {
	$nc(this->val$itr)->remove();
}

PassThroughFileSystem$1$1::PassThroughFileSystem$1$1() {
}

$Class* PassThroughFileSystem$1$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$1", "LPassThroughFileSystem$1;", nullptr, $FINAL | $SYNTHETIC, $field(PassThroughFileSystem$1$1, this$1)},
		{"val$itr", "Ljava/util/Iterator;", nullptr, $FINAL | $SYNTHETIC, $field(PassThroughFileSystem$1$1, val$itr)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LPassThroughFileSystem$1;Ljava/util/Iterator;)V", "()V", 0, $method(PassThroughFileSystem$1$1, init$, void, $PassThroughFileSystem$1*, $Iterator*)},
		{"hasNext", "()Z", nullptr, $PUBLIC, $virtualMethod(PassThroughFileSystem$1$1, hasNext, bool)},
		{"next", "()Ljava/nio/file/Path;", nullptr, $PUBLIC, $virtualMethod(PassThroughFileSystem$1$1, next, $Object*)},
		{"remove", "()V", nullptr, $PUBLIC, $virtualMethod(PassThroughFileSystem$1$1, remove, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"PassThroughFileSystem$1",
		"iterator",
		"()Ljava/util/Iterator;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"PassThroughFileSystem$1", nullptr, nullptr, 0},
		{"PassThroughFileSystem$1$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"PassThroughFileSystem$1$1",
		"java.lang.Object",
		"java.util.Iterator",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/Iterator<Ljava/nio/file/Path;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"PassThroughFileSystem"
	};
	$loadClass(PassThroughFileSystem$1$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PassThroughFileSystem$1$1);
	});
	return class$;
}

$Class* PassThroughFileSystem$1$1::class$ = nullptr;