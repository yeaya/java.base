#include <java/nio/file/Files$2.h>
#include <java/io/IOException.h>
#include <java/io/UncheckedIOException.h>
#include <java/nio/file/DirectoryIteratorException.h>
#include <java/nio/file/Files.h>
#include <java/nio/file/Path.h>
#include <java/util/Iterator.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $UncheckedIOException = ::java::io::UncheckedIOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DirectoryIteratorException = ::java::nio::file::DirectoryIteratorException;
using $Path = ::java::nio::file::Path;
using $Iterator = ::java::util::Iterator;

namespace java {
	namespace nio {
		namespace file {

void Files$2::init$($Iterator* val$delegate) {
	$set(this, val$delegate, val$delegate);
}

bool Files$2::hasNext() {
	try {
		return $nc(this->val$delegate)->hasNext();
	} catch ($DirectoryIteratorException& e) {
		$throwNew($UncheckedIOException, $$cast($IOException, e->getCause()));
	}
	$shouldNotReachHere();
}

$Object* Files$2::next() {
	try {
		return $of($cast($Path, $nc(this->val$delegate)->next()));
	} catch ($DirectoryIteratorException& e) {
		$throwNew($UncheckedIOException, $$cast($IOException, e->getCause()));
	}
	$shouldNotReachHere();
}

Files$2::Files$2() {
}

$Class* Files$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$delegate", "Ljava/util/Iterator;", nullptr, $FINAL | $SYNTHETIC, $field(Files$2, val$delegate)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/Iterator;)V", nullptr, 0, $method(Files$2, init$, void, $Iterator*)},
		{"hasNext", "()Z", nullptr, $PUBLIC, $virtualMethod(Files$2, hasNext, bool)},
		{"next", "()Ljava/nio/file/Path;", nullptr, $PUBLIC, $virtualMethod(Files$2, next, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.nio.file.Files",
		"list",
		"(Ljava/nio/file/Path;)Ljava/util/stream/Stream;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.nio.file.Files$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.nio.file.Files$2",
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
		"java.nio.file.Files"
	};
	$loadClass(Files$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Files$2);
	});
	return class$;
}

$Class* Files$2::class$ = nullptr;

		} // file
	} // nio
} // java