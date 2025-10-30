#include <java/nio/file/Path$1.h>

#include <java/nio/file/Path.h>
#include <java/util/NoSuchElementException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Path = ::java::nio::file::Path;
using $Iterator = ::java::util::Iterator;
using $NoSuchElementException = ::java::util::NoSuchElementException;

namespace java {
	namespace nio {
		namespace file {

$FieldInfo _Path$1_FieldInfo_[] = {
	{"this$0", "Ljava/nio/file/Path;", nullptr, $FINAL | $SYNTHETIC, $field(Path$1, this$0)},
	{"i", "I", nullptr, $PRIVATE, $field(Path$1, i)},
	{}
};

$MethodInfo _Path$1_MethodInfo_[] = {
	{"<init>", "(Ljava/nio/file/Path;)V", nullptr, 0, $method(static_cast<void(Path$1::*)($Path*)>(&Path$1::init$))},
	{"hasNext", "()Z", nullptr, $PUBLIC},
	{"next", "()Ljava/nio/file/Path;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Path$1_EnclosingMethodInfo_ = {
	"java.nio.file.Path",
	"iterator",
	"()Ljava/util/Iterator;"
};

$InnerClassInfo _Path$1_InnerClassesInfo_[] = {
	{"java.nio.file.Path$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Path$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.nio.file.Path$1",
	"java.lang.Object",
	"java.util.Iterator",
	_Path$1_FieldInfo_,
	_Path$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Iterator<Ljava/nio/file/Path;>;",
	&_Path$1_EnclosingMethodInfo_,
	_Path$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.nio.file.Path"
};

$Object* allocate$Path$1($Class* clazz) {
	return $of($alloc(Path$1));
}

void Path$1::init$($Path* this$0) {
	$set(this, this$0, this$0);
	this->i = 0;
}

bool Path$1::hasNext() {
	return (this->i < this->this$0->getNameCount());
}

$Object* Path$1::next() {
	if (this->i < this->this$0->getNameCount()) {
		$var($Path, result, this->this$0->getName(this->i));
		++this->i;
		return $of(result);
	} else {
		$throwNew($NoSuchElementException);
	}
}

Path$1::Path$1() {
}

$Class* Path$1::load$($String* name, bool initialize) {
	$loadClass(Path$1, name, initialize, &_Path$1_ClassInfo_, allocate$Path$1);
	return class$;
}

$Class* Path$1::class$ = nullptr;

		} // file
	} // nio
} // java