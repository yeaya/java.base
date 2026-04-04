#include <jdk/internal/jrtfs/JrtDirectoryStream$1.h>
#include <java/nio/file/Path.h>
#include <java/util/Iterator.h>
#include <java/util/NoSuchElementException.h>
#include <jdk/internal/jrtfs/JrtDirectoryStream.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Path = ::java::nio::file::Path;
using $NoSuchElementException = ::java::util::NoSuchElementException;
using $JrtDirectoryStream = ::jdk::internal::jrtfs::JrtDirectoryStream;

namespace jdk {
	namespace internal {
		namespace jrtfs {

void JrtDirectoryStream$1::init$($JrtDirectoryStream* this$0) {
	$set(this, this$0, this$0);
}

bool JrtDirectoryStream$1::hasNext() {
	$synchronized(this->this$0) {
		if (this->this$0->isClosed) {
			return false;
		}
		return $nc(this->this$0->itr)->hasNext();
	}
}

$Object* JrtDirectoryStream$1::next() {
	$synchronized(this->this$0) {
		if (this->this$0->isClosed) {
			$throwNew($NoSuchElementException);
		}
		return $of($cast($Path, $nc(this->this$0->itr)->next()));
	}
}

JrtDirectoryStream$1::JrtDirectoryStream$1() {
}

$Class* JrtDirectoryStream$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljdk/internal/jrtfs/JrtDirectoryStream;", nullptr, $FINAL | $SYNTHETIC, $field(JrtDirectoryStream$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljdk/internal/jrtfs/JrtDirectoryStream;)V", nullptr, 0, $method(JrtDirectoryStream$1, init$, void, $JrtDirectoryStream*)},
		{"hasNext", "()Z", nullptr, $PUBLIC, $virtualMethod(JrtDirectoryStream$1, hasNext, bool)},
		{"next", "()Ljava/nio/file/Path;", nullptr, $PUBLIC, $virtualMethod(JrtDirectoryStream$1, next, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"jdk.internal.jrtfs.JrtDirectoryStream",
		"iterator",
		"()Ljava/util/Iterator;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.jrtfs.JrtDirectoryStream$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"jdk.internal.jrtfs.JrtDirectoryStream$1",
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
		"jdk.internal.jrtfs.JrtDirectoryStream"
	};
	$loadClass(JrtDirectoryStream$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JrtDirectoryStream$1);
	});
	return class$;
}

$Class* JrtDirectoryStream$1::class$ = nullptr;

		} // jrtfs
	} // internal
} // jdk