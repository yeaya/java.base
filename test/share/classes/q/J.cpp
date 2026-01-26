#include <q/J.h>

#include <java/nio/file/Path.h>
#include <java/util/function/Function.h>
#include <jcpp.h>

#undef J

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Path = ::java::nio::file::Path;
using $Function = ::java::util::function::Function;

namespace q {

$FieldInfo _J_FieldInfo_[] = {
	{"fileReader", "Ljava/util/function/Function;", "Ljava/util/function/Function<Ljava/nio/file/Path;Ljava/lang/String;>;", $PROTECTED | $FINAL, $field(J, fileReader)},
	{}
};

$MethodInfo _J_MethodInfo_[] = {
	{"<init>", "(Ljava/util/function/Function;)V", "(Ljava/util/function/Function<Ljava/nio/file/Path;Ljava/lang/String;>;)V", $PUBLIC, $method(J, init$, void, $Function*)},
	{"check", "(Ljava/nio/file/Path;)V", nullptr, $PUBLIC, $virtualMethod(J, check, void, $Path*)},
	{}
};

$ClassInfo _J_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"q.J",
	"java.lang.Object",
	nullptr,
	_J_FieldInfo_,
	_J_MethodInfo_
};

$Object* allocate$J($Class* clazz) {
	return $of($alloc(J));
}

void J::init$($Function* fileReader) {
	$set(this, fileReader, fileReader);
}

void J::check($Path* file) {
	$nc(this->fileReader)->apply(file);
}

J::J() {
}

$Class* J::load$($String* name, bool initialize) {
	$loadClass(J, name, initialize, &_J_ClassInfo_, allocate$J);
	return class$;
}

$Class* J::class$ = nullptr;

} // q