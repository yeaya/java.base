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

void J::init$($Function* fileReader) {
	$set(this, fileReader, fileReader);
}

void J::check($Path* file) {
	$nc(this->fileReader)->apply(file);
}

J::J() {
}

$Class* J::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"fileReader", "Ljava/util/function/Function;", "Ljava/util/function/Function<Ljava/nio/file/Path;Ljava/lang/String;>;", $PROTECTED | $FINAL, $field(J, fileReader)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/function/Function;)V", "(Ljava/util/function/Function<Ljava/nio/file/Path;Ljava/lang/String;>;)V", $PUBLIC, $method(J, init$, void, $Function*)},
		{"check", "(Ljava/nio/file/Path;)V", nullptr, $PUBLIC, $virtualMethod(J, check, void, $Path*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"q.J",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(J, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(J);
	});
	return class$;
}

$Class* J::class$ = nullptr;

} // q