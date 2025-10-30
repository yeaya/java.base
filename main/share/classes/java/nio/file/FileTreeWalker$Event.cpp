#include <java/nio/file/FileTreeWalker$Event.h>

#include <java/io/IOException.h>
#include <java/nio/file/FileTreeWalker$EventType.h>
#include <java/nio/file/FileTreeWalker.h>
#include <java/nio/file/Path.h>
#include <java/nio/file/attribute/BasicFileAttributes.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $FileTreeWalker = ::java::nio::file::FileTreeWalker;
using $FileTreeWalker$EventType = ::java::nio::file::FileTreeWalker$EventType;
using $Path = ::java::nio::file::Path;
using $BasicFileAttributes = ::java::nio::file::attribute::BasicFileAttributes;

namespace java {
	namespace nio {
		namespace file {

$FieldInfo _FileTreeWalker$Event_FieldInfo_[] = {
	{"type", "Ljava/nio/file/FileTreeWalker$EventType;", nullptr, $PRIVATE | $FINAL, $field(FileTreeWalker$Event, type$)},
	{"file", "Ljava/nio/file/Path;", nullptr, $PRIVATE | $FINAL, $field(FileTreeWalker$Event, file$)},
	{"attrs", "Ljava/nio/file/attribute/BasicFileAttributes;", nullptr, $PRIVATE | $FINAL, $field(FileTreeWalker$Event, attrs)},
	{"ioe", "Ljava/io/IOException;", nullptr, $PRIVATE | $FINAL, $field(FileTreeWalker$Event, ioe)},
	{}
};

$MethodInfo _FileTreeWalker$Event_MethodInfo_[] = {
	{"<init>", "(Ljava/nio/file/FileTreeWalker$EventType;Ljava/nio/file/Path;Ljava/nio/file/attribute/BasicFileAttributes;Ljava/io/IOException;)V", nullptr, $PRIVATE, $method(static_cast<void(FileTreeWalker$Event::*)($FileTreeWalker$EventType*,$Path*,$BasicFileAttributes*,$IOException*)>(&FileTreeWalker$Event::init$))},
	{"<init>", "(Ljava/nio/file/FileTreeWalker$EventType;Ljava/nio/file/Path;Ljava/nio/file/attribute/BasicFileAttributes;)V", nullptr, 0, $method(static_cast<void(FileTreeWalker$Event::*)($FileTreeWalker$EventType*,$Path*,$BasicFileAttributes*)>(&FileTreeWalker$Event::init$))},
	{"<init>", "(Ljava/nio/file/FileTreeWalker$EventType;Ljava/nio/file/Path;Ljava/io/IOException;)V", nullptr, 0, $method(static_cast<void(FileTreeWalker$Event::*)($FileTreeWalker$EventType*,$Path*,$IOException*)>(&FileTreeWalker$Event::init$))},
	{"attributes", "()Ljava/nio/file/attribute/BasicFileAttributes;", nullptr, 0},
	{"file", "()Ljava/nio/file/Path;", nullptr, 0},
	{"ioeException", "()Ljava/io/IOException;", nullptr, 0},
	{"type", "()Ljava/nio/file/FileTreeWalker$EventType;", nullptr, 0},
	{}
};

$InnerClassInfo _FileTreeWalker$Event_InnerClassesInfo_[] = {
	{"java.nio.file.FileTreeWalker$Event", "java.nio.file.FileTreeWalker", "Event", $STATIC},
	{}
};

$ClassInfo _FileTreeWalker$Event_ClassInfo_ = {
	$ACC_SUPER,
	"java.nio.file.FileTreeWalker$Event",
	"java.lang.Object",
	nullptr,
	_FileTreeWalker$Event_FieldInfo_,
	_FileTreeWalker$Event_MethodInfo_,
	nullptr,
	nullptr,
	_FileTreeWalker$Event_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.nio.file.FileTreeWalker"
};

$Object* allocate$FileTreeWalker$Event($Class* clazz) {
	return $of($alloc(FileTreeWalker$Event));
}

void FileTreeWalker$Event::init$($FileTreeWalker$EventType* type, $Path* file, $BasicFileAttributes* attrs, $IOException* ioe) {
	$set(this, type$, type);
	$set(this, file$, file);
	$set(this, attrs, attrs);
	$set(this, ioe, ioe);
}

void FileTreeWalker$Event::init$($FileTreeWalker$EventType* type, $Path* file, $BasicFileAttributes* attrs) {
	FileTreeWalker$Event::init$(type, file, attrs, nullptr);
}

void FileTreeWalker$Event::init$($FileTreeWalker$EventType* type, $Path* file, $IOException* ioe) {
	FileTreeWalker$Event::init$(type, file, nullptr, ioe);
}

$FileTreeWalker$EventType* FileTreeWalker$Event::type() {
	return this->type$;
}

$Path* FileTreeWalker$Event::file() {
	return this->file$;
}

$BasicFileAttributes* FileTreeWalker$Event::attributes() {
	return this->attrs;
}

$IOException* FileTreeWalker$Event::ioeException() {
	return this->ioe;
}

FileTreeWalker$Event::FileTreeWalker$Event() {
}

$Class* FileTreeWalker$Event::load$($String* name, bool initialize) {
	$loadClass(FileTreeWalker$Event, name, initialize, &_FileTreeWalker$Event_ClassInfo_, allocate$FileTreeWalker$Event);
	return class$;
}

$Class* FileTreeWalker$Event::class$ = nullptr;

		} // file
	} // nio
} // java