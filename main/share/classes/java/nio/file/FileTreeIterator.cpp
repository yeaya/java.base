#include <java/nio/file/FileTreeIterator.h>

#include <java/io/IOException.h>
#include <java/io/UncheckedIOException.h>
#include <java/lang/Array.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/file/FileTreeWalker$Event.h>
#include <java/nio/file/FileTreeWalker$EventType.h>
#include <java/nio/file/FileTreeWalker.h>
#include <java/nio/file/FileVisitOption.h>
#include <java/nio/file/Path.h>
#include <java/util/Arrays.h>
#include <java/util/Collection.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/NoSuchElementException.h>
#include <jcpp.h>

#undef END_DIRECTORY
#undef ENTRY
#undef START_DIRECTORY

using $FileVisitOptionArray = $Array<::java::nio::file::FileVisitOption>;
using $Closeable = ::java::io::Closeable;
using $IOException = ::java::io::IOException;
using $UncheckedIOException = ::java::io::UncheckedIOException;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $FileTreeWalker = ::java::nio::file::FileTreeWalker;
using $FileTreeWalker$Event = ::java::nio::file::FileTreeWalker$Event;
using $FileTreeWalker$EventType = ::java::nio::file::FileTreeWalker$EventType;
using $Path = ::java::nio::file::Path;
using $Arrays = ::java::util::Arrays;
using $Collection = ::java::util::Collection;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $NoSuchElementException = ::java::util::NoSuchElementException;

namespace java {
	namespace nio {
		namespace file {

$FieldInfo _FileTreeIterator_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(FileTreeIterator, $assertionsDisabled)},
	{"walker", "Ljava/nio/file/FileTreeWalker;", nullptr, $PRIVATE | $FINAL, $field(FileTreeIterator, walker)},
	{"next", "Ljava/nio/file/FileTreeWalker$Event;", nullptr, $PRIVATE, $field(FileTreeIterator, next$)},
	{}
};

$MethodInfo _FileTreeIterator_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/nio/file/Path;I[Ljava/nio/file/FileVisitOption;)V", nullptr, $TRANSIENT, $method(static_cast<void(FileTreeIterator::*)($Path*,int32_t,$FileVisitOptionArray*)>(&FileTreeIterator::init$)), "java.io.IOException"},
	{"close", "()V", nullptr, $PUBLIC},
	{"fetchNextIfNeeded", "()V", nullptr, $PRIVATE, $method(static_cast<void(FileTreeIterator::*)()>(&FileTreeIterator::fetchNextIfNeeded))},
	{"hasNext", "()Z", nullptr, $PUBLIC},
	{"next", "()Ljava/nio/file/FileTreeWalker$Event;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _FileTreeIterator_InnerClassesInfo_[] = {
	{"java.nio.file.FileTreeWalker$Event", "java.nio.file.FileTreeWalker", "Event", $STATIC},
	{}
};

$ClassInfo _FileTreeIterator_ClassInfo_ = {
	$ACC_SUPER,
	"java.nio.file.FileTreeIterator",
	"java.lang.Object",
	"java.util.Iterator,java.io.Closeable",
	_FileTreeIterator_FieldInfo_,
	_FileTreeIterator_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Iterator<Ljava/nio/file/FileTreeWalker$Event;>;Ljava/io/Closeable;",
	nullptr,
	_FileTreeIterator_InnerClassesInfo_
};

$Object* allocate$FileTreeIterator($Class* clazz) {
	return $of($alloc(FileTreeIterator));
}

int32_t FileTreeIterator::hashCode() {
	 return this->$Iterator::hashCode();
}

bool FileTreeIterator::equals(Object$* obj) {
	 return this->$Iterator::equals(obj);
}

$Object* FileTreeIterator::clone() {
	 return this->$Iterator::clone();
}

$String* FileTreeIterator::toString() {
	 return this->$Iterator::toString();
}

void FileTreeIterator::finalize() {
	this->$Iterator::finalize();
}

bool FileTreeIterator::$assertionsDisabled = false;

void FileTreeIterator::init$($Path* start, int32_t maxDepth, $FileVisitOptionArray* options) {
	$useLocalCurrentObjectStackCache();
	$set(this, walker, $new($FileTreeWalker, $($Arrays::asList(options)), maxDepth));
	$set(this, next$, $nc(this->walker)->walk(start));
	bool var$0 = !FileTreeIterator::$assertionsDisabled;
	if (var$0) {
		$init($FileTreeWalker$EventType);
		bool var$1 = $nc(this->next$)->type() == $FileTreeWalker$EventType::ENTRY;
		var$0 = !(var$1 || $nc(this->next$)->type() == $FileTreeWalker$EventType::START_DIRECTORY);
	}
	if (var$0) {
		$throwNew($AssertionError);
	}
	$var($IOException, ioe, $nc(this->next$)->ioeException());
	if (ioe != nullptr) {
		$throw(ioe);
	}
}

void FileTreeIterator::fetchNextIfNeeded() {
	$useLocalCurrentObjectStackCache();
	if (this->next$ == nullptr) {
		$var($FileTreeWalker$Event, ev, $nc(this->walker)->next());
		while (ev != nullptr) {
			$var($IOException, ioe, ev->ioeException());
			if (ioe != nullptr) {
				$throwNew($UncheckedIOException, ioe);
			}
			$init($FileTreeWalker$EventType);
			if (ev->type() != $FileTreeWalker$EventType::END_DIRECTORY) {
				$set(this, next$, ev);
				return;
			}
			$assign(ev, $nc(this->walker)->next());
		}
	}
}

bool FileTreeIterator::hasNext() {
	if (!$nc(this->walker)->isOpen()) {
		$throwNew($IllegalStateException);
	}
	fetchNextIfNeeded();
	return this->next$ != nullptr;
}

$Object* FileTreeIterator::next() {
	if (!$nc(this->walker)->isOpen()) {
		$throwNew($IllegalStateException);
	}
	fetchNextIfNeeded();
	if (this->next$ == nullptr) {
		$throwNew($NoSuchElementException);
	}
	$var($FileTreeWalker$Event, result, this->next$);
	$set(this, next$, nullptr);
	return $of(result);
}

void FileTreeIterator::close() {
	$nc(this->walker)->close();
}

void clinit$FileTreeIterator($Class* class$) {
	FileTreeIterator::$assertionsDisabled = !FileTreeIterator::class$->desiredAssertionStatus();
}

FileTreeIterator::FileTreeIterator() {
}

$Class* FileTreeIterator::load$($String* name, bool initialize) {
	$loadClass(FileTreeIterator, name, initialize, &_FileTreeIterator_ClassInfo_, clinit$FileTreeIterator, allocate$FileTreeIterator);
	return class$;
}

$Class* FileTreeIterator::class$ = nullptr;

		} // file
	} // nio
} // java