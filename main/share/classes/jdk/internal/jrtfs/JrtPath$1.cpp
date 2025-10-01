#include <jdk/internal/jrtfs/JrtPath$1.h>

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
using $Iterator = ::java::util::Iterator;
using $NoSuchElementException = ::java::util::NoSuchElementException;
using $JrtPath = ::jdk::internal::jrtfs::JrtPath;

namespace jdk {
	namespace internal {
		namespace jrtfs {

$FieldInfo _JrtPath$1_FieldInfo_[] = {
	{"this$0", "Ljdk/internal/jrtfs/JrtPath;", nullptr, $FINAL | $SYNTHETIC, $field(JrtPath$1, this$0)},
	{"i", "I", nullptr, $PRIVATE, $field(JrtPath$1, i)},
	{}
};

$MethodInfo _JrtPath$1_MethodInfo_[] = {
	{"<init>", "(Ljdk/internal/jrtfs/JrtPath;)V", nullptr, 0, $method(static_cast<void(JrtPath$1::*)($JrtPath*)>(&JrtPath$1::init$))},
	{"hasNext", "()Z", nullptr, $PUBLIC},
	{"next", "()Ljava/nio/file/Path;", nullptr, $PUBLIC},
	{"remove", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _JrtPath$1_EnclosingMethodInfo_ = {
	"jdk.internal.jrtfs.JrtPath",
	"iterator",
	"()Ljava/util/Iterator;"
};

$InnerClassInfo _JrtPath$1_InnerClassesInfo_[] = {
	{"jdk.internal.jrtfs.JrtPath$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _JrtPath$1_ClassInfo_ = {
	$ACC_SUPER,
	"jdk.internal.jrtfs.JrtPath$1",
	"java.lang.Object",
	"java.util.Iterator",
	_JrtPath$1_FieldInfo_,
	_JrtPath$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Iterator<Ljava/nio/file/Path;>;",
	&_JrtPath$1_EnclosingMethodInfo_,
	_JrtPath$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.jrtfs.JrtPath"
};

$Object* allocate$JrtPath$1($Class* clazz) {
	return $of($alloc(JrtPath$1));
}

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
	$loadClass(JrtPath$1, name, initialize, &_JrtPath$1_ClassInfo_, allocate$JrtPath$1);
	return class$;
}

$Class* JrtPath$1::class$ = nullptr;

		} // jrtfs
	} // internal
} // jdk