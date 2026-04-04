#include <PassThroughFileSystem$1.h>
#include <PassThroughFileSystem$1$1.h>
#include <PassThroughFileSystem.h>
#include <java/lang/Iterable.h>
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
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "LPassThroughFileSystem;", nullptr, $FINAL | $SYNTHETIC, $field(PassThroughFileSystem$1, this$0)},
		{"val$roots", "Ljava/lang/Iterable;", nullptr, $FINAL | $SYNTHETIC, $field(PassThroughFileSystem$1, val$roots)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LPassThroughFileSystem;Ljava/lang/Iterable;)V", "()V", 0, $method(PassThroughFileSystem$1, init$, void, $PassThroughFileSystem*, $Iterable*)},
		{"iterator", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<Ljava/nio/file/Path;>;", $PUBLIC, $virtualMethod(PassThroughFileSystem$1, iterator, $Iterator*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"PassThroughFileSystem",
		"getRootDirectories",
		"()Ljava/lang/Iterable;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"PassThroughFileSystem$1", nullptr, nullptr, 0},
		{"PassThroughFileSystem$1$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"PassThroughFileSystem$1",
		"java.lang.Object",
		"java.lang.Iterable",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/lang/Iterable<Ljava/nio/file/Path;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"PassThroughFileSystem"
	};
	$loadClass(PassThroughFileSystem$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PassThroughFileSystem$1);
	});
	return class$;
}

$Class* PassThroughFileSystem$1::class$ = nullptr;