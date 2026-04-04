#include <jdk/internal/jrtfs/JrtDirectoryStream.h>
#include <java/io/IOException.h>
#include <java/lang/IllegalStateException.h>
#include <java/nio/file/ClosedDirectoryStreamException.h>
#include <java/nio/file/DirectoryStream$Filter.h>
#include <java/nio/file/NotDirectoryException.h>
#include <java/util/Iterator.h>
#include <jdk/internal/jrtfs/JrtDirectoryStream$1.h>
#include <jdk/internal/jrtfs/JrtFileSystem.h>
#include <jdk/internal/jrtfs/JrtPath.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ClosedDirectoryStreamException = ::java::nio::file::ClosedDirectoryStreamException;
using $DirectoryStream$Filter = ::java::nio::file::DirectoryStream$Filter;
using $NotDirectoryException = ::java::nio::file::NotDirectoryException;
using $Iterator = ::java::util::Iterator;
using $JrtDirectoryStream$1 = ::jdk::internal::jrtfs::JrtDirectoryStream$1;
using $JrtPath = ::jdk::internal::jrtfs::JrtPath;

namespace jdk {
	namespace internal {
		namespace jrtfs {

void JrtDirectoryStream::init$($JrtPath* dir, $DirectoryStream$Filter* filter) {
	$set(this, dir, dir);
	if (!$nc($nc(dir)->jrtfs)->isDirectory(dir, true)) {
		$throwNew($NotDirectoryException, $(dir->toString()));
	}
	$set(this, filter, filter);
}

$Iterator* JrtDirectoryStream::iterator() {
	$synchronized(this) {
		if (this->isClosed) {
			$throwNew($ClosedDirectoryStreamException);
		}
		if (this->itr != nullptr) {
			$throwNew($IllegalStateException, "Iterator has already been returned"_s);
		}
		try {
			$set(this, itr, $nc($nc(this->dir)->jrtfs)->iteratorOf(this->dir, this->filter));
		} catch ($IOException& e) {
			$throwNew($IllegalStateException, e);
		}
		return $new($JrtDirectoryStream$1, this);
	}
}

void JrtDirectoryStream::close() {
	$synchronized(this) {
		this->isClosed = true;
	}
}

JrtDirectoryStream::JrtDirectoryStream() {
}

$Class* JrtDirectoryStream::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"dir", "Ljdk/internal/jrtfs/JrtPath;", nullptr, $PRIVATE | $FINAL, $field(JrtDirectoryStream, dir)},
		{"filter", "Ljava/nio/file/DirectoryStream$Filter;", "Ljava/nio/file/DirectoryStream$Filter<-Ljava/nio/file/Path;>;", $PRIVATE | $FINAL, $field(JrtDirectoryStream, filter)},
		{"isClosed", "Z", nullptr, $PRIVATE, $field(JrtDirectoryStream, isClosed)},
		{"itr", "Ljava/util/Iterator;", "Ljava/util/Iterator<Ljava/nio/file/Path;>;", $PRIVATE, $field(JrtDirectoryStream, itr)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljdk/internal/jrtfs/JrtPath;Ljava/nio/file/DirectoryStream$Filter;)V", "(Ljdk/internal/jrtfs/JrtPath;Ljava/nio/file/DirectoryStream$Filter<-Ljava/nio/file/Path;>;)V", 0, $method(JrtDirectoryStream, init$, void, $JrtPath*, $DirectoryStream$Filter*), "java.io.IOException"},
		{"close", "()V", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(JrtDirectoryStream, close, void), "java.io.IOException"},
		{"iterator", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<Ljava/nio/file/Path;>;", $PUBLIC | $SYNCHRONIZED, $virtualMethod(JrtDirectoryStream, iterator, $Iterator*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.jrtfs.JrtDirectoryStream$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"jdk.internal.jrtfs.JrtDirectoryStream",
		"java.lang.Object",
		"java.nio.file.DirectoryStream",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/nio/file/DirectoryStream<Ljava/nio/file/Path;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"jdk.internal.jrtfs.JrtDirectoryStream$1"
	};
	$loadClass(JrtDirectoryStream, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(JrtDirectoryStream));
	});
	return class$;
}

$Class* JrtDirectoryStream::class$ = nullptr;

		} // jrtfs
	} // internal
} // jdk