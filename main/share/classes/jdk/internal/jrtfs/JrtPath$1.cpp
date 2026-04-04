#include <jdk/internal/jrtfs/JrtPath$1.h>
#include <java/nio/file/Path.h>
#include <java/nio/file/ReadOnlyFileSystemException.h>
#include <java/util/NoSuchElementException.h>
#include <jdk/internal/jrtfs/JrtPath.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Path = ::java::nio::file::Path;
using $ReadOnlyFileSystemException = ::java::nio::file::ReadOnlyFileSystemException;
using $NoSuchElementException = ::java::util::NoSuchElementException;
using $JrtPath = ::jdk::internal::jrtfs::JrtPath;

namespace jdk {
	namespace internal {
		namespace jrtfs {

void JrtPath$1::init$($JrtPath* this$0) {
	$set(this, this$0, this$0);
	this->i = 0;
}

bool JrtPath$1::hasNext() {
	return (this->i < this->this$0->getNameCount());
}

$Object* JrtPath$1::next() {
	if (this->i < this->this$0->getNameCount()) {
		$var($Path, result, this->this$0->getName(this->i));
		++this->i;
		return $of(result);
	} else {
		$throwNew($NoSuchElementException);
	}
}

void JrtPath$1::remove() {
	$throwNew($ReadOnlyFileSystemException);
}

JrtPath$1::JrtPath$1() {
}

$Class* JrtPath$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljdk/internal/jrtfs/JrtPath;", nullptr, $FINAL | $SYNTHETIC, $field(JrtPath$1, this$0)},
		{"i", "I", nullptr, $PRIVATE, $field(JrtPath$1, i)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljdk/internal/jrtfs/JrtPath;)V", nullptr, 0, $method(JrtPath$1, init$, void, $JrtPath*)},
		{"hasNext", "()Z", nullptr, $PUBLIC, $virtualMethod(JrtPath$1, hasNext, bool)},
		{"next", "()Ljava/nio/file/Path;", nullptr, $PUBLIC, $virtualMethod(JrtPath$1, next, $Object*)},
		{"remove", "()V", nullptr, $PUBLIC, $virtualMethod(JrtPath$1, remove, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"jdk.internal.jrtfs.JrtPath",
		"iterator",
		"()Ljava/util/Iterator;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.jrtfs.JrtPath$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"jdk.internal.jrtfs.JrtPath$1",
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
		"jdk.internal.jrtfs.JrtPath"
	};
	$loadClass(JrtPath$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JrtPath$1);
	});
	return class$;
}

$Class* JrtPath$1::class$ = nullptr;

		} // jrtfs
	} // internal
} // jdk